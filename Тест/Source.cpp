#include <iostream>
#include <fstream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
struct time_
{
    int hours;
    int minutes;
    int seconds;
};
struct info
{
    char number[200];
    date date;
    time_ time;
    time_ lasting;
    char rate[200];
    double cost;
};
date convert_date(char* str)
{
	date arr;
	arr.day = atoi(str);
	arr.month = atoi(str + sizeof(char) * 3);
	arr.year = atoi(str + sizeof(char) * 6);
	return arr;
}
time_ convert_time(char* str)
{
	time_ arr;
	arr.hours = atoi(str);
	arr.minutes = atoi(str + sizeof(char) * 3);
	arr.seconds = atoi(str + sizeof(char) * 3);
	return arr;
}
int main() 
{
	cout << "Привет!";
	ifstream file;
	file.open("data.txt");
	if (file.is_open())
	{
		cout << "open\n";
	}
	else cout << "not open\n";
	system("pause");
	info* arr = new info;
	file >> arr->number;
	char* date_char = new char[10];
	file >> date_char;
	arr->date = convert_date(date_char);

	char* time = new char[8];
	file >> time;
	arr->time = convert_time(time);

	char* lasting = new char[8];
	file >> date_char;
	arr->lasting = convert_time(date_char);

	file >> arr->rate;

	file >> arr->cost;
	cout << arr->rate;
}