/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 23:18:26 by maw               #+#    #+#             */
/*   Updated: 2025/07/25 14:38:16 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <ostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (_totalAmount);
}   
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
void	Account::_displayTimestamp( void )
{
	time_t now;
	struct tm *timeinfo;
	char buffer[18];

	now = time(0);
    timeinfo = localtime(&now);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer << " "; 
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout<< ";total:" << getTotalAmount();
	std::cout<< ";deposits:" << getNbDeposits();
	std::cout<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "deposit:" <<  deposit << ";";	
	std::cout << "p_amount:" <<  _amount << ";";
	std::cout << "nb_deposits:" <<  _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:" <<  "refused" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal; 
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" <<  withdrawal << ";";	
		std::cout << "amount:" <<  _amount << ";";
		std::cout << "nb_withdrawals:" <<  _nbDeposits << std::endl;
	}
	return (true);

}
int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "deposits:" <<  _nbDeposits << ";";
	std::cout << "withdrawals:" <<  _nbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "created" << std::endl;
}
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "closed" << std::endl;
}
