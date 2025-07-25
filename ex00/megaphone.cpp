/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:58:40 by masase            #+#    #+#             */
/*   Updated: 2025/07/25 13:23:26 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
    int i = 1;
    int j;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"; 
    }
    else
    {
        while(av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (isalpha(av[i][j]))
                {
                    av[i][j] = toupper(av[i][j]);
                }
                j++;
            }
            std::cout << av[i];
            i++;
        }
        std::cout << "\n";
    }
    return (0);
}