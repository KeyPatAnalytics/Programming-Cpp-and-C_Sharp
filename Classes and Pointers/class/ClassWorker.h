#include"string.h"
typedef string char[20];
class Worker{
public:
    void discover_avarage_AP(){
        double answer = 0;
        for(int i=0;i<6;i++){
            answer += academic_performance[i];
        }
        set_avarage_AP(answer);
    }
    void set_avarage_AP(double score){
        avarage_AP = score/6;
    }
    double get_avarage_AP(){
    return avarage_AP;
    }
    void set_name(string a){
    name = a;
    }
    string get_name(){
    return name;
    }
    void set_academic_performance(vector v){
        for (int i=0; i<6; i++)
            academic_performance[i] = v[i];
    }
private:
    int avarage_AP;
    string name;
    int academic_performance[6];
};
