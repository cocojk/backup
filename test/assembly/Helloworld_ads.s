CODE32                                     ; ARM mode로 짰삼.

AREA Helloworld CODE, READONLY  ; 이 코드 block의 이름과 속성, 이름은 HelloWorld

ENTRY                       ; Instruction이 제일 처음 실행할 곳.

BEGIN 
ADR r0, THUMB+1  ; r0에 THUMB label의 주소를 넣음. (ARM / THUMB는 모두 짝수 address를 가지기 때문에 (4byte/2byte) 마지막 비트를 branch할때 ARM/THUMB인지 표시하는 용도로 사용된다. THUMB의 경우 1의 값을 가진다. ARM<->THUMB일때 BX 명령어로 jump 시킨다.  
BX r0                  ; r0값으로 점프

CODE16                           ; 여기서부터는 THUMB mode로 컴파일 해줘.

THUMB
ADR r1, TEXT  ; r1 ← "Hello World"의 주소

LOOP   LDRB r0, [r1], #1          ; r0에 r1가 가르키는 주소에 들어 있는 내용을
1byte 만큼 Load한 후 r1의 값을 1 증가해야 해.
CMP r0, #0              ; 읽어들인 값이 0인지 비교하여 끝인지 확인하자.
BLNE print_ch           ; printf_ch로 갔다 오자.
BNE LOOP                ; 만약 0이 아니면 다시 하나 읽어들이기 위해 LOOP로 닥치고 돌아가
B EXIT                    ; 0이면 EXIT로 jump

TEXT = "Hello World ", 0          ; Data

END                                     ; Assembly file의 끝이여.
