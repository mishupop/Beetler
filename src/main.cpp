

#include "screens.h"
#include "WriteCSV.h"



int main() {
    std::vector<Coleoptera*> beetles;
    addMoreRecords(beetles);

    // Create an instance of the WriteCSV class
    WriteCSV writer;

    // Write the records to CSV files
    writer.writeRecords(beetles);

    // Cleanup: delete the beetle objects and clear the vector
    for (auto beetle : beetles) {
        delete beetle;
    }
    beetles.clear();

    return 0;
}
