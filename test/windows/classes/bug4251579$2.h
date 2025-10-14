#ifndef _bug4251579$2_h_
#define _bug4251579$2_h_
//$ class bug4251579$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Robot;
	}
}

class bug4251579$2 : public ::java::lang::Runnable {
	$class(bug4251579$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4251579$2();
	void init$(::java::awt::Robot* val$robot);
	virtual void run() override;
	::java::awt::Robot* val$robot = nullptr;
};

#endif // _bug4251579$2_h_