/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:28:10 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/03/22 18:28:10 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	i;
	int	count;
	int	flag;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static char	*ft_fill_word(const char *s, int wstart, int wend)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc((wend - wstart) + 1, sizeof(char));
	if (!word)
		return (NULL);
	while (wstart < wend)
	{
		word[i] = s[wstart];
		i++;
		wstart++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**start_variables(char c, size_t *index, int *j, const char *s)
{
	char	**split;

	*index = 0;
	*j = 0;
	if (!s)
		return (NULL);
	split = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	else
		return (split);
}

char	**ft_split(const char *s, char c)
{
	size_t	index;
	int		start_w;
	char	**split;
	int		j;

	start_w = -1;
	split = start_variables(c, &index, &j, s);
	if (!split)
		return (NULL);
	while (index <= ft_strlen(s))
	{
		if (s[index] != c && start_w < 0)
			start_w = index;
		else if ((s[index] == c || index == ft_strlen(s))
			&& start_w >= 0)
		{
			split[j] = ft_fill_word(s, start_w, index);
			if (!split[j])
				return (ft_free(split, j));
			start_w = -1;
			j++;
		}
		index++;
	}
	return (split);
}
