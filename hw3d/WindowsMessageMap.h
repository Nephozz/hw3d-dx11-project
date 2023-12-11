#pragma once
#include <unordered_map>
#include <Windows.h>
#include <string>

using namespace std;

class WindowsMessageMap
{
public:
	WindowsMessageMap();
	string operator()(DWORD msg, LPARAM lp, WPARAM wp) const;
private:
	std::unordered_map<DWORD, std::string> map;
};