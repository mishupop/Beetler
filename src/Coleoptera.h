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

double getLatitude() const;


void setLongitude(double longitude);

double getLongitude() const;


void setTribe(std::string tribe);

std::string getTribe() const;


void setGenus(std::string genus);

std::string getGenus () const;


void setSpecies(std::string species);

std::string getSpecies()const;


void setSpecimens(int specimens);

int getSpecimens() const;


void setCollected(bool collected);

bool getCollected() const;

void setDate(std::string date);

std::string getDate() const;


private:
double m_latitude, m_longitude;
std::string m_tribe, m_genus, m_species, m_date;
int m_specimens;
bool m_collected;

};

#endif