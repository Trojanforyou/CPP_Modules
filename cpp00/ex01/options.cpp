/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:02:37 by msokolov          #+#    #+#             */
/*   Updated: 2026/02/10 18:17:07 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    Phonebook::SearchForContact()
{
    std::string input;
    std::cout << "Enter the contact that you want to view:";
    std::getline(std::cin, input);
    if (std::stoi(input) == index)
    {
        std::cout << "Contact " << index << ":"  << "\n_________"<< std::endl;
        if (contacts[index].getFirstname().length() > 10)
            std::cout << contacts[index - 1].getFirstname().substr(0, 9) + "." << "\n_________" << std::endl;
        else
            std::cout  << contacts[index - 1].getFirstname() << "\n_________" << std::endl;
        if (contacts[index].getLastname().length() > 10)
            std::cout << contacts[index - 1].getLastname().substr(0, 9) + "." << "\n_________" << std::endl;
        else
            std::cout << contacts[index - 1].getLastname() << "\n_________" << std::endl;
        if (contacts[index].getLastname().length() > 10)
            std::cout << contacts[index - 1].getNickname().substr(0, 9) + "." << "\n_________" << std::endl;
        else
            std::cout << contacts[index - 1].getNickname() << "\n_________" << std::endl;
    }
    else
        SearchForContact();
        
}

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
        {
            pb.Search();;
        }
        else if (input == "3")
            break ;
    }
}
void    Phonebook::Search()
{
    int j = 0;
    for (int i = 0; i < index; i++)
    {
        std::cout << "Contact " << j + 1 << ":"  << "\n_________"<< std::endl;
        if (contacts[j].getFirstname().length() > 10)
            std::cout << contacts[j].getFirstname().substr(0, 9) + "." << "\n_________" << std::endl;
        else
            std::cout  << contacts[j].getFirstname() << "\n_________" << std::endl;
        if (contacts[j].getLastname().length() > 10)
            std::cout << contacts[j].getLastname().substr(0, 9) + "." << "\n_________" << std::endl;
        else
            std::cout << contacts[j].getLastname() << "\n_________" << std::endl;
        if (contacts[j].getLastname().length() > 10)
            std::cout << contacts[j].getNickname().substr(0, 9) + "." << "\n_________" << std::endl;
        else
            std::cout << contacts[j].getNickname() << "\n_________" << std::endl;
        j++;
        SearchForContact();
        if (i >= 8)
            j = 0;
    }
    
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