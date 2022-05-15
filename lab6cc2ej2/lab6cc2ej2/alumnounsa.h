#pragma once
#include <iostream>
using namespace std;

class alumnounsa
{
	private:
		int cui;
		string nombres;
		float n1, n2, n3;
	public:
		alumnounsa(int, string, float, float, float);
		~alumnounsa();
		void imprimir();
		void promedio();
};

