//
// Created by Pc on 25/8/2020.
//
#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"
TEST(CashSenderTestSuite, VerifySendPaymentMethod)
{
    CashSender cashSender;

    EXPECT_EQ(cashSender.sendPayment(),"Give the money in the hands");
}
