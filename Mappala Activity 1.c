#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int selection;

	do {
		printf("Choose the following selection below:\n");
		printf("[1] Temperature Converter\n");
		printf("[2] Min and Max\n");
		printf("[3] Number Sorting\n");
		printf("[4] Letter Grade Equivalent\n");
		printf("[5] Finding the Mean of N numbers\n");
		printf("[6] The nth Power\n");
		printf("[7] Pattern Printing\n");
		printf("[8] Decimal to Binary, Octal and Hexadecimal\n");
		printf("[0] Exit\n");
		printf("Choice: ");
		scanf("%d", &selection);
		printf("\n\n");

		switch(selection){
			case 0:
				exit(0);
				break;
			case 1:
				temperature();
				break;
			case 2:
				minimumMaximum();
				break;
			case 3:
				sorting();
				break;
			case 4:
				grade();
				break;
			case 5:
				mean();
				break;
			case 6:
				power();
				break;
			case 7:
				pattern();
				break;
			case 8:
				decimalConvert();
				break;
			default:
				break;
		}
	} while(selection != 0);
	return 0;
}

int temperature(){
	int tempChoice, temp, convertedTemp;

	printf("Choose which to convert:\n");
	printf("[1] Celsius to Fahrenheit\n");
	printf("[2] Fahrenheit to Celsius\n");
	printf("[3] Main Menu\n");
	printf("Choice: ");
	scanf("%d", &tempChoice);

	while(tempChoice != 3) {
		printf("Enter temperature: ");
		scanf("%d", &temp);

		switch(tempChoice){
			case 1:
				convertedTemp = (temp * 1.8) + 32;
				printf("%d Celsius is %d Fahrenheit", temp , convertedTemp);
				break;
			case 2:
				convertedTemp = (temp - 32) * .5556;
				printf("%d Fahrenheit is %d Celsius", temp , convertedTemp);
				break;
			default:
				break;
		}
		printf("\n\n\n");
		tempChoice = 0;
		printf("Choice: ");
		scanf("%d", &tempChoice);
	}
	printf("\n\n\n");
	return main();
}

int minimumMaximum(){
	int array[30], size, x, minimum, maximum;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	printf("Enter elements in array: ");
	for(x = 0; x < size; x++){
		scanf("%d", &array[x]);
	}

	minimum = maximum = array[0];
    for(x = 1; x < size; x++)
    {
        if(minimum > array[x])
			minimum = array[x];
		if(maximum < array[x])
		    maximum = array[x];
    }
    printf("Minimum of array is : %d \n", minimum);
    printf("Maximum of array is : %d\n", maximum);
    printf("\n");

    return main();
}

int sorting(){
	int array[30], size, x, y, z, sortSelect;

	printf("Choose a sorting you want:\n");
	printf("[1] Ascending\n");
	printf("[2] Descending\n");
	printf("[3] Main Menu\n");
	printf("Choice: ");
	scanf("%d", &sortSelect);

	while(sortSelect != 3) {
		printf("Enter size of the array: ");
		scanf("%d", &size);

		printf("Enter elements in array: ");
		for(x = 0; x < size; ++x){
			scanf("%d", &array[x]);
		}

		for(x = 0; x < size; ++x){
			for(y = x + 1; y < size; ++y){
				if(array[x] > array[y]){
					z = array[x];
					array[x] = array[y];
					array[y] = z;
				}
			}
		}

		switch(sortSelect){
			case 1:
				printf("Ascending Order Result:\n");
				for(x = 0; x < size; ++x){
					printf("%d\n", array[x]);
				}
				break;
			case 2:
				printf("Descending Order Result:\n");
				for(x = size-1; x >= 0; --x){
					printf("%d\n", array[x]);
				}
				break;
			default:
				break;
		}
		sortSelect = 0;
		printf("Choice: ");
		scanf("%d", &sortSelect);
	}
	printf("\n\n\n");
	return main();
}

int grade(){
	int gradeOption;
	float grade;
	char letter;

	printf("Choose a grading system you want:\n");
	printf("[1] Percent Grade\n");
	printf("[2] 5.0 Scale\n");
	printf("[3] Main Menu\n");
	printf("Choice: ");
	scanf("%d", &gradeOption);

	while (gradeOption != 3){
		printf("Enter grade: ");
		scanf("%f", &grade);

		switch(gradeOption){
			case 1:
				if(grade >= 90)
					letter = 'A';
				else if(grade >= 80 && grade <= 89)
					letter = 'B';
				else if(grade >= 70 && grade <= 79)
					letter = 'C';
				else if(grade >= 65 && grade <= 69)
					letter = 'D';
				else
					letter = 'E';
				printf("The equivalent letter of %.0f is %c", grade, letter);
				break;
			case 2:
				if(grade > 4.0 && grade <= 5.0)
					letter = 'E';
				else if(grade >= 3.7 && grade <= 4.0)
					letter = 'D';
				else if(grade >= 2.6 && grade <= 3.6)
					letter = 'C';
				else if(grade >= 1.8 && grade <= 2.5)
					letter = 'B';
				else if (grade >= 1.0 && grade <= 1.7)
					letter = 'A';
				printf("The equivalent letter of %.1f is %c", grade, letter);
				break;
			default:
				break;
		}
		gradeOption = 0;
		printf("\nChoice: ");
		scanf("%d", &gradeOption);
	}
	printf("\n\n\n");
	return main();
}

int mean(){
	int array[30], size, x, remainder;
	int total = 0;
	float average;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	printf("Enter elements in array: ");
	for(x = 0; x < size; x++){
		scanf("%d", &array[x]);
		total += array[x];
	}

	average = total / (float)size;
	remainder = total % size;

	if (remainder != 0) {
		printf("Mean is: %.2f", average);
	} else {
		printf("Mean is: %.0f", average);
	}
	printf("\n\n\n");

	return main();
}

int power(){
	int base, exponent, x;
	long answer = 1;

	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter exponent: ");
	scanf("%d", &exponent);

	for(x = 1; x <= exponent; x++){
		answer *= base;
	}

	printf("%d raise to the power of %d is equal to %ld", base, exponent, answer);
	printf("\n\n\n");

	return main();
}

int pattern(){
	int i, j, row;

	printf("Enter the number of rows: ");
	scanf("%d", &row);

	for (i = 1; i <= row; i++){
		for (j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n\n");

	return main();
}

int decimalConvert(){
	int convertOption, number, x, y;
	int arrayConvert[50];
	int octal = 0, temp=1;

	printf("Choose which to convert:\n");
	printf("[1] Decimal to Binary\n");
	printf("[2] Decimal to Octal\n");
	printf("[3] Decimal to Hexadecimal\n");
	printf("[4] Main Menu\n");
	printf("Choice: ");
	scanf("%d", &convertOption);

	while (convertOption != 4){
		printf("Enter number to convert: ");
		scanf("%d", &number);

		switch(convertOption){
			case 1:
				printf("Binary of %d is ", number);
				for(x = 0; number > 0; x++){
					arrayConvert[x] = number % 2;
					number = number / 2;
				}

				for (x = x - 1; x >= 0; x--){
					printf("%d", arrayConvert[x]);
				}
				break;
			case 2:
				printf("Octal of %d is ", number);
				while (number != 0)
			    {
                octal = octal + ( number % 8 ) * temp;
			    	number = number / 8;
			        temp = temp * 10;
			    }
			    printf("%d", octal);
				break;
			case 3:
				printf("Hexadecimal of %d is ", number);
				while(number!=0)
			    {
			        temp = number % 16;
			        if (temp < 10)
			            temp = temp + 48;
			        else
			            temp = temp + 55;
			        arrayConvert[y] = temp;
			        y++;
			        number = number / 16;
			    }
			    for (y = y - 1; y >= 0; y--){
			    	printf("%c", arrayConvert[y]);
				}
				break;
			default:
				break;
		}
		convertOption = 0;
		printf("\nYour Choice: ");
		scanf("%d", &convertOption);
	}
	printf("\n\n\n");
	return main();
}
