//#define BOOST_DATE_TIME_SOURCE
#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
using namespace std;
using namespace boost::gregorian;
using namespace boost::posix_time;


template <class T = microsec_clock>
class MyTimer
{
private:
	ptime m_startTime;

public:
	MyTimer()
	{
		Restart();
	}

	void Restart()
	{
		m_startTime = T::local_time();
	}


	void Elapsed()
	{
		cout << T::local_time() - m_startTime << endl;
	}
};


int main()
{
	MyTimer<microsec_clock> t;
	for (int i = 0; i < 100; ++i)
	{
		cout << "hello" << endl;
	}
	t.Elapsed();
}