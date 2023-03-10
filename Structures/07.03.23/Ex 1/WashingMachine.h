#ifndef WASHING_MACHINE_H
#define WASHING_MACHINE_H

#include <string>
#include <iostream>
using namespace std;

struct WashingMachine
{
private:
    void performWash();

public:
    string company;
    string color;
    float width;
    float length;
    float height;
    float power;
    int spin_speed;
    int heating_temp;

    void start();
    void print();
    void setCompany(string newCompany);
    void setPower(float newPower);
    void setSpinSpeed(int newSpinSpeed);
    void setHeatingTemp(int newHeatingTemp);

};

#endif