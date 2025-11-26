#ifndef _bug6263446JTree$2_h_
#define _bug6263446JTree$2_h_
//$ class bug6263446JTree$2
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class bug6263446JTree$2 : public ::java::lang::Runnable {
	$class(bug6263446JTree$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6263446JTree$2();
	void init$($Array<::java::awt::Point>* val$result);
	virtual void run() override;
	$Array<::java::awt::Point>* val$result = nullptr;
};

#endif // _bug6263446JTree$2_h_