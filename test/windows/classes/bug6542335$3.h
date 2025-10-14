#ifndef _bug6542335$3_h_
#define _bug6542335$3_h_
//$ class bug6542335$3
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

class bug6542335$3 : public ::java::lang::Runnable {
	$class(bug6542335$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug6542335$3();
	void init$($Array<::java::awt::Rectangle>* val$thumbBounds);
	virtual void run() override;
	$Array<::java::awt::Rectangle>* val$thumbBounds = nullptr;
};

#endif // _bug6542335$3_h_