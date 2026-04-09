/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 18:39:49 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/23 20:16:07 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void    replacer(std::string filename, std::string s1, std::string s2)
{
    std::string buf;
    int pos;
    std::ifstream fd(filename);
    if (!fd)
    {
        std::cout << "File does not exist" << std::endl;
        return ;
    }
    
    while (getline(fd, buf))
    {
        while (buf.find(s1) != std::string::npos)
        {
            pos = buf.find(s1);
            buf.erase(pos, s1.length());
            buf.insert(pos, s2);
            std::ofstream newFd(filename + ".replace");
            newFd << buf << std::endl;
        }
        // if (buf.find(s1) == std::string::npos)
        // {
        //     std::cout << "String not found" << std::endl;
        //     return ; 
        // }

    }
}
int main(int ac, char **av)
{
    if (ac != 3)
    {
        std::cout << "Program requires 3 Arguments" << std::endl;
        return(0);
    }
    replacer(av[1], av[2], av[3]);
}