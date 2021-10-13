//
// Created by kvitadmin on 10.10.2021.
//

#include "Phone.h"

bool Phone::checkNumber(std::string& contactNumber){
    if(contactNumber[0] != '+' && contactNumber[1] != '7') return false;
    else if(contactNumber.size() != 12) return false;
    for(int i = 2; i < 12; ++i){
        if(contactNumber[i] < '0' || contactNumber[i] > '9') return false;
    }
    return true;
}

std::string Phone::getNumberByName(std::string& contactName){
    for(auto el : PhoneBook){
        if(contactName == el.getName()) return el.getNumber();
    }
    return "";
}

void Phone::addNewRecord(){
    PhoneRecord* tmpRecord = new PhoneRecord;
    std::string tmpString;

    std::cout << "Enter the new contact name: ";
    std::cin >> tmpString;
    tmpRecord->setName(tmpString);
    std::cout << "Enter the new contact number: ";
    std::cin >> tmpString;
    tmpRecord->setNumber(tmpString);
    PhoneBook.push_back(*tmpRecord);
    delete tmpRecord;
}

void Phone::callToNumber(){
    std::string str;
    std::cout << "Enter name or phone number: ";
    std::cin >> str;
    if(checkNumber(str)) std::cout << "CALL: " << str << std::endl;
    else{
        if(getNumberByName(str) == ""){
            std::cout << "Phone number not found!" << std::endl;
            return;
        }
        else {
            std::cout << "CALL: " << getNumberByName(str) << std::endl;
        }
    }
}

void Phone::sendMessage() {
    std::string str;
    std::cout << "Enter name or phone number: ";
    std::cin >> str;
    if(checkNumber(str)) sendMessage(str);
    else{
        if(getNumberByName(str) == ""){
            std::cout << "Phone number not found!" << std::endl;
            return;
        }
        else {
            std::string num = getNumberByName(str);
            sendMessage(num);
        }
    }
}

void Phone::sendMessage(std::string& contactNumber){
    std::string str;
    std::cout << "Enter message text: ";
    std::cin.ignore(32767,'\n');
    std::getline(std::cin, str);
    std::cout << "Sending message to number: " << contactNumber << std::endl;
    std::cout << "Message: " << std::endl;
    std::cout << str << std::endl;
}