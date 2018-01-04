/**
 * @header Person.h
 *
 * @brief This is the header file of Person.
 *
 * @author jmrs83@gmail.com 2018
 *
 * */

#include "Person.h"

Person::Person() {

}

Person::Person(const string &firstName, const string &lastName, int age, const string &address, const string &city,
               unsigned int phoneNumber) : _firstName(firstName), _lastName(lastName), _age(age), _address(address),
                                           _city(city), _phoneNumber(phoneNumber) {

}

Person::~Person() {

}

const string &Person::getFirstName() const {
    return _firstName;
}

void Person::setFirstName(const string &firstName) {
    Person::_firstName = firstName;
}

const string &Person::getLastName() const {
    return _lastName;
}

void Person::setLastName(const string &lastName) {
    Person::_lastName = lastName;
}

int Person::getAge() const {
    return _age;
}

void Person::setAge(int age) {
    Person::_age = age;
}

const string &Person::getAddress() const {
    return _address;
}

void Person::setAddress(const string &address) {
    Person::_address = address;
}

const string &Person::getCity() const {
    return _city;
}

void Person::setCity(const string &city) {
    Person::_city = city;
}

unsigned int Person::getPhoneNumber() const {
    return _phoneNumber;
}

void Person::setPhoneNumber(unsigned int phoneNumber) {

    Person::_phoneNumber = phoneNumber;

}
