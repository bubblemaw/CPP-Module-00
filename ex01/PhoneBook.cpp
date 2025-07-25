/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:30:54 by masase            #+#    #+#             */
/*   Updated: 2025/07/25 14:10:35 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    int PhoneBook::add_contact()
    {
        contacts[contact_postion].set_first();
        contacts[contact_postion].set_last();
        contacts[contact_postion].set_nick();
        if(contacts[contact_postion].set_phone() == 0)
            return (0);
        contacts[contact_postion].set_dark();
        if (contact_postion + 1 != 8)
            contact_postion++;
		else
            contact_postion = 0;
		if (max_contact < 8)
			max_contact++;
        return (0);
    }
    int PhoneBook::display_contact()
    {
        int i = 0;
        while (i < max_contact)
        {
			std::cout << "[" << i + 1 << "] ";
            contacts[i].display_first_name();
			std::cout << " | ";
            contacts[i].display_last_name();
			std::cout << " | ";
            contacts[i].display_nickname();
            std::cout << " | ";
			std::cout << std::endl;
            i++;
        }
        return (0);
    }
	int	PhoneBook::display_choice(int i)
	{
		contacts[i].full_first_name();
		contacts[i].full_last_name();
        contacts[i].full_nickname();
		contacts[i].full_phone_number();
		contacts[i].full_dark_secret();
		return (0);
	}
    