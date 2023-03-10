#ifndef IRON_H
#define IRON_H
#include <string>
#include <iostream>
using namespace std;

class Iron {
public:
    Iron(string company, string model, string color, int min_temp, int max_temp, bool has_steam, int power);
    string getCompany() const;
    string getModel() const;
    string getColor() const;
    int getMinTemp() const;
    int getMaxTemp() const;
    bool hasSteam() const;
    int getPower() const;
    void print();
private:
    string m_company;
    string m_model;
    string m_color;
    int m_min_temp;
    int m_max_temp;
    bool m_has_steam;
    int m_power;
};

#endif
