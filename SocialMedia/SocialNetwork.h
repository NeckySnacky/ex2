#pragma once

#include <iostream>
#include "Profile.h"
#include "ProfileList.h"

class SocialNetwork
{
private:
	//fields
	std::string name;
	unsigned int minAge;
	ProfileList* profiles;
	
public:
	//initalizes the class
	void init(const std::string networkName, const int minAge);

	//clears the class
	void clear();
	
	/*adds a profile to the profile list
	* returns true if the user was added (above the minimal age)*/
	bool addProfile(Profile profile_to_add);
	
	//getters
	std::string getNetworkName() const;
	int getMinAge() const;
	std::string getWindowsDevices() const;
};