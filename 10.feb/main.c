
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
	
#include <stdio.h>
 
#include "elev.h"
 
int main() {
    elev_init();
 
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
