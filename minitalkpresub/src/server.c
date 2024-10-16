/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:37:09 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/10/17 14:29:36 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	minihandler(int signal)
{
	static int		bits;
	static char		result;

	if (signal == SIGUSR1)
		bits = (bits << 1) | 1;
	else if (signal == SIGUSR2)
		bits = (bits << 1) | 0;
	if (bits == 8)
	{
		result = bits;
		ft_printf("%c", result);
		bits = 0;
		result = 0;
	}
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
}
