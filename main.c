/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorakann <sorakann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:59:47 by ski               #+#    #+#             */
/*   Updated: 2022/04/18 23:18:06 by sorakann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/* ************************************************************************** */
int main (int argc, char **argv, char **envp)
{
	t_data d;
	char *new_line;
	char *inputrc;

	inputrc = getenv("INPUTRC");
	printf("PATH .inputrc: %s\n", inputrc);
	
	new_line = NULL;
	init_struc_sigaction(&d);
	link_signal_main(&d);
	// ---------------------------------------------------
	while (1)
	{
		new_line = readline(MSG_PROMPT);
		if (new_line)
			free(new_line);		
	}	
	// ---------------------------------------------------
	return (0);
}