#pragma once

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm{
	private:
		std::string _target;
	public:
		class RobotomyFailedException : public std::exception{
			const char *what() const noexcept override{
				return ("Robotomy Failed");
		}
	};

	RobotomyRequestForm(std::string target) : AForm(target, 72, 45), _target(target){}
	~RobotomyRequestForm() override = default;
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	
	void 		execute(Bureaucrat const &executor) const;

};