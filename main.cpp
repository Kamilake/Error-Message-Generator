#include<bits/stdc++.h>
#include<windows.h>
#pragma comment(lib,"user32.lib")

int main() {
  char ss[99999];
  char nick[9999];
  printf("���� �����Ұ���!? :");
  scanf("%[^\n]s", nick);
  FreeConsole();
  Sleep(50);
  sprintf(ss, "�ȳ�, ���� %s�̰� ���� �ĸ��̶� �� ��ǻ�Ϳ� �ظ� ��ĥ �� ����.\n��Ź�ϴµ� ���� �߿��� ������ ������ ����� �ٸ� ������� �� ���̷����� ���ؼ� �˷��ָ� �����ϰھ�.\n���� ������ ���� �����Ұ�.\n%s ���̷��� ����!", nick, nick);
  MessageBox(NULL, ss, "�ɰ��� ���̷��� ���", MB_OKCANCEL + MB_ICONSTOP);
}