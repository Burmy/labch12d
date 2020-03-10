#include "catch.hpp"
#include "time.h"
Time::Time(int hour, int minute)
{
	time_in_minutes = hour * 60 + minute;
}
int Time::getHours() const
{
	return time_in_minutes / 60;
}
int Time::getMinutes() const
{
	return time_in_minutes % 60;
}
int Time::deriveEndTime()
{
	return time_in_minutes + 60;
}
bool Time::compare(Time time)
{
	return time.time_in_minutes < time_in_minutes;
}
TEST_CASE("Time")
{
	SECTION("TimeConstructor")
	{
		/**
		@test Check if constructor correctly set time
		if hour 2 and minutes is 5
		expect accessor functions 
		to returnthose values
		@verbinclude results TimeConstructor
		*/
		Time t(2,5);
		CHECK(t.getHours() == 2);
		CHECK(t.getMinutes() == 5);
	}
	SECTION("getHours")
	{
		/**
		@test Check if get_hours correctly returning
		if hour is 2 except accessor fucntion to return 2
		@verbinclude results TimeGetHours
		*/
		Time t1(0);
		CHECK(t1.getHours() == 0);
		Time t2(12);
		CHECK(t2.getHours() == 12);
		Time t3(5);
		CHECK(t3.getHours() == 5);
	}
	SECTION("getMinutes")
	{
		/**
		@test Check if get_minutes correctly returning
		if min is 2 except accessor fucntion to return 2
		@verbinclude results TimeGetMinutes
		*/
		Time t4(45);
		CHECK(t4.getMinutes() == 45);
	}
	SECTION("EndTime")
	{
		/**
		*/
	}
	SECTION("compare")
	{
		Time t1(12);
		CHECK(t1.getHours() == 12);
		Time t2(5);
		CHECK(t2.getHours() == 5);
		CHECK(t1.compare(t2)==true);
	}
}
		
