#ifndef _NonOpaquePopupMenuTest$3_h_
#define _NonOpaquePopupMenuTest$3_h_
//$ class NonOpaquePopupMenuTest$3
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Point;
	}
}

class NonOpaquePopupMenuTest$3 : public ::java::lang::Runnable {
	$class(NonOpaquePopupMenuTest$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NonOpaquePopupMenuTest$3();
	void init$($Array<::java::awt::Point>* val$result);
	virtual void run() override;
	$Array<::java::awt::Point>* val$result = nullptr;
};

#endif // _NonOpaquePopupMenuTest$3_h_