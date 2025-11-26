#ifndef _bug6348946$3_h_
#define _bug6348946$3_h_
//$ class bug6348946$3
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

class bug6348946$3 : public ::java::lang::Runnable {
	$class(bug6348946$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6348946$3();
	void init$($Array<::java::awt::Rectangle>* val$result);
	virtual void run() override;
	$Array<::java::awt::Rectangle>* val$result = nullptr;
};

#endif // _bug6348946$3_h_