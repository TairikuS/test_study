// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	bool flag;

	if (year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0))
		flag = true;
	else
		flag = false;
	return flag;
}
