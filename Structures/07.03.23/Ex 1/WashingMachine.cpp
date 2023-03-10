#include <iostream>
#include "WashingMachine.h"


void WashingMachine::performWash() {
    cout << "Performing the wash cycle..." << endl;
}

void WashingMachine::start() {
    cout << "Starting the washing machine..." << endl;
    performWash();
    cout << endl;
}

void WashingMachine::setCompany(string newCompany) {
    company = newCompany;
}

void WashingMachine::setPower(float newPower) {
    power = newPower;
}

void WashingMachine::setSpinSpeed(int newSpinSpeed) {
    spin_speed = newSpinSpeed;
}

void WashingMachine::setHeatingTemp(int newHeatingTemp) {
    heating_temp = newHeatingTemp;
}


void WashingMachine::print() {
    cout << "Washing machine properties:\n";
    cout << "Company: " << company << endl;
    cout << "Color: " << color << endl;
    cout << "Width: " << width << "cm" << endl;
    cout << "Length: " << length << "cm" << endl;
    cout << "Height: " << height << "cm" << endl;
    cout << "Power: " << power << "W" << endl;
    cout << "Spin Speed: " << spin_speed << "rpm" << endl;
    cout << "Heating Temperature: " << heating_temp << "C" << endl;
}