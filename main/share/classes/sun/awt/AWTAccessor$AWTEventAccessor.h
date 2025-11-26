#ifndef _sun_awt_AWTAccessor$AWTEventAccessor_h_
#define _sun_awt_AWTAccessor$AWTEventAccessor_h_
//$ interface sun.awt.AWTAccessor$AWTEventAccessor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$AWTEventAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$AWTEventAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::AccessControlContext* getAccessControlContext(::java::awt::AWTEvent* ev) {return nullptr;}
	virtual $bytes* getBData(::java::awt::AWTEvent* ev) {return nullptr;}
	virtual bool isSystemGenerated(::java::awt::AWTEvent* ev) {return false;}
	virtual void setBData(::java::awt::AWTEvent* ev, $bytes* bdata) {}
	virtual void setPosted(::java::awt::AWTEvent* ev) {}
	virtual void setSystemGenerated(::java::awt::AWTEvent* ev) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$AWTEventAccessor_h_