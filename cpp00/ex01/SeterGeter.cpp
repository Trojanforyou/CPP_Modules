/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SeterGeter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:20:30 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/21 11:50:28 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Contact::SetFName(std::string FName)
{
    _FName = FName;
}
void Contact::SetLName(std::string LName)
{
    _LName = LName;
}
void Contact::SetNickname(std::string Nickname)
{
    _Nickname = Nickname;
}
void Contact::SetNumber(std::string Number)
{
    _Number = Number;
}
void Contact::SetSecret(std::string Secret)
{
    _Secret = Secret;
}
std::string Contact::GetFName()
{
    return(_FName);
}
std::string Contact::GetLName()
{
    return(_LName);
}
std::string Contact::GetNickname()
{
    return(_Nickname);
}
std::string Contact::GetNumber()
{
    return(_Number);
}
std::string Contact::GetSecret()
{
    return(_Secret);
}