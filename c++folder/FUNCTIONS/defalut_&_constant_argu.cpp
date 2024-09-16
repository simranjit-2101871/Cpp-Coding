/*Default Arguments in C++
Default arguments are those values which are used by the function if we don’t input our value. It is recommended to write default arguments after 
the other arguments. */
float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

int main(){
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}

/*Constant Arguments in C++
Constant arguments are used when you don’t want your values to be changed or modified by the function*/
int strlen(const char *p){

}