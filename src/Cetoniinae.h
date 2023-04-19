#ifndef CETONIINAE_H
#define CETONIINAE_H

#pragma once
#include "Scarabaeidae.h"
class Cetoniinae: public Scarabaeidae
{
public:
    Cetoniinae();
    ~Cetoniinae();

   

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif