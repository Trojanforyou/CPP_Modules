/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SeterGeter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:20:30 by msokolov          #+#    #+#             */
/*   Updated: 2026/02/08 22:42:55 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    Contact::setFirstName(std::string arg)
{
    _FirstName = arg;
}
void    Contact::setLasName(std::string arg)
{
    _LastName = arg;
}
void    Contact::setPhone(std::string arg)
{
    _Phone = arg;
}
void    Contact::setNickname(std::string arg)
{
    _Nickname = arg;
}
void    Contact::setSecret(std::string arg)
{
    _Secret = arg;
}

std::string Contact::getFirstname()
{
    return (_FirstName);
}
std::string Contact::getLastname()
{
    return (_LastName);
}
std::string Contact::getNickname()
{
    return (_Nickname);
}
std::string Contact::getPhone()
{
    return (_Phone);
}
std::string Contact::getSecret()
{
    return (_Secret);
}

 
