#ifndef SCOLYTINAE_H
#define SCOLYTINAE_H

#pragma once
#include "Curculionidae.h"
class Scolytinae: public Curculionidae
{
public:
    Scolytinae();
    ~Scolytinae();

    

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species, m_date;
int m_specimens;
bool m_collected;
};

#endif