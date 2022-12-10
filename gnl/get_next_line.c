/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:23:11 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 21:28:16 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

char	*read_data_by_buffer(int fd, char *saved)
{
	char	*buffer;
	int		i;

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	i = 1;
	while ((ft_strchr(saved, '\n') == NULL) && i != 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i <= 0)
			break ;
		buffer[i] = '\0';
		saved = ft_strjoin(saved, buffer);
	}
	free(buffer);
	return (saved);
}

char	*split_line(char *saved)
{
	char	*new_line;
	int		i;

	new_line = malloc(sizeof(char) * ft_strlen(saved) + 1);
	if (new_line)
	{
		i = 0;
		while (saved[i] && saved[i] != '\n')
		{
			new_line[i] = saved[i];
			i++;
		}
		new_line[i] = '\0';
	}
	return (new_line);
}

char	*get_rest_data(char *saved)
{
	char	*result;
	int		i;

	i = 0;
	while (saved[i] && saved[i] != '\n')
		i++;
	if (!saved[i] || !saved[i + 1])
		return (free(saved), NULL);
	i++;
	result = ft_strdup(saved + i);
	free(saved);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*data = NULL;
	char		*line;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	data = read_data_by_buffer(fd, data);
	if (!data)
		return (NULL);
	line = split_line(data);
	data = get_rest_data(data);
	return (line);
}
