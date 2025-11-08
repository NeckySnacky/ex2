#pragma once
#include <string>
#include "DeviceList.h"

class User
{
private:
	unsigned int id;
	unsigned int age;
	std::string username;
	DevicesList deviceList;
	
public:
	//initilaizes the class
	void init(unsigned int id, std::string username, unsigned int age);
	
	//cllears the class
	void clear();

	//adders (adds things to variables)
	void addDevice(Device newDevice);
	
	//getters
	std::string getUserName() const;
	int unsigned getID() const;
	unsigned int getAge() const;
	bool checkIfDevicesAreOn() const;
	DevicesList& getDevices();

};