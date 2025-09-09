        #include <iostream>
        using namespace std;

        int main(){
            int n,m,a,b;
            cin>>n>>m>>a>>b;

            int cost1 = n*a;

            int fulltickets = (n/m) * b;

            int remainingDays = min((n%m)*a,b);

            int cost2 = fulltickets + remainingDays;

            if(cost1>cost2){
                cout<<cost2;
            }else{
                cout<<cost1;
            }

            return 0;
        }