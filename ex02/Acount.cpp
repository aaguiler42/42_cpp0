/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:53:38 by aaguiler          #+#    #+#             */
/*   Updated: 2022/10/06 19:53:56 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(){

}

Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed\n";
}

Account::Account(int initial_deposit){
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << getNbAccounts() << ";amount:" << initial_deposit << ";created\n";
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

int	Account::getNbAccounts(void){
	return (_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (_totalAmount);
}

int Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account::makeDeposit(int deposit){
	(void)deposit;
}

bool	Account::makeWithdrawal(int withdrawal){
	(void)withdrawal;
	return (true);
}

int	Account::checkAmount(void) const{
	return (_amount);
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::_displayTimestamp(void){
	std::cout << "[Timestamp] ";
}