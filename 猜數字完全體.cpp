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
	cout << "1.��¦n���A�������"<<endl<<"2.�Q�D�Ԧۤv�B��A�����(6��)"<<endl;
	mode:
		cout << "�п�J1��2�ӨM�w�C���Ҧ�:";
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
			cout << "�u���J1��2" <<endl;
			goto mode; 
		}
	
	fun:		//����// 
		t=0;
		cout << "�u��q1��100�����Ӳq�@!!!!!!!!" <<endl; 
		cout << "�ж}�l�q�Ʀr:"<<endl;
		while(s!=x)
		{
			
			cin >> s;
			
			if(s<x)
			{
				cout << "�p��A�A���W�q"<<endl;; 
			}
			if(s>x)
			{
				cout << "�Ӧh�F�A��֤@�U"<<endl;
			}
			t++;
		}
	if(s=x)
		{
			goto vic_fun;
		}
		
	game:
		t=0;
		cout << "�u��q1��100�����Ӳq�@!!!!!!!!" <<endl; 
		cout << "�ж}�l�q�Ʀr:"<<endl;
		while(t<5)
		{
			
			
		
			cin >> s;
			
			if(s<x)
			{
				cout << "�p��A�A���W�q"<<endl;; 
			}
			if(s>x)
			{
				cout << "�Ӧh�F�A��֤@�U"<<endl;
			}
			if(s==x)
			{
				goto vic_game;
			 } 
			t++;
			cout <<"��"<< t <<"��" <<endl;
		
		}
		
			
			
			cout << "�o�O�̫�@���@"<<endl; 
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
					cout << "���׬O" << x<<endl; 
					goto fail;
				}
	

	vic_fun:
		cout << "�A�q��F�A�@�q�F" << t <<"���A�O�_�A�C���@��?"<<endl<<"��JY��N"<<endl;
		cin >> word;
		if(word=='Y')
		{
			x = rand()%100+1;
			goto mode;
		}
		if(word=='N')
		{
			cout << "�P�¹C��";
		}
	vic_game:
		cout << "�A�q��F�A�@�q�F" << t+1 <<"���A�O�_�A�C���@��?"<<endl<<"��JY��N"<<endl;
		cin >> word;
		if(word=='Y')
		{
			x = rand()%100+1;
			goto mode;
		}
		if(word=='N')
		{
			cout << "�P�¹C��";
		}
			
	fail:		
			cout <<"�A�q���6���A�åB�q���A�D�ԥ��ѡA�O�_�A�C���@��?"<<endl<<"��JY��N"<<endl;
		cin >> word;
		if(word=='Y')
		{
			x = rand()%100+1;
			goto mode;
		}
		if(word=='N')
		{
			cout << "�P�¹C��";
		}
		
					
					
	
	return 0;
 } 
