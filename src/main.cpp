//
// Created by Maikol Guzman on 8/24/20.
//

#include <iostream>
#include "IPaymentProcess.h"
#include "Person.h"
#include "BankTransferSender.h"
#include "CashSender.h"
#include "CheckSender.h"
using namespace std;
int main()
{
   //Money by trensfer
    IPaymentProcess* paymentProcess = new BankTransferSender();
    Person person1("Rony","Chinchilla",402440766,paymentProcess);
    cout<<person1.toString()<<endl;
    cout<<person1.purchase()<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    //Money by cash
    IPaymentProcess* paymentProcess2 = new CashSender();
    Person person2("Adolfo","Avila",102445788,paymentProcess2);
    cout<<person2.toString()<<endl;
    cout<<person2.purchase()<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    //Money by check
    IPaymentProcess* paymentProcess3 = new CheckSender();
    Person person3("Jairo","Quinones",406550955,paymentProcess3);
    cout<<person3.toString()<<endl;
    cout<<person3.purchase()<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    //Dynamic objects deleted
    delete paymentProcess;
    delete paymentProcess2;
    delete paymentProcess3;

    return 0;
}