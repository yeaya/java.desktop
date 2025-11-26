#ifndef _FocusTraversal$2_h_
#define _FocusTraversal$2_h_
//$ class FocusTraversal$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
	}
}

class FocusTraversal$2 : public ::java::lang::Runnable {
	$class(FocusTraversal$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FocusTraversal$2();
	void init$(::java::awt::Component* val$component);
	virtual void run() override;
	::java::awt::Component* val$component = nullptr;
};

#endif // _FocusTraversal$2_h_