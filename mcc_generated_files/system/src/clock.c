/**
 * CLOCK Generated Driver Source File
 * 
 * @file clock.c
 * 
 * @ingroup clockdriver 
 * 
 * @brief This is the generated driver implementation file for the CLOCK.
 *
 * @version Driver Version 2.0.1
*/

/*
� [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include <xc.h>
#include "../clock.h"

void CLOCK_Initialize(void)
{
    // Set the CLOCK CONTROL module to the options selected in the user interface.
    // 
    OSCCON = 0x0;
    // HFOEN enabled; MFOEN disabled; LFOEN disabled; ADOEN disabled; 
    OSCEN = 0x40;
    // HFFRQ 32_MHz; 
    OSCFRQ = 0x5;
    // 
    OSCSTAT = 0x0;
    // TUN undefined; 
    OSCTUNE = 0x0;
}
/**
 End of File
*/