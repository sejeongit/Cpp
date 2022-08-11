// 전처리기 define
// 앞에 #이 붙으면 제일 먼저 실행
// 내가 정한 구문을 숫자로 치환해줌

// 보통 이런 값들은 16진수를 사용한다.
// * c++에서는 16진수 앞에 0x를 붙인다.
#define HUNGRY  0x1   // 1
#define THIRSTY 0x2   // 2
#define TIRED   0x4   // 4
#define FIRE    0x8   // 8

#define COLD    0x10  // 16
#define POISON  0x20  // 32
#define POISON1 0x40  // 64
#define POISON2 0x80  // 128

#define POISON3 0x100 // 256
#define POISON4 0x200 // 512
#define POISON5 0x400 // 1024
#define POISON6 0x800 // 2048


// 각 자리 비트에 대응하는 숫자를 특정 상태로 본다.
// 32비트라면 32가지의 겹치지 않는 상태를 동시에 나타낼 수 있다.


int main(){
  // 비트 연산자
  // 쉬프트 <<, >>
  unsigned char byte = 13;
  byte <<= 1; // 1칸 왼쪽으로 이동 -> 2^1배(2배) 증가
  byte <<= 3; // 3칸 왼쪽으로 이동 -> 2^3배(8배) 증가

  byte <<= 3; // 2^n 배수
  byte >>= 2; // 2^n 나눈 몫


  // 비트 곱(&), 합(|), xor(^), 반전(~)   
  // 비트 단위로 연산을 진행,
  // & : 둘다 1인 경우 1
  // | : 둘중 하나라도 1이면 1
  // ^ : 같으면 0, 다르면 1
  // ~ : 1은 0으로, 0은 1로


  // 비트로 상태 표현
  // 상태 추가
  unsigned int iStatus = 0;

  iStatus |= HUNGRY;
  iStatus |= THIRSTY;

  // 상태 확인
  if(iStatus & THIRSTY){ // 내가 지정한 자리만 1이 있는지 물어봄

  }

  // 특정 자리 비트 제거
  iStatus &= ~THIRSTY;

}