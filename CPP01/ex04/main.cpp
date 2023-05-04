#include <iostream>
#include <fstream>
#include <string>

static void	replace(std::string file, std::string s1, std::string s2) 
{
	std::fstream	old_file;
	std::fstream	new_file;
	std::string		line;
	std::string		aux;
	size_t			find_value;

	old_file.open(file.c_str(), std::ios::in);
	new_file.open(std::string(file + ".replace").c_str(), std::ios::out);
	if (!old_file)
	{
		std::cout << "The input file could not be opened" << std::endl;
	} 
	else if (!new_file) 
	{
		std::cout << "The output file could not be opened" << std::endl;
	} 
	else 
	{
		while (getline(old_file, line)) 
		{
			int	last = 0;
			while ((find_value = line.find(s1, last)) != std::string::npos) 
			{
				aux = line.substr(find_value + s1.size());
				line.erase(find_value);
				line += s2 + aux;
				last = find_value + s2.size();
			}
			new_file << line;
			if (!old_file.eof())
				new_file << std::endl;
		}
	}
	old_file.close();
	new_file.close();
}

int main ()
{
    std::string s1;
    std::string s2;
    std::string filename;

    std::cout << "Insert filename: ";
    std::cin >> filename;
    std::cout << "Insert first string: ";
    std::cin >> s1;
    std::cout << "Insert second string: ";
    std::cin >> s2;

    replace(filename, s1, s2);
    return(0);
}