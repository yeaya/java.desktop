#ifndef _bug6547087_h_
#define _bug6547087_h_
//$ class bug6547087
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

class $export bug6547087 : public ::java::lang::Object {
	$class(bug6547087, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6547087();
	void init$();
	static $Object* invokeAndWait(::java::util::concurrent::Callable* callable);
	static void main($StringArray* args);
	static void test();
};

#endif // _bug6547087_h_