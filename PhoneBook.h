//
// Created by kvitadmin on 28.09.2021.
//

#ifndef HOMEWORK26_4_2_PHONEBOOK_H
#define HOMEWORK26_4_2_PHONEBOOK_H
#include <iostream>
#include <map>

class PhoneBook {
    std::map<int, std::string > records;

public:

    bool addRecord(std::string contactName, std::string contactNumber);
    int getRecordsQuantity();
};


#endif //HOMEWORK26_4_2_PHONEBOOK_H
