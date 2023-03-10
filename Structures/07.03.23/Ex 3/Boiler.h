#ifndef BOILER_H
#define BOILER_H
#include <string>
#include <iostream>
using namespace std;

struct Boiler {
public:
    Boiler(string company = "ACME Boilers", string color = "White", int power = 1000, int volume = 10, int heatingTemperature = 80);

    string getCompany() const;
    string getColor() const;
    int getPower() const;
    int getVolume() const;
    int getHeatingTemperature() const;

    void setCompany(const string& company);
    void setColor(const string& color);
    void setPower(int power);
    void setVolume(int volume);
    void setHeatingTemperature(int heatingTemperature);

    void turnOn();
    void print();

private:
    string m_company;
    string m_color;
    int m_power;
    int m_volume;
    int m_heatingTemperature;

    bool checkSafety() const;
};

#endif
