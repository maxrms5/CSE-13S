#include <stdio.h>

void towerOfHanoi(int diskCt, char startRod[], char destRod[], char auxRod[]) {
    
    if (diskCt == 0) return;

    towerOfHanoi(diskCt-1, startRod, destRod+1, auxRod);
    printf("Moving disk %d from %s to %s\n", diskCt, startRod, destRod);
    towerOfHanoi(diskCt-1, auxRod, destRod, startRod);

}

int main() {

    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    towerOfHanoi(n, "Start", "Dest", "Aux");
    return 0;
}