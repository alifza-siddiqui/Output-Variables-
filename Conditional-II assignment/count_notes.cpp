/*Write a program to count the minimum number of notes in a given amount using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1*/

#include<iostream>
using namespace std;
int main(){
        int amount;
        int note_of_1,note_of_2,note_of_5,note_of_10,note_of_20,note_of_50;
        int note_of_100,note_of_200,note_of_500,note_of_1000,note_of_2000;
        note_of_1=note_of_2=note_of_5=note_of_10=note_of_20=note_of_50=0;
        note_of_100=note_of_200=note_of_500=note_of_1000=note_of_2000=0;
        cout<<"enter the amount:";
        cin>>amount;
        switch(amount>=2000){
            case 1: 
                   note_of_2000=amount/2000;
                   amount= amount-note_of_2000*2000;
        }
        switch(amount>=1000){
            case 1:
                    note_of_1000=amount/1000;
                   amount= amount-note_of_1000*1000;
                   
        }
        switch(amount>=500){
            case 1:
                    note_of_500=amount/500;
                   amount= amount-note_of_500*500;
                   
        }
        switch(amount>=200){
            case 1:
                    note_of_200=amount/200;
                   amount= amount-note_of_200*200;
                   
        }
        switch(amount>=100){
            case 1:
                     note_of_100=amount/100;
                   amount= amount-note_of_100*100;
                   
        }
        switch(amount>=50){
            case 1:
                  note_of_50=amount/50;
                   amount= amount-note_of_50*50;
                   
        }
        switch(amount>=20){
            case 1:
                   note_of_20=amount/20;
                   amount= amount-note_of_20*20;
                   
        }
        switch(amount>=10){
            case 1:
             note_of_10=amount/10;
                   amount= amount-note_of_10*10;
                   
        }
        switch(amount>=5){
            case 1:
             note_of_5=amount/5;
                   amount= amount-note_of_5*5;
                  
        }
        switch(amount>=2){
            case 1:
                   note_of_2=amount/2;
                   amount= amount-note_of_2*2;
                 
        }
        switch(amount>=1){
            case 1:
                   note_of_1=amount/1;
                   amount= amount-note_of_1*1;
                  
        }
        cout<<"Number of notes: "<<note_of_1+note_of_2+note_of_5+note_of_10+note_of_20+note_of_50+
        note_of_100+note_of_200+note_of_500+note_of_1000+note_of_2000;
    return 0;
}