//Problema 5 - Laboratorul 6

#include"Agenda.h";
#include<string.h>

Activitate::Adresa::Adresa(char adresa[])
{
	value = new char[strlen(adresa) + 1];
	strcpy(value, adresa);
}

Activitate::Adresa::Adresa(Adresa &adresa)
{
	value = new char[strlen(adresa.value) + 1];
	strcpy(value, adresa.value);
}

Activitate::Adresa::~Adresa()
{
	delete value;
}

Activitate::Data::Data(char data[])
{
	value = new char[strlen(data) + 1];
	strcpy(value, data);
}

Activitate::Data::Data(Data &data)
{
	value = new char[strlen(data.value) + 1];
	strcpy(value, data.value);
}

Activitate::Data::~Data()
{
	delete value;
}

Activitate::Activitate(char valueofnume[], char valueofadresa[], char valueofdata[]) 
{
	nume = new char[strlen(valueofnume) + 1];
	strcpy(nume, valueofnume);
	Activitate::Adresa::Adresa(valueofadresa);
	Activitate::Data::Data(valueofdata);
}

char* Activitate::Get_Adresa()
{
	return Activitate::Adresa::value;
}

char* Activitate::Get_Data()
{
	return Activitate::Data::value;
}

Activitate::Activitate(Activitate &activitate)
{
	nume = new char[strlen(activitate.nume) + 1];
	strcpy(nume, activitate.nume);
	Activitate::Adresa::Adresa(activitate.Get_Adresa());
	Activitate::Data::Data(activitate.Get_Data());
}

Activitate::~Activitate()
{
	delete nume;
}