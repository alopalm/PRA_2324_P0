#include "BrazoRobotico.h"



BrazoRobotico::BrazoRobotico(double x, double y, double z,bool sujeto){
        this->x = x;
        this->y = y;
        this->z = z;
        this->sujeto = sujeto;
}
    double BrazoRobotico::getx(){
            return x;
    }
    double BrazoRobotico::gety(){
            return y;
    }
    double BrazoRobotico::getz(){
            return z;
    }
    bool BrazoRobotico::haysujeto(){
            return sujeto;
    }
    void BrazoRobotico::coger(){
            sujeto=true;
    }
    void BrazoRobotico::soltar(){
            sujeto=false;
    }
    void BrazoRobotico::mover(double x1, double y1, double z1){
            x += x1;
            y += y1;
            z += z1;
    
