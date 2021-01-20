#pragma once


using namespace System;


public ref class Note
{
public:
	String^ nazwa;
	DateTime czas_utworzenia;
	DateTime czas_edycji;
	Note(String^ z)
	{
		nazwa = z;
		czas_utworzenia = DateTime::Now;
		czas_edycji = DateTime::Now;
	}
	~Note()
	{
		
	}
};