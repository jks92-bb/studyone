import java.util.Scanner;

public class Exam_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("숫자를 입력하세요: ");
        int n = scanner.nextInt();

        // 배열을 사용하여 소수 여부를 저장
        boolean[] isPrime = new boolean[n + 1];

        // 배열 초기화: 모든 숫자를 소수로 가정
        for (int i = 2; i <= n; i++) {
            isPrime[i] = true;
        }

        // 에라토스테네스의 체 알고리즘을 사용하여 소수를 찾음
        for (int p = 2; p * p <= n; p++) {
            if (isPrime[p]) {
                for (int i = p * p; i <= n; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        System.out.println("1부터 " + n + "까지의 소수:");
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                System.out.print(i + " "); // 소수 출력
            }
        }

    }
}

//
//    에라토스테네스의 체(Eratosthenes' Sieve)는 주어진 범위 내에서 모든 소수를 찾아내는 고대 그리스의 수학자 에라토스테네스에
//    의해 개발된 알고리즘입니다.
//    이 알고리즘은 비교적 작은 범위 내에서 소수를 효율적으로 찾는 데 사용됩니다.
//
//            에라토스테네스의 체 알고리즘의 주요 아이디어는 다음과 같습니다:
//
//            1. 처음에는 모든 숫자를 소수로 가정합니다.
//
//            2. 가장 작은 소수인 2부터 시작하여, 해당 소수의 배수들을 모두 지웁니다. 이때, 배수를 지우는 것은 해당 숫자를 소수가
//            아니라고 표시하는 것을 의미합니다.
//
//            3. 다음으로 남아있는 가장 작은 소수를 찾고, 해당 소수의 배수들을 지웁니다.
//
//           4. 이 과정을 반복하면, 남아있는 숫자들은 소수입니다.
//
//             에라토스테네스의 체 알고리즘은 소수를 찾는 데에 있어서 빠르고 효율적입니다. 특히 작은 범위 내에서 매우 효과적으로 사용됩니다.
//             그러나 대규모 범위에 대해서는 다른 소수 판별 알고리즘들이 더 적합하며, 에라토스테네스의 체는 메모리 사용량이 크다는 단점.
//
//            아래는 에라토스테네스의 체 알고리즘의 간단한 구현 예제입니다:
//
//                      ```plaintext
//                       1. 2부터 N까지의 모든 숫자를 나열한다.
//                       2. 가장 작은 소수인 2를 선택하고, 2의 배수를 모두 제거한다.
//                       3. 다음으로 가장 작은 소수인 3을 선택하고, 3의 배수를 모두 제거한다.
//                       4. 위의 과정을 반복하면, 남아있는 숫자들은 모두 소수이다.
//                       ```
//
//                       이렇게 에라토스테네스의 체 알고리즘은 비교적 간단한 원리로 작동하며, 소수를 효율적으로 찾는 데 사용됩니다.
