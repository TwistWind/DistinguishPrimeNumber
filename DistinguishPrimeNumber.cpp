/*題目練習 - 判斷質數
質數是在大於1的正整數中，除了1和此整數自己以外，無法被其他正整數整除的數。
換句話說，質數是只有1和本身兩個因數的數。
在請你利用程式判斷一個數是不是質數。
輸入說明
每一列：一個整數n。
輸出說明
每一列：對應輸入的n，輸出n是不是質數(Yes or No)。
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
