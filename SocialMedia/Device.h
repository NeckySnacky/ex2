#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
//
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////


class Device
{
private:
	DeviceType type;
	std::string os;
	bool active;
	unsigned int id;
public:
	std::string getOS() const;
	bool isActive() const;
	void activate();
	void deactivate();
	int unsigned getID() const;
	DeviceType getType() const;
	void init(const unsigned int id, const DeviceType type, const std::string os);

};
