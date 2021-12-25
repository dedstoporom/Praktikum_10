#include <iostream>

using namespace std;
class OverflowException:public exception{
public :OverflowException(char *msg):exception(msg){

	}

};
 class NoElementsException :public exception {
public:NoElementsException(char* msg) :exception(msg) {

}
};
