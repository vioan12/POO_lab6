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
	Activitate(const char[], const char[], const char[]);
	Activitate(Activitate &);
	~Activitate();
	char* Get_Adresa();
	char* Get_Data();
};

class AgendaElectronica
{
	class Nod
	{
	private:
		Activitate *val;
		Nod *left, *right;
	public:
		Nod(Activitate, Nod*, Nod*);
		Nod(Nod &);
		~Nod();
		Nod* Get_left();
		Nod* Get_right();
		Activitate* Get_val();
	};
};