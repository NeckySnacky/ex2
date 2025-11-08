#pragma once
#include "User.h"

void User::init(unsigned int id, std::string username, unsigned int age) {
	this->id = id;
	this->username = username;
	this->age = age;
	this->deviceList.init();
}

std::string User::getUserName() const {
	return this->username;
}

int unsigned User::getID() const {
	return this->id;
}
unsigned int User::getAge() const {
	return this->age;
}

void User::clear() {
	this->id = 0;
	this->username = "";
	this->age = 0;
}

DevicesList& User::getDevices() {
	DevicesList& referDeviceList = this->deviceList;
	return referDeviceList;
} 

void User::addDevice(Device newDevice) {
	this->deviceList.add(newDevice);
}

bool User::checkIfDevicesAreOn() const {
	DeviceNode* firstDevice = this->deviceList.get_first();

	while (firstDevice)
	{
		if (!firstDevice->get_data().isActive()) {
			return false;
		}
		firstDevice = firstDevice->get_next();
	}
	return true;
}


