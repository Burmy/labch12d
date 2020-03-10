#include "catch.hpp"
#include "app.h"
#include "date.h"
#include "time.h"
using namespace std;
Appointment::Appointment(std::string description, Date date, Time startTime, Time endTime)
{
	this->description = description;
	this->date = date;
	this->startTime = startTime;
	this->endTime = endTime;
}

std::string Appointment::getDescription() const
{
	return description;
}

int Appointment::getDate() const
{
	return date;
}
int Appointment::getStart() const
{
	return startTime;
}

int Appointment::getEnd() const
{
	return endTime;
}
bool Appointment::compare(Appointment other)
{
	Date otherDate = other.getDate();
	Time otherStart = other.getStart();

	bool date.compare(otherDate) && startTime.compare(otherStart);
}
bool Appointment::conflicts(Appointment other)
{
	// check date, start, and end to see if it conflicts with other
	//Date otherDate = other.getDate();
	//Time otherStart = other.getStart();

	//bool date.compare(otherDate) && startTime.compare(otherStart);
}
