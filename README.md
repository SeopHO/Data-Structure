# Data Structure
## 3.스택(Stack)
### 스택의 정의
스택은 삽입과 삭제가 한쪽 끝에서 이루어지는, 순서가 매겨진 리스트이다. 이 끝을 탑(top)이라 부른다. 제일 마지막에 추가된 항목이 제일 먼저 삭제된다. 그러므로 후입선출(Last In First Out,LIFO) or 선입후출(First In Last Out,FILO) 리스트라고 부른다.

스택은 항목이 삽입될 때, 이것을 푸시(push)라고 부른다.
->가득 찬 스택에 항목을 푸시하려는 것을 오버플로우(Overflow)라고 한다.
항목이 스택으로부터 삭제되는 것을 팝(pop)이라고 부른다.
->빈 스택으로부터 항목을 팝(pop)하려는 것을 언더플로우(Underflow)라고 한다.

### 스택의 ADT
#### 주요 연산들
+ push(int data): 데이터를 스택에 추가한다.
+ int pop(): 스택 제일 마지막에 추가된 항목을 스택으로부터 삭제하고 리턴한다.

#### 그 외 보조적인 연산들
+ int top(): 스택 마지막에 추가된 항목을 삭제하지 않고 리턴한다.
+ int size(): 스택에 저장된 항목의 개수를 리턴한다.
+ int IsEmptyStack(): 스택에 항목이 저장되어 있는지 아닌지를 확인한다.
+ int IsFullStack(): 스택이 가득 찼는지 아닌지를 확인한다.

### 스택 적용 사례
+ 괄호 짝 맞추기
+ 인픽스(infix)를 포스트픽스(postfix)로 변환하기
+ 포스트픽스 수식 계산하기
+ 문자열의 역순
+ 함수 호출 구현하기(재귀를 포함하여)
+ 프로그램 실행 중 부 프로그램의 호출과 복귀(시스템 스택)
    + 프로그램에서 부 프로그램의 호출과 복귀, 순환 문제를 해결하기 위해서 OS에 기본으로 구현되어 사용되는 스택을 '시스템 스택'이라고 한다.

