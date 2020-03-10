class Time
{
public:
/**
Constructor
Constructs a time of day
@param hour
@param min
*/
	Time(int hour=0, int min=0);
	/**
	accessor function to recieve hours
	@return hours
	*/
	int getHours() const;
	/**
	accessor function to recieve minutes
	@return minutes
	*/
	int getMinutes() const;
	
	int deriveEndTime();
	/**
	boolean fiunction to compare 2 times
	@param time - decide ifthis time is greater than the currant object
	@return true if greater
	*/
	bool compare(Time);
private:
	int time_in_minutes;
};
