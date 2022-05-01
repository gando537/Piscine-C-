/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:26:40 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 17:14:47 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include <string>

class Form ;

class Bureaucrat
{
    private :

        std::string _name ;
        int _grade ;

        Bureaucrat() : _name(""){};

    public :

        Bureaucrat ( std::string const & name, int grade ) ;
        Bureaucrat ( Bureaucrat const & other ) ;
	    Bureaucrat & operator = ( Bureaucrat const & other ) ;
        ~Bureaucrat () ;

        std::string  getName () const ;
        int getGrade () const ;
        void setDecreaseGrade ( int value ) ;
        void setIncreaseGrade ( int value ) ;

        void signForm ( Form & form ) ;
        void executeForm ( Form & form ) ;

        class GradeTooHighException : public std::exception
        {
            public :
                const char * what () const throw() ;
        };
        
        class GradeTooLowException : public std::exception
        {
            public :
                const char * what () const throw() ;
        };
};

std::ostream & operator << ( std::ostream & os, Bureaucrat const & bureaucrat ) ;

#endif
