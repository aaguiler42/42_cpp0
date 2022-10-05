/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:53:38 by aaguiler          #+#    #+#             */
/*   Updated: 2022/10/05 18:55:28 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 2;
int	Account::_totalAmount = 2;
int	Account::_totalNbDeposits = 2;
int	Account::_totalNbWithdrawals = 2;

Account::Account(){

}

Account::~Account(){
	
}

Account::Account(int initial_deposit){
	(void)initial_deposit;
}

int	Account::getNbAccounts(void){

	return (0);
}

int	Account::getTotalAmount(void){
	return (0);
}

int Account::getNbDeposits(void){
	return (0);
}

int	Account::getNbWithdrawals(void){
	return (0);
}

void	Account::displayAccountsInfos(void){
}

void	Account::makeDeposit(int deposit){
	(void)deposit;
}

bool	Account::makeWithdrawal(int withdrawal){
	(void)withdrawal;
	(void)_accountIndex;
	(void)_amount;
	(void)_nbDeposits;
	(void)_nbWithdrawals;
	return (true);
}

int	Account::checkAmount(void) const{
	return (0);
}

void	Account::displayStatus(void) const{

}

void	Account::_displayTimestamp(void){

}