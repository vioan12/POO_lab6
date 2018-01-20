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
		char *value;
	public:
		Adresa(const char []);
		Adresa(Adresa &);
		~Adresa();
	};
	class Data
	{
		friend class Activitate;
	private:
		//Formatul Datei este ZZ-LL-AAAA
		char *value;
	public:
		Data(const char[]);
		Data(Data &);
		~Data();
	};
	Adresa *adresa;
	Data *data;
public:
	Activitate(const char nume[], const char adresa[], const char data[]);
	Activitate(Activitate &);
	~Activitate();
	char* Get_adresa();
	char* Get_data();
	char* Get_nume();
};

class AgendaElectronica
{
private:
	class Nod
	{
	private:
		Activitate *val;
		Nod *left, *right;
	public:
		Nod(Activitate&, Nod*, Nod*);
		Nod(Nod &);
		~Nod();
		void Set_left(Nod*);
		void Set_right(Nod*);
		Nod* Get_left();
		Nod* Get_right();
		Activitate* Get_val();
	};
	Nod *head;
	Nod* Add(Activitate, Nod*);
	void Preorder(Nod *);//RSD
public:
	void Add(Activitate);
	void Preorder();
};

class DataCompare
{
public:
	static int compare(char[], char[]);
};

