#pragma once
#include <iostream>
using namespace std;

class edadpersona
{
private:
	int Aact;
	int Mact;
	int Fact;
	int Anac;
	int Mnac;
	int Fnac;
	string name;
public:
	edadpersona(int,int,int,int,int,int,string);
	~edadpersona();
	void edad();
};

