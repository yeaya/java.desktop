#ifndef _Util$1_h_
#define _Util$1_h_
//$ class Util$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace awt {
		class Component;
	}
}

class Util$1 : public ::java::util::concurrent::Callable {
	$class(Util$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Util$1();
	void init$(::java::awt::Component* val$component);
	virtual $Object* call() override;
	::java::awt::Component* val$component = nullptr;
};

#endif // _Util$1_h_