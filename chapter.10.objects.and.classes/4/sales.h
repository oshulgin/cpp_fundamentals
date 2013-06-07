#ifndef SALES_H
#define SALES_H

namespace SALES
{
	const int QUARTERS = 4;

	class Sales	{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;

	public:
		Sales(const double ar[], int n);
		Sales();
		void showSales();
	};
}

#endif