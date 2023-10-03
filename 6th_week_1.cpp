//과제 1
//-변수 100개 묶기(array)

#include <iostream>
using namespace std;

int main() {
    int x[100];
    float y[100];

    // 0부터 99까지의 정수 값을 갖는 배열 x를 생성
    for (int i = 0; i < 100; i++) {
        x[i] = i * 10;
        y[i] = sqrt(x[i]); // x의 각 요소에 대한 제곱근을 계산하여 y에 저장
        cout << y[i] << " "; // 계산된 제곱근을 출력
    }
    cout << endl;

    return 0;
}

//과제 2
//- 20개의 랜덤한 숫자의 평균과 표준편차 계산

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    int x[20];
    float y[20];

    // 20개의 랜덤한 숫자(0부터 99 사이)를 x에 저장
    for (int i = 0; i < 20; i++) {
        x[i] = rand() % 100; //
    }

    cout << " x의 요소: ";
    for (int i = 0; i < 20; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    // 평균 계산
    int sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += x[i];
    }
    double average = static_cast<double>(sum) / 20;

    // 표준 편차 계산
    double variance = 0;
    for (int i = 0; i < 20; i++) {
        variance += pow(x[i] - average, 2);
    }
    double deviation = sqrt(variance / 20);

    cout << "평균: " << average << endl;
    cout << "표준 편차: " << deviation << endl;

    return 0;
}

//과제 3
//- 값 저장 후 일부 값 수정

#include <iostream>
using namespace std;
int main() {
   int sum[10], N; //sum에 정수 저장
   float root[10]; //root에 실수 저장
   for (int i = 0; i < 10; i++) {
      N = i + 1;
      sum[i] = N * (N + 1) / 2; //sum에 등차수열의 합 저장
      root[i] = sqrt((float)N); //root에 제곱근 저장
   }
   sum[6] = 1; //sum[6]에 1을 저장
   root[3] = 0.0; //root[3]에 0을 저장
   for (int i = 0; i < 10; i++)
         cout << sum[i] << " " << root[i] << endl;
   getchar();
}

//과제 4
//- sum 10개의 주소와 xxx의 값 hex로 표현

#include <iostream>
using namespace std;

int main() {
    int sum[10], N, * xxx;

    for (int i = 0; i < 10; i++) {
        N = i + 1;
        sum[i] = N * (N + 1) / 2; //sum에 등차수열의 합 저장
    }
    xxx = sum + 6; //포인터 xxx를 배열 sum의 6번째 요소를 가리키도록 설정
    xxx[-1] = 1; // xxx 포인터를 사용하여 sum 배열의 5번째 요소의 값을 1로 변경

    for (int i = 0; i < 10; i++) {
        cout << "sum[" << i << "]의 주소: " << &sum[i] << " / 값: " << sum[i] << endl;
    }

    cout << "xxx의 주소: " << xxx << " / 값: " << *xxx << endl;

    return 0;
}

//과제 5
//-short array에 int 값 넣기

#include <iostream>
using namespace std;

int main() {
   int *A;
   short aa[8];

   A = (int*)aa;
   for (int i = 0; i < 4; i++) {
      A[i] = i + 5;
   }
   for (int i = 0; i < 7; i++)
      cout << "    0x" << hex << aa[i] << "\n";
}
