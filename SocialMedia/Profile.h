#pragma once

#include "User.h"
#include "Page.h"
#include "UserList.h"

class Profile
{
private:
	User owner;
	Page page;
	UserList friendList;

public:
	void init(User owner);
	void clear();
	User getOwner() const;
	void setStatus(const std::string new_status);
	void addPostToProfilePage(const std::string post);
	void addFriend(const User friend_to_add);
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;
};