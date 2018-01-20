//Problema 5 - Laboratorul 6

#include"Agenda.h";
#include<string.h>

char* Activitate::Adresa::value = NULL;
char* Activitate::Data::value = NULL;

Activitate::Activitate(const char valueofnume[], const char valueofadresa[], const char valueofdata[])
{
	nume = new char[strlen(valueofnume) + 1];
	Adresa::value = new char[strlen(valueofadresa) + 1];
	Data::value = new char[strlen(valueofdata) + 1];

	strcpy(nume, valueofnume);
	strcpy(Adresa::value, valueofadresa);
	strcpy(Data::value, valueofdata);
}

Activitate::Activitate(Activitate &activitate)
{
	nume = new char[strlen(activitate.nume) + 1];
	Adresa::value = new char[strlen(activitate.Get_Adresa()) + 1];
	Data::value = new char[strlen(activitate.Get_Data()) + 1];

	strcpy(nume, activitate.nume);
	strcpy(Adresa::value, activitate.Get_Adresa());
	strcpy(Data::value, activitate.Get_Data());
}

Activitate::~Activitate()
{
	delete nume;
	Activitate::Adresa::value = NULL;
	Activitate::Data::value = NULL;
}

char* Activitate::Get_Adresa()
{
	return Activitate::Adresa::value;
}

char* Activitate::Get_Data()
{
	return Activitate::Data::value;
}

char* Activitate::Get_nume()
{
	return Activitate::nume;
}