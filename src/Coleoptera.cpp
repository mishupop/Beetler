#include "Coleoptera.h"

Coleoptera::Coleoptera()
{
std::cout<<"beetle created \n";
}

Coleoptera::~Coleoptera()
{
std::cout<<"beetle deleted \n";
}

void Coleoptera::setLatitude(double latitude)
{
    m_latitude=latitude;
}

double Coleoptera::getLatitude()
{
    return m_latitude;
}

void Coleoptera::setLongitude(double longitude)
{
    m_longitude=longitude;
}

double Coleoptera::getLongitude()
{
    return m_longitude;
}

void Coleoptera::setTribe(std::string tribe)
{
    m_tribe=tribe;
}

std::string Coleoptera::getTribe()
{
    return m_tribe;
}

void Coleoptera::setGenus(std::string genus)
{
    m_genus=genus;
}

std::string Coleoptera::getGenus()
{
    return m_genus;
}

void Coleoptera::setSpecies(std::string species)
{
    m_species=species;
}

std::string Coleoptera::getSpecies()
{
    return m_species;
}

void Coleoptera::setSpecimens(int specimens)
{
    m_specimens=specimens;
}

int Coleoptera::getSpecimens()
{
    return m_specimens;
}

void Coleoptera::setCollected(bool collected)
{
    m_collected=collected;
}

bool Coleoptera::getCollected()
{
    return m_collected;
}

void Coleoptera::setDate(std::string date)
{
    m_date=date;
}

std::string Coleoptera::getDate()
{
    return m_date;
}