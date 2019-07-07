#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <cstring>
#include <unistd.h>

#define TRUE 1

using namespace std;
/*-------------------class------------------*/
class Ui_HangMan
{
private:
    int indexOfui;
public:
    Ui_HangMan() {} /* Inline */
    Ui_HangMan(int index = 0);
    ~Ui_HangMan();
    void setUI(int set);
    void printOfui();
};
Ui_HangMan::Ui_HangMan(int index) : indexOfui(index) {}
Ui_HangMan::~Ui_HangMan() {}
void Ui_HangMan::setUI(int set)
{
    this->indexOfui = set;
}
void Ui_HangMan::printOfui()
{
    if(indexOfui == 0)
    {
        cout << "   _   _                   __  __              "    << endl;
        cout << "  | | | | __ _ _ __   __ _|  \\/  | __ _ _ __   "   << endl;
        cout << "  | |_| |/ _` | '_ \\ / _` | |\\/| |/ _` | '_ \\  " << endl;
        cout << "  |  _  | (_| | | | | (_| | |  | | (_| | | | | "    << endl;
        cout << "  |_| |_|\\__,_|_| |_|\\__, |_|  |_|\\__,_|_| |_| " << endl;
        cout << "                     |___/                     "    << endl;
        cout << "            ____                        "           << endl;
        cout << "           / ___| __ _ _ __ ___   ___   "           << endl;
        cout << "          | |  _ / _` | '_ ` _ \\ / _ \\  "         << endl;
        cout << "          | |_| | (_| | | | | | |  __/  "           << endl;
        cout << "           \\____|\\__,_|_| |_| |_|\\___|  "        << endl;
        cout << "           << press Enter key to start >>";
    }
    else if(indexOfui == 1)
    {
        cout << " _                _        "   << endl;
        cout << "| |    ___   __ _(_)_ __   "   << endl;
        cout << "| |   / _ \\ / _` | | '_ \\  " << endl;
        cout << "| |__| (_) | (_| | | | | | "   << endl;
        cout << "|_____\\___/ \\__, |_|_| |_| " << endl;
        cout << "            |___/          "   << endl;
    }
    else if(indexOfui == 2)
    {
        cout << "    ____                                            "       << endl;
        cout << "   / ___| __ _ _ __ ___   ___  _____   _____ _ __   "       << endl;
        cout << "  | |  _ / _` | '_ ` _ \\ / _ \\/ _ \\ \\ / / _ \\ '__|  "  << endl;
        cout << "  | |_| | (_| | | | | | |  __/ (_) \\ V /  __/ |     "      << endl;
        cout << "   \\____|\\__,_|_| |_| |_|\\___|\\___/ \\_/ \\___|_|     " << endl;
        cout << endl;
    }
    else if(indexOfui == 3)
    {
        cout << " ____  _               _   _       "     << endl;
        cout << "/ ___|(_) __ _ _ __   | | | |_ __  "     << endl;
        cout << "\\___ \\| |/ _` | '_ \\  | | | | '_ \\ " << endl;
        cout << " ___) | | (_| | | | | | |_| | |_) |"     << endl;
        cout << "|____/|_|\\__, |_| |_|  \\___/| .__/ "   << endl;
        cout << "         |___/              |_|   "      << endl;
    }
    else
        cerr << "Error: Index is out of the range." << endl;
}
class Level
{
private:
    int level_size;
public:
    Level() {}
    Level(int level = 0) : level_size(level) {}
    ~Level() {}
    void Set_Level(int set);
    void Level_UI();
};
void Level::Set_Level(int set)
{
    level_size = set;
}
void Level::Level_UI()
{
    switch(level_size)
    {
        case 1:
        cout << " _                _   _     " << endl;
        cout << "| | _____   _____| | / |    " << endl;
        cout << "| |/ _ \\ \\ / / _ \\ | | | " << endl;
        cout << "| |  __/\\ V /  __/ | | |   " << endl;
        cout << "|_|\\___| \\_/ \\___|_| |_| " << endl;
        break;
        case 2:
        cout << " _                _   ____      " << endl;
        cout << "| | _____   _____| | |___ \\    " << endl;
        cout << "| |/ _ \\ \\ / / _ \\ |   __) | " << endl;
        cout << "| |  __/\\ V /  __/ |  / __/    " << endl;
        cout << "|_|\\___| \\_/ \\___|_| |_____| " << endl;
        break;
        case 3:
        cout << " _                _   _____     " << endl;
        cout << "| | _____   _____| | |___ /     " << endl;
        cout << "| |/ _ \\ \\ / / _ \\ |   |_ \\ " << endl;
        cout << "| |  __/\\ V /  __/ |  ___) |   " << endl;
        cout << "|_|\\___| \\_/ \\___|_| |____/  " << endl;
        break;
        case 4:
        cout << " _          _ _    " << endl;
        cout << "| |__   ___| | |   " << endl;
        cout << "| '_ \\ / _ \\ | | " << endl;
        cout << "| | | |  __/ | |   " << endl;
        cout << "|_| |_|\\___|_|_|  " << endl;
        break;
    }
}
/*-------------------class------------------*/

const int LIM = 15;
int score = 0;
const string answer[LIM] = { "apple", "banana", "circle", "chayo", "wisdom", "linkedlist",
    "data", "structure","database","operating","society","jeju","korea","phone","kiwi" };

const string answer2[LIM] = { "deliver","perishable","ensure","fragile","agency","particularly","address",
    "cartoon","starcraft","improbable","authority","aquire","simultaneously","reach"};

const string answer3[LIM] = { "investigation","galaxy","stationary","placement","archive","depressing","overnight","prrofread",
    "recondition","programming","cabinet","embrace","conceal","routine","timetable"};

const string hell[2] = { "pneumonoultramicroscopicsilicovolcanoconiosis","dichlorodiphenyltrichloroethane"};

void Login();
void Login_In();
void Login_Sign();
void Game_Start();

/* ------------------ main start ------------------*/
int main()
{
    char char_Set;
    Ui_HangMan Ui(0);
    
    while(TRUE)
    {
        Ui.printOfui();
        cin.get();
        system("clear");
        Login();
        system("clear");
        Game_Start();
        system("clear");
        Ui.setUI(2);
        Ui.printOfui();
        break;
    }
    return 0;
}

/* ------------------ main end ------------------*/
void Login_In()
{
    ifstream inFile;
    string id, pwd, check;
    string line;
    int offset;
    int flag = 0, cnt = 0;
    Ui_HangMan Ui(0);

        while(flag == 0)
        {
            system("clear");
            Ui.setUI(1);
            Ui.printOfui();
            if(cnt > 0)
                cout << "Wrong pwd/Id" << endl;
            inFile.open("Login.txt");

            if(inFile.is_open())
            {
                cout << "Insert your ID: ";
                getline(cin,id);
                cout << "Insert Your Password: ";
                getline(cin,pwd); 

                check = id+":"+pwd;
                while(!inFile.eof())
                {
                    getline(inFile,line);
                    if((offset = line.find(check,0)) != string::npos)
                    {
                        flag++;
                    }
                }
                    if(flag == 1)
                    cout << "Login Success" << endl;
                    else if(flag == 0)
                    {
                        system("clear");
                        Ui.setUI(1);
                        Ui.printOfui();
                        cnt++;
                    }
                    inFile.close();
            }
            else
                cerr << "Cannot access login file!!" << endl;
        }

}

void Login_Sign()
{
    ofstream outFile;

    string id, pwd;
    Ui_HangMan Ui(0);
    system("clear");

        Ui.setUI(3);
        Ui.printOfui();
        outFile.open("Login.txt",ios::app);

        if(outFile.is_open())
        {
            cin.get();
            cout << "Insert your ID: ";
            getline(cin,id);
            cout << "Insert Your Password: ";
            getline(cin,pwd);
            //check = id + ":" + pwd;
            outFile << id << ":" << pwd <<"\n";
        }
        else
            cerr << "Cannot access login file!!" << endl;
        outFile.close();
}

void Login()
{
    int choice;

    cout << "Do You have a account? " << endl;
    cout << "1) Yes. I have an account" << endl;
    cout << "2) No. I don't have an account" << endl;
    cout << "press 1 or 2 " << endl;
    cin >> choice;

    if(choice == 1)
    {
        cin.get();
    	Login_In();
    }
    else if(choice == 2)
    {
    	Login_Sign();
        Login_In();
    }
    else
    {
        cout << "Wrong choice" << endl;
    }
}

void Game_Start()
{
    string p_answer;
    //string badchar;
    Level level(0);
    int setLevel = 0;

    char target;
    int answer_chance;
    int choice;
    int length;
    int progress;
    while(TRUE)
    {
        system("clear");
        cout << " --------------------------------------- " << endl;
        cout << "  선택하세요~                               " << endl;
        cout << "  1)랜덤으로 나오는 답을 맞추기!(레벨이 있어요!)   " << endl;
        cout << "  2)다른 사람이 정해주는 답을 맞추기!            " << endl;
        cout << "  3)게임 종료                              " << endl;
        cout << " --------------------------------------- " << endl;

        cin >> choice;

        srand(time(0));

        if(choice == 1)
        {
            system("clear");
            setLevel++;
            level.Set_Level(setLevel);
            level.Level_UI();
            if(setLevel == 1)
            {
                p_answer = answer[rand() % LIM];
                length = p_answer.length();
            }
            else if(setLevel == 2)
            {
                p_answer = answer2[rand()% LIM];
                length = p_answer.length();
            }
            else if(setLevel == 3)
            {
                p_answer = answer3[rand()%LIM];
                length = p_answer.length();
            }
            else if(setLevel == 4)
            {
                p_answer = hell[rand() % 2];
                length = p_answer.length();
            }
            else
            {
                cout << setLevel;
                cout << "만랩 달성" << endl;
                continue;
            }
            sleep(3);
        }
        else if(choice == 2)
        {
            cin.get();  
            cout << "정답을 입력해 주십시오: ";
            getline(cin,p_answer);
            length = p_answer.length();
        }
        else if(choice == 3)
            break;
        else
            continue;

        system("clear");
        cout << "정답을 맞추어 봅시다~" << endl;
        string attempt(length,'-');

        cout << "당신이 맞힐 문자의 길이는" << length << "입니다!!!" << endl;
        cout << attempt << endl;
        cout << "Game Start!!" << endl;
        progress = 1;
        answer_chance = 6;
        string badchar;
        while(answer_chance != 0 && attempt != p_answer)
        {
            cout << "당신의 시도는 총 " << answer_chance << "번 남았습니다." << endl;
            cout << progress << "번째 시도" << endl;
            cin >> target;
            if(badchar.find(target) != string::npos || attempt.find(target) != string::npos)
            {
                cout << "이미 추측한 문자입니다. 다시 하십시오. " << endl;
                continue;
            }
            int location = p_answer.find(target);
            if(location == string::npos)
            {
                cout << "땡! 틀렸습니다~" << endl;
                --answer_chance;
                badchar += target;
            }
            else
            {
                cout << "헐...맞았습니다~" << endl;
                attempt[location] = target;
                location = p_answer.find(target,location+1);
                while(location != string::npos)
                {
                    attempt[location] = target;
                    location = p_answer.find(target,location+1);
                }
            }   
            cout << "추측하는 단어: " << attempt << endl;
            if(attempt != p_answer)
            {
                cout << "추측했던 단어들: "<< badchar << " " << "입니다." << endl;
                progress++;
            }
            else
            {
                cout << "정답입니다~ 정답은 " << attempt << "이었습니다~" << endl;
                cout << "점수 상승 !!!!" << endl;
                sleep(5);
            }
            if( answer_chance == 0)
            {
                cout << "아쉽군요~ 정답은" << p_answer << "이었습니다." << endl;
                setLevel--;
                sleep(5);
            }
        }
    }
}