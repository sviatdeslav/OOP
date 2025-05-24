#include <iostream>
#include "Malady.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Malady cor;
    cor.setNameOfMalady("Корь");
    cor.setTemperature(39);
    cor.setFirstСontagiousness(100);
    cor.setSkinSimptoms(1);
    cor.setRespiratorySimptoms(1);
    cor.setVaccine(1);
    cor.setInfectedInYear(1089);
    cor.setLethality(2);
    cor.visuality();
    cor.needOfIsolation();
    cor.countDeath();
    cor.print();
    cout << endl;
    Malady vetr;
    vetr.setNameOfMalady("Ветряная оспа");
    vetr.setTemperature(37.8);
    vetr.setFirstСontagiousness(75);
    vetr.setSkinSimptoms(1);
    vetr.setRespiratorySimptoms(0);
    vetr.setVaccine(1);
    vetr.setInfectedInYear(758000);
    vetr.setLethality(0.00016);
    vetr.visuality();
    vetr.needOfIsolation();
    vetr.countDeath();
    vetr.print();
    return 0;
}
