#include <windows.h>
#include <stdio.h>

void main(){
	
	PVOID AllocatedMemory = NULL;
	DWORD LastError = 0;
	
	AllocatedMemory = VirtualAlloc(NULL, 1024, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	
	printf("Memory has been allocated to 0x%llx\n", AllocatedMemory);
	
	//Replace 0x150 with 0x0 for a proper handle
	MessageBoxA(0x150, "Hack the Planet!!", "WKL", MB_OK);
	getchar();
	
	LastError = GetLastError();
	
	printf("MessageBoxA error: 0x%x\n", LastError);
	
}

