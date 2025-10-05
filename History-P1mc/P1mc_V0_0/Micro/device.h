//============================================================================
// PROJECT  :  Example project
//============================================================================
//                           C O P Y R I G H T
//============================================================================
// Copyright (c) 2016 by Renesas Electronics  GmbH. All rights reserved.
// Arcadiastr.10
// D-40472 Duesseldorf
// Germany
//============================================================================
//
// Warranty Disclaimer                                                      
//                                                                           
// Because the Product(s) is licensed free of charge, there is no warranty   
// of any kind whatsoever and expressly disclaimed and excluded by Renesas,  
// either expressed or implied, including but not limited to those for       
// non-infringement of intellectual property, merchantability and/or         
// fitness for the particular purpose.                                       
// Renesas shall not have any obligation to maintain, service or provide bug 
// fixes for the supplied Product(s) and/or the Application.                 
//                                                                           
// Each User is solely responsible for determining the appropriateness of    
// using the Product(s) and assumes all risks associated with its exercise   
// of rights under this Agreement, including, but not limited to the risks   
// and costs of program errors, compliance with applicable laws, damage to   
// or loss of data, programs or equipment, and unavailability or             
// interruption of operations.                                               
//                                                                           
// Limitation of Liability                                                   
//                                                                           
// In no event shall Renesas be liable to the User for any incidental,       
// consequential, indirect, or punitive damage (including but not limited    
// to lost profits) regardless of whether such liability is based on breach  
// of contract, tort, strict liability, breach of warranties, failure of     
// essential purpose or otherwise and even if advised of the possibility of  
// such damages. Renesas shall not be liable for any services or products    
// provided by third party vendors, developers or consultants identified or  
// referred to the User by Renesas in connection with the Product(s) and/or  
// the Application.                                                          
//                                                                           
//============================================================================
//
// Device specific main header file to be included in all source files.
//
//============================================================================

#ifndef   DEVICE_H
#define   DEVICE_H


#ifdef __ghs
 #if (__GHS_VERSION_NUMBER > 201517)
 /* Supprees warnings about C99 specific unneccessary ";" at end of macro line */
 #pragma ghs nowarning 381
 #endif
/* Supprees warnings about double typedefs (same type only!) */
#pragma ghs nowarning 301
#endif


//============================================================================
// Includes
//============================================================================
#include "v800_ghs.h"
#include "dr7f701373.dvf.h"
#include "dr7f701373_irq.h"
#include "io_macros_v2.h"

//============================================================================
// Defines
//============================================================================
#define protected_write(preg,reg,value)   preg=0xa5;\
                                          reg=value;\
                                          reg=~value;\
                                          reg=value;

#define SINGLE_CORE
#undef  MULTI_CORE
   

#endif  /* DEVICE_H */
