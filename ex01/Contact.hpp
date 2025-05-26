/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:37:31 by masase            #+#    #+#             */
/*   Updated: 2025/05/26 14:44:42 by masase           ###   ########.fr       */
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
        void set_first(std::string str)
        {
            first_name = str;
            std::cout << "we just put the first name" << first_name << std::endl;
        }
        void set_last(std::string str)
        {
            last_name = str;
            std::cout << "we just put the last_name" << last_name << std::endl;
        }        
        void set_phone(std::string str)
        {
            phone_number = str;
            std::cout << "we just put the phone_number" << phone_number << std::endl;
        }
        void dark(std::string str)
        {
            dark_secret = str;
            std::cout << "we just put the dark_secret" << dark_secret <<  std::endl;
        }
};

#endif