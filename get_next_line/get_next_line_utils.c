/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zorwa <zorwa@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 20:15:35 by zorwa             #+#    #+#             */
/*   Updated: 2026/05/14 20:29:47 by zorwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static char	*free_memory(char *ptr1, char *ptr2)
{
	free(ptr1);
	free(ptr2);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, unsigned int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (unsigned int)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned int)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	char	*ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	ptr = joined;
	while (*s1)	
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (joined);
}

