#ifndef _java_awt_SequencedEvent$3_h_
#define _java_awt_SequencedEvent$3_h_
//$ class java.awt.SequencedEvent$3
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace awt {
		class SequencedEvent;
	}
}

namespace java {
	namespace awt {

class SequencedEvent$3 : public ::java::lang::Thread {
	$class(SequencedEvent$3, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	SequencedEvent$3();
	void init$(::java::awt::SequencedEvent* this$0);
	virtual void run() override;
	::java::awt::SequencedEvent* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_SequencedEvent$3_h_