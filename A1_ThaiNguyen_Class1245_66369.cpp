//A1_ThaiNguyen_Class1245_66369
#include <stdio.h>
#include <math.h>
#include <ctype.h>

//1.
int CountL(char word[]);
//2.
int sumFunction(int numbers[], int size);
//3.
double distanceFunction(double x0, double x1, double y0, double y1);
//4.
int palindrome(char word[]);




int main()
{
	//1. 
	char word[] = "Hello";
	int count = CountL(word);
	printf("1.There are %d letters 'l' in the word\n", count);
	printf("\n");

	//2.
	int numbers[] = { 5,1,4 };
	int sizeofArray = sizeof(numbers) / sizeof(numbers[0]);
	int total = sumFunction(numbers, sizeofArray);

	printf("2.The sum of the integer array is %d \n", total);
	printf("\n");



	//3.
	int x0 = 1, y0 = 1;
	int x1 = 5, y1 = 4;
	double distance = distanceFunction(x0, x1, y0, y1);
	printf("3.The distance between two points is: %4.2f \n", distance);
	printf("\n");



	//4
	char word1[] = "civic";
	char word2[] = "Hannah";
	char word3[] = "radar";

	printf("4. \n");
	printf("%s is a palindrome: %d (1 is yes, 0 is no) \n", word1, palindrome(word1));
	printf("%s is a palindrome: %d (1 is yes, 0 is no) \n", word2, palindrome(word2));
	printf("%s is a palindrome: %d (1 is yes, 0 is no) \n", word3, palindrome(word3));
	printf("\n");
	printf("\n");




	/*5. If you work the following hours, use a switch statement to display the hours worked in a given day.
		Monday to Friday: 8 hours
		Saturday: 6 hours
		Sunday: off
	*/

	// 'M' for Monday, 'T' for Tuesday, 'W' for Wednesday, 'R' for Thursday, 'F' for Friday, 
	// 'S' for Saturday, 'U' for Sunday
	char day = 'W';
	printf("5. \n");

	switch (day) {
	case 'M':
	case 'T':
	case 'W':
	case 'R':
	case 'F':
		printf("You worked 8 hours.\n");
		break;
	case 'S':
		printf("You worked 6 hours.\n");
		break;
	case 'U':
		printf("You have the day off.\n");
		break;
	default:
		printf("Invalid day entered.\n");
	}

	printf("\n");
	printf("\n");





	/*6. Ask the user to enter a positive integer and display it. Continue this until the user enters a zero or a
		negative number.
		Hint: use a while loop. There is no Boolean type in C, so use 1 as true and 0 as false.
	*/
	int userInput;
	printf("6. \n");

	while (1)
	{
		printf("Enter a positive number (press 0 or negative number to stop) : ");
		scanf_s("%d", &userInput);
		if (userInput > 0)
		{
			printf("You entered: %d\n", userInput);
		}
		else
		{
			break;
		}
	}

	printf("Program stopped \n");

	return 0;
}


//FUNCTION PART

//1. Write a function to count the number of the letter ‘l’ in the word “Hello”.
int CountL(char word[])
{
	int count = 0;
	for (int i = 0; word[i] != '\0'; i++)  //loop the word until it reach the stop sign
	{
		if (word[i] == 'l')
		{
			count++;
		}
	}
	return count;

}


//2. Write a function to find the sum of the integer array of 5, 1, 4
int sumFunction(int numbers[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += numbers[i];
	}
	return sum;
}


/*3. Write a function to find the distance between two points. Each point is characterized by an x and a y
	as follows.
	Point 0: x0 = 1, y0 = 1
	Point 1: x1 = 5, y1 = 4
	Distance = √( (x1−x0)^2 +(y1 − y0)^2 )
	Hint: include stdlib.h in your file and from it use functions sqrt() and pow().
*/
double distanceFunction(double x0, double x1, double y0, double y1)
{
	double distance = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));
	return distance;
}



/*4. Write a function to determine if a word is a palindrome. A palindrome is a word that reads the same
	from right and from left. For example civic, Hannah, and radar.
*/
int palindrome(char word[])
{
	int length = 0;
	while (word[length] != '\0')  //same loop as in question 1 but while loop instead of for
	{
		length++;
	}

	for (int i = 0; i <= length / 2; i++)			//loop till the middle only
	{
		if (tolower(word[i]) != tolower(word[length - 1 - i])) { 	//I looked for this tolower() function of <ctype.h> library on Google, earlier I only do (word[i] != word[length -1 -i])
			return 0;
		}
	}
	return 1;

}







