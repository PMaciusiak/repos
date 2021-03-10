// Car_rental.cpp: definiuje punkt wejścia dla aplikacji.
//

#include "Car_rental.h"
#include <string>
using namespace std;
class Car
{
private:
	int coordinates_x, coordiantes_y, value_seats;
	string type_of_car;
public:
	Car(int coordinates_x_p = 0, int cordinates_x_p = 0, int value_seats_p = 4, string type_of_car_p = "Economic")
	{
		coordinates_x = coordinates_x_p;
		coordiantes_y = cordinates_x_p;
		value_seats = value_seats_p;
		type_of_car = type_of_car_p;
	}
	void change_coo(int x, int y) // change values of coordiantes
	{
		coordiantes_y = y;
		coordinates_x = x;
	}
	void change_seats(int x) // change value of seats
	{
		value_seats = x;
	}
	void change_type_of_car(string x)
	{
		if (x == "Economic" || x == "Fast" || x == "Pets")
		{
			type_of_car = x;
		}
		else
		{
			cout << "There is no that type of car";
		}
	}
	void place_to_coo(string place)
	{
		//serching for cooridntaes in txt file and returning it into vector
	}
	void info_car()
	{
		cout << coordiantes_y << endl << coordinates_x;
	}
};




int main()
{
	
	Car test_car;
	test_car.change_coo(2, 5);
	test_car.info_car();
	return 0;
}
