#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock{
	
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		void	introduce() const;

		std::string const & getName() const;
		std::string const & getTitle() const;

		void	setName(std::string const &name);
		void	setTitle(std::string const &name);



	private:
		Warlock();
		Warlock(Warlock const &cpy);
		Warlock &operator=(Warlock const &rhs);
		std::string _name;
		std::string _title;
	};



#endif 