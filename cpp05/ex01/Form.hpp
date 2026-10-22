#pragma once

#include <string>
#include <iostream>
#include "Bureacraut.hpp"

class Form{
	private:
		const std::string _name;
		bool _signed;
		const int	_Sgrade;
		const int	_Egrade;
	public:
		class GradeTooLowException :public std::exception{
			const char *what() const noexcept override{
				return ("Grade is too low");
			}
		};
		class GradeTooHighException :public std::exception{
			const char *what() const noexcept override{
				return ("Grade is too high");
			}
		};

		Form(std::string name, const int Sgrade, const int Egrade);
		~Form() = default;
		Form(const Form &other);
		Form &operator=(const Form &other);

		bool				GetSigned() const {return(_signed);};
		const std::string	GetName() const {return(_name);};
		int					GetSgrade()	const {return(_Sgrade);};
		int					GetEgrage()	const {return(_Egrade);};

		void	beSigned(Bureaucrat &bureaucrat);

};
std::ostream &operator<<(std::ostream &os, const Form &obj);
