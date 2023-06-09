/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tas <tas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:15:06 by tas               #+#    #+#             */
/*   Updated: 2023/05/10 09:38:46 by tas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

/******************************************************************************/
/*                            includes                                        */
/******************************************************************************/

#include <string.h>
#include <iostream>
#include <stdlib.h>

/******************************************************************************/
/*                             classes                                        */
/******************************************************************************/

class Contact
{
    public:
        Contact(void);
        ~Contact(void);

    // private:
    
        std::string  FirstName;
        std::string  LastName;
        std::string  Nickname;
        std::string  PhoneNumber;
        std::string  DarkestSecret;
};

#endif