#ifndef _NormalBoundsTest$3_h_
#define _NormalBoundsTest$3_h_
//$ class NormalBoundsTest$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Robot;
	}
}

class NormalBoundsTest$3 : public ::java::lang::Runnable {
	$class(NormalBoundsTest$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NormalBoundsTest$3();
	void init$(::java::awt::Robot* val$robot);
	virtual void run() override;
	::java::awt::Robot* val$robot = nullptr;
};

#endif // _NormalBoundsTest$3_h_