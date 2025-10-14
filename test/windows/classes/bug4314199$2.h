#ifndef _bug4314199$2_h_
#define _bug4314199$2_h_
//$ class bug4314199$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug4314199;
namespace java {
	namespace lang {
		class Exception;
	}
}

class bug4314199$2 : public ::java::lang::Runnable {
	$class(bug4314199$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug4314199$2();
	void init$(::bug4314199* this$0, ::java::lang::Exception* val$e);
	virtual void run() override;
	::bug4314199* this$0 = nullptr;
	::java::lang::Exception* val$e = nullptr;
};

#endif // _bug4314199$2_h_