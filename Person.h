#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
    string phone;
    string address;
public:
    Person() = default;
    Person(string name , string phone , string address) : name(name) , phone(phone) , address(address) {      }
    virtual void display() = 0;
    void setName(string name)
    {
        this-> name = name;
    }
    string getName()
    {
        return name;
    }
    void setPhone(string phone)
    {
        this-> phone = phone;
    }
    string getPhone()
    {
        return phone;
    }
    void setAddress(string address)
    {
        this-> address = address;
    }
    string getAddress()
    {
        return address;
    }
    ~Person() = default;
};

#endif