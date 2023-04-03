#ifndef RAINFALL_H
#define RAINFALL_H

#include "LinkedList.h"
#include <string>

class Rainfall {
public:
    Rainfall();
    void addMonth(std::string month, double rainfall);
    void editMonth(std::string month, double rainfall);
    void printReport() const;
private:
    struct MonthData {
        std::string month;
        double rainfall;
        MonthData(std::string m, double r) : month(m), rainfall(r) {}
    };
    LinkedList<MonthData> months;
};

#endif
