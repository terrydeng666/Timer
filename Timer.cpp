#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std; //之後所有的cout 和 cin都是用std

class Timer {
    public:
    //constructor
    Timer() {
        start_ts=0;
    }
    Timer(time_t s) {
        SetStart(s);
    }

    void SetStart(time_t ts) {
        start_ts = ts;
    }
    time_t GetStart() {
        return start_ts;
    }
    //現在時間減掉初始時間
    int GetElapsedTime() {
        return time(NULL) - GetStart();
    }
    private:
    time_t start_ts;
};

int main () {
    Timer tmr;
    time_t ts;
    //初始化
    ts = time(NULL);
    tmr.SetStart(ts);

    cout << "Elapsed Time:" << tmr.GetElapsedTime() << endl; 
    return 0;
}
