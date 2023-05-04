#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>
# include <iomanip>


class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType() const;
        void setType(std::string type);
    private:
        std::string _type;
};


#endif