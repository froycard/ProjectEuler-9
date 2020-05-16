#include<iostream>

int main()
{
	for(auto m=100;m>1;--m)
		for(auto n=m-1;n>0;--n)
		{
			auto a = m*m-n*n;
			auto b = 2*m*n;
			auto c = m*m+n*n;
			if(c*c == a*a+b*b)
				if(1000 == a+b+c)
				{
					std::cout << "(" << a << "," << b << "," << c << "): " << a*b*c << std::endl;
					break;
				}
		}
	return 0;
}
