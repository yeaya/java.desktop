#ifndef _sun_awt_windows_WEmbeddedFrame_h_
#define _sun_awt_windows_WEmbeddedFrame_h_
//$ class sun.awt.windows.WEmbeddedFrame
//$ extends sun.awt.EmbeddedFrame

#include <java/lang/Array.h>
#include <sun/awt/EmbeddedFrame.h>

#pragma push_macro("MAX_BAND_SIZE")
#undef MAX_BAND_SIZE

namespace java {
	namespace awt {
		class AWTKeyStroke;
		class Dialog;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WEmbeddedFramePeer;
			class WWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WEmbeddedFrame : public ::sun::awt::EmbeddedFrame {
	$class(WEmbeddedFrame, 0, ::sun::awt::EmbeddedFrame)
public:
	WEmbeddedFrame();
	using ::sun::awt::EmbeddedFrame::isFocusCycleRoot;
	using ::sun::awt::EmbeddedFrame::add;
	using ::sun::awt::EmbeddedFrame::getMousePosition;
	using ::sun::awt::EmbeddedFrame::list;
	void init$();
	void init$(int32_t handle);
	void init$(int64_t handle);
	virtual void activateEmbeddingTopLevel();
	virtual void addNotify() override;
	virtual int64_t getEmbedderHandle();
	static int32_t getPrintScaleFactor();
	static void initIDs();
	bool isPrinterDC(int64_t hdc);
	virtual void notifyModalBlocked(::java::awt::Dialog* blocker, bool blocked) override;
	virtual void notifyModalBlockedImpl(::sun::awt::windows::WEmbeddedFramePeer* peer, ::sun::awt::windows::WWindowPeer* blockerPeer, bool blocked);
	using ::sun::awt::EmbeddedFrame::print;
	virtual void print(int64_t hdc);
	void printBand(int64_t hdc, $bytes* data, int32_t offset, int32_t sx, int32_t sy, int32_t swidth, int32_t sheight, int32_t dx, int32_t dy, int32_t dwidth, int32_t dheight);
	virtual void registerAccelerator(::java::awt::AWTKeyStroke* stroke) override;
	using ::sun::awt::EmbeddedFrame::show;
	using ::sun::awt::EmbeddedFrame::remove;
	using ::sun::awt::EmbeddedFrame::setCursor;
	virtual void synthesizeWindowActivation(bool activate) override;
	virtual void unregisterAccelerator(::java::awt::AWTKeyStroke* stroke) override;
	int64_t handle = 0;
	int32_t bandWidth = 0;
	int32_t bandHeight = 0;
	int32_t imgWid = 0;
	int32_t imgHgt = 0;
	static int32_t pScale;
	static const int32_t MAX_BAND_SIZE = (1024 * 30);
	bool isEmbeddedInIE = false;
	static $String* printScale;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("MAX_BAND_SIZE")

#endif // _sun_awt_windows_WEmbeddedFrame_h_