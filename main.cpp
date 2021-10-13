#include <iostream>
#include "Phone.h"
int main() {
   Phone MyPhone;
   std::string command;
   do{
       std::cout << "Enter the command: " ;
       std::cin >> command;
       if(command == "add") MyPhone.addNewRecord();
       else if(command == "call") MyPhone.callToNumber();
       else if(command == "sms") MyPhone.sendMessage();
       else if(command == "exit") std::cout << "The phone is switching off...! " << std::endl;
       else std::cout << "Bad command! Try again!" << std::endl;
   }while(command != "exit");
    return 0;
}
