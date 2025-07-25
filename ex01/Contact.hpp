/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:37:31 by masase            #+#    #+#             */
/*   Updated: 2025/07/25 14:10:59 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <ostream>
# include <string> 
# include <cctype>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
		std::string nickname;
        std::string phone_number;
        std::string dark_secret;
    public:
        void set_first();
        void set_last();  
		void set_nick();
        int  set_phone();
        void set_dark();

        void display_first_name();
        void display_last_name();
        void display_phone_number();
        void display_dark_secret();
		void display_nickname();

        void full_first_name();
        void full_last_name();
		void full_nickname();
        void full_phone_number();
        void full_dark_secret();
};

#endif