#ifndef _sun_lwawt_macosx_NSEvent_h_
#define _sun_lwawt_macosx_NSEvent_h_
//$ class sun.lwawt.macosx.NSEvent
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SCROLL_PHASE_BEGAN")
#undef SCROLL_PHASE_BEGAN
#pragma push_macro("SCROLL_PHASE_CONTINUED")
#undef SCROLL_PHASE_CONTINUED
#pragma push_macro("SCROLL_PHASE_ENDED")
#undef SCROLL_PHASE_ENDED
#pragma push_macro("SCROLL_PHASE_MOMENTUM_BEGAN")
#undef SCROLL_PHASE_MOMENTUM_BEGAN
#pragma push_macro("SCROLL_PHASE_UNSUPPORTED")
#undef SCROLL_PHASE_UNSUPPORTED

namespace sun {
	namespace lwawt {
		namespace macosx {

class NSEvent : public ::java::lang::Object {
	$class(NSEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NSEvent();
	void init$(int32_t type, int32_t modifierFlags, int16_t keyCode, $String* characters, $String* charactersIgnoringModifiers);
	void init$(int32_t type, int32_t modifierFlags, int32_t clickCount, int32_t buttonNumber, int32_t x, int32_t y, int32_t absX, int32_t absY, double scrollDeltaY, double scrollDeltaX, int32_t scrollPhase);
	int32_t getAbsX();
	int32_t getAbsY();
	int32_t getButtonNumber();
	$String* getCharacters();
	$String* getCharactersIgnoringModifiers();
	int32_t getClickCount();
	int16_t getKeyCode();
	int32_t getModifierFlags();
	double getScrollDeltaX();
	double getScrollDeltaY();
	int32_t getScrollPhase();
	int32_t getType();
	int32_t getX();
	int32_t getY();
	static bool isPopupTrigger(int32_t jmodifiers);
	static int32_t npToJavaEventType(int32_t npEventType);
	static void nsKeyModifiersToJavaKeyInfo($ints* in, $ints* out);
	static int32_t nsToJavaButton(int32_t buttonNumber);
	static char16_t nsToJavaChar(char16_t nsChar, int32_t modifierFlags, bool spaceKeyTyped);
	static int32_t nsToJavaEventType(int32_t nsEventType);
	static bool nsToJavaKeyInfo($ints* in, $ints* out);
	static int32_t nsToJavaModifiers(int32_t modifierFlags);
	virtual $String* toString() override;
	static const int32_t SCROLL_PHASE_UNSUPPORTED = 1;
	static const int32_t SCROLL_PHASE_BEGAN = 2;
	static const int32_t SCROLL_PHASE_CONTINUED = 3;
	static const int32_t SCROLL_PHASE_MOMENTUM_BEGAN = 4;
	static const int32_t SCROLL_PHASE_ENDED = 5;
	int32_t type = 0;
	int32_t modifierFlags = 0;
	int32_t clickCount = 0;
	int32_t buttonNumber = 0;
	int32_t x = 0;
	int32_t y = 0;
	double scrollDeltaY = 0.0;
	double scrollDeltaX = 0.0;
	int32_t scrollPhase = 0;
	int32_t absX = 0;
	int32_t absY = 0;
	int16_t keyCode = 0;
	$String* characters = nullptr;
	$String* charactersIgnoringModifiers = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("SCROLL_PHASE_BEGAN")
#pragma pop_macro("SCROLL_PHASE_CONTINUED")
#pragma pop_macro("SCROLL_PHASE_ENDED")
#pragma pop_macro("SCROLL_PHASE_MOMENTUM_BEGAN")
#pragma pop_macro("SCROLL_PHASE_UNSUPPORTED")

#endif // _sun_lwawt_macosx_NSEvent_h_