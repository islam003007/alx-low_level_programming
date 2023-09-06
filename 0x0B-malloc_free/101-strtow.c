#include "main.h"

/**
 * word_count - counts number of words in a string
 *
 * @str: inputs string.
 *
 * Return: number of words of a string.
*/

int word_count(char *str)
{
	int i;
	int words = 0;

	if (str[0] != ' ')
		words++;

	for (i = 1; str[i]; i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
			words++;
	}

	return (words);
}

/**
 * new_word - assigns a new word to a string.
 *
 * @str: inputs orginal string of words.
 * @word: pointer to the new word.
 * @start: start of a word in the original string.
 *
 * Return: end of the word in the original string.
*/

int new_word(char *str, char **word, int start)
{
	int end;
	int i = 0;

	for (start = start; str[start] == ' ' && str[start]; start++)
		;

	for (end = start; str[end] != ' ' && str[end]; end++)
		;

	end--;

	*word = malloc(sizeof(char) * (end - start + 2));

	if (word == NULL)
		printf("fail");

	for (start = start; start <= end; start++)
		(*word)[i++] = str[start];

	(*word)[i] = '\0';

	return (start);
}

/**
 * strtow - splits strings into words.
 *
 * @str: inputs string.
 *
 * Return: pointer to array of words.
*/

char **strtow(char *str)
{
	int i;
	int start = 0;
	int words = word_count(str);
	char **words_arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	words_arr = malloc(sizeof(char *) * words + 1);

	if (words_arr == NULL)
	{
		printf("fail\n");
		return (NULL);
	}

	if (words == 1)
	{
		words_arr[0] = NULL;
		return (words_arr);
	}

	for (i = 0; i < words; i++)
	{
		start = new_word(str, words_arr + i, start);
	}

	words_arr[i] = NULL;

	return (words_arr);
}
