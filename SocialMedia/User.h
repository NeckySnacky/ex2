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
	DevicesList& referDeviceList = deviceList;
	
public:
	void init(unsigned int id, std::string username, unsigned int age);
	std::string getUserName() const;
	int unsigned getID() const;
	unsigned int getAge() const;
	void clear();
	DevicesList& getDevices() const;
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn() const;







};