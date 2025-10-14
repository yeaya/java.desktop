#ifndef _bug7068740$3_h_
#define _bug7068740$3_h_
//$ class bug7068740$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class bug7068740$3 : public ::java::lang::Runnable {
	$class(bug7068740$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug7068740$3();
	void init$(::java::util::concurrent::atomic::AtomicInteger* val$row);
	virtual void run() override;
	::java::util::concurrent::atomic::AtomicInteger* val$row = nullptr;
};

#endif // _bug7068740$3_h_