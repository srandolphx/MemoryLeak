#include "StringHelpers.h"


std::string StringHelpers::FormatMoneyText(long long money) {
	std::string formattedText = "";
	std::string chunk = "";
	while (money > 0) {
		if (chunk.length() == 3) {
			if (formattedText.length() == 0) {
				formattedText += chunk;
			}
			else {
				formattedText = chunk + "," + formattedText;
			}
			chunk = "";
		}
		int r = money % 10;
		chunk = IntToString(r) + chunk;
		money = money / 10;
	}
	if (chunk.length() > 0) {
		formattedText = chunk + "," + formattedText;
	}

	return "$" + formattedText + ".00";
}

std::string StringHelpers::IntToString(int num) {
	switch (num)
	{
	case 0:
		return "0";
	case 1:
		return "1";
	case 2:
		return "2";
	case 3:
		return "3";
	case 4:
		return "4";
	case 5:
		return "5";
	case 6:
		return "6";
	case 7:
		return "7";
	case 8:
		return "8";
	case 9:
		return "9";
	}
	return "";
}
