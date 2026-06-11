#include "Bureacraut.hpp"

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b){
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << '\n';
	return (os);
}

void	Bureaucrat::increaseGrade(){
	if (_grade <= 1)
		throw GradeTooHighExcepion();
	_grade--;
}

void	Bureaucrat::decreaseGrade(){
	if (_grade >= 150)
	throw GradeTooLowException();
	_grade++;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighExcepion();
	else
		_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other){
	std::cout << "Copy constructer called" << '\n';
	this->_grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
	std::cout << "Copy assignment operator called" << '\n';
	if (this != &other)
		this->_grade = other._grade;
	return(*this);
}
