#ifndef _bug4506788$2_h_
#define _bug4506788$2_h_
//$ class bug4506788$2
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class bug4506788;
namespace java {
	namespace awt {
		class Point;
	}
}

class bug4506788$2 : public ::java::lang::Runnable {
	$class(bug4506788$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4506788$2();
	void init$(::bug4506788* this$0, $Array<::java::awt::Point>* val$result);
	virtual void run() override;
	::bug4506788* this$0 = nullptr;
	$Array<::java::awt::Point>* val$result = nullptr;
};

#endif // _bug4506788$2_h_