#include <iostream>
#include "counter.h"

void Counter::incr(){
     value++;
}
void Counter::decr(){
     value--;
}
void Counter::display_val(){
     std::cout<<value<<std::endl;
}
Counter::Counter(){
     value = 1;
}
Counter::Counter(int num){
     value = num;
}
void Counter::set_counter(){
     std::string choice = "";
     while(1){
       std::cout<<"Вы хотите указать начальное значение счётчика? Введите да или нет: ";
       std::cin>>choice;
       //std::cout<<choice<<std::endl;
       if(choice == "да"){
         int num;
         std::cout<<"Введите начальное значение счётчика: ";
         std::cin>>num;
         value = num;
         break;
       }else if(choice == "нет"){
         break;
       }else{
         std::cout<<"Пожалуйста, введите 'да' или 'нет'\n";
       }
     }
}
bool Counter::work(){
     bool retval = true;
     char command = ' ';
     std::string input;
     std::cout<<"Введите команду ('+', '-', '=' или 'x'): ";
     std::cin >> input;
     //std::cin>>command;
     command = input[0];
     //fflush(stdin); //FLUSH BUFFER IF STH ELSE OTHER THAN SINGLE 1-BYTE CHAR IS ENTERED
     switch(command){
       case '+': incr();
       break;
       case '-': decr();
       break;
       case '=': display_val();
       break;
       case 'x': retval = false;
       break;
       default: std::cout<<"Только '+', '-', '=' или 'x' (латинская буква)!\n";
       break;
     }
     return retval;
}
