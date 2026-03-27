#include <windows.h>
#include <winsvc.h>
int main(void){
	SC_HANDLE scHandle = OpenSCManagerA(NULL, SERVICES_ACTIVE_DATABASE, SC_MANAGER_ALL_ACCESS);
	return 0;
}
