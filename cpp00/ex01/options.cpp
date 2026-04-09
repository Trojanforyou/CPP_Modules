/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:02:37 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 14:23:32 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string Contact::ReadLine(const std::string &Prompt)
{
    std::string input;
    while (true)
    {
        std::cout << Prompt;
        if (!getline(std::cin, input))
            return input;
        else if (input.empty())
        {
            std::cout << "Field cannot be empty, try again." << std::endl;
            continue;
        }
        else
            return(input);
    }
    return (0);
}
void PrintMessage(std::string &input)
{
    std::cout << "Hello! And welcome to 80's Phonebook!" << std::endl;
    std::cout << "1) Add\n2) Search\n3) Exit" << std::endl;
    if (std::cin.eof())
        return ;
    getline(std::cin, input);
}
void    Phonebook::Add(Contact &info)
{
    std::string FName = info.ReadLine("Firstname: ");
    if (std::cin.eof())
        return ; 
    info.SetFName(FName);
    std::string LName = info.ReadLine("Lastname: ");
    if (std::cin.eof())
        return ;
    info.SetLName(LName);
    std::string Nickname = info.ReadLine("Nickname: ");
    if (std::cin.eof())
        return ;
    info.SetNickname(Nickname);
    std::string Phone = info.ReadLine("Phone: ");
    if (std::cin.eof())
        return ;
    info.SetNumber(Phone);
    std::string Secret = info.ReadLine("Secret: ");
    if (std::cin.eof())
        return ;
    info.SetSecret(Secret);
    _Contact[index] = info;
    index++;
    if (index >= buf)
        index = 0;
    if (size < buf)
        size++;
}
std::string   Phonebook::Search(Contact &info)
{
    std::string input;
    for (int i = 0; i < size ; i++)
    {
        std::cout << "Index:" << i << std::endl;
        std::cout << "------------" << std::endl;
        if (_Contact[i].GetFName().length() >= 10)
            std::cout << "|"  << _Contact[i].GetFName().substr(0, 10) + "." << "|" << std::endl;
        else
            std::cout << "|"  << _Contact[i].GetFName() << "         |" << std::endl;
        if (_Contact[i].GetLName().length() >= 10)
            std::cout << "|" << _Contact[i].GetLName().substr(0, 10) + "."  << "|"<< std::endl;
        else
            std::cout << "|" << _Contact[i].GetLName() << "         |" << std::endl;
        if (_Contact[i].GetNickname().length() >= 10)
            std::cout <<  "|" << _Contact[i].GetNickname().substr(0, 10) + "." << "|" << std::endl;
        else
            std::cout << "|" << _Contact[i].GetNickname() << "         |" << std::endl;
        std::cout << "------------" << std::endl;
    }
    SearchByIndex(info);
    return "";
}
std::string Phonebook::SearchByIndex(Contact &info)
{
    std::string input;
    std::cout << "Who are you searching for?" << std::endl;
    getline(std::cin, input);
    if (std::cin.eof())
        return "";
    for (int i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]))
        {
            std::cout << "Invalid index digits only!" << std::endl;
            return "";
        }
    }
    if (input.empty())
    {
        std::cout << "Please enter the numbers [0-7]";
        SearchByIndex(info);
    }
    if (size == 0)
    {
        std::cout << "There's no available contacts at the moment" << std::endl;
        return "";
    }
    if (std::stoi(input) > size - 1)
    {
        std::cout << "There's no such a contact" << std::endl;
        return "";
    }

    if (std::stoi(input) < 8 )
    {
        std::cout << "------------" << std::endl;
        if (_Contact[std::stoi(input)].GetFName().length() >= 10)
            std::cout <<_Contact[std::stoi(input)].GetFName().substr(0, 10) + "." << "|" << std::endl;
        else
            std::cout <<_Contact[std::stoi(input)].GetFName() << "         |" << std::endl;
        if (_Contact[std::stoi(input)].GetLName().length() >= 10)
            std::cout << _Contact[std::stoi(input)].GetLName().substr(0, 10) + "." << "|" << std::endl;
        else
            std::cout << _Contact[std::stoi(input)].GetLName() << "         |" << std::endl;
        if ( _Contact[std::stoi(input)].GetNickname().length() >= 10)
            std::cout << _Contact[std::stoi(input)].GetNickname().substr(0, 10) + "." << "|" << std::endl;
        else
            std::cout << _Contact[std::stoi(input)].GetNickname() << "         |" << std::endl;
        if (_Contact[std::stoi(input)].GetNumber().length() >= 10)
            std::cout << _Contact[std::stoi(input)].GetNumber().substr(0, 10) + "." << "|"<< std::endl;
        else
            std::cout << _Contact[std::stoi(input)].GetNumber() << "         |" << std::endl;
        if (_Contact[std::stoi(input)].GetSecret().length() >= 10)
            std::cout << _Contact[std::stoi(input)].GetSecret().substr(0, 10) + "." << "|" << std::endl;
        else
            std::cout << _Contact[std::stoi(input)].GetSecret() << "         |" << std::endl;
        std::cout << "------------" << std::endl;
    }
    else
        return "";

    return "";
}
int main(int ac, char **av)
{
    std::string input;
    Contact info;
    Phonebook data;
    while (true)
    {
        PrintMessage(input);
        if (std::cin.eof())
            return (0);
        if (input.empty()) 
            PrintMessage(input);
        if (std::cin.eof())
            return(0);
        if (input == "1")
        {
            data.Add(info);
            if (std::cin.eof())
                return(0);
        }
        else if (input == "2")
        {
            data.Search(info);
            if (std::cin.eof())
                return 0;
        }
        else if (input == "3")
        {
            std::cout << "See ya!";
            break ;
        }
    }
}