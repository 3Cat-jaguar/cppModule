/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:06:57 by ylee              #+#    #+#             */
/*   Updated: 2021/12/20 23:47:21 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replaceString(std::ifstream& fin, std::ofstream& fout, std::string& s1, std::string& s2)
{
	std::string origin;
	std::size_t	s1pos;
	std::size_t	len;
	std::string rStr;

	if (s1.empty() || s2.empty())
		return ;
	while (!fin.eof())
	{
		s1pos = 0;
		rStr.clear();
		std::getline(fin, origin);
		while (s1pos != std::string::npos)
		{
			if (origin.find(s1, s1pos) == std::string::npos)
			{
				len = origin.length() - s1pos;
				rStr.append(origin, s1pos, len);
				fout << rStr;
				s1pos = std::string::npos;
			}
			else
			{
				len = origin.find(s1, s1pos) - s1pos;
				rStr.append(origin, s1pos, len);
				rStr.append(s2);
				s1pos = origin.find(s1, s1pos);
				s1pos = s1pos + s1.length();
			}
		}
		if (!fin.eof())
			fout << std::endl;
	}
	fin.close();
	fout.close();
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "3 arguments required. filename, string s1 and s2 for replace\n";
		return (0);
	}
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);
	if (s1.empty() || s2.empty())
	{
		std::cout << "string for replace must not empty\n";
		return (0);
	}
	std::ifstream fin (argv[1]);
	if (fin.fail())
	{
		std::cout << argv[1] << " : this file is not found\n";
		return (0);
	}
	std::string newType (".replace");
	std::string outfileName (argv[1] + newType);
	std::ofstream fout (outfileName);
	if (fout.fail())
	{
		std::cout << outfileName << " : replace file not created\n";
		fin.close();
		return (0);
	}
	replaceString(fin, fout, s1, s2);
	return (0);
}
