/*===============================================================================================

    Copyright (c) 2013 by Renesas Electronics Europe GmbH, a company of the Renesas Electronics
    Corporation. All rights reserved.

  ===============================================================================================

    Warranty Disclaimer

    Because the Product(s) is licensed free of charge, there is no warranty of any kind
    whatsoever and expressly disclaimed and excluded by Renesas, either expressed or implied,
    including but not limited to those for non-infringement of intellectual property,
    merchantability and/or fitness for the particular purpose.
    Renesas shall not have any obligation to maintain, service or provide bug fixes for the
    supplied Product(s) and/or the Application.

    Each User is solely responsible for determining the appropriateness of using the Product(s)
    and assumes all risks associated with its exercise of rights under this Agreement, including,
    but not limited to the risks and costs of program errors, compliance with applicable laws,
    damage to or loss of data, programs or equipment, and unavailability or interruption of
    operations.

    Limitation of Liability

    In no event shall Renesas be liable to the User for any incidental, consequential, indirect,
    or punitive damage (including but not limited to lost profits) regardless of whether such
    liability is based on breach of contract, tort, strict liability, breach of warranties,
    failure of essential purpose or otherwise and even if advised of the possibility of such
    damages. Renesas shall not be liable for any services or products provided by third party
    vendors, developers or consultants identified or referred to the User by Renesas in
    connection with the Product(s) and/or the Application.

  ===============================================================================================*/

#include <device.h>

//--------------------------------------------------------------------------
// defines
//--------------------------------------------------------------------------

//--------------------------------------------------------------------------
// variables
//--------------------------------------------------------------------------

extern long __ghsbegin_bss[];
extern long __ghsend_bss[];
extern long __ghsbegin_slbss[];
extern long __ghsend_slbss[];
extern long __ghsbegin_sldata[];
extern long __ghsend_sldata[];
extern long __ghsbegin_slsync[];
extern long __ghsend_slsync[];
extern long __ghsbegin_stack[];
extern long __ghsend_stack[];

#pragma ghs startdata            // locate to GRAM
#pragma ghs section bss=".slsync"    // to section ".slsync"
extern volatile unsigned int    ThreadLocked;        // for mutual exclusion
extern volatile unsigned int    PE_Started;        // for mutual exclusion
#pragma ghs section            //
#pragma ghs enddata            // locate default

/*
 * This section is basically defined in GHS startup and system library
 * and contains exactly 1 variable. Since the RH850 offers the 32 MEV registers.
 * One (MEV31) is taken as the synchronization flag. With each RESET, it
 * is automatically cleared and must be set to 1 if the initialization of the
 * shared components is done by core1 (PE1).
 */
// #pragma ghs section data=".multicore_init"
// int __ghs_multicore_init_flag = 0;
// #pragma ghs section data=default


// void __spinLockRW( PVOID pMEVREG);
// void __spinUnlockRW( PVOID pMEVREG);

int swreset0( int try)
{
    // if( GetPEID() == PE1)
    // {
        do
        {
            __SNOOZE();
        } while( try--);
    // }

    return -1;
}

/*
 * Called first, directly after RESET and before _start() is called
 * Be aware of following restrictions:
 *   1. Use ONLY variables of 32-bit size (int, long)
 *   2. Do not read from any memory, before it has been written to by 32-bit
 *   3. Minimize usage of local variables
 *   4. Initialized memory is NOT available at this point
 */
void __lowinit( void)
{
    /* PE2 stops from continuation, if PE1 did not finish the
     * initialization of shared memory area.
     */
    // if( GetPEID() == PE2)
    // {
    //     while( __ghs_multicore_init_flag == 0)  __SNOOZE();
    // }
#ifdef HAS_CLKINIT
    else
        CLKINIT();  /* inlined setup in device.h */
#endif
}


#ifndef P1xC
/*
 * This function is called directly after _start(), before runtime
 * initialization takes place.
 */
void __ghs_board_memory_init( void)
{
    int        i;

    /*
     * Delay PE2
     * and make sure PE2 is waiting for some time
     */

    // if( GetPEID() == PE2)
    // {
    //     for( i=0; i<10000; i++) {
    //         __SNOOZE();            /* wait a while */
    //     }
    // }

    /*
     * Only core PE1 clears global, shared memory.No data initialization
     * takes place in shared section, ie. initialized data is NOT
     * allowed. All shared variables are located in global memory.
     */
    // if( GetPEID() == PE1)
    // {
        long *__p= __ghsbegin_bss;

        /* Clear shared bss section */
        while( __p <= __ghsend_bss)
            *__p++= 0UL;

        /* Clear shared slbss (secondary, large bss) section */
        __p= __ghsbegin_slbss;
        while( __p <= __ghsend_slbss)
            *__p++= 0UL;

        /* Clear shared synchronization section */
        __p= __ghsbegin_slsync;
        while( __p <= __ghsend_slsync)
            *__p++= 0UL;

        /* Clear shared data section, if exists */
        __p= __ghsbegin_sldata;
        while( __p <= __ghsend_sldata)
            *__p++= 0UL;
    // }
    // if( GetPEID() == PE2)
    //     __SNOOZE();
}
#endif

/*
 * Once PE1 finished its initialization part, PE2 may continue to
 * initialize the workspeace.
 */
void __ghs_board_devices_init(void)
{
    /*
     * If both cores are finished with the runtime initialization,
     * the MEV32 register contains PE1|PE2 (3)
     */
    // __ghs_multicore_init_flag |=  GetPEID();
}
