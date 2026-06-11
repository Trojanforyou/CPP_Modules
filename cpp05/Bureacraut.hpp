#include <string>
#include <iostream>
#include <ostream>
class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat() = default;
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);

	const std::string getName() const {return(_name);};
	const int	getGrade() const {return(_grade);};

	void	increaseGrade();
	void	decreaseGrade();

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
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat& b);