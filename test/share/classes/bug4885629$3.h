#ifndef _bug4885629$3_h_
#define _bug4885629$3_h_
//$ class bug4885629$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Robot;
	}
}

class bug4885629$3 : public ::java::lang::Runnable {
	$class(bug4885629$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4885629$3();
	void init$(::java::awt::Robot* val$robot);
	virtual void run() override;
	::java::awt::Robot* val$robot = nullptr;
};

#endif // _bug4885629$3_h_