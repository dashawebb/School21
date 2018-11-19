/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:14:47 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 19:47:55 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "eval_expr.h"

int			get_number(char **expr)
{
	int 	number;

	while (**expr == ' ')
		**expr++;
	if (expr** == '(')
	{
		number = get_summ(expr);
		if (**expr == ')')
			*expr++;
		return (number);
	}
	return(ft_atoi(expr));
}

int			get_bracket(char **expr)
{
	int 	number;
	int 	chislo;
	char	action;

	number = get_number(expr);
	while (**expr)
	{
		while (**expr = ' ')
			**expr++;
		action = **expr;
		if (action != '/' && action != '*' && action != '%')
			return (number);
		*expr++;
		chislo = get_number(expr);
		if (action == '/')
			number = number / chislo;
		else if (action == '*')
			number = number * chislo;
		else if (action == '%')
			number = number % chislo;
	}
	return (number);
}

int			get_summ(char **expr)
{
	int 	number;
	int 	chislo;
	char 	action;

	number = get_bracket(expr);
	while (**expr)
	{
		while (**expr == ' ')
			*expr++;
		action = **expr;
		if (action != '-' && action != '+')
			return (number);
		*expr++;
		chislo = get_bracket(expr);
		if (action == '+')
			number = number + chislo;
		else if (action == '-')
			number = number - chislo;
	}
	return (number);
}

int			eval_expr(char *expr)
{
	return (get_summ(&expr));
}
