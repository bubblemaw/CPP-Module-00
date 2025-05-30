/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:37:07 by masase            #+#    #+#             */
/*   Updated: 2025/05/30 12:36:18 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <ostream>
# include <cctype>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int contact_postion = 0;
        int max_contact = 0;
    public:

        int add_contact();
        int display_contact();
        int	display_choice(int i);
        int search(PhoneBook &rep);
};

#endif