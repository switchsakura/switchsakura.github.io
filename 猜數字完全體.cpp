#include<iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main()
{
	srand(time(NULL));
	int x = rand()%100+1;
	int s,t,mode;
	char word;
	cout << "1.單純好玩，不限制次數"<<endl<<"2.想挑戰自己運氣，限制次數(6次)"<<endl;
	mode:
		cout << "請輸入1或2來決定遊玩模式:";
		cin >> mode;
		if(mode=='1')
		{
			goto fun;
		}
		if(mode=='2')
		{
			goto game;
		}
		else
		{
			cout << "只能輸入1或2" <<endl;
			goto mode; 
		}
	
	fun:		//完成// 
		t=0;
		cout << "只能從1到100之間來猜哦!!!!!!!!" <<endl; 
		cout << "請開始猜數字:"<<endl;
		while(s!=x)
		{
			
			cin >> s;
			
			if(s<x)
			{
				cout << "小於，再往上猜"<<endl;; 
			}
			if(s>x)
			{
				cout << "太多了，減少一下"<<endl;
			}
			t++;
		}
	if(s=x)
		{
			goto vic_fun;
		}
		
	game:
		t=0;
		cout << "只能從1到100之間來猜哦!!!!!!!!" <<endl; 
		cout << "請開始猜數字:"<<endl;
		while(t<5)
		{
			
			
		
			cin >> s;
			
			if(s<x)
			{
				cout << "小於，再往上猜"<<endl;; 
			}
			if(s>x)
			{
				cout << "太多了，減少一下"<<endl;
			}
			if(s==x)
			{
				goto vic_game;
			 } 
			t++;
			cout <<"第"<< t <<"次" <<endl;
		
		}
		
			
			
			cout << "這是最後一次哦"<<endl; 
			cin >> s;
			if(s!=x)
			{
				goto end;
			}
			if(s=x)
			{
				goto vic_game;
			}
			
		end:	
			
				{
					cout << "答案是" << x<<endl; 
					goto fail;
				}
	

	vic_fun:
		cout << "你猜對了，共猜了" << t <<"次，是否再遊玩一次?"<<endl<<"輸入Y或N"<<endl;
		cin >> word;
		if(word=='Y')
		{
			x = rand()%100+1;
			goto mode;
		}
		if(word=='N')
		{
			cout << "感謝遊玩";
		}
	vic_game:
		cout << "你猜對了，共猜了" << t+1 <<"次，是否再遊玩一次?"<<endl<<"輸入Y或N"<<endl;
		cin >> word;
		if(word=='Y')
		{
			x = rand()%100+1;
			goto mode;
		}
		if(word=='N')
		{
			cout << "感謝遊玩";
		}
			
	fail:		
			cout <<"你猜到第6次，並且猜錯，挑戰失敗，是否再遊玩一次?"<<endl<<"輸入Y或N"<<endl;
		cin >> word;
		if(word=='Y')
		{
			x = rand()%100+1;
			goto mode;
		}
		if(word=='N')
		{
			cout << "感謝遊玩";
		}
		
					
					
	
	return 0;
 } 
