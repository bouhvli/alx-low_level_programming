#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * count_words - as the name shows.
 * @str: the string we want to operate
 *
 * Return: number of words.
 */
int count_words(char *str)
{
	int num_words = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] != '\0')
		{
			num_words++;
		}
		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}
	}
	return (num_words);
}
/**
 * split_string - splites the string
 * @str: the string
 * @num_words: number of words.
 *
 * Return: null if the memory allocation faild the double pointer.
 */
static char **split_string(char *str, int num_words)
{
	int word_index = 0, word_start, word_len, i = 0, j = 0;
	char **words = (char **) malloc((num_words + 1) * sizeof(char *)), *word;

	if (words == NULL)
		return (NULL);
	memset(words, 0, (num_words + 1) * sizeof(char *));
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			word_start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			word_len = i - word_start;
			word = malloc((word_len + 1) * sizeof(char *));
			if (word == NULL)
			{
				while (j < word_index)
				{
					free(words[j]);
					j++;
				}
				free(words);
				return (NULL);
			}
			strncpy(word, &str[word_start], word_len);
			word[word_len] = '\0';
			words[word_index] = word;
			word_index++;
		}
	}
	words[num_words] = NULL;
	return (words);
}
/**
 * strtow - splits a string into words;
 * @str: the string.
 *
 * Return: returns NULL if str == NULL or str == "";
 * returns a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	int num_words;
	char **words;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	num_words = count_words(str);
	words = split_string(str, num_words);
	return (words);
}
