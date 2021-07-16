/**
 * @file Insights_4.cpp
 * @author Kavya
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <iostream>
using namespace std;

/**
 * @brief Class Currency
 * 
 */
class Currency
{
private:
	int m_rupee;
	int m_paise;

public:
/**
 * @brief Construct a new Currency object
 * 
 */
	
	Currency() : m_rupee(0), m_paise(0) {}


/**
 * @brief Construct a new Currency object
 * 
 * @param rupee 
 * @param paise 
 */
	
	
	Currency(int rupee, int paise) : m_rupee(rupee), m_paise(paise) {}


/**
 * @brief Construct a new Currency object
 * 
 * @param tpaise 
 */
	
	explicit Currency(int tpaise) : m_rupee(tpaise / 100), m_paise(tpaise % 100) {}


/**
 * @brief Construct a new Currency object
 * 
 * @param ref 
 */
	
	
	explicit Currency(const Currency &ref) : m_rupee(ref.m_rupee), m_paise(ref.m_paise) {}


/**
 * @brief 
 * 
 * @param tpaise 
 * @return Currency& 
 */
	
	Currency &operator=(int tpaise)
	{
		m_rupee = tpaise / 100 + this->m_rupee;
		m_paise = tpaise % 100;
		return *this;
	}

	operator int()
	{
		return m_rupee * 100 + m_paise;
	}

/**
 * @brief display function
 * 
 */
	void display()
	{
		cout << "Paise to Rupee Paise : " << this->m_rupee << " Rupees " << this->m_paise << " Paise" << endl;
	}
};


/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
	Currency c1;
	c1 = 440;
	c1.display();

	Currency c2(3, 115);
	int n_paise;
	n_paise = c2;
	cout << "Rupee Paise to Paise : " << n_paise << " Paise" << endl;

	return 0;
}