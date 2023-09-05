/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:28:31 by maria-sg          #+#    #+#             */
/*   Updated: 2023/09/05 19:21:06 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_words(char const *s, char c)
// {
// 	size_t	words;
	
// 	if (!s)
// 		return (0);
// 	words = 0;
// 	while (*s)
// 	{
// 		while (*s == c)
// 			s++;
// 		if (*s)
// 		{
// 			words++;
// 			while (*s != c && *s)
// 				s++;
// 		}
// 	}
// 	return (words);
// }

// size_t	ft_wordlen(char const *s, char c)
// {
// 	size_t	size;

// 	size = 0;
// 	while (*s != c && *s)
// 	{
// 		size++;
// 		s++;
// 	}
// 	return (size);
// }

// // void	ft_free(char **substr, size_t i)
// // {
// // 	while (i-- > 0)
// // 	{
// // 		free(substr[i]);
// // 	}
// // 	free(substr);
// // }

// char	**ft_split(char const *s, char c)
// {
// 	char	**substrs;
// 	size_t	words;
// 	size_t	wordlen;
// 	size_t	i;
// 	size_t	j;

// 	if (!s)
// 		return (NULL);

// 	i = 0;
// 	j = 0;
// 	words = ft_words(s, c);
// 	substrs = (char **)malloc((words + 1) * sizeof(char *));
// 	if (!substrs)
// 		return (NULL);
// 	while (j < words)
// 	{
// 		while (s[i] == c)
// 			i++;
// 		wordlen = ft_wordlen(s + 1, c);
// 		substrs[j] = ft_substr(s, i, wordlen);
// 		if (!substrs[j])
// 		{
// 			while (j > 0)
// 				free(substrs[--j]);
// 			free(substrs);
// 			return (NULL);
// 		}
// 		i = i + wordlen;
// 		j++;
// 	}
// 	substrs[j] = 0;
// 	return (substrs);
// }

static int	ft_count_word(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	if (!(strs = (char **)malloc((word + 1) * sizeof(char *))))
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		if (!(strs[j] = ft_substr(s, i, size)))
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += size;
	}
	strs[j] = 0;
	return (strs);
}


		
	// if (!s)
	// 	return (NULL);
	// substrs = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *));
	// if (!substrs)
	// 	return (NULL);
	// i = 0;
	// while (*s)
	// {
	// 	while (*s == c && s)
	// 		s++;
	// 	if (*s)
	// 	{
	// 		if (!ft_strchr(s, c)) //calculates length of current word
	// 			len = ft_strlen(s);
	// 		else
	// 			len = ft_strchr(s, c) - s;
	// 		substrs[i++] = ft_substr(s, 0, len);
	// 		s = s + len;
	// 	}
	// }
	// substrs[i] = NULL;
	// return (substrs);
//}

//search for character inside the string
//count how many words you have
//calculate the length of those words (so you can malloc later)
//create as many new strings as words yyou have
//malloc for those
//check if null
//populate strings
//return new strings