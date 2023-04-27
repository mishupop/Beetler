#ifndef MELOIDAE_H
#define MELOIDAE_H

#pragma once
#include "Coleoptera.h"
class Meloidae: public Coleoptera
{
public:
    Meloidae();
    ~Meloidae();

    

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species, m_date;
int m_specimens;
bool m_collected;
};

#endif