#ifndef _bug6694823$5_h_
#define _bug6694823$5_h_
//$ class bug6694823$5
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class bug6694823$5 : public ::java::lang::Runnable {
	$class(bug6694823$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6694823$5();
	void init$(::java::awt::Point* val$point);
	virtual void run() override;
	::java::awt::Point* val$point = nullptr;
};

#endif // _bug6694823$5_h_