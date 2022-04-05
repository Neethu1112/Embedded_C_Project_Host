/*
 * excercise.c
 *
 *  Created on: 4 Apr 2022
 *      Author: neeth
 */

#include<stdio.h>

struct weather{
	char day[10];
	float temp;
};
void sort(struct weather *day);
void display (struct weather *week);
int main()
{
	struct weather week[7]={
			{ "Sunday", 72.5 },
			{ "Monday", 68.4 },
			{ "Tuesday", 75.0 },
			{ "Wednesday", 73.8 },
			{ "Thursday", 65.1 },
			{ "Friday", 72.8 },
			{"Saturday", 75.2 }
	};


	sort(week);
	display(week);
}
void sort (struct weather *week)
{
	struct weather t;
	int x;
	for(x =0; x<7; x++)
	{
		int y;
		for(y =0; y<7;y++)
		{
			if(week[x].temp < week[y].temp)

				{
					t = week[x];
					week[x]= week[y];
					week[y] = t;
				}
		}

	}
}
void display (struct weather *week)
{
	int x;
	for (x =0; x<7 ;x++)
	{
		printf("%10s had %.1f temperature\n",week[x].day,week[x].temp);
	}
}

