class Date
{
public:
/**
Constructor
Constructs a time of day
 @param months
 @param days
*/
	Date(int months=0, int days=0);
	/**
	accessor function to recieve Date
	@return date
	*/
	int getMonths() const;
	/**
	accessor function to recieve Months
	@return month
	*/
	int getDays() const;
	/**
	boolean fiunction to compare 2 times
	@param time - decide ifthis time is greater than the currant object
	@return true if greater
	*/
	bool compare(Date);
	
private:
	int number_of_days;
};
