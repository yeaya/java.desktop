#ifndef _sun_awt_AWTAccessor$SequencedEventAccessor_h_
#define _sun_awt_AWTAccessor$SequencedEventAccessor_h_
//$ interface sun.awt.AWTAccessor$SequencedEventAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$SequencedEventAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$SequencedEventAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::AWTEvent* create(::java::awt::AWTEvent* event) {return nullptr;}
	virtual ::java::awt::AWTEvent* getNested(::java::awt::AWTEvent* sequencedEvent) {return nullptr;}
	virtual bool isSequencedEvent(::java::awt::AWTEvent* event) {return false;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$SequencedEventAccessor_h_