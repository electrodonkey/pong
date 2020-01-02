#pragma once
#include<cstdio>
#include<iostream>
using namespace std;
class Helper
{

public:
	
	/**
	* Log an error with some error message to the output stream of our choice
	* @param os The output stream to write the message to
	* @param msg The error message to write
	*/
	void logError(std::ostream& os, const std::string& msg) {
		os << msg << std::endl;
	}
};

