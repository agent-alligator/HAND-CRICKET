#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	int score=0;
	srand(time(0));
	int i;
    int balls=0;
	i=(rand() % 25)+1;
	cout<<"-------- HAND CRICKET --------"<<endl;
    cout<<"Your winning score "<<i+1<<"\n";

	while (true) {
		int shot = 0;
		int a;

		if(score>i) {
			cout<<"you won your score :"<<score<<"*("<<balls<<")\n";
			break;
		}
		else {
            balls++;
			a=(rand()%6)+1;
			cout<<"Enter no. between 1 to 6"<<endl;
			cin>>shot;
            while(shot>6 or shot<0){
                cout<<"Invalid! Try again :("<<endl;
                cin>>shot;
            }
			cout<<"System: "<<a<< endl;
			if (shot == a) {
				cout<<"OUT your score :"<<score<<"("<<balls<<")"<<endl;
				break;
			}
			else {
				score+=shot;
			}
		}
	}
	return 0;
}
