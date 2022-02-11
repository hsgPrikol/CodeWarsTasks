#pragma once
//Tasks
// 
// 
//Deoxyribonucleic acid(DNA) is a chemical found in the nucleus of cellsand carries the "instructions" for the developmentand functioning of living organisms.
//
//If you want to know more : http://en.wikipedia.org/wiki/DNA
//
//In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G".You function receives one side of the DNA(string, except for Haskell); you need to return the other complementary side.DNA strand is never empty or there is no DNA at all(again, except for Haskell).
//
//More similar exercise are found here : http://rosalind.info/problems/list-view/ (source)

#include <iostream>
#include <vector>
#include <string>

class ComplementaryDNA
{
public:
	std::string DNAStrand(const std::string &dna)
	{
		//your code here
		std::string str = dna;
		for (int i = 0; i < str.size(); i++)
		{
			if (dna[i] == 'A')
			{
				str[i] = 'T';
			}
			else if (dna[i] == 'T')
			{
				str[i] = 'A';
			}
			else if (dna[i] == 'C')
			{
				str[i] = 'G';
			}
			else if (dna[i] == 'G')
			{
				str[i] = 'C';
			}
		}

		return str;
	}
};

