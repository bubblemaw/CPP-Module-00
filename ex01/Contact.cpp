/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:30:13 by masase            #+#    #+#             */
/*   Updated: 2025/07/25 13:56:50 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first()
{
	std::cout << "Enter first name:\n";
	std::getline(std::cin, first_name);
}

void Contact::set_last()
{
	std::cout << "Enter last name:\n";
	std::getline(std::cin, last_name);
}

void Contact::set_nick()
{
	std::cout << "Enter nickname:\n";
	std::getline(std::cin, nickname);
}     

int Contact::set_phone()
{
	std::string input;
	int i;
	int valid = true;

	while (true)
	{
		std::cout << "Enter phone number:\n";
		std::getline(std::cin, input);
		if(std::cin.eof() || std::cin.fail())
			return (0);
		i = 0;
		while (input[i])
		{
			if (!std::isdigit(input[i]))
			{
				std::cout << "Please only enter number\n";
				valid = false;
				break ;
			}
			valid = true;
			i++;
		}
		if (valid == true)
		{
			phone_number = input;
			break ;
		}
	}
	return (1);
	}

void Contact::set_dark()
{
	std::cout << "Please enter darkest secret:\n";
	std::getline(std::cin, dark_secret);
}

void Contact::display_first_name()
{
	if (first_name.size() >= 10)
	{
		std::cout << first_name.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		for(int i = first_name.length() - 10; i < 0; i++)
			std::cout << " ";
		std::cout << first_name;
	}
}

void Contact::display_last_name()
{
	if (last_name.size() >= 10)
	{
		std::cout << last_name.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		for(int i = last_name.length() - 10; i < 0; i++)
			std::cout << " ";		
		std::cout << last_name;
	}
}

void Contact::display_nickname()
{
	if (nickname.size() >= 10)
	{
		std::cout << nickname.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		for(int i = nickname.length() - 10; i < 0; i++)
			std::cout << " ";		
		std::cout << nickname;
	}
}
void Contact::display_phone_number()
{
	if (phone_number.size() >= 10)
	{
		std::cout << phone_number.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		for(int i = phone_number.length() - 10; i < 0; i++)
			std::cout << " ";		
		std::cout << phone_number;
	}
}
void Contact::display_dark_secret()
{
	if (dark_secret.size() >= 10)
	{
		std::cout << dark_secret.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		for(int i = dark_secret.length() - 10; i < 0; i++)
			std::cout << " ";		
		std::cout << dark_secret;
	}
}

void Contact::full_first_name()
{
	std::cout << "First name: " << first_name << std::endl;
}

void Contact::full_last_name()
{
	std::cout << "Last name: "  << last_name << std::endl;
}

void Contact::full_nickname()
{
	std::cout << "Nickname: "  << nickname << std::endl;
}
void Contact::full_phone_number()
{
	std::cout << "Phone number: "  << phone_number << std::endl;
}
void Contact::full_dark_secret()
{
	std::cout << "Darkest secret: " << dark_secret << std::endl;
}
