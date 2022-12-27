#include<iostream>
#include<string>
using namespace std;

class Word{
	
	private:
		string so;
	
	public:
		Word( char so){
			this -> so = so;
		}
		Word(){	
	}
		Word(string so){
		this-> 	so = so;
		}
		
		string Get(){
			return so;
		}
		
		void Info(){
			cout << "Info of the current string:" << endl << "Size: " <<so.size() << endl;
			cout<< "Capacity: " <<so.capacity() << endl;
		}
		string Times( int n){
		    string temp;
			for( int i=0; i<n; i++){
				temp = temp.append(so);
			}
			return temp;
		}
		
};
int main()

{

cout << "Mid Term Test 20211!\n" << endl;

Word w1, w2("abc123");

cout<<"w1 = "<<w1.Get()<<endl;

cout<<"w2 = "<<w2.Get()<<endl;

w1.Info();

w2.Info();

Word w3(w2);

cout<<"w3 = "<<w3.Get()<<endl;

Word w("abc xy 123");

cout<<"w = "<<w.Get()<<endl;

Word w4 = w2.Times(0);

cout<<"w4 = "<<w4.Get()<<endl;


Word w5 = w2.Times(3);

cout<<"w5 = "<<w5.Get()<<endl;

Word w6('a');

cout<<"w6 = "<<w6.Get()<<endl;


cout<<"\nThe End!";

return 0;

}






