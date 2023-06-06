/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tas <tas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:04:34 by tas               #+#    #+#             */
/*   Updated: 2023/06/06 14:10:36 by tas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

/* init var class */

	int	Account::_nbAccounts = 0;
	int Account::_totalAmount = 0;
	int Account::_totalNbDeposits = 0;
	int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposite)
{
    _amount = initial_deposite;
    _accountIndex = _nbAccounts++; 
    _totalAmount += initial_deposite;
    
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";created" << std::endl; 
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";closed" << std::endl; 
}

void    Account::_displayTimestamp(void)
{
    time_t	rawtime = time(NULL);
	struct	tm * timeinfo = localtime(&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mon << timeinfo->tm_mday << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "]";
}

int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

int Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl; 
}



void    Account::makeDeposit( int deposite )
{
    
}

bool Account::makeWithdrawal( int withdrawal )
{
    
}

int Account::checkAmount( void ) const
{
    return (_amount);
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl; 
}
