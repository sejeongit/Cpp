// 전역변수 : 괄호 밖에 선언된 변수
int global = 0;

// 함수
// 모듈화 : 작은 별도의 기능들을 모아 하나의 큰 기능으로 만듦
// * 함수를 선언할 때 앞에 자료형을 입력해 반환 값의 자료형을 알려줌.
int Add(int left, int right){ // 매개변수의 자료형을 선언 -> 매개변수 : Add()의 지역변수
  return left + right;
}

// 함수
int main(){

  // 변수
  // 1. 지역변수
  // 2. 전역변수
  // 3. 정적변수
  // 4. 외부변수


  // 지역변수 : 괄호 안에 선언된 변수(함수, 지역)
  int iName = 0;

  // 함수 안에 지역을 만들 수 있다.
  {
    // 변수명 규칙
    int iName = 100;
    // 변수를 같은 영역에서 같은 이름으로 선언하면 안된다.
    // 밖에 같은 이름의 변수가 있더라도 지역 안에선 같은 이름의 변수를 선언할 수 있는데, 지역 안에선 안에 있는 변수를 우선해 처리한다.
    // 지역 안의 변수는 지역 안에서밖에 사용하지 못한다.

    // 지역 안에 지역을 또 만들 수 있다.
    {
      
    }

    iName;
  }

  iName = 100;


  int data;
  data = Add(10, 20);


  return 0;
};