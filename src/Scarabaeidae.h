#ifndef SCARABAEIDAE_H
#define SCARABAEIDAE_H

#pragma once
#include "Coleoptera.h"
class Scarabaeidae: public Coleoptera
{
public:
    Scarabaeidae();
   virtual ~Scarabaeidae();

   

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif