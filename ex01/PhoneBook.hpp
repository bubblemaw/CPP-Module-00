/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:37:07 by masase            #+#    #+#             */
/*   Updated: 2025/05/27 16:59:55 by masase           ###   ########.fr       */
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

    public:
        int contact_postion;
        int add_contact(int i);
        int display_contact();
};

#endif