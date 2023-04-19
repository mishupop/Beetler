#ifndef BUPRESTIDAE_H
#define BUPRESTIDAE_H

#pragma once
#include "Coleoptera.h"
class Buprestidae: public Coleoptera
{
public:
    Buprestidae();
    ~Buprestidae();

   

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif