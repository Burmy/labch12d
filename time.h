class Time
{
public:
/**
	Constructor
	Initializes Time object
	*/
	Time();
	/**
	Constructor
	Constructs time of day
	@param hours
	@param minutes
	*/
	Time(int hour=0, int minute=0);
	/**
	Accessor function to receive hours
	@return hours
	*/
	int getHours() const;
	/**
	Accessor function to receive minutes
	@return minutes
	*/
	int getMinutes() const;
	/**
	Boolean function to compare 2 times
	@return true if greater
	*/
	bool compare(Time);
private:
	int time_in_minutes;
};
