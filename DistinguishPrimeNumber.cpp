/*�D�ؽm�� - �P�_���
��ƬO�b�j��1������Ƥ��A���F1�M����Ʀۤv�H�~�A�L�k�Q��L����ƾ㰣���ơC
���y�ܻ��A��ƬO�u��1�M������Ӧ]�ƪ��ơC
�b�ЧA�Q�ε{���P�_�@�ӼƬO���O��ơC
��J����
�C�@�C�G�@�Ӿ��n�C
��X����
�C�@�C�G������J��n�A��Xn�O���O���(Yes or No)�C
*/
#include<iostream>
using namespace std ;

int main(){
	int input,num,answer;
	cout<<"Please enter a integer:" ;
	while(cin>>input){
		answer =1 ;
		for(int i =2 ;i<input ;i++){
			if(input%i ==0){
				answer = 0 ;
			}
		}
		if(answer == 1){
			cout<<"Yes"<<endl ;
		}
		else{
			cout<<"No"<<endl ;
		}
		
	}
	return 0 ;
	
} 
