#ifndef _sun_awt_X11_XSelection$IncrementalDataProvider_h_
#define _sun_awt_X11_XSelection$IncrementalDataProvider_h_
//$ class sun.awt.X11.XSelection$IncrementalDataProvider
//$ extends sun.awt.X11.XEventDispatcher

#include <java/lang/Array.h>
#include <sun/awt/X11/XEventDispatcher.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XSelection$IncrementalDataProvider : public ::sun::awt::X11::XEventDispatcher {
	$class(XSelection$IncrementalDataProvider, 0, ::sun::awt::X11::XEventDispatcher)
public:
	XSelection$IncrementalDataProvider();
	void init$(int64_t requestor, int64_t property, int64_t target, int32_t format, $bytes* data);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	static bool $assertionsDisabled;
	int64_t requestor = 0;
	int64_t property = 0;
	int64_t target = 0;
	int32_t format = 0;
	$bytes* data = nullptr;
	int32_t offset = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XSelection$IncrementalDataProvider_h_