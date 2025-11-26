#ifndef _sun_awt_AWTAccessor$KeyEventAccessor_h_
#define _sun_awt_AWTAccessor$KeyEventAccessor_h_
//$ interface sun.awt.AWTAccessor$KeyEventAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace sun {
	namespace awt {

class $import AWTAccessor$KeyEventAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$KeyEventAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getOriginalSource(::java::awt::event::KeyEvent* ev) {return nullptr;}
	virtual bool isProxyActive(::java::awt::event::KeyEvent* ev) {return false;}
	virtual void setExtendedKeyCode(::java::awt::event::KeyEvent* ev, int64_t extendedKeyCode) {}
	virtual void setPrimaryLevelUnicode(::java::awt::event::KeyEvent* ev, int64_t primaryLevelUnicode) {}
	virtual void setRawCode(::java::awt::event::KeyEvent* ev, int64_t rawCode) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$KeyEventAccessor_h_