#pragma once

#include <string>
#include "AForm.hpp"

class PresidentalPardonForm : public AForm{
	private:
		std::string _target;
	public:
		PresidentalPardonForm(std::string target): AForm(target, 25, 5), _target(target){}
		~PresidentalPardonForm() override = default;
		PresidentalPardonForm &operator=(const PresidentalPardonForm &other);
		PresidentalPardonForm(const PresidentalPardonForm &other);

		void execute(Bureaucrat const & executor) const;
};