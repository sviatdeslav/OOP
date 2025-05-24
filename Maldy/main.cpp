#include <iostream>
#include "Maladys_child.h"
#include "SuperMalady.h"
#include "Cataclysm.h"
#include "Eanimal.h"
#include <ctime>

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    Cataclysm tornado = Cataclysm();
    tornado.setName("Торнадо");
    tornado.powerAndCount();
    tornado.print();
    std::cout << std::endl;
    Cataclysm vulcano = Cataclysm("Извержение вулкана");
    vulcano.print();
    std::cout << std::endl;
    Cataclysm uragan = Cataclysm();
    uragan = tornado + vulcano;
    uragan.print();
    std::cout << std::endl;
    SuperMalady s594 = SuperMalady("S594, 'Немезида Пурпурная'", 100, 40.7, 1, 1, 0, 990000, 90, "Сфера", 1, 1, 1);
    s594.print();
    SuperMalady s595 = SuperMalady("S595, 'Беззубая черепаха'", 1, 36.6, 0, 0, 1, 900, 0.8, "Палочка", 0, 1, 0);
    s595.print();
    std::cout << std::endl;
    SuperMalady s595_1 = s594 & s595;
    s595_1.print();
    Bakteria plague = Bakteria("Чума", 100, 39.5, 1, 1, 1, 40000, 5, "Палочка", 0);
    plague.print();
    std::cout << std::endl;
    Bakteria red_plague = Bakteria("Красная чума", 100, 34.5, 0, 1, 1, 3000, 15, "Сфера", 0);
    red_plague.print();
    std::cout << std::endl;
    Bakteria t_plague = plague << red_plague;
    t_plague.print();
    Eanimal bobr = Eanimal("Саблезубый бобр", 2500, "Депресняк", 24, 36.6, 0, 0, 0, 500000, 0.9, 0, "Цунами");
    bobr.influense();
    bobr.print();
    std::cout << std::endl;
    --bobr;
    bobr.print();
    return 0;
}
