#include "Form.hpp"

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << "Name: " << obj.GetName() << "\nExecute Grade: " << obj.GetEgrage() << "\nSign Grade: " << obj.GetSgrade() << "\nSign Status: "<< obj.GetSigned();
	return(os);
}

Form::Form(std::string name, const int Sgrade, const int Egrade): _name(name), _signed(false), _Sgrade(Sgrade), _Egrade(Egrade)
{
	if (_Sgrade > 150)
		throw GradeTooLowException();
	else if (_Egrade > 150)
		throw GradeTooLowException();
	else if (_Sgrade < 0)
		throw GradeTooHighExcepion();
	else if (_Egrade < 0)
		throw GradeTooHighExcepion();
	
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _Sgrade)
		_signed = true;
	else if (bureaucrat.getGrade() > _Sgrade)
		throw GradeTooLowException();
}
Form::Form(const Form &other): _name(other._name), _signed(other._signed), _Egrade(other._Egrade), _Sgrade(other._Sgrade){
}

Form&  Form::operator=(const Form &other){
	if (this != &other)
		this->_signed = other._signed;
	return(*this);
}
