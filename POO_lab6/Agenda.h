//Problema 5 - Laboratorul 6

#pragma once
using namespace std;

class Activitate
{
private:
	char *nume;
	class Adresa
	{
		friend class Activitate;
	private:
		static char *value;
	};
	class Data
	{
		friend class Activitate;
	private:
		static char *value;
	};

public:
	Activitate(char[], char[], char[]);
	Activitate(Activitate &);
	~Activitate();
	char* Get_Adresa();
	char* Get_Data();
};