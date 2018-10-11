#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<class T,int N>
class Tab
{
	private:
	int size_;
	T *tab_;
	std::string Error="Poza tablicą";
	public:
	Tab();
	~Tab();
	T& operator[](int);	
};

template<class T,int N>
Tab<T,N>::Tab()
{ 
	size_=N;
	tab_=new T[size_];
}

template<class T,int N>
T& Tab<T,N>::operator[](int X)
{
	if(X>=size_)
	{
	throw Error;
		}
	else return tab_[X];
}
template<class T,int N>
Tab<T,N>::~Tab()
{
  delete [] tab_;
}





int main()
{
	int i,j;
	Tab<Tab<int,10>,5>Tablica;
	try
	{
	   for(i=0;i<5;i++){
		   for(j=0;j<10;j++)
		   { Tablica[i][j]=i+j;
			   }
		}
	 for(i=0;i<5;i++){
		   for(j=0;j<11;j++)
		   { cout<<Tablica[i][j];
			  cout<<"  "; 
			   }
			  cout<<endl; 
		}
	
	}
	catch(std::string X)
	{
		cout<<X<<endl;
	}
	
	
	
return 0;
}
