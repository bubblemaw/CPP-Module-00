/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:47:38 by masase            #+#    #+#             */
/*   Updated: 2025/05/30 23:04:31 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

int PhoneBook::search(PhoneBook &rep)
{
    char input[10];
    std::string prompt;
    int i;

	if (max_contact < 1)
	{
		std::cout << "No contacts in the book yet" << std::endl;
		return(0);
	}
    rep.display_contact();
    std::cout << "Choose the number of the contact you wanna see:" << std::endl;
    while(true)
    {
		std::cin.getline(input, 10);

		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << "EOF signal" << std::endl;	
			return (0);
		}
        i = std::atoi(input);
        if (i == 0)
        {
            std::cout << "wrong entry" << std::endl;
            continue ;
        }
        else if (i > max_contact)
        {
            std::cout << "this contact does not exist yet" << std::endl;
            continue ;
        }
        else
            break ;
    }
    rep.display_choice(i - 1);
    return (0);
}

int add(PhoneBook &rep)
{
    rep.add_contact();
    return (0);
}

int exit()
{
    exit (0);
    return (0);
}


int main (int ac, char **av)
{
    (void)ac;
    (void)av;
    PhoneBook rep;

    std::string prompt;
    while(std::getline(std::cin, prompt))
    {
        if (prompt == "SEARCH")
            rep.search(rep);
        else if (prompt == "ADD")
            add(rep);
        else if (prompt == "EXIT")
            exit(); 
    }
    return (0);
}
