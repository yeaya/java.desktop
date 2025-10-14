#ifndef _bug6794831_h_
#define _bug6794831_h_
//$ class bug6794831
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export bug6794831 : public ::java::lang::Object {
	$class(bug6794831, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6794831();
	void init$();
	static void fail($String* msg);
	static void main($StringArray* args);
	void run();
	::java::util::concurrent::CountDownLatch* countDownLatch = nullptr;
};

#endif // _bug6794831_h_