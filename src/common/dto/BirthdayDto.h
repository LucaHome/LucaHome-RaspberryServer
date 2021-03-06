#include <string>
#include <ctime>
#include <cstring>
#include <iostream>

#include "../utils/Tools.h"

#ifndef BIRTHDAY_DTO_H
#define BIRTHDAY_DTO_H

class BirthdayDto
{
private:
	int _id;
	std::string _name;
	int _day;
	int _month;
	int _year;
	std::string _group;
	bool _remindMe;
	bool _sentMail;

public:
	BirthdayDto();
	BirthdayDto(int, std::string, int, int, int, std::string, bool, bool);
	~BirthdayDto();

	void SetId(int);
	int GetId();

	void SetName(std::string);
	std::string GetName();

	void SetDay(int);
	int GetDay();

	void SetMonth(int);
	int GetMonth();

	void SetYear(int);
	int GetYear();

	int GetAge();
	bool HasBirthday();

	void SetGroup(std::string);
	std::string GetGroup();

	void SetRemindMe(bool);
	bool GetRemindMe();

	void SetSentMail(bool);
	bool GetSentMail();

	std::string SaveString();
	std::string JsonString();
	std::string PhpString();
	std::string ToString();
};

#endif
