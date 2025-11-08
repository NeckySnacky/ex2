#pragma once

#include <string>

class Page
{
private:
	//fields
	std::string status;
	std::string posts;

public:
	//getters
	std::string getPosts() const;
	std::string getStatus() const;

	//inititalizes the class
	void init();
	
	//setters
	void setStatus(const std::string status);

	//adders (adds things to variables)
	void addLineToPosts(const std::string new_line);
	
	//clears the page
	void clearPage();





};