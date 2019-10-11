#include<bits/stdc++.h>
#include<windows.h>
#pragma comment(lib,"user32.lib")

int main() {
  char ss[99999];
  char nick[9999];
  printf("누가 공격할거죠!? :");
  scanf("%[^\n]s", nick);
  FreeConsole();
  Sleep(50);
  sprintf(ss, "안녕!, 나는 %s이고 내가 컴맹이라서 니 컴퓨터에 해를 끼칠 수 없어.\n부탁하는데 너의 중요한 파일을 스스로 지우고 다른 사람에게 이 바이러스에 대해서 알려주면 감사하겠어.\n너의 협조에 많이 감사할게.\n%s 바이러스 보냄!", nick, nick);
  MessageBox(NULL, ss, "심각한 바이러스 경고", MB_OKCANCEL + MB_ICONSTOP);
}
