

#include "WriteCSV.h"
#include <fstream>
#include "screens.h"

void WriteCSV::writeRecords(const std::vector<Coleoptera*>& beetles) {
    for (const auto beetle : beetles) {
        std::string fileName = getFileName(beetle);
        std::ofstream file;

        // Open the file in append mode if it already exists, otherwise create a new file
        file.open(fileName, std::ios::app);

        if (!file.is_open()) {
            std::cerr << "Error opening file for writing: " << fileName << std::endl;
            continue; // Move on to the next record if file opening fails
        }

        file << beetle->getTribe() << ",";
        file << beetle->getGenus() << ",";
        file << beetle->getSpecies() << ",";
        file << beetle->getSpecimens() << ",";
        file << beetle->getCollected() << ",";
        file << beetle->getDate() << ",";
        file << beetle->getLatitude() << ",";
        file << beetle->getLongitude() << "\n";

        file.close(); // Close the file after writing
    }
}

std::string WriteCSV::getFileName(const Coleoptera* beetle) {
    std::string family;

    const std::type_info& type = typeid(*beetle);
    if (type == typeid(Scolytinae)) {
        family = "Scolytinae";
    } else if (type == typeid(Cetoniinae)) {
        family = "Cetoniinae";
    } else if (type == typeid(Curculionidae)) {
        family = "Curculionidae";
    } else if (type == typeid(Chrysomelidae)) {
        family = "Chrysomelidae";
    } else if (type == typeid(Buprestidae)) {
        family = "Buprestidae";
    } else if (type == typeid(Cerambycidae)) {
        family = "Cerambycidae";
    } else if (type == typeid(Meloidae)) {
        family = "Meloidae";
    } else if (type == typeid(Cleridae)) {
        family = "Cleridae";
    } else if (type == typeid(Anthribidae)) {
        family = "Anthribidae";
    } else if (type == typeid(Scarabaeidae)) {
        family = "Scarabaeidae";
    }
    
    // Add other cases for each derived class family...

    // If the family is not known, use a default filename
    if (family.empty()) {
        return "Coleoptera.csv";
    }

    return family + ".csv";
}