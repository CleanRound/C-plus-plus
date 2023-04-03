#include "library.h"

struct Phone
{
private:
	string model;
	string manufacturer;
	string os;
	int year;
	double price;
public:
	Phone(string model, string manufacturer, string os, int year, double price)
	{
		this->model = model;
		this->manufacturer = manufacturer;
		this->os = os;
		this->year = year;
		this->price = price;
	}
	string getModel()
	{
		return this->model;
	}
	string getManufacturer()
	{
		return this->manufacturer;
	}
	string getOs()
	{
		return this->os;
	}
	int getYear()
	{
		return this->year;
	}
	double getPrice()
	{
		return this->price;
	}
	void setModel(string model)
	{
		this->model = model;
	}
	void setManufacturer(string manufacturer)
	{
		this->manufacturer = manufacturer;
	}
	void setOs(string os)
	{
		this->os = os;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	void setPrice(double price)
	{
		this->price = price;
	}
	void about()
	{
		println("Model: " << this->model);
		println("Manufacturer: " << this->manufacturer);
		println("OS: " << this->os);
		println("Year: " << this->year);
		println("Price: " << this->price);
	}
	
};
