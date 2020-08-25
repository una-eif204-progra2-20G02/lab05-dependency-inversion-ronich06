//
// Created by Maikol Guzman on 8/20/20.
//

#include "Person.h"

Person::Person() {}

Person::Person(const std::string &firstName, const std::string &lastName, int documentId, IPaymentProcess* iPaymentProcess1) : firstName(firstName),
                                                                                            lastName(lastName),
                                                                                            documentId(documentId)
                                                                                            {
    iPaymentProcess = iPaymentProcess1;
                                                                                            }

const std::string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentId() const {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    Person::documentId = documentId;
}

std::string Person::toString() const {
    return getFirstName() + " " + getLastName() + "\nDoc Id: " + std::to_string(getDocumentId());
}

IPaymentProcess *Person::getIPaymentProcess() const {
    return iPaymentProcess;
}

void Person::setIPaymentProcess(IPaymentProcess *iPaymentProcess) {
    Person::iPaymentProcess = iPaymentProcess;
}

string Person::purchase()
{
  return iPaymentProcess->sendPayment();
}
