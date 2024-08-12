#include <iostream>
#include "bus.h"


int main () {
  Bus b1(
    "RS yatayat",
    "Thankot",
    "Balkot",
    {
      "Kalanki",
          "Soaltemode",
          "Kalimati",
          "Teku",
          "Tripureshwor",
          "Thapthali",
          "Maitighar",
          "Babbarmahal",
          "Baneshwor",
          "Koteshwor"
    }
  );

  b1.displayInfo();
  return 0;
}
