//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
   Person person;
   person.setFirstName("Rony");
   person.setLastName("Chinchilla");
   person.setDocumentId(402440766);
   IPaymentProcess* paymentProcess = new BankTransferSender();
   person.setIPaymentProcess(paymentProcess);

    EXPECT_EQ(person.purchase(), "Sending the money by transference");

    IPaymentProcess* paymentProcess2 = new CashSender();
    person.setIPaymentProcess(paymentProcess2);

    EXPECT_EQ(person.purchase(), "Give the money in the hands");

    IPaymentProcess* paymentProcess3 = new CheckSender();
    person.setIPaymentProcess(paymentProcess3);

    EXPECT_EQ(person.purchase(), "Sending the check with the money");
}
