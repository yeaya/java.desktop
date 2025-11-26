#ifndef _bug8071705$1_h_
#define _bug8071705$1_h_
//$ class bug8071705$1
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class bug8071705$1 : public ::java::lang::Runnable {
	$class(bug8071705$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug8071705$1();
	void init$($booleans* val$result, ::java::util::concurrent::CountDownLatch* val$latch);
	virtual void run() override;
	::java::util::concurrent::CountDownLatch* val$latch = nullptr;
	$booleans* val$result = nullptr;
};

#endif // _bug8071705$1_h_