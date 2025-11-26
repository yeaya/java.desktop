#ifndef _bug4247996$3_h_
#define _bug4247996$3_h_
//$ class bug4247996$3
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class bug4247996$3 : public ::java::lang::Runnable {
	$class(bug4247996$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4247996$3();
	void init$($Array<::java::awt::Point>* val$result);
	virtual void run() override;
	$Array<::java::awt::Point>* val$result = nullptr;
};

#endif // _bug4247996$3_h_