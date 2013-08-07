#include <winsock.h>
#include <iostream>
#include <string>
#include <mysql.h>

using namespace std;
 
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "libmysql.lib")
 
//单步执行，不想单步执行就注释掉
//#define STEPBYSTEP