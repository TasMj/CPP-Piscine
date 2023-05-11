/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tas <tas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:20:46 by tas               #+#    #+#             */
/*   Updated: 2023/05/11 10:21:46 by tas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "PhoneBook Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook Destructor called" << std::endl;
    return;
}


void    PhoneBook::add(Contact *repertory)
{
    std::string data;
    
    std::cout << "Please enter your information" << std::endl;
    if (PhoneBook::index == 7)
    {
        std::cout << "$$$$$$$$$$$$$\n";
        // if (PhoneBook::index == 7)
        PhoneBook::index = 0;
        PhoneBook::flag_full = 1;
    }
    
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

    std::cout << repertory[PhoneBook::index].FirstName << " " << repertory[PhoneBook::index].LastName << " has been added" << std::endl;;
    PhoneBook::index++;
}

void    PhoneBook::printContact(Contact *repertory, int index)
{
    PhoneBook::index = 0;
    while (PhoneBook::index < index)
        PhoneBook::index++;    
    std::cout << PhoneBook::index + 1;
    std::cout << " | ";
    std::cout << repertory[PhoneBook::index].FirstName;
    std::cout << " | ";
    std::cout << repertory[PhoneBook::index].LastName;
    std::cout << " | ";
    std::cout << repertory[PhoneBook::index].Nickname << std::endl;
}

void    PhoneBook::printList(Contact *repertory)
{
    int saveIndex = PhoneBook::index;
    if (PhoneBook::flag_full == 1)
        saveIndex = 8;
    PhoneBook::index = 0;
    while (PhoneBook::index < saveIndex)
    {
        printContact(repertory, index);
        PhoneBook::index++;
    }
}


void    PhoneBook::search(Contact *repertory)
{
//1 afficher tous le rep
//2 demander index
    
    // (void)repertory;
    printList(repertory);
    // int i = 0;
    // std::cout << "Please enter the number of the contact to display" << std::endl;
    // std::cout >> i;
    // if (i < 0 || i > 8)
    // {
        // std::cout << "error: index" << std::endl;
        // return ;
    // }
    
}



/* ______ _                       ______             _    
| ___ \ |                      | ___ \           | |   
| |_/ / |__   ___  _ __   ___  | |_/ / ___   ___ | | __
|  __/| '_ \ / _ \| '_ \ / _ \ | ___ \/ _ \ / _ \| |/ /
| |   | | | | (_) | | | |  __/ | |_/ / (_) | (_) |   < 
\_|   |_| |_|\___/|_| |_|\___| \____/ \___/ \___/|_|\_\
                                                    */    
                                                       