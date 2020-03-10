#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "app.h"
#include "date.h"
#include "time.h"

int main()
{
	//Initialize variables
	int option = 0;
	bool quit = false;

	//Initialize empty vector of Appointments
	std::vector<Appointment> book;
	while (!quit)
	{
		std::cout << "Would you like to make an appointment, print current appointments on a given day, or quit? (Enter 1, 2, or 3): " << std::endl;
		std::cout << "1: Add appointment" << std::endl;
		std::cout << "2: Print appointments" << std::endl;
		std::cout << "3: Quit" << std::endl;
		std::cin >> option;
		
		while (std::cin.fail() || option < 1 || option > 3)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Invalid input. Please enter 1, 2, or 3: " << std::endl;
			std::cin >> option;
		}

		if (option == 1)
		{
			AddAppointment(book);
		}

		else if (option == 2)
		{
			printAppointments(book);
		}

		else
		{
			quit = true;
		}
	}

	system("pause");
	return 0;
}

void AddAppointment(std::vector<Appointment> &book)
{
	std::string description;
	int month = 0;
	int day = 0;
	int startHour = 0;
	int startMinute = 0;
	char c;
	std::cout << "What is the name of your appointment?: ";
	std::cin >> description;

	std::cout << "What date is your appointment? (MM/DD): ";
	std::cin >> month >> c >> day;

	std::cout << "What time is your appointment? (HH:MM): ";
	std::cin >> startHour >> c >> startMinute;

	//Convert MM/DD to integer
	Date date = Date(month, day);
	//Convert HH:MM to integer
	Time time = Time(startHour, startMinute);

	//Create object Appointment
	Appointment newAppointment = Appointment(description, date, time);

	if (!addToAppointmentBook(book, newAppointment))
	{
		std::cout << "This appointment conflicts with an existing appointment!" << std::endl;
	}

}
bool addToAppointmentBook(std::vector<Appointment> &book, Appointment appointment)
{
	if (book.empty())
	{
		book.push_back(appointment);

		return true;
	}
	//Perform binary search using compare functions from
	//Time class and Date class and conflicts function from
	//Appointment class

	//for testing
	return fakeBinarySearchInsert(book, appointment);
}
void printAppointments(std::vector<Appointment> book)
{
	for (std::size_t i = 0; i < book.size(); i++)
	{
		Appointment appt = book[i];

		std::cout << appt.toString() << std::endl;
	}
}
bool fakeBinarySearchInsert(std::vector<Appointment> &book, Appointment appointment)
{
	book.push_back(appointment);

	return true;
}
