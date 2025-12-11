#include <sun/lwawt/macosx/CPlatformResponder.h>

#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/util/Locale.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformEventNotifier.h>
#include <sun/lwawt/macosx/CPlatformResponder$DeltaAccumulator.h>
#include <sun/lwawt/macosx/CocoaConstants.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <sun/lwawt/macosx/NSEvent.h>
#include <jcpp.h>

#undef CHAR_UNDEFINED
#undef KEY_LOCATION_UNKNOWN
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef META_DOWN_MASK
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MOVED
#undef NOBUTTON
#undef SHIFT_DOWN_MASK
#undef SIMPLIFIED_CHINESE
#undef VK_CAPS_LOCK
#undef VK_ENTER
#undef VK_SPACE
#undef VK_UNDEFINED
#undef WHEEL_UNIT_SCROLL

using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $SunToolkit = ::sun::awt::SunToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $PlatformEventNotifier = ::sun::lwawt::PlatformEventNotifier;
using $CPlatformResponder$DeltaAccumulator = ::sun::lwawt::macosx::CPlatformResponder$DeltaAccumulator;
using $CocoaConstants = ::sun::lwawt::macosx::CocoaConstants;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;
using $NSEvent = ::sun::lwawt::macosx::NSEvent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPlatformResponder_FieldInfo_[] = {
	{"eventNotifier", "Lsun/lwawt/PlatformEventNotifier;", nullptr, $PRIVATE | $FINAL, $field(CPlatformResponder, eventNotifier)},
	{"isNpapiCallback", "Z", nullptr, $PRIVATE | $FINAL, $field(CPlatformResponder, isNpapiCallback)},
	{"lastKeyPressCode", "I", nullptr, $PRIVATE, $field(CPlatformResponder, lastKeyPressCode)},
	{"deltaAccumulatorX", "Lsun/lwawt/macosx/CPlatformResponder$DeltaAccumulator;", nullptr, $PRIVATE | $FINAL, $field(CPlatformResponder, deltaAccumulatorX)},
	{"deltaAccumulatorY", "Lsun/lwawt/macosx/CPlatformResponder$DeltaAccumulator;", nullptr, $PRIVATE | $FINAL, $field(CPlatformResponder, deltaAccumulatorY)},
	{}
};

$MethodInfo _CPlatformResponder_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/PlatformEventNotifier;Z)V", nullptr, 0, $method(static_cast<void(CPlatformResponder::*)($PlatformEventNotifier*,bool)>(&CPlatformResponder::init$))},
	{"dispatchScrollEvent", "(IIIIIID)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformResponder::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,double)>(&CPlatformResponder::dispatchScrollEvent))},
	{"handleInputEvent", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CPlatformResponder::*)($String*)>(&CPlatformResponder::handleInputEvent))},
	{"handleKeyEvent", "(IILjava/lang/String;Ljava/lang/String;SZZ)V", nullptr, 0, $method(static_cast<void(CPlatformResponder::*)(int32_t,int32_t,$String*,$String*,int16_t,bool,bool)>(&CPlatformResponder::handleKeyEvent))},
	{"handleMouseEvent", "(IIIIIIII)V", nullptr, 0, $method(static_cast<void(CPlatformResponder::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&CPlatformResponder::handleMouseEvent))},
	{"handleScrollEvent", "(IIIIIDDI)V", nullptr, 0, $method(static_cast<void(CPlatformResponder::*)(int32_t,int32_t,int32_t,int32_t,int32_t,double,double,int32_t)>(&CPlatformResponder::handleScrollEvent))},
	{"handleWindowFocusEvent", "(ZLsun/lwawt/LWWindowPeer;)V", nullptr, 0, $method(static_cast<void(CPlatformResponder::*)(bool,$LWWindowPeer*)>(&CPlatformResponder::handleWindowFocusEvent))},
	{}
};

$InnerClassInfo _CPlatformResponder_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformResponder$DeltaAccumulator", "sun.lwawt.macosx.CPlatformResponder", "DeltaAccumulator", $STATIC},
	{}
};

$ClassInfo _CPlatformResponder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CPlatformResponder",
	"java.lang.Object",
	nullptr,
	_CPlatformResponder_FieldInfo_,
	_CPlatformResponder_MethodInfo_,
	nullptr,
	nullptr,
	_CPlatformResponder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformResponder$DeltaAccumulator"
};

$Object* allocate$CPlatformResponder($Class* clazz) {
	return $of($alloc(CPlatformResponder));
}

void CPlatformResponder::init$($PlatformEventNotifier* eventNotifier, bool isNpapiCallback) {
	this->lastKeyPressCode = $KeyEvent::VK_UNDEFINED;
	$set(this, deltaAccumulatorX, $new($CPlatformResponder$DeltaAccumulator));
	$set(this, deltaAccumulatorY, $new($CPlatformResponder$DeltaAccumulator));
	$set(this, eventNotifier, eventNotifier);
	this->isNpapiCallback = isNpapiCallback;
}

void CPlatformResponder::handleMouseEvent(int32_t eventType, int32_t modifierFlags, int32_t buttonNumber, int32_t clickCount, int32_t x, int32_t y, int32_t absX, int32_t absY) {
	$var($SunToolkit, tk, $cast($SunToolkit, $Toolkit::getDefaultToolkit()));
	bool var$0 = (buttonNumber > 2 && !$nc(tk)->areExtraMouseButtonsEnabled());
	if (var$0 || buttonNumber > $nc(tk)->getNumberOfButtons() - 1) {
		return;
	}
	int32_t jeventType = this->isNpapiCallback ? $NSEvent::npToJavaEventType(eventType) : $NSEvent::nsToJavaEventType(eventType);
	int32_t jbuttonNumber = $MouseEvent::NOBUTTON;
	int32_t jclickCount = 0;
	if (jeventType != $MouseEvent::MOUSE_MOVED && jeventType != $MouseEvent::MOUSE_ENTERED && jeventType != $MouseEvent::MOUSE_EXITED) {
		jbuttonNumber = $NSEvent::nsToJavaButton(buttonNumber);
		jclickCount = clickCount;
	}
	int32_t jmodifiers = $NSEvent::nsToJavaModifiers(modifierFlags);
	bool jpopupTrigger = $NSEvent::isPopupTrigger(jmodifiers);
	$nc(this->eventNotifier)->notifyMouseEvent(jeventType, $System::currentTimeMillis(), jbuttonNumber, x, y, absX, absY, jmodifiers, jclickCount, jpopupTrigger, nullptr);
}

void CPlatformResponder::handleScrollEvent(int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifierFlags, double deltaX, double deltaY, int32_t scrollPhase) {
	int32_t jmodifiers = $NSEvent::nsToJavaModifiers(modifierFlags);
	bool isShift = ((int32_t)(jmodifiers & (uint32_t)$InputEvent::SHIFT_DOWN_MASK)) != 0;
	int32_t roundDeltaX = $nc(this->deltaAccumulatorX)->getRoundedDelta(deltaX, scrollPhase);
	int32_t roundDeltaY = $nc(this->deltaAccumulatorY)->getRoundedDelta(deltaY, scrollPhase);
	if (!isShift && (deltaY != 0.0 || roundDeltaY != 0)) {
		dispatchScrollEvent(x, y, absX, absY, jmodifiers, roundDeltaY, deltaY);
	}
	double delta = isShift && deltaY != 0.0 ? deltaY : deltaX;
	int32_t roundDelta = isShift && roundDeltaY != 0 ? roundDeltaY : roundDeltaX;
	if (delta != 0.0 || roundDelta != 0) {
		jmodifiers |= $InputEvent::SHIFT_DOWN_MASK;
		dispatchScrollEvent(x, y, absX, absY, jmodifiers, roundDelta, delta);
	}
}

void CPlatformResponder::dispatchScrollEvent(int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t roundDelta, double delta) {
	int64_t when = $System::currentTimeMillis();
	int32_t scrollType = $MouseWheelEvent::WHEEL_UNIT_SCROLL;
	int32_t scrollAmount = 1;
	$nc(this->eventNotifier)->notifyMouseWheelEvent(when, x, y, absX, absY, modifiers, scrollType, scrollAmount, -roundDelta, -delta, nullptr);
}

void CPlatformResponder::handleKeyEvent(int32_t eventType, int32_t modifierFlags, $String* chars, $String* charsIgnoringModifiers, int16_t keyCode, bool needsKeyTyped, bool needsKeyReleased) {
	$useLocalCurrentObjectStackCache();
	bool isFlagsChangedEvent = this->isNpapiCallback ? (eventType == $CocoaConstants::NPCocoaEventFlagsChanged) : (eventType == $CocoaConstants::NSFlagsChanged);
	int32_t jeventType = $KeyEvent::KEY_PRESSED;
	int32_t jkeyCode = $KeyEvent::VK_UNDEFINED;
	int32_t jkeyLocation = $KeyEvent::KEY_LOCATION_UNKNOWN;
	bool postsTyped = false;
	bool spaceKeyTyped = false;
	char16_t testChar = $KeyEvent::CHAR_UNDEFINED;
	bool isDeadChar = (chars != nullptr && chars->length() == 0);
	if (isFlagsChangedEvent) {
		$var($ints, in, $new($ints, {
			modifierFlags,
			(int32_t)keyCode
		}));
		$var($ints, out, $new($ints, 3));
		$NSEvent::nsKeyModifiersToJavaKeyInfo(in, out);
		jkeyCode = out->get(0);
		jkeyLocation = out->get(1);
		jeventType = out->get(2);
	} else {
		if (chars != nullptr && chars->length() > 0) {
			testChar = chars->charAt(0);
			if ($(chars->trim())->isEmpty()) {
				spaceKeyTyped = true;
			}
		}
		char16_t testCharIgnoringModifiers = charsIgnoringModifiers != nullptr && charsIgnoringModifiers->length() > 0 ? $nc(charsIgnoringModifiers)->charAt(0) : $KeyEvent::CHAR_UNDEFINED;
		$var($ints, in, $new($ints, {
			(int32_t)testCharIgnoringModifiers,
			isDeadChar ? 1 : 0,
			modifierFlags,
			(int32_t)keyCode
		}));
		$var($ints, out, $new($ints, 3));
		postsTyped = $NSEvent::nsToJavaKeyInfo(in, out);
		if (!postsTyped) {
			testChar = $KeyEvent::CHAR_UNDEFINED;
		}
		if (isDeadChar) {
			testChar = (char16_t)out->get(2);
			if (testChar == 0) {
				return;
			}
		}
		$var($LWCToolkit, lwcToolkit, $cast($LWCToolkit, $Toolkit::getDefaultToolkit()));
		bool var$1 = $nc(lwcToolkit)->getLockingKeyState($KeyEvent::VK_CAPS_LOCK);
		$init($Locale);
		bool var$0 = (var$1 && $nc($Locale::SIMPLIFIED_CHINESE)->equals($(lwcToolkit->getDefaultKeyboardLocale())));
		if (!var$0) {
			bool var$2 = $LWCToolkit::isLocaleUSInternationalPC($($nc(lwcToolkit)->getDefaultKeyboardLocale()));
			var$0 = (var$2 && $LWCToolkit::isCharModifierKeyInUSInternationalPC(testChar) && (testChar != testCharIgnoringModifiers));
		}
		if (var$0) {
			testChar = testCharIgnoringModifiers;
		}
		jkeyCode = out->get(0);
		jkeyLocation = out->get(1);
		jeventType = this->isNpapiCallback ? $NSEvent::npToJavaEventType(eventType) : $NSEvent::nsToJavaEventType(eventType);
	}
	char16_t javaChar = $NSEvent::nsToJavaChar(testChar, modifierFlags, spaceKeyTyped);
	if (javaChar == $KeyEvent::CHAR_UNDEFINED) {
		postsTyped = false;
	}
	int32_t jmodifiers = $NSEvent::nsToJavaModifiers(modifierFlags);
	int64_t when = $System::currentTimeMillis();
	if (jeventType == $KeyEvent::KEY_PRESSED) {
		this->lastKeyPressCode = jkeyCode;
	}
	$nc(this->eventNotifier)->notifyKeyEvent(jeventType, when, jmodifiers, jkeyCode, javaChar, jkeyLocation);
	postsTyped &= needsKeyTyped;
	if (jeventType == $KeyEvent::KEY_PRESSED && postsTyped && ((int32_t)(jmodifiers & (uint32_t)$KeyEvent::META_DOWN_MASK)) == 0) {
		if (needsKeyReleased && (jkeyCode == $KeyEvent::VK_ENTER || jkeyCode == $KeyEvent::VK_SPACE)) {
			return;
		}
		$nc(this->eventNotifier)->notifyKeyEvent($KeyEvent::KEY_TYPED, when, jmodifiers, $KeyEvent::VK_UNDEFINED, javaChar, $KeyEvent::KEY_LOCATION_UNKNOWN);
		if (needsKeyReleased) {
			$nc(this->eventNotifier)->notifyKeyEvent($KeyEvent::KEY_RELEASED, when, jmodifiers, jkeyCode, javaChar, $KeyEvent::KEY_LOCATION_UNKNOWN);
		}
	}
}

void CPlatformResponder::handleInputEvent($String* text) {
	if (text != nullptr) {
		int32_t index = 0;
		int32_t length = text->length();
		char16_t c = (char16_t)0;
		while (index < length) {
			c = text->charAt(index);
			$nc(this->eventNotifier)->notifyKeyEvent($KeyEvent::KEY_TYPED, $System::currentTimeMillis(), 0, $KeyEvent::VK_UNDEFINED, c, $KeyEvent::KEY_LOCATION_UNKNOWN);
			++index;
		}
		$nc(this->eventNotifier)->notifyKeyEvent($KeyEvent::KEY_RELEASED, $System::currentTimeMillis(), 0, this->lastKeyPressCode, c, $KeyEvent::KEY_LOCATION_UNKNOWN);
	}
}

void CPlatformResponder::handleWindowFocusEvent(bool gained, $LWWindowPeer* opposite) {
	$nc(this->eventNotifier)->notifyActivation(gained, opposite);
}

CPlatformResponder::CPlatformResponder() {
}

$Class* CPlatformResponder::load$($String* name, bool initialize) {
	$loadClass(CPlatformResponder, name, initialize, &_CPlatformResponder_ClassInfo_, allocate$CPlatformResponder);
	return class$;
}

$Class* CPlatformResponder::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun