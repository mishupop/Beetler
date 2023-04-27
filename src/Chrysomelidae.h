#ifndef CHRYSOMELIDAE_H
#define CHRYSOMELIDAE_H

#pragma once
#include "Coleoptera.h"
class Chrysomelidae: public Coleoptera
{
public:
    Chrysomelidae();
    ~Chrysomelidae();



private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species, m_date;
int m_specimens;
bool m_collected;
};

#endif