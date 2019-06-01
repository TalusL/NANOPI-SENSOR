#include "PCA9685.h"
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include "MotionSensor.h"

#define delay_ms(a) usleep(a*1000)

int main() {

//    PCA9685 *pca9685 = new PCA9685(0,0x40);
//    pca9685->setPWM(1,150);
//    int val = pca9685->getPWM(1);
//    std::cout << val <<std::endl;
    ms_open();
    do{
        ms_update();
        printf("yaw = %2.1f\tpitch = %2.1f\troll = %2.1f\ttemperature = %2.1f\tcompass = %2.1f, %2.1f, %2.1f\n",
               ypr[YAW], ypr[PITCH],
               ypr[ROLL],temp,compass[0],compass[1],compass[2]);
        delay_ms(5);
    }while(1);

    return 0;
}