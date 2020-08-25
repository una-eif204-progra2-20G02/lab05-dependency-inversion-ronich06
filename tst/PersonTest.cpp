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

    EXPECT_EQ(person.purchase(paymentProcess), "Sending the money by transference");

    IPaymentProcess* paymentProcess2 = new CashSender();

    EXPECT_EQ(person.purchase(paymentProcess2), "Give the money in the hands");

    IPaymentProcess* paymentProcess3 = new CheckSender();

    EXPECT_EQ(person.purchase(paymentProcess3), "Sending the check with the money");
}
