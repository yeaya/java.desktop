#ifndef _bug6542335$2_h_
#define _bug6542335$2_h_
//$ class bug6542335$2
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Rectangle;
		class Robot;
	}
}

class bug6542335$2 : public ::java::lang::Runnable {
	$class(bug6542335$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6542335$2();
	void init$($Array<::java::awt::Rectangle>* val$thumbBounds, ::java::awt::Robot* val$robot);
	virtual void run() override;
	::java::awt::Robot* val$robot = nullptr;
	$Array<::java::awt::Rectangle>* val$thumbBounds = nullptr;
};

#endif // _bug6542335$2_h_