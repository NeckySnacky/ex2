#include "Page.h"

#include <string>

void Page::init() {
	this->posts = "";
	this->status = "";
}

std::string Page::getPosts() const {
	return this->posts;
}

std::string Page::getStatus() const {
	return this->status;
}
void Page::clearPage() {
	this->posts = "";
	this->status = "";
}

void Page::setStatus(std::string status) {
	this->status = status;
}

void Page::addLineToPosts(std::string new_line) {
	this->posts = this->posts + new_line + "\n";
}
