#pragma once
#include<iostream>
#include<string>
#include"Human.h"
using namespace std;

class Teacher :public Human
{
	string specialty;
	unsigned int xp;
	int evil;
public:
	const string& get_specialty() const;
	unsigned int get_xp() const;
	int get_evil() const;
	const string& set_specialty(const string& specialty);
	unsigned int set_xp(unsigned int xp);
	int set_evil(int evil);
	Teacher(const string& name, unsigned int age, const string& specialty, unsigned int xp = 0, int evil = 0);
	~Teacher();
	void info();
};
ostream & operator<<(ostream & os, const Teacher& obj); 
