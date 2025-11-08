#include "Page.h"

#include <string>

//initalizes the class
void Page::init() {
	this->posts = "";
	this->status = "";
}

//getters
std::string Page::getPosts() const {
	return this->posts;
}

std::string Page::getStatus() const {
	return this->status;
}

//clears the class
void Page::clearPage() {
	this->posts = "";
	this->status = "";
}

//setters
void Page::setStatus(std::string status) {
	this->status = status;
}

//adders (adds things to variables)
void Page::addLineToPosts(std::string new_line) {
	this->posts = this->posts + new_line + "\n";
}
