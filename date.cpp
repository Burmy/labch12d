#include "catch.hpp"
#include "date.h"
Date::Date() {}

Date::Date(int months, int days)
{
	number_of_days = months * 30 + days;
}
int Date::getMonths() const
{
	return number_of_days / 30;
}
int Date::getDays() const
{
	return number_of_days % 30;
}
bool Date::compare(Date other)
{
	return other.number_of_days < number_of_days;
}

TEST_CASE("Date")
{
	SECTION("DateConstructor")
	{
		/**
		@test Check if constructor correctly set date
		if month 2 and day is 5
		expect accessor functions 
		to returnthose values
		@verbinclude results TimeConstructor
		*/
		Date d(9,25);
		CHECK(d.getMonths() == 9);
		CHECK(d.getDays() == 25);
	}
	SECTION("getMonths")
	{
		/**
		@test Check if getMonths correctly returning
		if hour is 2 except accessor fucntion to return 2
		@verbinclude results TimeGetMonths
		*/
		Date d1(8);
		CHECK(d1.getMonths() == 8);
		Date d2(4);
		CHECK(d2.getMonths() == 4);
		Date d3(12);
		CHECK(d3.getMonths() == 12);
	}
	SECTION("getDays")
	{
		Date d1(23);
		CHECK(d1.getDays() == 23);
		Date d2(14);
		CHECK(d2.getDays() == 14);
		Date d3(5);
		CHECK(d3.getDays() == 5);
	}
	SECTION("compare")
	{
		Date d1(9);
		CHECK(d1.getMonths() == 9);
		Date d2(4);
		CHECK(d2.getMonths() == 4);
		CHECK(d1.compare(d2)==true);
	}
}
