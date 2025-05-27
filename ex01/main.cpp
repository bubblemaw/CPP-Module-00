/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:47:38 by masase            #+#    #+#             */
/*   Updated: 2025/05/27 19:28:08 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

int search(PhoneBook &rep)
{
    rep.display_contact();
    std::cout << "we're in search function\n";
    return (0);
}

int add(PhoneBook &rep)
{
    std::cout << "we're in add function\n";
    rep.add_contact(rep.contact_postion);
    return (0);
}

int exit()
{
    std::cout << "we're in exit function\n";
    return (0);
}


int main (int ac, char **av)
{
    (void)ac;
    (void)av;
    PhoneBook rep;

    rep.contact_postion = 0;
    std::string prompt;
    while(std::getline(std::cin, prompt))
    {
        if (prompt == "SEARCH")
            search(rep);
        else if (prompt == "ADD")
            add(rep);
        else if (prompt == "EXIT")
            exit(); 
    }
    return (0);
}
