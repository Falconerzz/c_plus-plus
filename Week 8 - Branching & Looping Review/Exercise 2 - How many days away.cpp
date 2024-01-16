/* LANG: C++ */

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int year, start_day, start_month, end_day, end_month;

    cin >> year;

    cin >> start_day;
    cin >> start_month;

    cin >> end_day;
    cin >> end_month;

    struct tm start_tm = {0};
    struct tm end_tm = {0};

    start_tm.tm_year = year - 1900;
    start_tm.tm_mon = start_month - 1;
    start_tm.tm_mday = start_day;

    end_tm.tm_year = year - 1900;
    end_tm.tm_mon = end_month - 1;
    end_tm.tm_mday = end_day;

    time_t start_time = mktime(&start_tm);
    time_t end_time = mktime(&end_tm);

    int diff_days = static_cast<int>((end_time - start_time) / (60 * 60 * 24));

    cout << diff_days  << endl;

    return 0;
}
