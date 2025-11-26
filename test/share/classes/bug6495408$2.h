#ifndef _bug6495408$2_h_
#define _bug6495408$2_h_
//$ class bug6495408$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
		class Robot;
	}
}

class bug6495408$2 : public ::java::lang::Runnable {
	$class(bug6495408$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6495408$2();
	void init$(::java::awt::Rectangle* val$d, ::java::awt::Point* val$p, ::java::awt::Robot* val$robot);
	virtual void run() override;
	::java::awt::Robot* val$robot = nullptr;
	::java::awt::Point* val$p = nullptr;
	::java::awt::Rectangle* val$d = nullptr;
};

#endif // _bug6495408$2_h_