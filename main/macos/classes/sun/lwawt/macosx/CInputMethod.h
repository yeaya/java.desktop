#ifndef _sun_lwawt_macosx_CInputMethod_h_
#define _sun_lwawt_macosx_CInputMethod_h_
//$ class sun.lwawt.macosx.CInputMethod
//$ extends sun.awt.im.InputMethodAdapter

#include <java/lang/Array.h>
#include <sun/awt/im/InputMethodAdapter.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
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
	namespace lang {
		class Character$Subset;
	}
}
namespace java {
	namespace text {
		class AttributedString;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CInputMethod : public ::sun::awt::im::InputMethodAdapter {
	$class(CInputMethod, 0, ::sun::awt::im::InputMethodAdapter)
public:
	CInputMethod();
	void init$();
	virtual void activate() override;
	void addAttribute(bool isThickUnderline, bool isGray, int32_t start, int32_t length);
	$String* attributedSubstringFromRange(int32_t locationIn, int32_t lengthIn);
	int32_t characterIndexForPoint(int32_t screenX, int32_t screenY);
	virtual void deactivate(bool isTemporary) override;
	virtual void disableInputMethod() override;
	virtual void dispatchEvent(::java::awt::AWTEvent* event) override;
	void dispatchText(int32_t selectStart, int32_t selectLength, bool pressAndHold);
	virtual void dispose() override;
	virtual void endComposition() override;
	$ints* firstRectForCharacterRange(int32_t absoluteTextOffset);
	virtual $Object* getControlObject() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual $String* getNativeInputMethodInfo() override;
	static ::java::util::Locale* getNativeLocale();
	virtual int64_t getNativeViewPtr(::sun::lwawt::LWComponentPeer* peer);
	::sun::lwawt::LWComponentPeer* getNearestNativePeer(::java::awt::Component* comp);
	bool hasMarkedText();
	virtual void hideWindows() override;
	void insertText($String* aString);
	virtual bool isCompositionEnabled() override;
	static ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight);
	$ints* markedRange();
	void nativeEndComposition(int64_t nativePeer);
	static $String* nativeGetCurrentInputMethodInfo();
	void nativeHandleEvent(::sun::lwawt::LWComponentPeer* peer, ::java::awt::AWTEvent* event);
	static void nativeInit();
	void nativeNotifyPeer(int64_t nativePeer, ::sun::lwawt::macosx::CInputMethod* imInstance);
	virtual void removeNotify() override;
	void selectNextGlyph();
	void selectPreviousGlyph();
	$ints* selectedRange();
	virtual void setAWTFocussedComponent(::java::awt::Component* component) override;
	virtual void setCharacterSubsets($Array<::java::lang::Character$Subset>* subsets) override;
	virtual void setCompositionEnabled(bool enable) override;
	virtual void setInputMethodContext(::java::awt::im::spi::InputMethodContext* context) override;
	virtual bool setLocale(::java::util::Locale* lang) override;
	bool setLocale(::java::util::Locale* lang, bool onActivate);
	static bool setNativeLocale($String* localeName, bool onActivate);
	void startIMUpdate($String* rawText);
	void unmarkText();
	::java::awt::im::spi::InputMethodContext* fIMContext = nullptr;
	::java::awt::Component* fAwtFocussedComponent = nullptr;
	::sun::lwawt::LWComponentPeer* fAwtFocussedComponentPeer = nullptr;
	bool isActive = false;
	static $Array<::java::util::Map>* sHighlightStyles;
	::java::text::AttributedString* fCurrentText = nullptr;
	$String* fCurrentTextAsString = nullptr;
	int32_t fCurrentTextLength = 0;
	static const int32_t kCaretPosition = 0;
	static const int32_t kRawText = 1;
	static const int32_t kSelectedRawText = 2;
	static const int32_t kConvertedText = 3;
	static const int32_t kSelectedConvertedText = 4;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CInputMethod_h_