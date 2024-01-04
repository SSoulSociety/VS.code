#include <stdio.h>
#include <stdlib.h>

int main() {

	int grade;

	printf("Enter the grade: ");
	scanf_s("%d", &grade);
	if(grade<=100)
	{ 
	switch (grade / 10) {
	case 1:
	case 2:
	case 3:
	case 4:
		printf("Fail!\n");
		break;
	case 5:
		printf("CC\n");
		break;
	case 6:
		printf("CB\n");
		break;
	case 7:
		printf("BB\n");
		break;
	case 8:
		printf("BA\n");
		break;
	case 9:
		printf("AA\n");
		break;
	default:
		printf("Fail!\n");
	}
	}
	else{ printf("enter appropriate note"); }
	return 0;
}