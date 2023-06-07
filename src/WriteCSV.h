

#ifndef WRITECSV_H
#define WRITECSV_H

#include <vector>
#include "Coleoptera.h"

class WriteCSV {
public:
    void writeRecords(const std::vector<Coleoptera*>& beetles);

private:
    std::string getFileName(const Coleoptera* beetle);
};

#endif  // WRITECSV_H

