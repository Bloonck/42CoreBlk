/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:03:06 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/11/18 19:08:32 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

// SENDING CHARACTER DATA THROUGH BITS (BINARY) BY USING BITWISE OPERATOR '&'

void	minispeak(int process_id, char *string_to_send)
{
	int	length;
	int	bit_count;
	int	i;

	length = ft_strlen(string_to_send);
	bit_count = 0;
	i = 0;
	while (i++ < length)
	{
		while (bit_count++ < 8)
		{
			if ((string_to_send[i] & (0x80 >> bit_count)) == 0x80)
				kill(process_id, SIGUSR1);
			else
				kill(process_id, SIGUSR2);
			bit_count++;
			usleep(1000);
		}
		bit_count = 0;
		usleep(3000)
	}
}
//=======================================================================

// HANDLING INVALID INPUT AND PARSING VALID INPUT TO BE SENT TO SERVER 

int	main(int argc, char **argv)
{
	int		process_id;
	char	*string_to_send;

	if (argc != 3)
	{
		ft_printf("Use case: ./client [PID of server] [Message]\n");
		return (2);
	}
	process_id = ft_atoi(argv[1]);
	string_to_send = argv[2];
	minispeak(process_id, string_to_send);
	return (0);
}

//=======================================================================
