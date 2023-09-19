#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x;
    double y;
    double z;
    bool sujeto;

public:
    BrazoRobotico(double x, double y, double z,bool sujeto);
    double getx();
    double gety();
    double getz();
    bool haysujeto();
    void coger();
    void soltar();
    void mover(double x1, double y1, double z1);
};

#endif
