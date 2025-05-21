 /*
 * MAIN Application File
 * @file main.c
 * @defgroup main MAIN
 * @brief Application MAIN file to test the buzzer
*/

//----------------------------------------------------------
// INCLUDE FILES
//----------------------------------------------------------
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "junoke_song_commande.h"
#include "junoke_eye_commande.h"

//----------------------------------------------------------
// MAIN APPLICATION
//----------------------------------------------------------
int main(void)
{
    //----------------------------------------------------------
    // initialisation du microcontroleur
    SYSTEM_Initialize(); // NE PAS SUPPIRMER CETTE LIGNE DE CODE
    //----------------------------------------------------------
    // VOTRE CODE CI-DESSOUS
    // INSTRUCTIONS EXECUTEES UNE SEULE FOIS AU DEMARRAGE
    //----------------------------------------------------------
    int yeux; 
    while(1){
        //----------------------------------------------------------
        // VOTRE CODE CI-DESSOUS
        // INSTRUCTIONS EXECUTEES EN BOUCLE INDEFINIMENT
        //----------------------------------------------------------
        yeux=ultrason_distance();
        if (yeux >= 10)//SI C'EST PLUS PETIT QUE 10 CM 
        {
            buzzer_sing(SING_HAPPY);//LE BUZZER JOUE LA MUSIQUE HAPPY 
        }
        else//sinon
        {
            buzzer_sing(SING_SAD);//LE BUZZER JOUE LA MUSIQUE SAD 
        }
    }
}
//----------------------------------------------------------
// FIN DU CODE
//----------------------------------------------------------
