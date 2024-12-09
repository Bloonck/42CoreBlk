/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:37:09 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/11/21 16:18:49 by zbin-md-         ###   ########.fr       */
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
	if (signal == SIGUSR1)
		kill(info->si_pid, SIGUSR1);
	else if (signal == SIGUSR2)
		kill(info->si_pid, SIGUSR2);
}

int	main(void)
{
	int		process_id;
	struct	sigaction	sa;

	sa.sa_sigaction = &action;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	process_id = getpid();
	ft_printf("Server PID is %i\n", process_id);
	sigaction(SIGUSR1, &sa, minihandler);
	sigaction(SIGUSR2, &sa, minihandler);
	while (1)
		pause();
	return (0);
}
