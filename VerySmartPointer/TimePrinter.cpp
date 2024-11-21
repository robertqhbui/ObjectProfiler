#include <string>
#include "TimePrinter.h"
#include <chrono>
#include <iomanip>
#include <sstream>



std::string TimePrinter()
{
	std::stringstream ss;

	std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	ss << std::ctime(&currentTime);
	return ss.str();
}