/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:37:09 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/11/19 17:29:37 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	minihandler(int signal)
{
	static int					bits;
	static unsigned char		result;

	result |= (signal == SIGUSR1);
	bits++;
	if (bits == 8)
	{
		ft_printf("%c", result);
		bits = 0;
		result = 0;
	}
	else
		result <<= 1;
}

int	main(void)
{
	int	process_id;

	process_id = getpid();
	ft_printf("Server PID is %i\n", process_id);
	signal(SIGUSR1, minihandler);
	signal(SIGUSR2, minihandler);
	while (1)
		pause();
	return (0);
}
