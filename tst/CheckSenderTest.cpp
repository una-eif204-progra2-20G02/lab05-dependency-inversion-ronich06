//
// Created by Pc on 25/8/2020.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"
TEST(CheckSenderTestSuite, VerifySendPaymentMethod)
{
    CheckSender checkSender;

    EXPECT_EQ(checkSender.sendPayment(),"Sending the check with the money");
}