#include<iostream>
#include "BrazoRobotico.h"


int main(){
        BrazoRobotico Brazo(0.0,0.0,0.0,false);
        Brazo.mover(40.0,27.0,15.0);
        Brazo.coger();
        return 0;
}
