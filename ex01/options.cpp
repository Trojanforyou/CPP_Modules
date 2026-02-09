/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:02:37 by msokolov          #+#    #+#             */
/*   Updated: 2026/02/09 19:27:36 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void   Phonebook::Add()
{
    if (index >= 8)
    {
        for(int i = 0; i <= 6; i++)
            contacts[i] = contacts[i + 1];
        index = 7;
    }
    Contact& info = contacts[index];
    std::string firstname, lastname, nickname, number, secret;
    std::cout << "Firstname:\n";
    std::getline(std::cin, firstname);
    info.setFirstName(firstname);
    std::cout << "Lastname:\n";
    std::getline(std::cin, lastname);
    info.setLasName(lastname);
    std::cout << "Nickname:\n";
    std::getline(std::cin, nickname);
    info.setNickname(nickname);
    std::cout << "Phone:\n";
    std::getline(std::cin, number);
    info.setPhone(number);
    std::cout << "Secret:\n";
    std::getline(std::cin, secret);
    info.setSecret(secret);
    Empty();
    index++;
}
void    MainMenu(Phonebook &pb)
{
    std::string input;
    while (true)
    {
        std::cout << "Hello! And welcome to the 80's Phonebook!" << std::endl;
        std::cout << "\n1)Add\n2)Search\n3)Exit\n";
        std::getline(std::cin, input);
        if (input == "1")
            pb.Add();
        else if (input == "2")
            pb.Search();
        else if (input == "3")
            break ;
    }
}
void    Phonebook::Search()
{
    int j = 0;
    for (int i = 0; i < index; i++)
    {
        std::cout << "Contact " << j + 1 << ":" << std::endl;
        std::cout << "Firstname:" << contacts[j].getFirstname() << std::endl;
        std::cout << "Lastname:" << contacts[j].getLastname() << std::endl;
        std::cout << "Nickname:" << contacts[j].getNickname() << std::endl;
        std::cout << "___________________________" << std::endl;
        j++;
        if (i >= 8)
            j = 0;
    }
    
}
void    Phonebook::Clear()
{
    contacts[0].setFirstName("");
    contacts[0].setLasName("");
    contacts[0].setFirstName("");
    contacts[0].setPhone("");
    contacts[0].setSecret("");
}
void  Phonebook::Empty()
{
    if (contacts[index].getFirstname().empty())
        contacts->setFirstName("-");
    if (contacts[index].getLastname().empty())
        contacts->setLasName("-");    
    if (contacts[index].getNickname().empty())
        contacts->setNickname("-");
}
int main(int ac, char **av)
{
    Phonebook pb;
    MainMenu(pb); 
}