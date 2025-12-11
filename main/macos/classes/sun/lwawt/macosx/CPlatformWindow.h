#ifndef _sun_lwawt_macosx_CPlatformWindow_h_
#define _sun_lwawt_macosx_CPlatformWindow_h_
//$ class sun.lwawt.macosx.CPlatformWindow
//$ extends sun.lwawt.macosx.CFRetainedResource
//$ implements sun.lwawt.PlatformWindow

#include <java/lang/Array.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>

#pragma push_macro("ALWAYS_ON_TOP")
#undef ALWAYS_ON_TOP
#pragma push_macro("APPLICATION_MODAL")
#undef APPLICATION_MODAL
#pragma push_macro("CLIENT_PROPERTY_APPLICATOR")
#undef CLIENT_PROPERTY_APPLICATOR
#pragma push_macro("CLOSEABLE")
#undef CLOSEABLE
#pragma push_macro("DECORATED")
#undef DECORATED
#pragma push_macro("DOCUMENT_MODAL")
#undef DOCUMENT_MODAL
#pragma push_macro("DOCUMENT_MODIFIED")
#undef DOCUMENT_MODIFIED
#pragma push_macro("DRAGGABLE_BACKGROUND")
#undef DRAGGABLE_BACKGROUND
#pragma push_macro("FULLSCREENABLE")
#undef FULLSCREENABLE
#pragma push_macro("FULL_WINDOW_CONTENT")
#undef FULL_WINDOW_CONTENT
#pragma push_macro("HAS_SHADOW")
#undef HAS_SHADOW
#pragma push_macro("HIDES_ON_DEACTIVATE")
#undef HIDES_ON_DEACTIVATE
#pragma push_macro("HUD")
#undef HUD
#pragma push_macro("IS")
#undef IS
#pragma push_macro("IS_DIALOG")
#undef IS_DIALOG
#pragma push_macro("IS_MODAL")
#undef IS_MODAL
#pragma push_macro("IS_POPUP")
#undef IS_POPUP
#pragma push_macro("MAC_OS_TABBED_WINDOW")
#undef MAC_OS_TABBED_WINDOW
#pragma push_macro("MINIMIZABLE")
#undef MINIMIZABLE
#pragma push_macro("MODAL_EXCLUDED")
#undef MODAL_EXCLUDED
#pragma push_macro("MODELESS")
#undef MODELESS
#pragma push_macro("NONACTIVATING")
#undef NONACTIVATING
#pragma push_macro("RESIZABLE")
#undef RESIZABLE
#pragma push_macro("SET")
#undef SET
#pragma push_macro("SHEET")
#undef SHEET
#pragma push_macro("SHOULD_BECOME_KEY")
#undef SHOULD_BECOME_KEY
#pragma push_macro("SHOULD_BECOME_MAIN")
#undef SHOULD_BECOME_MAIN
#pragma push_macro("TEXTURED")
#undef TEXTURED
#pragma push_macro("TITLE_VISIBLE")
#undef TITLE_VISIBLE
#pragma push_macro("TOOLKIT_MODAL")
#undef TOOLKIT_MODAL
#pragma push_macro("TRANSPARENT_TITLE_BAR")
#undef TRANSPARENT_TITLE_BAR
#pragma push_macro("UNIFIED")
#undef UNIFIED
#pragma push_macro("UTILITY")
#undef UTILITY
#pragma push_macro("WINDOW_ALPHA")
#undef WINDOW_ALPHA
#pragma push_macro("WINDOW_BRUSH_METAL_LOOK")
#undef WINDOW_BRUSH_METAL_LOOK
#pragma push_macro("WINDOW_CLOSEABLE")
#undef WINDOW_CLOSEABLE
#pragma push_macro("WINDOW_DOCUMENT_FILE")
#undef WINDOW_DOCUMENT_FILE
#pragma push_macro("WINDOW_DOCUMENT_MODIFIED")
#undef WINDOW_DOCUMENT_MODIFIED
#pragma push_macro("WINDOW_DOC_MODAL_SHEET")
#undef WINDOW_DOC_MODAL_SHEET
#pragma push_macro("WINDOW_DRAGGABLE_BACKGROUND")
#undef WINDOW_DRAGGABLE_BACKGROUND
#pragma push_macro("WINDOW_FADE_DELEGATE")
#undef WINDOW_FADE_DELEGATE
#pragma push_macro("WINDOW_FADE_IN")
#undef WINDOW_FADE_IN
#pragma push_macro("WINDOW_FADE_OUT")
#undef WINDOW_FADE_OUT
#pragma push_macro("WINDOW_FULLSCREENABLE")
#undef WINDOW_FULLSCREENABLE
#pragma push_macro("WINDOW_FULL_CONTENT")
#undef WINDOW_FULL_CONTENT
#pragma push_macro("WINDOW_HIDES_ON_DEACTIVATE")
#undef WINDOW_HIDES_ON_DEACTIVATE
#pragma push_macro("WINDOW_MINIMIZABLE")
#undef WINDOW_MINIMIZABLE
#pragma push_macro("WINDOW_SHADOW")
#undef WINDOW_SHADOW
#pragma push_macro("WINDOW_SHADOW_REVALIDATE_NOW")
#undef WINDOW_SHADOW_REVALIDATE_NOW
#pragma push_macro("WINDOW_STYLE")
#undef WINDOW_STYLE
#pragma push_macro("WINDOW_TITLE_VISIBLE")
#undef WINDOW_TITLE_VISIBLE
#pragma push_macro("WINDOW_TRANSPARENT_TITLE_BAR")
#undef WINDOW_TRANSPARENT_TITLE_BAR
#pragma push_macro("WINDOW_ZOOMABLE")
#undef WINDOW_ZOOMABLE
#pragma push_macro("ZOOMABLE")
#undef ZOOMABLE
#pragma push_macro("_CALLBACK_PROP_BITMASK")
#undef _CALLBACK_PROP_BITMASK
#pragma push_macro("_METHOD_PROP_BITMASK")
#undef _METHOD_PROP_BITMASK
#pragma push_macro("_RESERVED_FOR_DATA")
#undef _RESERVED_FOR_DATA
#pragma push_macro("_STYLE_PROP_BITMASK")
#undef _STYLE_PROP_BITMASK

namespace com {
	namespace apple {
		namespace laf {
			class ClientPropertyApplicator;
		}
	}
}
namespace java {
	namespace awt {
		class Font;
		class FontMetrics;
		class GraphicsDevice;
		class Insets;
		class MenuBar;
		class Point;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicLong;
				class AtomicReference;
			}
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CImage;
			class CMenuBar;
			class CPlatformResponder;
			class CPlatformView;
		}
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
	namespace lwawt {
		namespace macosx {

class CPlatformWindow : public ::sun::lwawt::macosx::CFRetainedResource, public ::sun::lwawt::PlatformWindow {
	$class(CPlatformWindow, 0, ::sun::lwawt::macosx::CFRetainedResource, ::sun::lwawt::PlatformWindow)
public:
	CPlatformWindow();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static bool IS(int32_t bits, int32_t mask);
	static int32_t SET(int32_t bits, int32_t mask, bool value);
	void _toggleFullScreenMode(int64_t model);
	static void access$001(::sun::lwawt::macosx::CPlatformWindow* x0);
	virtual void applyWindowLevel(::java::awt::Window* target);
	bool checkBlockingAndOrder();
	void checkZoom();
	virtual ::sun::lwawt::macosx::CPlatformView* createContentView();
	virtual ::sun::lwawt::macosx::CPlatformResponder* createPlatformResponder();
	void deliverIconify(bool iconify);
	virtual void deliverMoveResizeEvent(int32_t x, int32_t y, int32_t width, int32_t height, bool byUser);
	void deliverNCMouseDown();
	void deliverWindowClosingEvent();
	void deliverWindowFocusEvent(bool gained, ::sun::lwawt::macosx::CPlatformWindow* opposite);
	void deliverZoom(bool isZoomed);
	virtual void dispose() override;
	virtual void enterFullScreenMode() override;
	virtual void exitFullScreenMode() override;
	virtual void flushBuffers();
	virtual ::sun::lwawt::macosx::CPlatformView* getContentView();
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::GraphicsDevice* getGraphicsDevice() override;
	::sun::lwawt::macosx::CImage* getImageForTarget();
	virtual int32_t getInitialStyleBits();
	virtual ::java::awt::Insets* getInsets() override;
	virtual int64_t getLayerPtr() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	static int64_t getNativeViewPtr(::sun::lwawt::PlatformWindow* platformWindow);
	::java::awt::Window* getOwnerFrameOrDialog(::java::awt::Window* window);
	virtual ::sun::lwawt::LWWindowPeer* getPeer() override;
	::sun::lwawt::macosx::CPlatformWindow* getRootOwner();
	virtual ::sun::java2d::SurfaceData* getScreenSurface() override;
	virtual ::sun::java2d::SurfaceData* getSurfaceData();
	virtual void initialize(::java::awt::Window* _target, ::sun::lwawt::LWWindowPeer* _peer, ::sun::lwawt::PlatformWindow* _owner) override;
	virtual void initializeBase(::java::awt::Window* target, ::sun::lwawt::LWWindowPeer* peer, ::sun::lwawt::PlatformWindow* owner);
	void invalidateShadow();
	virtual bool isActive() override;
	bool isBlocked();
	virtual bool isFullScreenMode() override;
	bool isIconified();
	bool isMaximized();
	bool isNativelyFocusableWindow();
	bool isOneOfOwnersOrSelf(::sun::lwawt::macosx::CPlatformWindow* window);
	bool isSimpleWindowOwnedByEmbeddedFrame();
	virtual bool isUnderMouse() override;
	virtual bool isVisible();
	static void lambda$applyWindowLevel$36(int64_t ptr);
	static void lambda$applyWindowLevel$37(int64_t ptr);
	static void lambda$checkBlockingAndOrder$33(int64_t ptr);
	static void lambda$deliverMoveResizeEvent$32(::java::util::concurrent::atomic::AtomicBoolean* ref, int64_t ptr);
	static void lambda$getInsets$6(::java::util::concurrent::atomic::AtomicReference* ref, int64_t ptr);
	int64_t lambda$initialize$1(::java::util::concurrent::atomic::AtomicLong* ref, int64_t viewPtr, int32_t styleBits, ::java::awt::Rectangle* bounds, int64_t ownerPtr);
	void lambda$initialize$2(::java::util::concurrent::atomic::AtomicLong* ref, int32_t styleBits, ::java::awt::Rectangle* bounds, int64_t viewPtr);
	static void lambda$invalidateShadow$31(int64_t ptr);
	static void lambda$isActive$24(::java::util::concurrent::atomic::AtomicBoolean* ref, int64_t ptr);
	static int32_t lambda$new$0(::java::awt::Window* w1, ::java::awt::Window* w2);
	static void lambda$orderAboveSiblingsImpl$35(::sun::lwawt::macosx::CPlatformWindow* pw, int64_t underPtr);
	static void lambda$requestWindowFocus$23(int64_t ptr);
	static void lambda$setBounds$7(int32_t x, int32_t y, int32_t w, int32_t h, int64_t ptr);
	static void lambda$setMaximizedBounds$8(int32_t x, int32_t y, int32_t w, int32_t h, int64_t ptr);
	static void lambda$setMenuBar$4(int64_t nsWindowPtr, int64_t ptr);
	static void lambda$setMenuBar$5(::sun::lwawt::macosx::CMenuBar* mbPeer, int64_t nsWindowPtr);
	static void lambda$setModalBlocked$29(int64_t ptr);
	static void lambda$setModalBlocked$30(bool blocked, int64_t ptr);
	static void lambda$setOpacity$25(float opacity, int64_t ptr);
	static void lambda$setOpaque$26(bool isOpaque, int64_t ptr);
	static void lambda$setOpaque$27(int64_t ptr);
	static void lambda$setOpaque$28(int32_t rgb, int64_t ptr);
	static void lambda$setSizeConstraints$22(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH, int64_t ptr);
	static void lambda$setStyleBits$3(int32_t mask, bool value, int64_t ptr);
	static void lambda$setTitle$19($String* title, int64_t ptr);
	void lambda$setVisible$10(int64_t viewPtr);
	void lambda$setVisible$11(bool isPopup, int64_t ptr);
	static void lambda$setVisible$12(int64_t ptr);
	static void lambda$setVisible$13(int64_t blockerPtr, int64_t ptr);
	void lambda$setVisible$14(int64_t blockerPtr);
	static void lambda$setVisible$15(int64_t ownerPtr, int64_t ptr);
	void lambda$setVisible$16(int64_t ownerPtr);
	static void lambda$setVisible$17(int64_t childPtr, int64_t ptr);
	void lambda$setVisible$18(int64_t childPtr);
	static void lambda$setVisible$9(int64_t viewPtr, int64_t ptr);
	static void lambda$updateIconImages$20(int64_t ptr, int64_t imagePtr);
	static void lambda$updateIconImages$21(::sun::lwawt::macosx::CImage* cImage, int64_t ptr);
	void maximize();
	int64_t nativeCreateNSWindow(int64_t nsViewPtr, int64_t ownerPtr, int64_t styleBits, double x, double y, double w, double h);
	static void nativeDispose(int64_t nsWindowPtr);
	static void nativeEnterFullScreenMode(int64_t nsWindowPtr);
	static void nativeExitFullScreenMode(int64_t nsWindowPtr);
	static ::java::awt::Insets* nativeGetNSWindowInsets(int64_t nsWindowPtr);
	static ::sun::lwawt::macosx::CPlatformWindow* nativeGetTopmostPlatformWindowUnderMouse();
	static void nativePushNSWindowToBack(int64_t nsWindowPtr);
	static void nativePushNSWindowToFront(int64_t nsWindowPtr);
	static void nativeRevalidateNSWindowShadow(int64_t nsWindowPtr);
	static void nativeSetAllowAutomaticTabbingProperty(bool allowAutomaticWindowTabbing);
	static void nativeSetEnabled(int64_t nsWindowPtr, bool isEnabled);
	static void nativeSetNSWindowBounds(int64_t nsWindowPtr, double x, double y, double w, double h);
	static void nativeSetNSWindowLocationByPlatform(int64_t nsWindowPtr);
	static void nativeSetNSWindowMenuBar(int64_t nsWindowPtr, int64_t menuBarPtr);
	static void nativeSetNSWindowMinMax(int64_t nsWindowPtr, double minW, double minH, double maxW, double maxH);
	static void nativeSetNSWindowMinimizedIcon(int64_t nsWindowPtr, int64_t nsImage);
	static void nativeSetNSWindowRepresentedFilename(int64_t nsWindowPtr, $String* representedFilename);
	static void nativeSetNSWindowStandardFrame(int64_t nsWindowPtr, double x, double y, double w, double h);
	static void nativeSetNSWindowStyleBits(int64_t nsWindowPtr, int32_t mask, int32_t data);
	static void nativeSetNSWindowTitle(int64_t nsWindowPtr, $String* title);
	static void nativeSynthesizeMouseEnteredExitedEvents();
	static void nativeSynthesizeMouseEnteredExitedEvents(int64_t nsWindowPtr, int32_t eventType);
	void orderAboveSiblings();
	void orderAboveSiblingsImpl($Array<::java::awt::Window>* windows);
	virtual bool rejectFocusRequest(::java::awt::event::FocusEvent$Cause* cause) override;
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() override;
	virtual bool requestWindowFocus() override;
	virtual void setAlwaysOnTop(bool isAlwaysOnTop) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
	void setCanFullscreen(bool canFullScreen);
	virtual void setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setModalBlocked(bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) override;
	void setStyleBits(int32_t mask, bool value);
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool visible) override;
	virtual void setWindowState(int32_t windowState) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual void toggleFullScreen();
	void unmaximize();
	void updateFocusabilityForAutoRequestFocus(bool isFocusable);
	virtual void updateFocusableWindowState() override;
	virtual void updateIconImages() override;
	void windowDidBecomeMain();
	void windowDidEnterFullScreen();
	void windowDidExitFullScreen();
	void windowWillEnterFullScreen();
	void windowWillExitFullScreen();
	void windowWillMiniaturize();
	static ::sun::util::logging::PlatformLogger* logger;
	static ::sun::util::logging::PlatformLogger* focusLogger;
	static $String* WINDOW_BRUSH_METAL_LOOK;
	static $String* WINDOW_DRAGGABLE_BACKGROUND;
	static $String* WINDOW_ALPHA;
	static $String* WINDOW_SHADOW;
	static $String* WINDOW_STYLE;
	static $String* WINDOW_SHADOW_REVALIDATE_NOW;
	static $String* WINDOW_DOCUMENT_MODIFIED;
	static $String* WINDOW_DOCUMENT_FILE;
	static $String* WINDOW_CLOSEABLE;
	static $String* WINDOW_MINIMIZABLE;
	static $String* WINDOW_ZOOMABLE;
	static $String* WINDOW_HIDES_ON_DEACTIVATE;
	static $String* WINDOW_DOC_MODAL_SHEET;
	static $String* WINDOW_FADE_DELEGATE;
	static $String* WINDOW_FADE_IN;
	static $String* WINDOW_FADE_OUT;
	static $String* WINDOW_FULLSCREENABLE;
	static $String* WINDOW_FULL_CONTENT;
	static $String* WINDOW_TRANSPARENT_TITLE_BAR;
	static $String* WINDOW_TITLE_VISIBLE;
	static $String* MAC_OS_TABBED_WINDOW;
	static const int32_t MODELESS = 0;
	static const int32_t DOCUMENT_MODAL = 1;
	static const int32_t APPLICATION_MODAL = 2;
	static const int32_t TOOLKIT_MODAL = 3;
	static const int32_t _RESERVED_FOR_DATA = 1; // 1 << 0
	static const int32_t DECORATED = 2; // 1 << 1
	static const int32_t TEXTURED = 4; // 1 << 2
	static const int32_t UNIFIED = 8; // 1 << 3
	static const int32_t UTILITY = 16; // 1 << 4
	static const int32_t HUD = 32; // 1 << 5
	static const int32_t SHEET = 64; // 1 << 6
	static const int32_t CLOSEABLE = 128; // 1 << 7
	static const int32_t MINIMIZABLE = 256; // 1 << 8
	static const int32_t RESIZABLE = 512; // 1 << 9
	static const int32_t NONACTIVATING = 16777216; // 1 << 24
	static const int32_t IS_DIALOG = 33554432; // 1 << 25
	static const int32_t IS_MODAL = 67108864; // 1 << 26
	static const int32_t IS_POPUP = 0x08000000; // 1 << 27
	static const int32_t FULL_WINDOW_CONTENT = 16384; // 1 << 14
	static const int32_t _STYLE_PROP_BITMASK = 17406; // DECORATED | TEXTURED | UNIFIED | UTILITY | HUD | SHEET | CLOSEABLE | MINIMIZABLE | RESIZABLE | FULL_WINDOW_CONTENT
	static const int32_t HAS_SHADOW = 1024; // 1 << 10
	static const int32_t ZOOMABLE = 2048; // 1 << 11
	static const int32_t ALWAYS_ON_TOP = 32768; // 1 << 15
	static const int32_t HIDES_ON_DEACTIVATE = 131072; // 1 << 17
	static const int32_t DRAGGABLE_BACKGROUND = 524288; // 1 << 19
	static const int32_t DOCUMENT_MODIFIED = 2097152; // 1 << 21
	static const int32_t FULLSCREENABLE = 8388608; // 1 << 23
	static const int32_t TRANSPARENT_TITLE_BAR = 262144; // 1 << 18
	static const int32_t TITLE_VISIBLE = 33554432; // 1 << 25
	static const int32_t _METHOD_PROP_BITMASK = 44994048; // RESIZABLE | HAS_SHADOW | ZOOMABLE | ALWAYS_ON_TOP | HIDES_ON_DEACTIVATE | DRAGGABLE_BACKGROUND | DOCUMENT_MODIFIED | FULLSCREENABLE | TRANSPARENT_TITLE_BAR | TITLE_VISIBLE
	static const int32_t SHOULD_BECOME_KEY = 4096; // 1 << 12
	static const int32_t SHOULD_BECOME_MAIN = 8192; // 1 << 13
	static const int32_t MODAL_EXCLUDED = 65536; // 1 << 16
	static const int32_t _CALLBACK_PROP_BITMASK = 77824; // SHOULD_BECOME_KEY | SHOULD_BECOME_MAIN | MODAL_EXCLUDED
	static ::com::apple::laf::ClientPropertyApplicator* CLIENT_PROPERTY_APPLICATOR;
	::java::util::Comparator* siblingsComparator = nullptr;
	::java::awt::Rectangle* nativeBounds = nullptr;
	$volatile(bool) isFullScreenMode$ = false;
	bool isFullScreenAnimationOn = false;
	$volatile(bool) isInFullScreen = false;
	$volatile(bool) isIconifyAnimationActive = false;
	$volatile(bool) isZoomed = false;
	::java::awt::Window* target = nullptr;
	::sun::lwawt::LWWindowPeer* peer = nullptr;
	::sun::lwawt::macosx::CPlatformView* contentView = nullptr;
	::sun::lwawt::macosx::CPlatformWindow* owner = nullptr;
	bool visible = false;
	bool undecorated = false;
	::java::awt::Rectangle* normalBounds = nullptr;
	::sun::lwawt::macosx::CPlatformResponder* responder = nullptr;
	int64_t lastBecomeMainTime = 0;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("ALWAYS_ON_TOP")
#pragma pop_macro("APPLICATION_MODAL")
#pragma pop_macro("CLIENT_PROPERTY_APPLICATOR")
#pragma pop_macro("CLOSEABLE")
#pragma pop_macro("DECORATED")
#pragma pop_macro("DOCUMENT_MODAL")
#pragma pop_macro("DOCUMENT_MODIFIED")
#pragma pop_macro("DRAGGABLE_BACKGROUND")
#pragma pop_macro("FULLSCREENABLE")
#pragma pop_macro("FULL_WINDOW_CONTENT")
#pragma pop_macro("HAS_SHADOW")
#pragma pop_macro("HIDES_ON_DEACTIVATE")
#pragma pop_macro("HUD")
#pragma pop_macro("IS")
#pragma pop_macro("IS_DIALOG")
#pragma pop_macro("IS_MODAL")
#pragma pop_macro("IS_POPUP")
#pragma pop_macro("MAC_OS_TABBED_WINDOW")
#pragma pop_macro("MINIMIZABLE")
#pragma pop_macro("MODAL_EXCLUDED")
#pragma pop_macro("MODELESS")
#pragma pop_macro("NONACTIVATING")
#pragma pop_macro("RESIZABLE")
#pragma pop_macro("SET")
#pragma pop_macro("SHEET")
#pragma pop_macro("SHOULD_BECOME_KEY")
#pragma pop_macro("SHOULD_BECOME_MAIN")
#pragma pop_macro("TEXTURED")
#pragma pop_macro("TITLE_VISIBLE")
#pragma pop_macro("TOOLKIT_MODAL")
#pragma pop_macro("TRANSPARENT_TITLE_BAR")
#pragma pop_macro("UNIFIED")
#pragma pop_macro("UTILITY")
#pragma pop_macro("WINDOW_ALPHA")
#pragma pop_macro("WINDOW_BRUSH_METAL_LOOK")
#pragma pop_macro("WINDOW_CLOSEABLE")
#pragma pop_macro("WINDOW_DOCUMENT_FILE")
#pragma pop_macro("WINDOW_DOCUMENT_MODIFIED")
#pragma pop_macro("WINDOW_DOC_MODAL_SHEET")
#pragma pop_macro("WINDOW_DRAGGABLE_BACKGROUND")
#pragma pop_macro("WINDOW_FADE_DELEGATE")
#pragma pop_macro("WINDOW_FADE_IN")
#pragma pop_macro("WINDOW_FADE_OUT")
#pragma pop_macro("WINDOW_FULLSCREENABLE")
#pragma pop_macro("WINDOW_FULL_CONTENT")
#pragma pop_macro("WINDOW_HIDES_ON_DEACTIVATE")
#pragma pop_macro("WINDOW_MINIMIZABLE")
#pragma pop_macro("WINDOW_SHADOW")
#pragma pop_macro("WINDOW_SHADOW_REVALIDATE_NOW")
#pragma pop_macro("WINDOW_STYLE")
#pragma pop_macro("WINDOW_TITLE_VISIBLE")
#pragma pop_macro("WINDOW_TRANSPARENT_TITLE_BAR")
#pragma pop_macro("WINDOW_ZOOMABLE")
#pragma pop_macro("ZOOMABLE")
#pragma pop_macro("_CALLBACK_PROP_BITMASK")
#pragma pop_macro("_METHOD_PROP_BITMASK")
#pragma pop_macro("_RESERVED_FOR_DATA")
#pragma pop_macro("_STYLE_PROP_BITMASK")

#endif // _sun_lwawt_macosx_CPlatformWindow_h_