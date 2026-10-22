#include "Form.hpp"

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << "Name: " << obj.GetName() << "\nExecute Grade: " << obj.GetEgrage() << "\nSign Grade: " << obj.GetSgrade() << "\nSign Status: "<< obj.GetSigned();
	return(os);
}

Form::Form(std::string name, const int Sgrade, const int Egrade): _name(name), _signed(false), _Sgrade(Sgrade), _Egrade(Egrade)
{
	if (_Sgrade < 1 || _Egrade < 1)
		throw GradeTooHighException();

	if (_Sgrade > 150 || _Egrade > 150)
		throw GradeTooLowException();
	}
void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _Sgrade)
		throw GradeTooLowException();
	_signed = true;
}
Form::Form(const Form &other): _name(other._name), _signed(other._signed), _Sgrade(other._Sgrade), _Egrade(other._Egrade){
}

Form&  Form::operator=(const Form &other){
	if (this != &other)
		this->_signed = other._signed;
	return(*this);
}
