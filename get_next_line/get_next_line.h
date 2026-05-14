/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zorwa <zorwa@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:57:42 by zorwa             #+#    #+#             */
/*   Updated: 2026/05/14 13:33:06 by zorwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

/* get_next_line.c */
char	*get_next_line(int fd);

/* get_next_line_utils.c */
char	*free_memory(char *ptr1, char *ptr2);
size_t	ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*clean_old_stock(char *stock);

#endif
