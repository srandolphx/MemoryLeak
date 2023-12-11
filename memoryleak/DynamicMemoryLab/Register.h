#pragma once


class Register {
private:
	long long* _cashReceipts = nullptr;
	long long* _creditReceipts = nullptr;
public:
	Register();
	~Register();
	void Payment(long long amount);
	void Refund(long long amount);
	long long GetCashReceipts();
	long long GetCreditReceipts();
};

