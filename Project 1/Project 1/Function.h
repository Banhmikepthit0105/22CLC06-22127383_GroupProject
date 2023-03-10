
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

void displayCourse(Course* pHead);

void addCourse(Course*& pHead);

void deleteCourse(Course*& pHead);

void update_course_ID(Course*& cur);
void update_course_name(Course*& cur);
void update_class_name(Course*& cur);
void update_number_credits(Course*& cur);
void update_number_students(Course*& cur);
void update_day_week(Course*& cur);
void update_session(Course*& cur);

void update(Course*& cur);

void updateCourse(Course*& pHead);

void deAllocateCourse(Course*& pHead);

#endif
