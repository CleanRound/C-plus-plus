#include "Boiler.h"

Boiler::Boiler(string company, string color, int power, int volume, int heatingTemperature)
    : m_company(company), m_color(color), m_power(power), m_volume(volume), m_heatingTemperature(heatingTemperature)
{
}

string Boiler::getCompany() const
{
    return m_company;
}

string Boiler::getColor() const
{
    return m_color;
}

int Boiler::getPower() const
{
    return m_power;
}

int Boiler::getVolume() const
{
    return m_volume;
}

int Boiler::getHeatingTemperature() const
{
    return m_heatingTemperature;
}

void Boiler::setCompany(const string& company)
{
    m_company = company;
}

void Boiler::setColor(const string& color)
{
    m_color = color;
}

void Boiler::setPower(int power)
{
    m_power = power;
}

void Boiler::setVolume(int volume)
{
    m_volume = volume;
}

void Boiler::setHeatingTemperature(int heatingTemperature)
{
    m_heatingTemperature = heatingTemperature;
}

bool Boiler::checkSafety() const
{
    return true;
}

void Boiler::turnOn()
{
    if (checkSafety()) {
        cout << "Boiler turned on!" << endl;
    }
    else {
        cout << "Boiler could not be turned on due to safety concerns." << endl;
    }
}

void Boiler::print()
{
    cout << "Company: " << getCompany() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Power: " << getPower() << endl;
    cout << "Volume: " << getVolume() << endl;
    cout << "Heating Temperature: " << getHeatingTemperature() << endl;
}