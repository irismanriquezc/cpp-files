#include <iostream>
#include <string>

using namespace std;


char menuDisplay();

int main(){
char res;
char value1, value2;




do{
res = menuDisplay();

res =toupper(res);

if(res== 'S'){
cout << "Enter a value for P\n";
		cin >> value1;
	
		cout << "Enter a value for Q\n";
		cin >> value2;
		value1= toupper(value1);
		value2 = toupper(value2);}


switch(res) {
	
	case 'A':
		if(value1 == 'F' || value2 == 'F'){
			cout << value1 << " ^ " << value2 			<< " = F "<< endl;}
		else{
			cout << value1 << " ^ " << 		value2 << " = T "<< endl;}
		break;
	
	case 'O':
		if(value1 == 'T' || value2 == 'T'){
			cout << value1 << " v " << value2 			<< " = T "<< endl;}
		else{
			cout << value1 << " v " << 		value2 << " = F "<< endl;}
		break;
		
	case 'B':
		if(value1== value2){
		cout << value1 << " <-> " << value2 			<< " = T "<< endl;}
		else{
		cout << value1 << " <-> " << value2 			<< " = F "<< endl;}
	break;
	
	case 'I':
		if(value1== 'T' && value2=='F'){
			cout << value1 << " -> " << value2 			<< " = F "<< endl;}
		else{
			cout << value1 << " -> " << value2 			<< " = T "<< endl;}
	break;		
}

}while(res!='Q');


}

char menuDisplay(){

	char response;

	cout << "S : initialize truth values for p and q \n" <<"A : Compute p AND q and return the result\n"<<"O: Compute p OR q and return the result\n"<<"B : Compute  p <-> q and return the result\n"<<"I : Computer p -> q and return the result\n"<<"Q: quit\n"<< endl;
	cin  >> response;

	return response;


}


