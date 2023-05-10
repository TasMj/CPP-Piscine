/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tas <tas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:48:51 by tas               #+#    #+#             */
/*   Updated: 2023/05/10 09:56:35 by tas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>


Contact::Contact(void) 
{
    std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void) 
{
    std::cout << "Contact Destructor called" << std::endl;
    return;
}

// void    set_contact(std::Contact &C)
// {
        // 
// }
