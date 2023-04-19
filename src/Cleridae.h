#ifndef CLERIDAE_H
#define CLERIDAE_H

#pragma once
#include "Coleoptera.h"
class Cleridae: public Coleoptera
{
public:
    Cleridae();
    ~Cleridae();



private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif