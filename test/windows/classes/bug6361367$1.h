#ifndef _bug6361367$1_h_
#define _bug6361367$1_h_
//$ class bug6361367$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}

class bug6361367$1 : public ::java::util::concurrent::Callable {
	$class(bug6361367$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	bug6361367$1();
	void init$($Class* val$textComponentClass, ::java::util::concurrent::atomic::AtomicReference* val$ref);
	virtual $Object* call() override;
	::java::util::concurrent::atomic::AtomicReference* val$ref = nullptr;
	$Class* val$textComponentClass = nullptr;
};

#endif // _bug6361367$1_h_