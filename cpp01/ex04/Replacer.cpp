/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 12:26:30 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/19 12:26:43 by msokolov         ###   ########.fr       */
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
    }
}