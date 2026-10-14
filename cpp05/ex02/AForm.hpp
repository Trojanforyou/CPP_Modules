#pragma once

#include <string>
#include <iostream>
#include "Bureacraut.hpp"

class AForm{
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
		class FormNotSignedException : public std::exception{
			const char *what() const noexcept override{
				return("Form is not signed");
			}
		};
		AForm(std::string name, const int Sgrade, const int Egrade);
		virtual ~AForm() = default;
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		bool			GetSigned() const {return(_signed);};
		const std::string	GetName() const {return(_name);};
		int			GetSgrade()	const {return(_Sgrade);};
		int			GetEgrage()	const {return(_Egrade);};

		virtual void 		execute(Bureaucrat const &executor) const = 0;

		void				beSigned(Bureaucrat &bureaucrat);

};
std::ostream &operator<<(std::ostream &os, const AForm &obj);

