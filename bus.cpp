#include "bus.h"
#include <iostream>

//bus.h library ma declare gareko class ko constructor ra method ko lagi definition lekhne

//defining constructor
Bus::Bus(const std::string& yat, const std::string& start, const std::string& end, const std::vector<std::string>& routes)
: yatayat(yat), start_point(start), end_point(end), intermediate_destinations(routes){}


//defining method to display data
void Bus::displayInfo() const {
  std::cout << "Yatayat: " << yatayat << "\nFrom: " << start_point << "\nTo: " << end_point << "\nIntermediate Destinations: ";
  for(size_t i = 0; i< intermediate_destinations.size(); ++i){
    std::cout<< intermediate_destinations[i];
    if( i < intermediate_destinations.size() -1){
      std::cout << ", ";
    }
  }
  std::cout << std:: endl;
}
