/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:37:31 by masase            #+#    #+#             */
/*   Updated: 2025/05/27 16:56:49 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <ostream>
# include <string> 

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string phone_number;
        std::string dark_secret;
    public:
        void set_first();
        void set_last();      
        void set_phone();
        void dark();

        void display_first_name();
        void display_last_name();
        void display_phone_number();
        void display_dark_secret();

};

#endif