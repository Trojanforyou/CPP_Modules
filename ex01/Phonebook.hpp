/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:12:34 by msokolov          #+#    #+#             */
/*   Updated: 2026/02/09 19:23:15 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class   Contact
{
    private:
        std::string _FirstName;
        std::string _LastName;
        std::string _Phone;
        std::string _Nickname;
        std::string _Secret;
    public:
        void    setFirstName(std::string arg);
        void    setLasName(std::string arg);
        void    setNickname(std::string arg);
        void    setPhone(std::string arg);
        void    setSecret(std::string arg);
        std::string getFirstname();
        std::string getLastname();
        std::string getNickname();
        std::string getPhone();
        std::string getSecret();
};

class   Phonebook
{
    private:
        Contact contacts[8];
        int index = 0;
    public:
        void   Add();
        void   Search();
        void    Clear();
        void  Empty();
};
