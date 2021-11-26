
#include<iostream>
#include<string.h>
using namespace std;
class Father{
	private:
		string fname;
	public:
		void setFather(string s){
			
			fname = s;
		}
		string getFname(){
			return fname;
		}
};
class Son: Father{
	private:
		string sname;
	public:
		void setSon(string s, string name){
			setFather(s);
			sname = name;
		}
		string getSname(){
			return sname;
		}
		
		string getF(){
			return getFname();
		}
		
};


class GrandSon: Son{
	private:
		string gname;
	public:
		void setGSon(string name, string n, string m){
			setSon(name, n);
			gname = m;
		}
		void display(){
			string name = getF() +"  "+ getSname() + " "+ gname;
			cout<<name<<endl;
		}
};

int main()
{
 char fname[30],sname[30],gname[30];
 
 cout<<"\nEnter father ,son and grandson names ";
 cin>>fname>>sname>>gname;
 
GrandSon g;
g.setGSon(fname,sname,gname);

g.display();
	
}
