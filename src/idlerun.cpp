#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
   while(true) {
      double loadavg[3];
      int num = getloadavg (loadavg, 1);
      float th;
      sscanf(argv[1], "%f", &th);
      if(loadavg[0] < th) {
         execv(argv[2], argv+2);
         break;
      }
      sleep(10);
   }
}
