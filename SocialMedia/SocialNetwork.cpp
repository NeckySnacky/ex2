#include "SocialNetwork.h"

#include "User.h"
#include "DeviceList.h"

//initializes the class
void SocialNetwork::init(const std::string networkName, const int minAge) {
	this->minAge = minAge;
	this->name = networkName;
	this->profiles = new ProfileList;
	this->profiles->init();
}

//clears the class
void SocialNetwork::clear() {
	this->minAge = 0;
	this->name = "";
	this->profiles->clear();
	delete this -> profiles;
}

//getters
std::string SocialNetwork::getNetworkName() const {
	return this->name;
}

int SocialNetwork::getMinAge() const {
	return this->minAge;
}



std::string SocialNetwork::getWindowsDevices() const {
	ProfileNode* firstProfile = this->profiles->get_first();
	std::string devices = "";
	DevicesList DeviceList = firstProfile->get_data().getOwner().getDevices();
	DeviceNode* first = NULL;
	
	//goes through every profile inside it gets the devices and goes over every device
	while (firstProfile) {
		
		DeviceList = firstProfile->get_data().getOwner().getDevices();
		first = DeviceList.get_first();

		while (first) {
			

			std::string os = first->get_data().getOS();

			if ((os == WINDOWS7 || os == WINDOWS10 || os == WINDOWS11) && first->get_data().isActive()) {
				if (devices != "") {
					devices += ", ";
				}

				devices += '[' + std::to_string(first->get_data().getID()) + ", " + os + ']';
			}
			first = first->get_next();
		}
		firstProfile = firstProfile->get_next();
	}

	return devices;
}

/*adds a profile to the profile list
* returns true if the user was added (above the minimal age)*/
bool SocialNetwork::addProfile(const Profile profile_to_add) {
	if (profile_to_add.getOwner().getAge() < this->minAge) {
		return false;
	}

	this->profiles->add(profile_to_add);

}