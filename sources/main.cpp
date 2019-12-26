//Copyright 2019 <rijiy>
#include "FTPfiles.h"

int main(int argc, char *argv[]) {
    if (argc < 2)
    {
        path path_to_ftp("C:\\Git\\laba4\\ftp");
        FTPfiles Test(path_to_ftp);
    } else {
        path path_to_ftp(argv[1]);
        FTPfiles Test(path_to_ftp);
    }
    return 0;
}
