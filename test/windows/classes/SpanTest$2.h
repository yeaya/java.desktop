#ifndef _SpanTest$2_h_
#define _SpanTest$2_h_
//$ class SpanTest$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class SpanTest;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class SpanTest$2 : public ::java::lang::Runnable {
	$class(SpanTest$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SpanTest$2();
	void init$(::SpanTest* this$0);
	void lambda$run$0(::java::awt::event::ActionEvent* e);
	void lambda$run$1(::java::awt::event::ActionEvent* e);
	virtual void run() override;
	::SpanTest* this$0 = nullptr;
};

#endif // _SpanTest$2_h_