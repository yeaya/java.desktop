#ifndef _bug4708809$4_h_
#define _bug4708809$4_h_
//$ class bug4708809$4
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class bug4708809$4 : public ::java::lang::Runnable {
	$class(bug4708809$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4708809$4();
	void init$($Array<::java::awt::Point>* val$result, double val$scaleX, double val$scaleY);
	virtual void run() override;
	double val$scaleY = 0.0;
	double val$scaleX = 0.0;
	$Array<::java::awt::Point>* val$result = nullptr;
};

#endif // _bug4708809$4_h_