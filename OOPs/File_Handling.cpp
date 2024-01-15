#include<iostream>
#include<fstream>
using namespace std;

int main(){

  ifstream fin;
  //file open
  fin.open("new.txt");

  //file read
  char c;
  c = fin.get();
  while(!fin.eof()){
    cout<<c;
    c = fin.get();
  
  
  }
  //file close
  fin.close();
  return 0;
}

//--------------------------------------------------------------------------------------------------


#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr[5];

  cout<<"Enter the input"<<endl;
  for(int i=0;i<5;i++){
    cin>>arr[i];}

  //file open and save this array data

  ofstream fout;
  fout.open("zero.txt");

  for(int i=0;i<5;i++){
    fout<<arr[i];
  };

  fout.close();
  

}
