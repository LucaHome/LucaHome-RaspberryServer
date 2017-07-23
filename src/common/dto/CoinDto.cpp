#include "CoinDto.h"

CoinDto::CoinDto()
{
	_id = -1;
	_user = "Dummy";
	_type = "Dummy";
	_amount = 0;
}

CoinDto::CoinDto(int id, std::string user, std::string type, double amount)
{
	_id = id;
	_user = user;
	_type = type;
	_amount = amount;
}

CoinDto::~CoinDto()
{
}

void CoinDto::SetId(int id)
{
	_id = id;
}

int CoinDto::GetId()
{
	return _id;
}

void CoinDto::SetUser(std::string user)
{
	_user = user;
}

std::string CoinDto::GetUser()
{
	return _user;
}

void CoinDto::SetType(std::string type)
{
	_type = type;
}

std::string CoinDto::GetType()
{
	return _type;
}

void CoinDto::SetAmount(double amount)
{
	_amount = amount;
}

double CoinDto::GetAmount()
{
	return _amount;
}

std::string CoinDto::ToString()
{
	std::string str =
		std::string("CoinDto { id: ") + Tools::ConvertIntToStr(_id)
		+ std::string("; user: ") + _user
		+ std::string("; type: ") + _type
		+ std::string("; amount: ") + Tools::ConvertDoubleToStr(_amount)
		+ std::string(" }");
	return str;
}