//Problema 5 - Laboratorul 6

#include"Agenda.h";

int main()
{
	AgendaElectronica *AE;
	AE = new AgendaElectronica();
	Activitate *ac;
	ac = new Activitate("Mancat", "ACE", "12-02-2018");
	AE->Add(*ac);
	ac = new Activitate("Curs POO", "ACE", "19-01-2018");
	AE->Add(*ac);
	ac = new Activitate("Laborator SCD", "ACE", "19-01-2018");
	AE->Add(*ac);
	ac = new Activitate("Mancat", "Cantina", "17-01-2018");
	AE->Add(*ac);
	return 0;
}