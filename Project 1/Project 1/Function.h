
#define _CRT_SECURE_NO_WARNINGS

#ifndef _FUCNTION_H_
#define _FUNCTION_H_

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cmath>
typedef long long ll;
typedef long int li;

using namespace std;

struct Course
{
	int id;
	string course_name;
	string class_name;
	int number_credits;
	int number_students;
	string day_of_week;
	string sessions;
	Course* pNext;
};

#endif
