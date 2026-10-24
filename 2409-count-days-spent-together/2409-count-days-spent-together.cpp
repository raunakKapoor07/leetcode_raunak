class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int monthlA;
        int monthlB;
        int monthaA;
        int monthaB;
        int dateaA;
        int datelA;
        int dateaB;;
        int datelB;
        if(arriveAlice[0]=='0'){
            monthaA=arriveAlice[1]-'0';
        }
        else{
            monthaA=10*(arriveAlice[0]-'0')+(arriveAlice[1]-'0');
        }
        if(arriveBob[0]=='0'){
            monthaB=arriveBob[1]-'0';
        }
        else{
            monthaB=10*(arriveBob[0]-'0')+(arriveBob[1]-'0');
        }
        if(leaveBob[0]=='0'){
            monthlB=leaveBob[1]-'0';
        }
        else{
            monthlB=10*(leaveBob[0]-'0')+(leaveBob[1]-'0');
        }
        if(leaveAlice[0]=='0'){
            monthlA=leaveAlice[1]-'0';
        }
        else{
            monthlA=10*(leaveAlice[0]-'0')+(leaveAlice[1]-'0');
        }


        if(arriveAlice[3]=='0'){
            dateaA=arriveAlice[4]-'0';
        }
        else{
            dateaA=10*(arriveAlice[3]-'0')+(arriveAlice[4]-'0');
        }
        if(arriveBob[3]=='0'){
            dateaB=arriveBob[4]-'0';
        }
        else{
            dateaB=10*(arriveBob[3]-'0')+(arriveBob[4]-'0');
        }
        if(leaveBob[3]=='0'){
            datelB=leaveBob[4]-'0';
        }
        else{
            datelB=10*(leaveBob[3]-'0')+(leaveBob[4]-'0');
        }
        if(leaveAlice[3]=='0'){
            datelA=leaveAlice[4]-'0';
        }
        else{
            datelA=10*(leaveAlice[3]-'0')+(leaveAlice[4]-'0');
        }
        int dayaA=0;
        int daylA=0;
        int dayaB=0;
        int daylB=0;
        for(int i=1;i<monthaA;i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                dayaA+=31;    
            }
            else if(i==4||i==6||i==9||i==11){
                dayaA+=30;
            }
            else{
                dayaA+=28;
            }
        }
        for(int i=1;i<monthlA;i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                daylA+=31;    
            }
            else if(i==4||i==6||i==9||i==11){
                daylA+=30;
            }
            else{
                daylA+=28;
            }
        }
        for(int i=1;i<monthaB;i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                dayaB+=31;    
            }
            else if(i==4||i==6||i==9||i==11){
                dayaB+=30;
            }
            else{
                dayaB+=28;
            }
        }
        for(int i=1;i<monthlB;i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                daylB+=31;    
            }
            else if(i==4||i==6||i==9||i==11){
                daylB+=30;
            }
            else{
                daylB+=28;
            }
        }
        dayaA+=dateaA;
        dayaB+=dateaB;
        daylA+=datelA;
        daylB+=datelB;
        if((-max(dayaB,dayaA) + min(daylA,daylB) + 1)>0){
            return -max(dayaB,dayaA) + min(daylA,daylB) + 1;
        }
        else{
            return 0;
        }
    }
}; 