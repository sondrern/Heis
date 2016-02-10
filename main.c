#include <stdio.h>

#include "elev.h"

int main() {
    elev_init();
    
    
    elev_init();

    elev_set_motor_direction(DIRN_UP);

    elev_goto(3);


    printf("Press STOP button to stop elevator and exit program.\n");

    elev_set_motor_direction(DIRN_DOWN);
    
   // int floor=3;
/*
    while (1) {

int knapp=elev_get_button_signal(1,2);
if(knapp){
printf("%i\n", knapp);
}
// Change direction when we reach top/bottom floor
        if (elev_get_floor_sensor_signal() == N_FLOORS - 1) {
            elev_set_motor_direction(DIRN_DOWN);
        } else if (elev_get_floor_sensor_signal() == 0) {
            elev_set_motor_direction(DIRN_UP);
        }
 
        // Stop elevator and exit program if the stop button is pressed
        if (elev_get_stop_signal()) {
            elev_set_motor_direction(DIRN_STOP);
            return 0;
        }
    }

*/

elev_set_button_lamp(2,2,1);

//elev_set_button_lamp(2,2,1);

//elev_set_button_lamp(2,1,1);

elev_set_floor_indicator(3);



}

/*
        // Change direction when we reach top/bottom floor
        if (elev_get_floor_sensor_signal() == N_FLOORS - 1 && (elev_get_floor_sensor_signal()!=floor)) {
    floor=3;
            elev_set_motor_direction(DIRN_DOWN);
            printf("%d\n", floor);
        } else if (elev_get_floor_sensor_signal() == 0 && (elev_get_floor_sensor_signal()!=floor)) {
            floor=0;
            elev_set_motor_direction(DIRN_UP);
            printf("%d\n", floor);
        }
        else if (elev_get_floor_sensor_signal() == 1 && (elev_get_floor_sensor_signal()!=floor))  {
            floor=1;
            printf("%d\n", floor);
        }
else if (elev_get_floor_sensor_signal() == 2 && (elev_get_floor_sensor_signal()!=floor)) {
            floor=2;
            printf("%d\n", floor);
        }
        // Stop elevator and exit program if the stop button is pressed
        if (elev_get_stop_signal()) {
            elev_set_motor_direction(DIRN_STOP);
            return 0;
        }
    }
    */
