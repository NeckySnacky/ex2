#include "Profile.h"
#include <iostream>

void Profile::init(const User owner) {
	this->owner = owner;
}
void Profile::clear() {
	this->owner.clear();
	this->page.clearPage();
	this->friendList.clear();
}
User Profile::getOwner() const {
	return this->owner;
}

void Profile::setStatus(const std::string new_status) {
	this->page.setStatus(new_status);
}

void Profile::addPostToProfilePage(const std::string post) {
	this->page.addLineToPosts(post);
}

void Profile::addFriend(const User friend_to_add) {
	this->friendList.add(friend_to_add);
}

std::string Profile::getPage() const {
	return "Status: " + this->page.getStatus() +
		"\n*******************\n*******************\n" + this->page.getPosts();
}

std::string Profile::getFriends() const {
	std::string friends = "";
	UserNode* first = this->friendList.get_first();

	while (first) {
		if (friends != "") {
			friends += ",";
		}

		friends = friends + first->get_data().getUserName();
		first = first->get_next();
	}
	return friends;

}

std::string Profile::getFriendsWithSameNameLength() const {
	std::string friends = "";
	UserNode* first = this->friendList.get_first();
	std::string ownerName = this->owner.getUserName();

	while (first) {
		if (ownerName.size() == first->get_data().getUserName().size()) {
			if (friends != "") {
				friends += ",";
			}

			friends = friends + first->get_data().getUserName();

		}
		first = first->get_next();
	}

	return friends;
}
