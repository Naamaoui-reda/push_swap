#include "header.h"
#define BUFFER_SIZE 1

static void	free_null(char **p)
{
	free (*p);
	*p = NULL;
}

static char	*read_line(int fd, char *current)
{
	char	buffer[BUFFER_SIZE + 1];
	int		read_bytes;
	char	*tmp;

	read_bytes = 1;
	if (current == NULL)
		current = ft_strdup ("");
	while (!ft_strchr (current, '\n') && read_bytes)
	{
		read_bytes = read (fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			free_null (&current);
			return (0);
		}
		buffer[read_bytes] = 0;
		tmp = current;
		current = ft_strjoin(current, buffer);
		free (tmp);
		tmp = NULL;
	}
	return (current);
}

static char	*return_line(char **current)
{
	char	*temp;
	char	*rest;

	if (ft_strlen(*current) && !ft_strchr (*current, '\n'))
	{
		temp = ft_strdup (*current);
		free_null (current);
		return (temp);
	}
	else if (ft_strchr (*current, '\n'))
	{
		temp = ft_substr(*current, 0, ft_strchr(*current, '\n') - *current + 1);
		if (BUFFER_SIZE != 1)
		{
			rest = ft_strdup(ft_strchr(*current, '\n') + 1);
			free_null (current);
			*current = rest;
		}
		else
			free_null (current);
		return (temp);
	}
	free_null (current);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*current;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	current = read_line (fd, current);
	if (!current)
		return (0);
	return (return_line(&current));
}