/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){

	int count = 0;
	int k = 0;
	int singleFlag = 0;

	if (word[1] == '\0') //if word is one char enable singleFlag
		singleFlag = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == word[k])
		{
			if (word[k + 1] == '\0'){   //if we reach end of word
				count++;                //increment count
				if (singleFlag != 1)    //if word is not single char decrement i
					i--;
				k = 0;
			}
			else
				k++;
		}
		else
			k = 0;

	}

	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

