#ifndef _bug6432565_h_
#define _bug6432565_h_
//$ class bug6432565
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicReference;
			}
		}
	}
}

class $export bug6432565 : public ::java::lang::Object {
	$class(bug6432565, 0, ::java::lang::Object)
public:
	bug6432565();
	void init$();
	static void main($StringArray* args);
	static ::java::util::concurrent::atomic::AtomicReference* throwable;
	static ::java::util::concurrent::atomic::AtomicBoolean* isDone;
};

#endif // _bug6432565_h_