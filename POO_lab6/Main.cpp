//Problema 5 - Laboratorul 6

#include"Agenda.h";

int main()
{
	Activitate *A;
	A = new Activitate("Mers facultate", "ACE-Craiova", "18-01-2018");
	Activitate A2(*A);
	delete A;
	return 0;
}