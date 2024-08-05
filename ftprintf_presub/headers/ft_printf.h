/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:55:15 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/05 16:19:24 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

//------------ Printf --------------//
int	ft_printf(const char *string, ...);
//----------------------------------//

//------------ Print Utils -------------//
int	ft_printchar(char c);
int	ft_printpercent(void);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_printptr(uintptr_t pointer);
int	ft_printhex(unsigned int number, const char format);
int	ft_printuint(unsigned int n);
//--------------------------------------//

#endif
