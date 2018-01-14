#pragma once
#include <string>
#include <iostream>

class SvmString
{
public:
	SvmString()
	{
		s = new char[1];
		s[0] = 0;
	}
	
	SvmString(char *_s)
	{
		s = new char[1];
		s[0] = 0;
		Copy(_s);
	}

	~SvmString()
	{
		delete[] s;
	}

	void Copy(char *n)
	{
		int len;
		delete[] s;
		len = strlen(n);
		s = new char[len + 1];
		strcpy(s, n);
	}

	void Concatenate(std::string &n)
	{
		int nlen = strlen(s) + n.length();
		char *t = new char[nlen + 1];
		strcpy(t, s);
		//strcat(t, )
	}
private:
	char *s;
};