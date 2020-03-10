class Date
{
private:
	int number_of_days;

public:
	/**
	Constructor
	Initializes Date object
	*/
	Date();
	/**
	Constructor
	Constructs month and day
	@param month
	@param day
	*/
	Date(int month=0, int day=0);
	/**
	Accessor function to receive months
	@return months
	*/
	int getMonths() const;
	/**
	Accessor function to receive days
	@return days
	*/
	int getDays() const;
	/**
	Boolean function to compare 2 dates
	@param Date value of date being compared to stored object date
	@return true if greater
	*/
	bool compare(Date);

};
