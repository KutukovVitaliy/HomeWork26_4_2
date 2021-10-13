//
// Created by kvitadmin on 28.09.2021.
//

#ifndef HOMEWORK26_4_2_PHONERECORD_H
#define HOMEWORK26_4_2_PHONERECORD_H
#include <iostream>


class PhoneRecord {
    std::string name;
    std::string number;

public:

    void setName(std::string contactName);
    void setNumber(std::string contactNumber);
    std::string getName();
    std::string getNumber();
};


#endif //HOMEWORK26_4_2_PHONERECORD_H
