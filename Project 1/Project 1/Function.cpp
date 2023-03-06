#include "Function.h"


void displayCourse(Course* pHead)
{
	cout
		<< setw(15)
		<< "Course ID"
		<< setw(20)
		<< "Course Name"
		<< setw(20)
		<< "Class Name"
		<< setw(10)
		<< "Number of credits"
		<< setw(10)
		<< "Number of maximum students"
		<< setw(10)
		<< "Day of the week"
		<< setw(15)
		<< "Session";
	while (pHead != nullptr)
	{
		cout
			<< setw(15)
			<< pHead->id
			<< setw(20)
			<< pHead->course_name
			<< setw(20)
			<< pHead->class_name
			<< setw(20)
			<< pHead->number_credits
			<< setw(10)
			<< pHead->number_credits
			<< setw(10)
			<< pHead->day_of_week
			<< setw(15)
			<< pHead->sessions;
		pHead = pHead->pNext;
	}

}


void addCourse(Course*& pHead)
{
	Course* cur;
	cur = pHead;
	pHead = new Course;

	cout << "Enter Course ID";
	cin >> pHead->id;

	cout << "Enter Course Name";
	getline(cin, pHead->course_name);
	cin.ignore();

	cout << "Enter Class Name";
	getline(cin, pHead->class_name);

	cout << "Enter Number of credits: ";
	cin >> pHead->number_credits;

	cout << "Enter Number of students: ";
	cin >> pHead->number_students;

	cout << "    Enter day of week" << endl;
	cout << "MON / TUE / WED / THU / FRI / SAT ";
	cin >> pHead->day_of_week;

	cout << "    Enter session" << endl;
	cout << "S1(07:30) -- S2 (09:30) -- S3(13:30) -- S4(15:30)";
	cin >> pHead->sessions;


	pHead->pNext = cur;
}

void deleteCourse(Course*& pHead)
{


}



void update_course_ID(Course*& cur)
{
	cout << "Enter new Course ID: ";
	cin >> cur->id;
	while (cur->id <= 0)
	{
		cout << "Invalid input. Please try a new Course ID ";
		cin >> cur->id;
	}
	cout << "Update successfully!" << endl;
}

void update_course_name(Course*& cur)
{
	cout << "Enter new Course Name: ";
	getline(cin, cur->course_name);
	cout << "Update successfully!" << endl;
}

void update_class_name(Course*& cur)
{
	cout << "Enter new Class Name: ";
	getline(cin, cur->class_name);
	cout << "Update successfully!" << endl;
}

void update_number_credits(Course*& cur)
{
	cout << "Enter new Number of Credits: ";
	cin >> cur->number_credits;
	while (cur->number_credits <= 0)
	{
		cout << "Invalid input. Please try a new Number of Credits: ";
		cin >> cur->number_credits;
	}
	cout << "Update successfully!" << endl;
}

void update_number_students(Course*& cur)
{
	cout << "Enter new Number of Credits: ";
	cin >> cur->number_credits;
	while (cur->number_credits <= 0)
	{
		cout << "Invalid input. Please try a new Number of Credits: ";
		cin >> cur->number_credits;
	}
	cout << "Update successfully!" << endl;
}

void update_day_week(Course*& cur)
{
	cout << "Enter new Day of week: ";
	cin >> cur->day_of_week;
	cout << "Update successfully!" << endl;

}

void update_session(Course*& cur)
{
	cout << "Enter new session";
	cin >> cur->sessions;
	cout << "Update successfully!" << endl;

}

void update(Course*& cur)
{
	cout << "Choose option which have to be updated ";
	while (true)
	{
		cout << "1. Course ID" << endl;
		cout << "2. Course Name" << endl;
		cout << "3. Class Name" << endl;
		cout << "4. Number of credits " << endl;
		cout << "5, Number of students" << endl;
		cout << "6. Day of the week" << endl;
		cout << "7. Sessions" << endl;
		cout << "8. All of above " << endl;
		cout << "0. Exit" << endl;
		int option;
		cin >> option;
		switch (option)
		{
		case 1:
			update_course_ID(cur);
			break;
		case 2:
			update_course_name(cur);
			break;
		case 3:
			update_class_name(cur);
			break;
		case 4:
			update_number_credits(cur);
			break;
		case 5:
			update_number_students(cur);
			break;
		case 6:
			update_day_week(cur);
			break;
		case 7:
			update_session(cur);
			break;
		case 8:
		{
			update_course_ID(cur);
			update_course_name(cur);
			update_class_name(cur);
			update_number_credits(cur);
			update_number_students(cur);
			update_day_week(cur);
			update_session(cur);
		}
			break;
		case 0:
			return;
		default:
			continue;
		}
	}
}

void updateCourse(Course*& pHead)
{
	Course* cur = pHead;
	displayCourse(pHead);
	cout << "Enter the Course ID which have to be updated ";
	int getID;
	cin >> getID;
	while (cur != nullptr)
	{
		if (getID == cur->id)
		{
			update(cur);
			cout << "Update successfully!";
			return;
		}
		cur = cur->pNext;
	}
	cout << "Not found Course ID!!!";
	return;
}