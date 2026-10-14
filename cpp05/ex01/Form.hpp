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
		class GradeTooHighExcepion :public std::exception{
			const char *what() const noexcept override{
				return ("Grade is too high");
			}
		};

		Form(std::string name, const int Sgrade, const int Egrade);
		~Form() = default;
		Form(const Form &other);
		Form &operator=(const Form &other);

		const bool			GetSigned() const {return(_signed);};
		const std::string	GetName() const {return(_name);};
		const int			GetSgrade()	const {return(_Sgrade);};
		const int			GetEgrage()	const {return(_Egrade);};

		void	beSigned(Bureaucrat &bureaucrat);
		friend std::ostream &operator<<(std::ostream &os, const Form &obj);

};

