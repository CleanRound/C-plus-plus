#include "WashingMachine.h"

int main() {
    WashingMachine my_washer = {
        "Samsung",
        "White",
        60.0,
        60.0,
        85.0,
        1000.0,
        1200,
        60
    };
    my_washer.start();
    my_washer.setCompany("LG");
    my_washer.setPower(1500.0);
    my_washer.setSpinSpeed(1400);
    my_washer.setHeatingTemp(70);
    my_washer.print();

    return 0;
}