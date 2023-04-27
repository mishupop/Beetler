#ifndef COLEOPTERA_H
#define COLEOPTERA_H

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>



class Coleoptera
{
public:
    Coleoptera();
   virtual ~Coleoptera();

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

void setDate(std::string date);

std::string getDate();


private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species, m_date;
int m_specimens;
bool m_collected;

};

#endif