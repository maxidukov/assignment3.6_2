#include <iostream>
#include "counter.h"

int main() {
  Counter my_counter;
  my_counter.set_counter();
  while(my_counter.work()){;}
  std::cout<<"До свидания!\n";

  return 0;
}
