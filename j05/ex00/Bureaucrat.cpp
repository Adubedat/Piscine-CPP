/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:18:02 by adubedat          #+#    #+#             */
/*   Updated: 2018/01/16 16:54:25 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <sys/time.h>

typedef		Bureaucrat::GradeTooLowException	LOW_GRADE_EXCEPTION;
typedef		Bureaucrat::GradeTooHighException	HIGH_GRADE_EXCEPTION;

Bureaucrat::Bureaucrat(void) :
	_name("undefined"),
	_grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name)	{

		setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {

	*this = src;
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs) {

	_grade = rhs.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName(void) const {

	return(_name);
}

int					Bureaucrat::getGrade(void) const {

	return(_grade);
}

void				Bureaucrat::setGrade(int grade) {

	try {

		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade = grade;
	}
	catch (Bureaucrat::GradeTooLowException e) {

		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e) {

		std::cout << e.what() << std::endl;
	}
}

void				Bureaucrat::incrementGrade(void) {

	setGrade(getGrade() - 1);
}

void				Bureaucrat::decrementGrade(void) {

	setGrade(getGrade() + 1);
}

const char*			LOW_GRADE_EXCEPTION::what(void) const throw() {

	return ("Grade is too low, must be at least 150");
}

const char*			HIGH_GRADE_EXCEPTION::what(void) const throw() {

	return ("Grade is too high, must be at most 1");
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}
