#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    public:
        Contact (void);
        ~Contact (void);
        void setContact(void);
        void getContact(void);
        void preview(void);
        void printField(std::string field);
        void isNumber(std::string field);
        int n;
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
};

class Phonebook
{
    public:
        Phonebook (void);
        ~Phonebook (void);
        void selectCommand (void);
        void addContact (void);
        void searchContact (void);
        void exitPhonebook (void);
    private:
        int _index;
        Contact _contacts[8];
};

#endif