/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccakir <ccakir@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:50:52 by ccakir            #+#    #+#             */
/*   Updated: 2025/06/11 14:50:52 by ccakir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, char (*f)(unsigned int, char))
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = (*f)(i, s[i]);
		i++;
	}
}
