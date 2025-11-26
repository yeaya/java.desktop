#ifndef _sun_awt_X11_XEmbeddedFrame_h_
#define _sun_awt_X11_XEmbeddedFrame_h_
//$ class sun.awt.X11.XEmbeddedFrame
//$ extends sun.awt.EmbeddedFrame

#include <sun/awt/EmbeddedFrame.h>

namespace java {
	namespace awt {
		class AWTKeyStroke;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbeddedFrame : public ::sun::awt::EmbeddedFrame {
	$class(XEmbeddedFrame, 0, ::sun::awt::EmbeddedFrame)
public:
	XEmbeddedFrame();
	using ::sun::awt::EmbeddedFrame::isFocusCycleRoot;
	using ::sun::awt::EmbeddedFrame::add;
	using ::sun::awt::EmbeddedFrame::getMousePosition;
	using ::sun::awt::EmbeddedFrame::list;
	void init$();
	void init$(int64_t handle);
	void init$(int64_t handle, bool supportsXEmbed, bool isTrayIconWindow);
	void init$(int64_t handle, bool supportsXEmbed);
	virtual void addNotify() override;
	virtual void registerAccelerator(::java::awt::AWTKeyStroke* stroke) override;
	using ::sun::awt::EmbeddedFrame::show;
	using ::sun::awt::EmbeddedFrame::remove;
	using ::sun::awt::EmbeddedFrame::setCursor;
	virtual void synthesizeWindowActivation(bool doActivate) override;
	virtual bool traverseIn(bool direction) override;
	virtual bool traverseOut(bool direction) override;
	virtual void unregisterAccelerator(::java::awt::AWTKeyStroke* stroke) override;
	static ::sun::util::logging::PlatformLogger* log;
	int64_t handle = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbeddedFrame_h_