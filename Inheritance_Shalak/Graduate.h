#pragma once
#include<iostream>
#include<string>
#include"Human.h"
#include"Student.h"
using namespace std;
class Graduate :public Student
{
	string diploma_theme;
public:
	const string& get_diploma_theme() const;
	const string& set_diploma_theme(const string& diploma_theme);
	Graduate(const string& name, unsigned int age, const string& specialty, unsigned int year, int karma, const string& diploma_theme);
	~Graduate();
	void info();
};
ostream & operator<<(ostream & os, const Graduate& obj);