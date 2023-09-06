#ifndef FILE_HPP
# define FILE_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <cstring>

class Sed {

public:

	Sed(std::string filename, std::string stringToReplace, std::string newString);
	~Sed(void);

private:

	std::string		_filename;
	std::fstream	_source;
	std::fstream	_destination;
	std::string		_stringBufferSource;
	int				_createDestinationFile(void);
	int				_openSourceFile(void);
	void			_replaceStringInSource(std::string stringToReplace, std::string newString);
	void			_closeAllFiles(void);

};

#endif
