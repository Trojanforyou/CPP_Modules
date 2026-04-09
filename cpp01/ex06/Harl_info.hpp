#ifndef HARLINFO_HPP
#define HARLINFO_HPP

#include <string>
#include <iostream>

class HarlInfo
{
	private:
		void	debug();
		void	info();
		void	error();
		void	warning();
	public:
		void	complain(std::string level);
		int		findIndex(std::string level);
};


#endif