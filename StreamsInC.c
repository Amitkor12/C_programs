#include <stdio.h>

void abc(FILE* dc);

void abc(FILE* dc) {
    int z = 12,s = 13;
    fprintf(dc, "Hello, World!\n");
    // dc << "lines: " << z << "\n" << "columns:" << s << "\n";
    fprintf(dc, "lines: %d\tcolumns: %d\t",z,s);
    // fscanf(dc,"%d",&a);
    // printf("value of a: %d\n",a);
}

int main() {
    // abc(stdin);
    abc(stdout);
    // abc(stdin);  // Output: Hello, World!


    return 0;
}
