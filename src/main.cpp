// #include "Anthribidae.h"
// #include "Buprestidae.h"
// #include "Cerambycidae.h"
// #include "Cetoniinae.h"
// #include "Chrysomelidae.h"
// #include "Cleridae.h"
// #include "Meloidae.h"
// #include "Scolytinae.h"

#include "screens.h"



int main(int argc, char const *argv[])
{
    // Scolytinae scoly;
    // scoly.setGenus("Xylosandrus");
    // scoly.setSpecies(" germanus");

    Coleoptera* scoly=addRecord();

    std::cout<<scoly->getGenus()<<" "<<scoly->getSpecies()<<std::endl;

    delete scoly;
}
