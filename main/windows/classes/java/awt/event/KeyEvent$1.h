#ifndef _java_awt_event_KeyEvent$1_h_
#define _java_awt_event_KeyEvent$1_h_
//$ class java.awt.event.KeyEvent$1
//$ extends sun.awt.AWTAccessor$KeyEventAccessor

#include <sun/awt/AWTAccessor$KeyEventAccessor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class KeyEvent$1 : public ::sun::awt::AWTAccessor$KeyEventAccessor {
	$class(KeyEvent$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$KeyEventAccessor)
public:
	KeyEvent$1();
	void init$();
	virtual ::java::awt::Component* getOriginalSource(::java::awt::event::KeyEvent* ev) override;
	virtual bool isProxyActive(::java::awt::event::KeyEvent* ev) override;
	virtual void setExtendedKeyCode(::java::awt::event::KeyEvent* ev, int64_t extendedKeyCode) override;
	virtual void setPrimaryLevelUnicode(::java::awt::event::KeyEvent* ev, int64_t primaryLevelUnicode) override;
	virtual void setRawCode(::java::awt::event::KeyEvent* ev, int64_t rawCode) override;
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_KeyEvent$1_h_