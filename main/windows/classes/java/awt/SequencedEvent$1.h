#ifndef _java_awt_SequencedEvent$1_h_
#define _java_awt_SequencedEvent$1_h_
//$ class java.awt.SequencedEvent$1
//$ extends sun.awt.AWTAccessor$SequencedEventAccessor

#include <sun/awt/AWTAccessor$SequencedEventAccessor.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

namespace java {
	namespace awt {

class SequencedEvent$1 : public ::sun::awt::AWTAccessor$SequencedEventAccessor {
	$class(SequencedEvent$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$SequencedEventAccessor)
public:
	SequencedEvent$1();
	void init$();
	virtual ::java::awt::AWTEvent* create(::java::awt::AWTEvent* event) override;
	virtual ::java::awt::AWTEvent* getNested(::java::awt::AWTEvent* sequencedEvent) override;
	virtual bool isSequencedEvent(::java::awt::AWTEvent* event) override;
};

	} // awt
} // java

#endif // _java_awt_SequencedEvent$1_h_