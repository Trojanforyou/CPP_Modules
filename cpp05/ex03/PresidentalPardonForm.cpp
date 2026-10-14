#include "PresidentalPardonForm.hpp"
#include "AForm.hpp"

void PresidentalPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > GetEgrage())
		throw (GradeTooLowException());
	if (GetSigned() == false)
		throw (FormNotSignedException());

	std::cout << _target << " Has been pardoned by Zaphod Beeblebrox" << '\n';
}

PresidentalPardonForm &PresidentalPardonForm::operator=(const PresidentalPardonForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return (*this);
}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm &other) : AForm(other)
{
	this->_target = other._target;
}