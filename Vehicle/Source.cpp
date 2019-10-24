//Demonstrate inheritance
#include <iostream>
using namespace std;

//Define the base class for vehicles
class road_vehicle 
{
private:
	int wheels;
	int passengers;
public:
	void set_wheels(int num);
	int get_wheels();
	void set_passengers(int num);
	int get_passengers();
};

//Define a truck
class truck : public road_vehicle
{
	int cargo;
public:
	void set_cargo(int size);
	int get_cargo();
	void show();

};
// define an automobile
enum type { car, van, wagon };
class automobile : public road_vehicle
{
	enum type car_type;
public:
	void set_type(type t);
	enum type get_type();
	void show();
};

// Implement road_vehicle----------------
void road_vehicle::set_wheels(int num)
{
	wheels = num;
}
int road_vehicle::get_wheels()
{
	return wheels;
}
void road_vehicle::set_passengers(int num)
{
	passengers = num;
}
int road_vehicle::get_passengers()
{
	return passengers;
}

// Implement truck---------------------
void truck::set_cargo(int size)
{
	cargo = size;
}
int truck::get_cargo()
{
	return cargo;
}
void truck::show() {
	cout << "wheels: " << get_wheels() << endl;
	cout << "passengers: " << get_passengers() << endl;
	cout << "cargo: " << get_cargo() << endl;
}

// Implement automobile -----------------
void automobile::set_type(type t)
{
	car_type = t;
}
enum type automobile::get_type()
{
	return car_type;
}
void automobile::show() {
	cout << "wheels: " << get_wheels() << endl;
	cout << "passengers: " << get_passengers() << endl;
	cout << "type: ";
	switch (get_type()) {
	case car:
		cout << "car";
		break;
	case van:
		cout << "van";
		break;
	case wagon:
		cout << "wagon";
		break;
	}
	cout << endl;
}


int main() {
	
	truck t1, t2;
	automobile c;
	t1.set_wheels(18);
	t1.set_passengers(2);
	t1.set_cargo(1000);

	t2.set_wheels(6);
	t2.set_passengers(3);
	t2.set_cargo(1200);

	c.set_wheels(4);
	c.set_passengers(6);
	c.set_type(van);
	
	t1.show();
	t2.show();
	c.show();
	system("pause");
	return 0;
}

