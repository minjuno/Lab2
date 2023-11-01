#include <stdio.h>
#include <dlfcn.h>

int main() {
    void *handle = dlopen("sharedlib.so", RTLD_LAZY);

    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        return 1;
    }

    int (*add)(int, int) = dlsym(handle, "add");
    int (*sub)(int, int) = dlsym(handle, "sub");
    int (*mul)(int, int) = dlsym(handle, "mul");
    int (*div)(int, int) = dlsym(handle, "div");

    int a = 10, b = 5;
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Division: %d\n", div(a, b));

    dlclose(handle);

    return 0;
}

