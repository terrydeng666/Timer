#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

class Timer {
    public:
    void SetStart(time_t ts) {
        start_ts = ts;
    }
    time_t GetStart() {
        return start_ts;
    }
    int GetElapsedTime() {
        return time(NULL) - GetStart();
    }
    private:
    time_t start_ts;
};

int main () {
    Timer tmr;
    time_t ts;
    ts = time(NULL);
    tmr.SetStart(ts);
    sleep(3);

    cout << "Elapsed Time:" << tmr.GetElapsedTime() << endl; 
    return 0;
}