#ifndef _app_h_
#define _app_h_
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

public:
	Appointment(std::string, Date, Time, Time);

	std::string getDescription() const;
	Date getDate() const;
	Time getStart() const;
	Time getEnd() const;

	bool compare(Appointment);
	bool conflicts(Appointment);
};
#endif
