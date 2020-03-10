#include "catch.hpp"
#include "app.h"
#include "date.h"
#include "time.h"
using namespace std;
Appointment::Appointment() {}

Appointment::Appointment(std::string description, Date date, Time startTime)
{
	this->description = description;
	this->date = date;
	this->startTime = startTime;
	this->endTime = deriveEndTime();
}
std::string Appointment::getDescription() const
{
	return description;
}

Date Appointment::getDate() const
{
	return date;
}

Time Appointment::getStart() const
{
	return startTime;
}

Time Appointment::getEnd() const
{
	return endTime;
}
Time Appointment::deriveEndTime()
{
	int startHours = startTime.getHours();
	int startMinutes = startTime.getMinutes();

	int endTimeMinutes = startHours * 60 + startMinutes + 60;
	int endHours = endTimeMinutes / 60;
	int endMinutes = endTimeMinutes % 60;

	return Time(endHours, endMinutes);
}
bool Appointment::compare(Appointment other)
{
	Date otherDate = other.getDate();
	Time otherStart = other.getStart();

	bool isGreaterOrEqual = (date.compare(otherDate) && startTime.compare(otherStart));
	return isGreaterOrEqual;
}

bool Appointment::conflicts(Appointment other)
{
	//to do: implement conflicts
	return false;
}
std::string Appointment::toString()
{
	return description + '\n' + std::to_string(date.getMonths()) + "/" + std::to_string(date.getDays()) + " "
		+ std::to_string(startTime.getHours()) + ":" + std::to_string(startTime.getMinutes()) + '\n';
}
/**
Allows user to define an appointment
@param book the vector to store appointments in
*/
void AddAppointment(std::vector<Appointment> &book);
/**
Adds an appointment to vector book if vector is empty or if
no conflict is found between other appointments
@param book the vector to store appointments in
@param appointment the appointments to store
@return true if appointment was added
*/
bool addToAppointmentBook(std::vector<Appointment> &book, Appointment appointment);
/**
Prints contents of appointment book vector
@param book the vector to print appointments from
*/
void printAppointments(std::vector<Appointment> book);
/**
Boolean function that performs binary search to insert appointments
@return true if no conflict is found
*/
bool fakeBinarySearchInsert(std::vector<Appointment> &book, Appointment appointment);

