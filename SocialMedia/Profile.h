#pragma once

#include "User.h"
#include "Page.h"
#include "UserList.h"

class Profile
{
private:
	//fields
	User owner;
	Page page;
	UserList friendList;

public:
	//intitializes the class 
	void init(User owner);

	//clears the class
	void clear();

	//setters
	void setStatus(const std::string new_status);

	//adders (adds things to variables)
	void addPostToProfilePage(const std::string post);
	void addFriend(const User friend_to_add);

	//getters
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;
	User getOwner() const;
};
