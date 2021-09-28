//
// Created by kvitadmin on 28.09.2021.
//

#include "PhoneBook.h"

int PhoneBook::getRecordsQuantity() {
    return records.size();
}

bool PhoneBook::addRecord(std::string contactName, std::string contactNumber){
    if(contactNumber.find("+7") != 0) return false;
    else if(contactNumber.size() != 12) return false;
}