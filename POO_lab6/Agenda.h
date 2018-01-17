//Problema 5 - Laboratorul 6

#pragma once

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
		Adresa(char[]);
		Adresa(Adresa &);
		~Adresa();
	};
	class Data
	{
		friend class Activitate;
	private:
		char *value;
	public:
		Data(char[]);
		Data(Data &);
		~Data();
	};

public:
	Activitate(char[], char[], char[]);
	Activitate(Activitate &);
	~Activitate();
	char* Get_Adresa();
	char* Get_Data();
};