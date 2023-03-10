#include "Iron.h"

Iron::Iron(string company, string model, string color, int min_temp, int max_temp, bool has_steam, int power)
    : m_company(company), m_model(model), m_color(color), m_min_temp(min_temp), m_max_temp(max_temp), m_has_steam(has_steam), m_power(power)
{
}

string Iron::getCompany() const {
    return m_company;
}

string Iron::getModel() const {
    return m_model;
}

string Iron::getColor() const {
    return m_color;
}

int Iron::getMinTemp() const {
    return m_min_temp;
}

int Iron::getMaxTemp() const {
    return m_max_temp;
}

bool Iron::hasSteam() const {
    return m_has_steam;
}

int Iron::getPower() const {
    return m_power;
}

void Iron::print() {
    cout << "Company: " << getCompany() << std::endl;
    cout << "Model: " << getModel() << std::endl;
    cout << "Color: " << getColor() << std::endl;
    cout << "Min Temp: " << getMinTemp() << std::endl;
    cout << "Max Temp: " << getMaxTemp() << std::endl;
    cout << "Has Steam: " << (hasSteam() ? "Yes" : "No") << std::endl;
    cout << "Power: " << getPower() << std::endl;
}