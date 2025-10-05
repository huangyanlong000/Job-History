/****************************************************************************************
 * 
 * @brief : Copyright 2023 NXP
 * @brief : License: BSD 3-clause
 *          Redistribution and use in source and binary forms, with or without
            modification, are permitted provided that the following conditions are met:
            1. Redistributions of source code must retain the above copyright
            notice, this list of conditions and the following disclaimer.
            2. Redistributions in binary form must reproduce the above copyright
            notice, this list of conditions and the following disclaimer in the
            documentation and/or other materials provided with the distribution.
            3. Neither the name of the copyright holder nor the
            names of its contributors may be used to endorse or promote products
            derived from this software without specific prior written permission.

 * @brief : THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
            AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
            IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
            ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
            LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
            CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
            SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
            INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
            CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
            ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
            POSSIBILITY OF SUCH DAMAGE.

 * @brief : main implementation: use this 'C' sample to create your own application
 * 
 ****************************************************************************************/

/****************************************************************************************
 * @include : Add the head files at here
 * *************************************************************************************/
 #include "Mcu32k116.h"

int main(void) 
{

    /***********************************************************************************
     * @brief : to init the Operate Systerm 
     **********************************************************************************/

    /***********************************************************************************
     * @brief : to init the clock of the mcu 
     * @param : the parameter of the "Mcu_Config" is created by the configuration tool 
     *          of "Eb Tresos"
     **********************************************************************************/
    Mcu_Init(&Mcu_Config);

    for (;;) 
    {

    }

    return (0x00);
}
