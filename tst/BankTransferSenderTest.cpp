//
// Created by Pc on 25/8/2020.
//
#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"
TEST(BanksTransferSenderTestSuite, VerifySendPaymentMethod)
{
    BankTransferSender bankTransferSender;

    EXPECT_EQ(bankTransferSender.sendPayment(),"Sending the money by transference");
}
