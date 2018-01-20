//Problema 5 - Laboratorul 6

#include"Agenda.h";
#include<string.h>

Activitate::Adresa::Adresa(const char adresa[])
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

Activitate::Data::Data(const char data[])
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

Activitate::Activitate(const char valueofnume[], const char valueofadresa[], const char valueofdata[])
{
	nume = new char[strlen(valueofnume) + 1];

	adresa = new Adresa(valueofadresa);
	data = new Data(valueofdata);
	strcpy(nume, valueofnume);
}

Activitate::Activitate(Activitate &activitate)
{
	nume = new char[strlen(activitate.nume) + 1];

	adresa = new Adresa(activitate.adresa->value);
	data = new Data(activitate.data->value);
	strcpy(nume, activitate.nume);
}

Activitate::~Activitate()
{
	delete nume;
}

char* Activitate::Get_adresa()
{
	return adresa->value;
}

char* Activitate::Get_data()
{
	return data->value;
}

char* Activitate::Get_nume()
{
	return Activitate::nume;
}