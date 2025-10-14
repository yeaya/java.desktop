#ifndef _Test8007563$1_h_
#define _Test8007563$1_h_
//$ class Test8007563$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class Test8007563;
namespace java {
	namespace awt {
		class SecondaryLoop;
	}
}

class Test8007563$1 : public ::java::lang::Thread {
	$class(Test8007563$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Test8007563$1();
	void init$(::Test8007563* this$0, ::java::awt::SecondaryLoop* val$secondaryLoop);
	virtual void run() override;
	::Test8007563* this$0 = nullptr;
	::java::awt::SecondaryLoop* val$secondaryLoop = nullptr;
};

#endif // _Test8007563$1_h_