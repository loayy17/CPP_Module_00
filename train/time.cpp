#include <ctime>
#include <iostream>
#include <iomanip>

int main(){

    struct tm	*timeinfo;

	std::time_t now_time = std::time(NULL);
	timeinfo = std::localtime(&now_time);
    int year = timeinfo->tm_year + 1900;
    int month = timeinfo->tm_mon + 1;
    int day = timeinfo->tm_mday;
    int hour = timeinfo->tm_hour;
    int minute = timeinfo->tm_min;
    int second = timeinfo->tm_sec;
    std::cout << std::put_time(timeinfo, "[%Y%m%d_%H%M%S] ") << std::endl;
    std::cout << year << std::endl;
    std::cout << year << std::endl;
    std::cout << month << std::endl;
    std::cout << day << std::endl;
    std::cout << hour << std::endl;
    std::cout << minute << std::endl;
    std::cout << second << std::endl;

}