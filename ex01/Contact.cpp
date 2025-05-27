/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:30:13 by masase            #+#    #+#             */
/*   Updated: 2025/05/27 19:47:19 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

    void Contact::set_first()
    {
        std::cout << "please enter the first name\n";
        std::getline(std::cin, first_name);
        std::cout << "we just put the first name" << first_name << std::endl;
    }
    
    void Contact::set_last()
    {
        std::cout << "please enter the last name\n";
        std::getline(std::cin, last_name);
        std::cout << "we just put the last_name" << last_name << std::endl;
    }     

    void Contact::set_phone()
    {
        std::cout << "please enter the phone number\n";
        std::getline(std::cin, phone_number);
        std::cout << "we just put the phone_number" << phone_number << std::endl;
    }

    void Contact::dark()
    {
        std::cout << "please enter the darkest secret\n";
        std::getline(std::cin, dark_secret);
        std::cout << "we just put the dark_secret" << dark_secret <<  std::endl;
    }
    
    void Contact::display_first_name()
    {
        std::cout << first_name;
    }
    
    void Contact::display_last_name()
    {
        std::cout << last_name.max_size();
    }
    void Contact::display_phone_number()
    {
        std::string print;
        if (phone_number.size() > 10)
        {
            
        }
        std::cout << phone_number;
    }
    void Contact::display_dark_secret()
    {
        std::cout << dark_secret << std::endl;
    }
    