#pragma once

#include <iostream>
#include "Profile.h"
#include "ProfileList.h"

class SocialNetwork
{
private:
	std::string name;
	unsigned int minAge;
	ProfileList* profiles;
	
public:
	void init(const std::string networkName, const int minAge);
	void clear();
	std::string getNetworkName() const;
	int getMinAge() const;
	bool addProfile(Profile profile_to_add);
	std::string getWindowsDevices() const;




};