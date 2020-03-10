#pragma once
#include "date.h"
#include "time.h"
#include <string> 
class Appointment
{
private:
	std::string description;
	Date date;
	Time startTime;
	Time endTime;
	Time deriveEndTime();

public:
	/**
	Constructor
	Initializes Appointment object
	*/
	Appointment();
	/**
	Constructor
	Constructs an appointment
	@param description
	@param date
	@param time
	*/
	Appointment(std::string, Date, Time);
	/**
	Accessor function to receive description
	@return description
	*/
	std::string getDescription() const;
	/**
	Accessor function to receive date
	@return date
	*/
	Date getDate() const;
	/**
	Accessor function to receive start time
	@return startTime
	*/
	Time getStart() const;
	/**
	Accessor function receive end time
	@return endTime
	*/
	Time getEnd() const;
	/**
	Boolean function to compare 2 appointments
	@return true if greater
	*/
	bool compare(Appointment);
	/**
	Boolean function determining existence of conflict between 2 appointments
	@return true if greater
	*/
	bool conflicts(Appointment);

	/**
	String function for printing appointments
	*/
	std::string toString();
};

