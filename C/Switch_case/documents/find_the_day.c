#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numofdays;

	printf("Enter the number day from today: ");
	scanf("%d", &numofdays);

	printf("Calculated day is ");

	switch (numofdays = numofdays % 7)
	{
	case 0:
		printf("Friday\n");
		break;
	case 1:
		printf("Saturday\n");
		break;
	case 2:
		printf("Sunday\n");
		break;
	case 3:
		printf("Monday\n");
		break;
	case 4:
		printf("Tuesday\n");
		break;
	case 5:
		printf("Wednesday\n");
		break;
	case 6:
		printf("Thursday\n");
		break;
	}

	return 0;
}