#include "Device.h"

void Device::init(const unsigned int id,const DeviceType type,const std::string os) {
	this->id = id;
	this->type = type;
	this->os = os;
}

int unsigned Device::getID() const {
	return this->id;
}

DeviceType Device::getType() const {
	return this->type;
}

std::string Device::getOS() const {
	return this->os;
}

bool Device::isActive() const {
	return this->active;
}

void Device::activate() {
	this->active = true;
}

void Device::deactivate() {
	this->active = false;
}




