#ifndef _bug6493680$Test_h_
#define _bug6493680$Test_h_
//$ class bug6493680$Test
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Exchanger;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class bug6493680$Test : public ::java::lang::Object {
	$class(bug6493680$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6493680$Test();
	void init$();
	virtual bool test();
	::java::util::concurrent::atomic::AtomicInteger* lastProgressValue = nullptr;
	::java::util::concurrent::Exchanger* exchanger = nullptr;
};

#endif // _bug6493680$Test_h_