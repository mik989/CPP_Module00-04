#include "phonebook.hpp"

// Contact

Contact::Contact (void)
{
    this->n = 0;
    return ;
}

Contact::~Contact (void)
{
    return ;
}

Phonebook::Phonebook (void)
{
    this->_index = 0;
    return ;
}

Phonebook::~Phonebook (void)
{
    return ;
}

void Contact::setContact(void)
{
    std::cout << "Digita il nome: ";
    std::cin >> this->_first_name;
    std::cout << "Digita il cognome: ";
    std::cin >> this->_last_name;
    std::cout << "Digita il nickname: ";
    std::cin >> this->_nickname;
    std::cout << "Digita il numero di telefono: ";
    std::cin >> this->_phone_number;
    isNumber(_phone_number);
    std::cout << "Digita il segreto piu' oscuro: ";
    std::cin >> this->_darkest_secret;
}

void Contact::isNumber(std::string field)
{   
    int i;
    for(i = 0; field[i] != '\0'; i++)
        if(!isdigit(field[i]))
            break;

    if (i != field.length())
    {
        std::cout << "Non è un numero!!!" << std::endl;
        std::cout << "Digita nuovamente il numero di telefono: ";
        std::cin >> this->_phone_number;
        isNumber(_phone_number);
    }
}

void Contact::printField(std::string field)
{
    std::string str;
    if (field.length() > 10)
    {
        str = field.substr(0, 9);
        str += '.';
    }
    else
        str = field;
    std::cout << std::right << std::setw(10) << str;
}

void Contact::preview(void)
{
    std::cout << "| " << std::right << std::setw(10) << n;
    std::cout << "| ";
    printField(_first_name);
    std::cout << "| ";
    printField(_last_name);
    std::cout << "| ";
    printField(_nickname);
    std::cout << "|" << std::endl;
}

void Contact::getContact(void)
{
    std::cout << "Nome: " << _first_name << std::endl;
    std::cout << "Cognome: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Telefono: " << _phone_number << std::endl;
    std::cout << "Oscuro Segreto: " << _darkest_secret << std::endl;
}

void Phonebook::addContact(void)
{
    int i = 0;
    std::cout << "ADD" << std::endl;
    if (_index < 8)
    {
        this->_contacts[_index].setContact();
        std::cout << "Contatto aggiunto." << std::endl;
        if (_index == 7)
            std::cout << "Phonebook pieno, il prossimo contatto sovrascrivera' il primo." << std::endl;
    }
    else if (_index == 8)
    {
        this->_index = 0;
        this->_contacts[_index].setContact();
        std::cout << "Phonebook pieno, il primo contatto e' stato sovrascritto." << std::endl;
    }
    i = _index;
    this->_contacts[_index].n = i + 1;
    this->_index++;
}

void Phonebook::searchContact(void)
{
    int j = 0;
    for(int i = 0; i < 8; i++)
    {
        if (_contacts[i].n == i + 1)
            _contacts[i].preview();
    }
    std::cout << "Digita l'ID del contatto che vuoi visualizzare: ";
    std::cin >> j;
    if (j > 0 && j < 9 && _contacts[j - 1].n == j)
            _contacts[j - 1].getContact();
    else
        std::cout << "ID non valido." << std::endl;
}

void Phonebook::exitPhonebook(void)
{
    std::cout << "EXIT" << std::endl;
    exit(0);
}

void Phonebook::selectCommand (void)
{
    while(1)
    {
        std::string command;
        std::cout << "Digita ADD per aggiungere un contatto, SEARCH per cercarlo o EXIT per uscire: ";
        std::cin >> command;
        if (command == "ADD")
            this->addContact();
        else if (command == "SEARCH")
            this->searchContact();
        else if (command == "EXIT")
            this->exitPhonebook();
        else
            std::cout << "Comando non Valido: " << std::endl;
    }
}