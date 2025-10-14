#ifndef _sun_awt_windows_WInputMethod_h_
#define _sun_awt_windows_WInputMethod_h_
//$ class sun.awt.windows.WInputMethod
//$ extends sun.awt.im.InputMethodAdapter

#include <java/lang/Array.h>
#include <sun/awt/im/InputMethodAdapter.h>

#pragma push_macro("ATTR_CONVERTED")
#undef ATTR_CONVERTED
#pragma push_macro("ATTR_INPUT")
#undef ATTR_INPUT
#pragma push_macro("ATTR_INPUT_ERROR")
#undef ATTR_INPUT_ERROR
#pragma push_macro("ATTR_TARGET_CONVERTED")
#undef ATTR_TARGET_CONVERTED
#pragma push_macro("ATTR_TARGET_NOTCONVERTED")
#undef ATTR_TARGET_NOTCONVERTED
#pragma push_macro("COMMIT_INPUT")
#undef COMMIT_INPUT
#pragma push_macro("DISCARD_INPUT")
#undef DISCARD_INPUT
#pragma push_macro("IME_CMODE_ALPHANUMERIC")
#undef IME_CMODE_ALPHANUMERIC
#pragma push_macro("IME_CMODE_FULLSHAPE")
#undef IME_CMODE_FULLSHAPE
#pragma push_macro("IME_CMODE_HANJACONVERT")
#undef IME_CMODE_HANJACONVERT
#pragma push_macro("IME_CMODE_KATAKANA")
#undef IME_CMODE_KATAKANA
#pragma push_macro("IME_CMODE_LANGUAGE")
#undef IME_CMODE_LANGUAGE
#pragma push_macro("IME_CMODE_NATIVE")
#undef IME_CMODE_NATIVE
#pragma push_macro("IME_CMODE_ROMAN")
#undef IME_CMODE_ROMAN

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
	namespace util {
		class Locale;
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WInputMethod : public ::sun::awt::im::InputMethodAdapter {
	$class(WInputMethod, $HAS_FINALIZE, ::sun::awt::im::InputMethodAdapter)
public:
	WInputMethod();
	void init$();
	static ::java::awt::Component* access$000(::sun::awt::windows::WInputMethod* x0);
	static bool access$100(::sun::awt::windows::WInputMethod* x0);
	virtual void activate() override;
	int32_t createNativeContext();
	virtual void deactivate(bool isTemporary) override;
	void destroyNativeContext(int32_t context);
	virtual void disableInputMethod() override;
	void disableNativeIME(::sun::awt::windows::WComponentPeer* peer);
	virtual void dispatchEvent(::java::awt::AWTEvent* e) override;
	virtual void dispose() override;
	void enableNativeIME(::sun::awt::windows::WComponentPeer* peer, int32_t context, bool useNativeCompWindow);
	virtual void endComposition() override;
	void endCompositionNative(int32_t context, bool flag);
	virtual void finalize() override;
	virtual $Object* getControlObject() override;
	int32_t getConversionStatus(int32_t context);
	virtual ::java::util::Locale* getLocale() override;
	$String* getNativeIMMDescription();
	virtual $String* getNativeInputMethodInfo() override;
	static ::java::util::Locale* getNativeLocale();
	::sun::awt::windows::WComponentPeer* getNearestNativePeer(::java::awt::Component* comp);
	bool getOpenStatus(int32_t context);
	void handleNativeIMEEvent(::sun::awt::windows::WComponentPeer* peer, ::java::awt::AWTEvent* e);
	virtual void hideWindows() override;
	void inquireCandidatePosition();
	virtual bool isCompositionEnabled() override;
	bool isCompositionStringAvailable(int32_t context);
	static ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight);
	void openCandidateWindow(::sun::awt::windows::WComponentPeer* peer, int32_t x, int32_t y);
	virtual void removeNotify() override;
	void sendInputMethodEvent(int32_t id, int64_t when, $String* text, $ints* clauseBoundary, $StringArray* clauseReading, $ints* attributeBoundary, $bytes* attributeValue, int32_t commitedTextLength, int32_t caretPos, int32_t visiblePos);
	virtual void setAWTFocussedComponent(::java::awt::Component* component) override;
	virtual void setCharacterSubsets($Array<::java::lang::Character$Subset>* subsets) override;
	virtual void setCompositionEnabled(bool enable) override;
	void setConversionStatus(int32_t context, int32_t cmode);
	virtual void setInputMethodContext(::java::awt::im::spi::InputMethodContext* context) override;
	virtual bool setLocale(::java::util::Locale* lang) override;
	bool setLocale(::java::util::Locale* lang, bool onActivate);
	static bool setNativeLocale($String* localeName, bool onActivate);
	void setOpenStatus(int32_t context, bool flag);
	void setStatusWindowVisible(::sun::awt::windows::WComponentPeer* peer, bool visible);
	virtual void stopListening() override;
	virtual bool supportsBelowTheSpot() override;
	::java::awt::im::spi::InputMethodContext* inputContext = nullptr;
	::java::awt::Component* awtFocussedComponent = nullptr;
	::sun::awt::windows::WComponentPeer* awtFocussedComponentPeer = nullptr;
	::sun::awt::windows::WComponentPeer* lastFocussedComponentPeer = nullptr;
	bool isLastFocussedActiveClient = false;
	bool isActive = false;
	int32_t context = 0;
	bool open = false;
	int32_t cmode = 0;
	::java::util::Locale* currentLocale = nullptr;
	bool statusWindowHidden = false;
	bool hasCompositionString = false;
	static const int8_t ATTR_INPUT = 0;
	static const int8_t ATTR_TARGET_CONVERTED = 1;
	static const int8_t ATTR_CONVERTED = 2;
	static const int8_t ATTR_TARGET_NOTCONVERTED = 3;
	static const int8_t ATTR_INPUT_ERROR = 4;
	static const int32_t IME_CMODE_ALPHANUMERIC = 0;
	static const int32_t IME_CMODE_NATIVE = 1;
	static const int32_t IME_CMODE_KATAKANA = 2;
	static const int32_t IME_CMODE_LANGUAGE = 3;
	static const int32_t IME_CMODE_FULLSHAPE = 8;
	static const int32_t IME_CMODE_HANJACONVERT = 64;
	static const int32_t IME_CMODE_ROMAN = 16;
	static const bool COMMIT_INPUT = true;
	static const bool DISCARD_INPUT = false;
	static $Array<::java::util::Map>* highlightStyles;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("ATTR_CONVERTED")
#pragma pop_macro("ATTR_INPUT")
#pragma pop_macro("ATTR_INPUT_ERROR")
#pragma pop_macro("ATTR_TARGET_CONVERTED")
#pragma pop_macro("ATTR_TARGET_NOTCONVERTED")
#pragma pop_macro("COMMIT_INPUT")
#pragma pop_macro("DISCARD_INPUT")
#pragma pop_macro("IME_CMODE_ALPHANUMERIC")
#pragma pop_macro("IME_CMODE_FULLSHAPE")
#pragma pop_macro("IME_CMODE_HANJACONVERT")
#pragma pop_macro("IME_CMODE_KATAKANA")
#pragma pop_macro("IME_CMODE_LANGUAGE")
#pragma pop_macro("IME_CMODE_NATIVE")
#pragma pop_macro("IME_CMODE_ROMAN")

#endif // _sun_awt_windows_WInputMethod_h_