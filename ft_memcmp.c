/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccakir <ccakir@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:23:27 by ccakir            #+#    #+#             */
/*   Updated: 2025/06/03 12:23:27 by ccakir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = (char *)s1;
	ptr2 = (char *)s2;
	while (i < n)
	{
		if (ptr[i] - ptr2[i] != 0)
		{
			return (ptr[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
