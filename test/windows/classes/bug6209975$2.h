#ifndef _bug6209975$2_h_
#define _bug6209975$2_h_
//$ class bug6209975$2
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class bug6209975$2 : public ::java::lang::Runnable {
	$class(bug6209975$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6209975$2();
	void init$($Array<::java::awt::Point>* val$result);
	virtual void run() override;
	$Array<::java::awt::Point>* val$result = nullptr;
};

#endif // _bug6209975$2_h_