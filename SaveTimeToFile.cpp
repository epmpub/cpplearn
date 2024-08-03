
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <cstring>
#include <chrono>
#include <iomanip>

using namespace std;
void writeTimeToFile(string path);

int main()
{
	writeTimeToFile("out.txt");
	return 0;
}

void writeTimeToFile(string path)
{
	std::ofstream file(path, std::ios::app);
	if (file.is_open())
	{
		std::ostream& output = file;
		auto now = std::chrono::system_clock::now();
		std::time_t time = std::chrono::system_clock::to_time_t(now);
		output << "Write to file. " << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S") << std::endl;
		file.close();
	}
	else
	{
		std::cerr << "unable to open file" << std::endl;
	}
}
