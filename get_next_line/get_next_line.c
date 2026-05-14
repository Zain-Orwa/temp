/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zorwa <zorwa@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:57:30 by zorwa             #+#    #+#             */
/*   Updated: 2026/05/14 12:31:33 by zorwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*free_memory(char *ptr1, char *ptr2)
{
	free(ptr1);
	free(ptr2);
	return (NULL);
}

static char	*read_to_stock(int fd, char *stock)
{
	char	*joined;
	char	*buffer;
	ssize_t	bytes_read;

	buffer = malloc(BUFFER_SIZE + 1)
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(stock, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free_memory(buffer, stock));
		buffer[bytes_read] = '\0';
		joined = ft_strjoin(stock, buffer);
		if (!joined)
			return (free_memory(buffer, stock));
		free(stock);
		stock = joined;

	}
	free(buffer);
	return (stock);
}

static char	*extract_line(char *stock)
{
	size_t	i;
	size_t	len;
	char	*line;

	if (!stock || !stock[0])
		return (NULL);
	len = 0;
	while (stock[len] && stock[len] != '\n')
		len++;
	if (stock[len] == '\n')
		len++;
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < len)
	{
		line[i] = stock[i];	
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*clean_old_stock(char *stock)
{
	size_t	i;
	size_t	len;
	char	*clean;	
	
	if (!stock || !stock[0])
		return (NULL);
	clean = ft_strchr(stock, '\n');
	if (*clean == '\n' && *clean != '\0')
		clean = clean + 1;
	len = ft_strlen(clean);
	free(stock);
	stock = malloc(len + 1);
	if (!stock)
		return (NULL);
	i = 0;
	while (i < len)
	{
		stock[i] = clean[i];
		i++;
	}
	free(clean);
	stock[len] = '\0';
	return (stock);
}

char	*get_next_line(int fd)
{
	static char	*stock;
	char		*line;

	stock = read_to_stock(fd, stock); 
	if (!stock)
	{
		free()
	}

}
