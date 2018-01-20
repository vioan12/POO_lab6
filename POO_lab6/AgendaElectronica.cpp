//Problema 5 - Laboratorul 6

#include"Agenda.h";

class Nod;

AgendaElectronica::Nod::Nod(Activitate val, Nod *left, Nod *right)
{
	this->val = new Activitate(val);
	this->left = left;
	this->right = right;
}

AgendaElectronica::Nod::Nod(Nod &nod)
{
	this->val = new Activitate(*nod.Get_val());
	this->left = nod.Get_left();
	this->right = nod.Get_right();
}

AgendaElectronica::Nod::~Nod()
{
	delete val;
	delete left;
	delete right;
}

Nod* AgendaElectronica::Nod::Get_left()
{
	return this->left;
}

