//
// Created by kvitadmin on 10.10.2021.
//

#ifndef HOMEWORK26_4_2_PHONE_H
#define HOMEWORK26_4_2_PHONE_H
#include <vector>
#include "PhoneRecord.h"

class Phone {
    std::vector<PhoneRecord> PhoneBook;
    bool checkNumber(std::string& contactNumber);
    std::string getNumberByName(std::string& contactName);
    void sendMessage(std::string& contactNumber);
public:
    void addNewRecord();
    void callToNumber();
    void sendMessage();

};


#endif //HOMEWORK26_4_2_PHONE_H
