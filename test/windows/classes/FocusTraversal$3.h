#ifndef _FocusTraversal$3_h_
#define _FocusTraversal$3_h_
//$ class FocusTraversal$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
	}
}

class FocusTraversal$3 : public ::java::lang::Runnable {
	$class(FocusTraversal$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FocusTraversal$3();
	void init$(::java::awt::Component* val$queriedFocusOwner, $String* val$direction);
	virtual void run() override;
	$String* val$direction = nullptr;
	::java::awt::Component* val$queriedFocusOwner = nullptr;
};

#endif // _FocusTraversal$3_h_