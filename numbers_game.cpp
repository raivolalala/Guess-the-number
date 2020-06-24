#include <iostream>

using namespace std;

struct player{
	string name;
	int number;
} master, player;

string get_name(){
    string name;
    cin >> name;
    return name;
}

int get_number(){
    cout << "Kāds būs Tavs cipars?" << endl;
    int number;
    cin >> number;
    return number;
}

int main(){
    cout << "Kā Tevi sauc?" << endl;
    master.name = get_name();
    master.number = get_number();
    cout << "\033[2J" << endl;
    cout << "\033[1;1H" << endl;
    cout << "Kā Tevi sauc?" << endl;
    player.name = get_name();
    player.number = get_number();
    while (master.number != player.number){
        if(master.number > player.number){
            cout << master.name << " uzrakstīja lielāku ciparu! Mini vēlreiz!" << endl;
            player.number = get_number();	    
	}
	else if(master.number < player.number){
            cout << master.name << " uzrakstīja mazāku ciparu! Mini vēlreiz!" << endl;
            player.number = get_number();	    
	}
    }
    
    if (master.number = player.number){
        cout << "Tu uzvinnēji! Paldies par spēli! :)" << endl;	
    }
    return 0;
}
