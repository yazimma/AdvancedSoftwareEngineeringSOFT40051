//Definition - Car.h

class Car
{

private:
	char* make; //Make of car
	int year; //Year of manufacture
	double petrol; //Currently stored petrol in gallons
	double tankSize; //Size of tank in gallons
	double mpg; //Miles per gallon fuel consumption
	char* owner; //Owner name of car

	void empty();
	void full();

public:
	Car();

	Car(char make[], int year, double petrol, double tankSize, double mpg, char owner[]);

	void display(); //Display information about car

	double fillPetrol(double gallons);

	double drive(double distance);

	void changeOwner(char* owner);

	void setMake(char* make);

	void setYear(int year);

	void setPetrol(double petrol);

	void setTankSize(double tankSize);

	void setMpg(double mpg);

	double Car::getRange();
}; 