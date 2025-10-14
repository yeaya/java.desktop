#ifndef _LostText$1_h_
#define _LostText$1_h_
//$ class LostText$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
	}
}

class LostText$1 : public ::java::lang::Runnable {
	$class(LostText$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LostText$1();
	void init$();
	::java::awt::Component* getComp();
	virtual void run() override;
};

#endif // _LostText$1_h_