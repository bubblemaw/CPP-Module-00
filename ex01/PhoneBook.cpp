/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:30:54 by masase            #+#    #+#             */
/*   Updated: 2025/05/27 16:59:14 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    int PhoneBook::add_contact(int i)
    {
        contacts[i].set_first();
        contacts[i].set_last();
        contacts[i].set_phone();
        contacts[i].dark();
        if (contact_postion + 1 != 7)
            contact_postion++;
        else
            contact_postion = 0;
        return (0);
    }
    int PhoneBook::display_contact()
    {
        int i = 0;
        while (i < 8)
        {
            contacts[i].display_first_name();
            contacts[i].display_last_name();
            contacts[i].display_phone_number();
            contacts[i].display_dark_secret();
            i++;
        }
        return (0);
    }
    