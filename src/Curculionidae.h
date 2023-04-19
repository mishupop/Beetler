#ifndef CURCULIONIDAE_H
#define CURCULIONIDAE_H

#pragma once
#include "Coleoptera.h"

class Curculionidae:public Coleoptera
{
public:
    Curculionidae();
   virtual ~Curculionidae();

   

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif