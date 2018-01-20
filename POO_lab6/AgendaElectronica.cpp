//Problema 5 - Laboratorul 6

#include"Agenda.h";
#include<string.h>
#include<iostream>

AgendaElectronica::Nod::Nod(Activitate &val, Nod *left, Nod *right)
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

void AgendaElectronica::Nod::Set_left(Nod *adr)
{
	left = adr;
}

void AgendaElectronica::Nod::Set_right(Nod *adr)
{
	right = adr;
}

AgendaElectronica::Nod* AgendaElectronica::Nod::Get_left()
{
	return this->left;
}

AgendaElectronica::Nod* AgendaElectronica::Nod::Get_right()
{
	return this->right;
}

Activitate* AgendaElectronica::Nod::Get_val()
{
	return AgendaElectronica::Nod::val;
}

AgendaElectronica::Nod* AgendaElectronica::Add(Activitate activitate, Nod *adr)
{
	if (adr == NULL)
	{
		adr = new Nod(activitate, NULL, NULL);
	}
	else
	{
		if (DataCompare::compare(activitate.Get_data(), adr->Get_val()->Get_data()) < 0)
		{
			adr->Set_left(AgendaElectronica::Add(activitate, adr->Get_left()));
		}
		else
		{
			adr->Set_right(AgendaElectronica::Add(activitate, adr->Get_right()));
		}
	}
	return adr;
}

void AgendaElectronica::Add(Activitate valueofactivitate)
{
	head = Add(valueofactivitate, head);
}


void AgendaElectronica::Preorder(Nod *adr)//RSD
{
	//daca nu s-a ajuns la ultimul nod
	if (adr != NULL)
	{
		//se viziteaza radacina
		cout<<adr->Get_val()->Get_nume()<<": "<<adr->Get_val()->Get_adresa()<<" | "<<adr->Get_val()->Get_data()<<"\n";
		//se viziteaza copilul din stanga apoi cel din dreapta
		Preorder(adr->Get_left());
		Preorder(adr->Get_right());
	}
}

void AgendaElectronica::Preorder()
{
	Preorder(head);
}