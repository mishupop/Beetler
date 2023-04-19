#ifndef CERAMBYCIDAE_H
#define CERAMBYCIDAE_H

#pragma once
#include "Coleoptera.h"
class Cerambycidae: public Coleoptera
{
public:
    Cerambycidae();
    ~Cerambycidae();

   

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif