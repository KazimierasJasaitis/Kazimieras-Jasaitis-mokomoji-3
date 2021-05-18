#include <iostream>
#include <string>
#include "Location.h"

using namespace std;




int main()
{
    Location loc , loc2 , loc3 ;
    loc.setStreet("Kieciu");
    loc.setHouse(4);
    loc.setNotes("uz sankryzos");
    cout << loc.loc_to_string() << endl;

    loc2.setStreet("Baiku");
    loc2.setHouse(14);
    loc2.setNotes("Klaipeda");
    cout << loc2.loc_to_string() << endl;

    loc3.setStreet("Nemuno");
    loc3.setHouse(78);
    loc3.setNotes("Antakalnis");
    cout << loc3.loc_to_string() << endl;
}

