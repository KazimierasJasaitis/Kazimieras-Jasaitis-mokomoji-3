#ifndef LOCATION_H
#define LOCATION_H
#include <string>

class Location{
private:
    std::string street;
    int house;
    std::string notes;
    int id;

public:
    Location();
    ~Location();
    std::string loc_to_string();
    void setStreet(std::string street);
    void setHouse(int house);
    void setNotes(std::string notes);
    int getId();

};

#endif // LOCATION_H
