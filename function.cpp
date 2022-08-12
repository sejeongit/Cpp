// 함수를 선언할 때 앞에 자료형을 입력해 반환 값의 자료형을 알려줌.
int Add(int a, int b) // 매개변수의 자료형을 선언 -> 매개변수 : Add()의 지역변수
{
  return a + b;
}


// 함수
// 모듈화 : 작은 별도의 기능들을 모아 하나의 큰 기능으로 만듦
int main()
{
  int iData = Add(100, 200);

  // 반복문
  for(/* 반복자 초기화 */ ; /* 반복자 조건 체크 */ ; /* 반복자 변경 */ )
  {
    // 1. 반복자 초기화 : for문이 시작하는 순간 한번만 실행됨. 반복문의 횟수 체크를 하는 변수를 초기화하는 용도
    // 2. 반복자 조건 체크 : 초기화한 변수와 조건을 비교해 참이면 계속 반복문을 실행함. 결과값은 참, 거짓이 나와야 함.
    // 3. 반복자 변경 : 변수의 값을 변경시켜 반복문을 탈출할 여지를 줌.
  }

  for(int i = 0; ;)
  {
    // i는 for문 내부(지역)에 속함.
  }


  // while()


  return 0;
}