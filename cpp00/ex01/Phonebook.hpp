/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:12:34 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 10:03:15 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Contact
{
    private:
    std::string _FName;
        std::string _LName;
        std::string _Nickname;
        std::string _Number;
        std::string _Secret;
    public:
        void SetFName(std::string FName);
        void SetLName(std::string Lname);
        void SetNickname(std::string Nickname);
        void SetNumber(std::string Number);
        void SetSecret(std::string Secret);
        std::string GetFName();
        std::string GetLName();
        std::string GetNickname();
        std::string GetNumber();
        std::string GetSecret();
        std::string ReadLine(const std::string &Prompt);
    };      
struct Phonebook
{
    private:
        static const int buf = 8;
        Contact _Contact[buf];
        int index = 0;
        int size = 0;
    public:
        void    Add(Contact &info);
        std::string    Search(Contact &info);
        std::string    SearchByIndex(Contact &info);
};