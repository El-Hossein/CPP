#include <iostream>
#include <fstream>
#include <sstream>

void ft_replace(const std::string &buffer, const std::string &s1, const std::string &s2, std::string filename) {
	size_t i = 0;

	std::ofstream myfile;
	myfile.open (filename + ".replace");
	while (i < buffer.length()) {
	   
		if (s1[0] && buffer.compare(i, s1.length(), s1) == 0) {
			myfile << s2;
			i += s1.length();
		} else {
			myfile << buffer[i];
			i++;
		}
	}
	myfile.close();
}

int main(int ac, char **argv)
{
	if(ac != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile(filename);
	if (!infile.is_open()) {
		std::cerr << "Unable to open file: " << filename << std::endl;
		return 1;
	}
	std::stringstream buffer;
	buffer << infile.rdbuf();
	if (infile.bad()) {
        std::cerr << "Error reading from file: " << filename << std::endl;
        return 1;
    }
	infile.close();
	ft_replace(buffer.str(), s1, s2, filename);
	return 0;
}


