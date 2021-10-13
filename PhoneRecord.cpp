//
// Created by kvitadmin on 28.09.2021.
//

#include "PhoneRecord.h"

#include <utility>

void PhoneRecord::setName(std::string contactName) {
    name = std::move(contactName);
}

void PhoneRecord::setNumber(std::string contactNumber){
    number = std::move(contactNumber);
}

std::string PhoneRecord::getName() {
    return name;
}

std::string PhoneRecord::getNumber() {
    return number;
}