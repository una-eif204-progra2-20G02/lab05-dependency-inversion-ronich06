//
// Created by Pc on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_IPAYMENTPROCESS_H
#define MY_PROJECT_NAME_IPAYMENTPROCESS_H
#include <iostream>
using namespace std;
class IPaymentProcess
{
public:
    virtual string sendPayment() = 0;
};
#endif //MY_PROJECT_NAME_IPAYMENTPROCESS_H
