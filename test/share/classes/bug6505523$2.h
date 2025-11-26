#ifndef _bug6505523$2_h_
#define _bug6505523$2_h_
//$ class bug6505523$2
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class bug6505523$2 : public ::java::lang::Runnable {
	$class(bug6505523$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6505523$2();
	void init$(int32_t val$row, $Array<::java::awt::Point>* val$result);
	virtual void run() override;
	$Array<::java::awt::Point>* val$result = nullptr;
	int32_t val$row = 0;
};

#endif // _bug6505523$2_h_