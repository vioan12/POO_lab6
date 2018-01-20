//Problema 5 - Laboratorul 6

#include"Agenda.h";
#include<string.h>
#include<stdlib.h> 

int DataCompare::compare(char data1[], char data2[])
{
	int i_temp1, i_temp2, zi, luna, an;
	char c_temp[5], c_t;

	//ziua
	c_temp[0] = data1[0];
	c_temp[1] = data1[1];
	c_temp[2] = NULL;
	i_temp1 = atoi(c_temp);
	c_temp[0] = data2[0];
	c_temp[1] = data2[1];
	c_temp[2] = NULL;
	i_temp2 = atoi(c_temp);
	if (i_temp1 != i_temp2)
	{
		if (i_temp1 < i_temp2)
		{
			zi = -1;
		}
		else
		{
			zi = 1;
		}
	}
	else
	{
		zi = 0;
	}

	//luna
	c_temp[0] = data1[3];
	c_temp[1] = data1[4];
	c_temp[2] = NULL;
	i_temp1 = atoi(c_temp);
	c_temp[0] = data2[3];
	c_temp[1] = data2[4];
	c_temp[2] = NULL;
	i_temp2 = atoi(c_temp);
	if (i_temp1 != i_temp2)
	{
		if (i_temp1 < i_temp2)
		{
			luna = -1;
		}
		else
		{
			luna = 1;
		}
	}
	else
	{
		luna = 0;
	}

	//anul
	c_temp[0] = data1[6];
	c_temp[1] = data1[7];
	c_temp[2] = data1[8];
	c_temp[3] = data1[9];
	c_temp[4] = NULL;
	i_temp1 = atoi(c_temp);
	c_temp[0] = data2[6];
	c_temp[1] = data2[7];
	c_temp[2] = data2[8];
	c_temp[3] = data2[9];
	c_temp[4] = NULL;
	i_temp2 = atoi(c_temp);
	if (i_temp1 != i_temp2)
	{
		if (i_temp1 < i_temp2)
		{
			an = -1;
		}
		else
		{
			an = 1;
		}
	}
	else
	{
		an = 0;
	}

	if (an != 0)
	{
		return an;
	}
	else
	{
		if (luna != 0)
		{
			return luna;
		}
		else
		{
			if (zi != 0)
			{
				return zi;
			}
			else
			{
				return 0;
			}
		}
	}
}