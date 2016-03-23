/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels){

	*vowels = 0;
	*consonants = 0;

	if (str == NULL)
		return;

	for (int i = 0; str[i] != '\0'; i++)
	{
		//if vowel increment vowles
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			*vowels = *vowels + 1;
		//if neither vowel nor consonant continue
		else if (str[i] == ' ' || str[i] == '.' || str[i] == '?' || (str[i] >= '0' && str[i] <= '9'))
			continue;
		//if consonant increment consonants
		else
			*consonants = *consonants + 1;
	}

}
