#ifndef ANTHRIBIDAE_H
#define ANTHRIBIDAE_H

#pragma once
#include "Coleoptera.h"
class Anthribidae: public Coleoptera
{
public:
    Anthribidae();
    ~Anthribidae();


private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif