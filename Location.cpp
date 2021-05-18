#include "Location.h"
using namespace std;

Location::Location()
{
    static int cid = 1; //current id
    id = cid;
    cid++;
    //ctor
}

Location::~Location()
{
    //dtor
}

string Location::loc_to_string(){
return street + " " + to_string(house) + " " + notes + " " + to_string(id);
}

void Location::setStreet(string street){
Location::street = street;
}
void Location::setHouse(int house){
Location::house = house;
}
void Location::setNotes(string notes){
Location::notes = notes;
}

int Location::getId(){
return id;
}
