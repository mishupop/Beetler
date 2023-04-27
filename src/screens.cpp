#include "screens.h"



Coleoptera* addRecord()
{
    std::string f_family, f_subfamily, f_genus, f_species, f_date;
    int f_specimens;
    bool f_collected;
    double f_lat, f_long;
    
    int choose_class;

    std::cout<<"Choose family: \n";
    std::cout<<"No family level ID- 0 \n";    
    std::cout<<"Scolytinae        - 1 \n";
    std::cout<<"Cetoniinae        - 2 \n";
    std::cout<<"Curculionidae     - 3 \n";
    std::cout<<"Chrysomelidae     - 4 \n";
    std::cout<<"Buprestidae       - 5 \n";
    std::cout<<"Cerambycidae      - 6 \n";
    std::cout<<"Meloidae          - 7 \n";
    std::cout<<"Cleridae          - 8 \n";
    std::cout<<"Anthribidae       - 9 \n";
    std::cout<<"Scarabaeidae      -10 \n";
    std::cin>>choose_class;
    Coleoptera* beetle=nullptr;

    switch (choose_class)
    {
        case 0:
        beetle = new Coleoptera();
        break;
        case 1:
        beetle = new Scolytinae();
        break;
        case 2:
        beetle = new Cetoniinae();
        break;
        case 3:
        beetle = new Curculionidae();
        break;
        case 4:
        beetle = new Chrysomelidae();
        break;
        case 5:
        beetle = new Buprestidae();
        break;
        case 6:
        beetle = new Cerambycidae();
        break;
        case 7:
        beetle = new Meloidae();
        break;
        case 8:
        beetle = new Cleridae();
        break;
        case 9:
        beetle = new Anthribidae();
        break;
        case 10:
        beetle = new Scarabaeidae();
        break;
        default:
            std::cerr << "Invalid choice: " << choose_class << std::endl;
            return nullptr;
    }

    std::cout<<"Genus: ";
    std::cin>>f_genus;
    std::cout<<"Species: ";
    std::cin>>f_species;
    std::cout<<"No. of specimens: ";
    std::cin>>f_specimens;
    std::cout<<"Is it collected?: ";
    std::cin>>f_collected;
    std::cout<<"Record date: ";
    std::cin>>f_date;
    std::cout<<"Latitude: ";
    std::cin>>f_lat;
    std::cout<<"Longitude: ";
    std::cin>>f_long;

    beetle -> setGenus(f_genus);
    beetle -> setSpecies(f_species);
    beetle -> setDate(f_date);
    beetle -> setLatitude(f_lat);
    beetle -> setLongitude(f_long);
    beetle -> setCollected(f_collected);
    beetle -> setSpecimens(f_specimens);


return beetle;

}

