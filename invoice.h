#pragma once

class invoice
{
public:
	invoice();

	invoice(std::string newPartNum, std::string newPartDesc, int newQntSold, double newPricePer);

	std::string	getPartNum();
	void	setPartNum(std::string newPartNum);

	std::string	getPartDesc();
	void	setPartDesc(std::string newPartDesc);

	int		getQntSold();
	void	setQntSold(int newQntSold);

	double	getPricePer();
	void	setPricePer(double newPricePer);

	double	getInvoiceAmount();

private:
	std::string partNum;
	std::string partDesc;
	int	   qntSold;
	double pricePer;
};
