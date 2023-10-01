#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream xxx("math_operations.txt");

    if (!xxx) {
        cout << "파일을 열 수 없습니다.\n";
        return 1;
    }

    int n;
    cout << "하나의 숫자를 입력하세요: ";
    cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
        double square_root = sqrt(sum);

        if (i == n) {
            xxx << "1부터 " << i << "까지의 덧셈 결과: " << sum << endl;
            xxx << sum << "의 제곱근: " << square_root << endl;
            xxx << "--------------------\n";
        }
    }

    xxx.close();
    cout << "1부터 " << n << "까지의 덧셈 결과와 제곱근이 파일에 저장되었습니다.\n";

    return 0;
}
