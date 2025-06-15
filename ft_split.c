/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccakir <ccakir@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 00:25:42 by ccakir            #+#    #+#             */
/*   Updated: 2025/06/11 00:25:42 by ccakir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	word_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] && str[0] != c)
		count++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] && str[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*fill_word(char *start, char c)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	while (start[len] && start[len] != c)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = start[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * (word_count(str, c) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			res[j++] = fill_word(&str[i], c);
			while (str[i] && str[i] != c)
				i++;
		}
	}
	res[j] = NULL;
	return (res);
}
