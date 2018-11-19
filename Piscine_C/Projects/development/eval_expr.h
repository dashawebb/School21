/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:57:56 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 18:59:30 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int	eval_expr(char **expr);
int get_summ(char **expr);
int	get_bracket(char **expr);
int	get_number(char **expr);

#endif
