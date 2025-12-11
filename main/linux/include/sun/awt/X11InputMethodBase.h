#ifndef _sun_awt_X11InputMethodBase_h_
#define _sun_awt_X11InputMethodBase_h_
//$ class sun.awt.X11InputMethodBase
//$ extends sun.awt.im.InputMethodAdapter

#include <java/lang/Array.h>
#include <sun/awt/im/InputMethodAdapter.h>

#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class Container;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextHitInfo;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodHighlight;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethodContext;
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace lang {
		class Character$Subset;
		class StringBuffer;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace sun {
	namespace awt {
		class X11InputMethodBase$IntBuffer;
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

class $import X11InputMethodBase : public ::sun::awt::im::InputMethodAdapter {
	$class(X11InputMethodBase, $HAS_FINALIZE, ::sun::awt::im::InputMethodAdapter)
public:
	X11InputMethodBase();
	virtual void activate() override {}
	virtual void deactivate(bool isTemporary) override {}
	virtual void hideWindows() override {}
	void init$();
	virtual void awtLock() {}
	virtual void awtUnlock() {}
	virtual ::java::awt::im::InputMethodHighlight* convertVisualFeedbackToHighlight(int32_t feedback);
	virtual bool createXIC() {return false;}
	virtual void disableInputMethod() override;
	virtual void dispatchCommittedText($String* str, int64_t when);
	void dispatchCommittedText($String* str);
	virtual void dispatchComposedText($String* chgText, $ints* chgStyles, int32_t chgOffset, int32_t chgLength, int32_t caretPosition, int64_t when) {}
	virtual void dispatchEvent(::java::awt::AWTEvent* e) override;
	virtual void dispose() override;
	virtual void disposeImpl() {}
	virtual void disposeXIC();
	virtual void endComposition() override;
	virtual void finalize() override;
	virtual void flushText();
	virtual ::java::awt::Window* getClientComponentWindow();
	virtual bool getCompositionState();
	virtual $Object* getControlObject() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual $String* getNativeInputMethodInfo() override;
	virtual ::java::awt::Container* getParent(::java::awt::Component* client) {return nullptr;}
	virtual ::java::awt::peer::ComponentPeer* getPeer(::java::awt::Component* client) {return nullptr;}
	static void initIDs();
	bool initXIM();
	virtual bool isCompositionEnabled() override;
	bool isCompositionEnabledNative();
	virtual bool isDisposed();
	static ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight);
	virtual bool openXIM() {return false;}
	virtual void postInputMethodEvent(int32_t id, ::java::text::AttributedCharacterIterator* text, int32_t committedCharacterCount, ::java::awt::font::TextHitInfo* caret, ::java::awt::font::TextHitInfo* visiblePosition, int64_t when);
	void postInputMethodEvent(int32_t id, ::java::text::AttributedCharacterIterator* text, int32_t committedCharacterCount, ::java::awt::font::TextHitInfo* caret, ::java::awt::font::TextHitInfo* visiblePosition);
	virtual void removeNotify() override;
	virtual void resetCompositionState() {}
	$String* resetXIC();
	void resetXICifneeded();
	virtual void setAWTFocussedComponent(::java::awt::Component* component) override;
	virtual void setCharacterSubsets($Array<::java::lang::Character$Subset>* subsets) override;
	virtual void setCompositionEnabled(bool enable) override {}
	virtual bool setCompositionEnabledNative(bool enable);
	virtual void setInputMethodContext(::java::awt::im::spi::InputMethodContext* context) override;
	virtual bool setLocale(::java::util::Locale* lang) override;
	virtual void setXICFocus(::java::awt::peer::ComponentPeer* peer, bool value, bool active) {}
	virtual void stopListening() override;
	virtual void turnoffStatusWindow();
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t XIMReverse = 1; // (1 << 0)
	static const int32_t XIMUnderline = 2; // (1 << 1)
	static const int32_t XIMHighlight = 4; // (1 << 2)
	static const int32_t XIMPrimary = 32; // (1 << 5)
	static const int32_t XIMSecondary = 64; // (1 << 6)
	static const int32_t XIMTertiary = 128; // (1 << 7)
	static const int32_t XIMVisibleToForward = 256; // (1 << 8)
	static const int32_t XIMVisibleToBackward = 512; // (1 << 9)
	static const int32_t XIMVisibleCenter = 1024; // (1 << 10)
	static const int32_t XIMVisibleMask = 1792; // (XIMVisibleToForward | XIMVisibleToBackward | XIMVisibleCenter)
	::java::util::Locale* locale = nullptr;
	static bool isXIMOpened;
	::java::awt::Container* clientComponentWindow = nullptr;
	::java::awt::Component* awtFocussedComponent = nullptr;
	::java::awt::Component* lastXICFocussedComponent = nullptr;
	bool isLastXICActive = false;
	bool isLastTemporary = false;
	bool isActive = false;
	static $Array<::java::util::Map>* highlightStyles;
	bool disposed = false;
	bool needResetXIC = false;
	::java::lang::ref::WeakReference* needResetXICClient = nullptr;
	bool compositionEnableSupported = false;
	bool savedCompositionState = false;
	$String* committedText = nullptr;
	::java::lang::StringBuffer* composedText = nullptr;
	::sun::awt::X11InputMethodBase$IntBuffer* rawFeedbacks = nullptr;
	int64_t pData = 0;
	static const int32_t INITIAL_SIZE = 64;
};

	} // awt
} // sun

#pragma pop_macro("INITIAL_SIZE")

#endif // _sun_awt_X11InputMethodBase_h_