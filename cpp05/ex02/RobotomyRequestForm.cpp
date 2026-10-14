#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (GetSigned() == false)
		throw (FormNotSignedException());
	if (executor.getGrade() > GetEgrage())
		throw (GradeTooLowException());

	std::cout << "...Drilling noises...";

	srand(time(0));
	bool res = rand() % 2;

	if (res == false)
		throw (RobotomyFailedException());
	std::cout << " " <<  _target << " " << " Has been robotomized" << '\n';
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	this->_target = other._target;
}