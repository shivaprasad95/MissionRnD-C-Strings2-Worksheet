/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	int l = 0;
	int t = 0;
	int flag = 0;
	char * word;
	word = (char *)malloc(10 * sizeof(char));

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')   //storing starting index of valid word in t.
			t = i + 1;

		if (str[i + 1] == '\0' && flag == 0)    //if we reach end of string
		{
			flag = 1;    //dont come to this if again
			i = t;      //getting starting index of last valid word
		}
		if (flag == 1)
		{
			if (str[i] == ' ')    //skip if ending has spaces
				continue;
			word[l++] = str[i];   //store last word if its not space
		}
	}

	word[l] = '\0';

	return word;
}
