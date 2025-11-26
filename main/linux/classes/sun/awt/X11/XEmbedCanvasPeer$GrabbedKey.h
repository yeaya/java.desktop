#ifndef _sun_awt_X11_XEmbedCanvasPeer$GrabbedKey_h_
#define _sun_awt_X11_XEmbedCanvasPeer$GrabbedKey_h_
//$ class sun.awt.X11.XEmbedCanvasPeer$GrabbedKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbedCanvasPeer$GrabbedKey : public ::java::lang::Object {
	$class(XEmbedCanvasPeer$GrabbedKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XEmbedCanvasPeer$GrabbedKey();
	void init$(int64_t keysym, int64_t modifiers);
	void init$(::java::awt::event::KeyEvent* ev);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	void init(::java::awt::event::KeyEvent* e);
	virtual $String* toString() override;
	int64_t keysym = 0;
	int64_t modifiers = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedCanvasPeer$GrabbedKey_h_