#ifndef MELOIDAE_H
#define MELOIDAE_H

#pragma once
#include "Coleoptera.h"
class Meloidae: public Coleoptera
{
public:
    Meloidae();
    ~Meloidae();

    void setLatitude(double latitude);

double getLatitude();


void setLongitude(double longitude);

double getLongitude();


void setTribe(std::string tribe);

std::string getTribe();


void setGenus(std::string genus);

std::string getGenus();


void setSpecies(std::string species);

std::string getSpecies();


void setSpecimens(int specimens);

int getSpecimens();


void setCollected(bool collected);

bool getCollected();

private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species;
int m_specimens;
bool m_collected;
};

#endif