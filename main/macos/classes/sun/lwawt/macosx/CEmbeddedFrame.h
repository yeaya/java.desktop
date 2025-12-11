#ifndef _sun_lwawt_macosx_CEmbeddedFrame_h_
#define _sun_lwawt_macosx_CEmbeddedFrame_h_
//$ class sun.lwawt.macosx.CEmbeddedFrame
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
			class CPlatformResponder;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CEmbeddedFrame : public ::sun::awt::EmbeddedFrame {
	$class(CEmbeddedFrame, 0, ::sun::awt::EmbeddedFrame)
public:
	CEmbeddedFrame();
	using ::sun::awt::EmbeddedFrame::isFocusCycleRoot;
	using ::sun::awt::EmbeddedFrame::add;
	using ::sun::awt::EmbeddedFrame::getMousePosition;
	using ::sun::awt::EmbeddedFrame::list;
	void init$();
	virtual void addNotify() override;
	virtual int64_t getLayerPtr();
	virtual void handleFocusEvent(bool focused);
	virtual void handleInputEvent($String* text);
	virtual void handleKeyEvent(int32_t eventType, int32_t modifierFlags, $String* characters, $String* charsIgnoringMods, bool isRepeat, int16_t keyCode, bool needsKeyTyped);
	virtual void handleMouseEvent(int32_t eventType, int32_t modifierFlags, double pluginX, double pluginY, int32_t buttonNumber, int32_t clickCount);
	virtual void handleScrollEvent(double pluginX, double pluginY, int32_t modifierFlags, double deltaX, double deltaY, double deltaZ);
	virtual void handleWindowFocusEvent(bool parentWindowActive);
	virtual bool isParentWindowActive();
	bool isParentWindowChanged();
	virtual void registerAccelerator(::java::awt::AWTKeyStroke* stroke) override;
	using ::sun::awt::EmbeddedFrame::show;
	using ::sun::awt::EmbeddedFrame::remove;
	using ::sun::awt::EmbeddedFrame::setCursor;
	virtual void synthesizeWindowActivation(bool doActivate) override;
	virtual void unregisterAccelerator(::java::awt::AWTKeyStroke* stroke) override;
	static void updateGlobalFocusedWindow(::sun::lwawt::macosx::CEmbeddedFrame* newGlobalFocusedWindow);
	::sun::lwawt::macosx::CPlatformResponder* responder = nullptr;
	static $Object* classLock;
	static $volatile(::sun::lwawt::macosx::CEmbeddedFrame*) globalFocusedWindow;
	::sun::lwawt::macosx::CEmbeddedFrame* browserWindowFocusedApplet = nullptr;
	bool parentWindowActive = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CEmbeddedFrame_h_