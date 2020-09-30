#include<iostream>
using namespace std;
class namesof{
	private:
		int a;
		int b;
	public:
	void readnumbers(void);
	void printnumbers(void);
	int calcsum(void);	
};

void namesof::readnumbers(void)
{

	cin>>a>>b;
}
void namesof::printnumbers(void)
{
cout<<"a= "<<a<<",b= "<<b<<endl;
}
int namesof::calcsum(void)
{
	return (a+b);
}
int main()
{
	int sum;
	namesof num;
	num.readnumbers();
	num.printnumbers();
	sum=num.calcsum();
	cout<<"sum= "<<sum<<endl;
	return 0;
}
