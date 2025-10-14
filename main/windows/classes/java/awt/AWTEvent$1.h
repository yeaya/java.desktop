#ifndef _java_awt_AWTEvent$1_h_
#define _java_awt_AWTEvent$1_h_
//$ class java.awt.AWTEvent$1
//$ extends sun.awt.AWTAccessor$AWTEventAccessor

#include <java/lang/Array.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>

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

namespace java {
	namespace awt {

class AWTEvent$1 : public ::sun::awt::AWTAccessor$AWTEventAccessor {
	$class(AWTEvent$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$AWTEventAccessor)
public:
	AWTEvent$1();
	void init$();
	virtual ::java::security::AccessControlContext* getAccessControlContext(::java::awt::AWTEvent* ev) override;
	virtual $bytes* getBData(::java::awt::AWTEvent* ev) override;
	virtual bool isSystemGenerated(::java::awt::AWTEvent* ev) override;
	virtual void setBData(::java::awt::AWTEvent* ev, $bytes* bdata) override;
	virtual void setPosted(::java::awt::AWTEvent* ev) override;
	virtual void setSystemGenerated(::java::awt::AWTEvent* ev) override;
};

	} // awt
} // java

#endif // _java_awt_AWTEvent$1_h_