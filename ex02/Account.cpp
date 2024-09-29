/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrauss <mstrauss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:17:01 by mstrauss          #+#    #+#             */
/*   Updated: 2024/09/29 18:33:22 by mstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/* ------------------------------ Static inits ------------------------------ */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	
}

Account::Account(int initial_deposit)
{
}

Account::~Account(void)
{
}

void Account::makeDeposit(int deposit)
{
}

bool Account::makeWithdrawal(int withdrawal)
{
}

int Account::checkAmount(void) const
{
}

void Account::displayStatus(void) const
{
}

void Account::_displayTimestamp(void)
{
	std::
}
