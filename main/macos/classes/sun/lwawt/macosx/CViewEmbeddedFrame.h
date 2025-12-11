#ifndef _sun_lwawt_macosx_CViewEmbeddedFrame_h_
#define _sun_lwawt_macosx_CViewEmbeddedFrame_h_
//$ class sun.lwawt.macosx.CViewEmbeddedFrame
//$ extends sun.awt.EmbeddedFrame

#include <sun/awt/EmbeddedFrame.h>

namespace java {
	namespace awt {
		class AWTKeyStroke;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CViewEmbeddedFrame : public ::sun::awt::EmbeddedFrame {
	$class(CViewEmbeddedFrame, $NO_CLASS_INIT, ::sun::awt::EmbeddedFrame)
public:
	CViewEmbeddedFrame();
	using ::sun::awt::EmbeddedFrame::add;
	using ::sun::awt::EmbeddedFrame::getMousePosition;
	void init$(int64_t nsViewPtr);
	virtual void addNotify() override;
	virtual int64_t getEmbedderHandle();
	using ::sun::awt::EmbeddedFrame::isFocusCycleRoot;
	virtual bool isParentWindowActive();
	void lambda$validateWithBounds$0(int32_t width, int32_t height);
	using ::sun::awt::EmbeddedFrame::list;
	virtual void registerAccelerator(::java::awt::AWTKeyStroke* awtks) override;
	using ::sun::awt::EmbeddedFrame::show;
	using ::sun::awt::EmbeddedFrame::remove;
	using ::sun::awt::EmbeddedFrame::setCursor;
	virtual void synthesizeWindowActivation(bool activated) override;
	virtual void unregisterAccelerator(::java::awt::AWTKeyStroke* awtks) override;
	virtual void validateWithBounds(int32_t x, int32_t y, int32_t width, int32_t height);
	int64_t nsViewPtr = 0;
	bool isActive$ = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CViewEmbeddedFrame_h_