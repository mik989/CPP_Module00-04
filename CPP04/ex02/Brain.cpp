#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	ideas[0] = "Marameo";
	std::cout << "I have an idea:" <<ideas[0] << std::endl;
}
Brain::~Brain()
{
	
}