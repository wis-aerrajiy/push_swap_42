/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <aerrajiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:33:15 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/12/09 19:21:04 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(s1);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (dup = NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	int		i;
	int		s;
	char	*joined;

	s = 0;
	i = 0;
	if (!s1)
		s1 = ft_strdup("");
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	joined = malloc((len + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	while (((char *)s1)[i] != '\0')
		joined[s++] = ((char *)s1)[i++];
	i = 0;
	while (((char *)s2)[i] != '\0')
		joined[s++] = ((char *)s2)[i++];
	joined[s] = '\0';
	free(s1);
	return (joined);
}
