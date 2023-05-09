/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tas <tas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:20:46 by tas               #+#    #+#             */
/*   Updated: 2023/04/30 23:32:19 by tas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    return;
}

PhoneBook::~PhoneBook(void)
{
    
}


void    PhoneBook::add(Contact *repertory)
{
    std::string data;
    
    std::cout << "Please enter your information" << std::endl;
    if (PhoneBook::index >= 8)
        PhoneBook::index = 0;
    
    std::cout << "First name: ";
    std::cin >> data;
    repertory[PhoneBook::index].FirstName = data;

    std::cout << "Last name: ";
    std::cin >> data;
    repertory[PhoneBook::index].LastName = data;

    std::cout << "Nickname: ";
    std::cin >> data;
    repertory[PhoneBook::index].Nickname = data;

    std::cout << "Phone number: ";
    std::cin >> data;
    repertory[PhoneBook::index].PhoneNumber = data;

    std::cout << "Darkest secret: ";
    std::cin >> data;
    repertory[PhoneBook::index].DarkestSecret = data;

    std::cout << repertory[PhoneBook::index].FirstName << " " << repertory[PhoneBook::index].LastName << "has been added"
    PhoneBook::index++;
}

void    PhoneBook::search(Contact *repertory)
{
    
}
