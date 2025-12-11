#include <sun/awt/X11/XKeysym.h>

#include <java/awt/event/KeyEvent.h>
#include <java/util/Hashtable.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XKeySymConstants.h>
#include <sun/awt/X11/XKeysym$Keysym2JavaKeycode.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef KEY_LOCATION_LEFT
#undef KEY_LOCATION_NUMPAD
#undef KEY_LOCATION_RIGHT
#undef KEY_LOCATION_STANDARD
#undef KEY_LOCATION_UNKNOWN
#undef VK_0
#undef VK_1
#undef VK_2
#undef VK_3
#undef VK_4
#undef VK_5
#undef VK_6
#undef VK_7
#undef VK_8
#undef VK_9
#undef VK_A
#undef VK_ACCEPT
#undef VK_ADD
#undef VK_AGAIN
#undef VK_ALL_CANDIDATES
#undef VK_ALPHANUMERIC
#undef VK_ALT
#undef VK_ALT_GRAPH
#undef VK_AMPERSAND
#undef VK_ASTERISK
#undef VK_AT
#undef VK_B
#undef VK_BACK_QUOTE
#undef VK_BACK_SLASH
#undef VK_BACK_SPACE
#undef VK_BEGIN
#undef VK_BRACELEFT
#undef VK_BRACERIGHT
#undef VK_C
#undef VK_CANCEL
#undef VK_CAPS_LOCK
#undef VK_CIRCUMFLEX
#undef VK_CLEAR
#undef VK_CLOSE_BRACKET
#undef VK_CODE_INPUT
#undef VK_COLON
#undef VK_COMMA
#undef VK_COMPOSE
#undef VK_CONTEXT_MENU
#undef VK_CONTROL
#undef VK_CONVERT
#undef VK_COPY
#undef VK_CUT
#undef VK_D
#undef VK_DEAD_ABOVEDOT
#undef VK_DEAD_ABOVERING
#undef VK_DEAD_ACUTE
#undef VK_DEAD_BREVE
#undef VK_DEAD_CARON
#undef VK_DEAD_CEDILLA
#undef VK_DEAD_CIRCUMFLEX
#undef VK_DEAD_DIAERESIS
#undef VK_DEAD_DOUBLEACUTE
#undef VK_DEAD_GRAVE
#undef VK_DEAD_IOTA
#undef VK_DEAD_MACRON
#undef VK_DEAD_OGONEK
#undef VK_DEAD_SEMIVOICED_SOUND
#undef VK_DEAD_TILDE
#undef VK_DEAD_VOICED_SOUND
#undef VK_DECIMAL
#undef VK_DELETE
#undef VK_DIVIDE
#undef VK_DOLLAR
#undef VK_DOWN
#undef VK_E
#undef VK_END
#undef VK_ENTER
#undef VK_EQUALS
#undef VK_ESCAPE
#undef VK_EXCLAMATION_MARK
#undef VK_F
#undef VK_F1
#undef VK_F10
#undef VK_F11
#undef VK_F12
#undef VK_F2
#undef VK_F3
#undef VK_F4
#undef VK_F5
#undef VK_F6
#undef VK_F7
#undef VK_F8
#undef VK_F9
#undef VK_FIND
#undef VK_FULL_WIDTH
#undef VK_G
#undef VK_GREATER
#undef VK_H
#undef VK_HALF_WIDTH
#undef VK_HELP
#undef VK_HIRAGANA
#undef VK_HOME
#undef VK_I
#undef VK_INPUT_METHOD_ON_OFF
#undef VK_INSERT
#undef VK_INVERTED_EXCLAMATION_MARK
#undef VK_J
#undef VK_JAPANESE_ROMAN
#undef VK_K
#undef VK_KANA
#undef VK_KANA_LOCK
#undef VK_KATAKANA
#undef VK_KP_DOWN
#undef VK_KP_LEFT
#undef VK_KP_RIGHT
#undef VK_KP_UP
#undef VK_L
#undef VK_LEFT
#undef VK_LEFT_PARENTHESIS
#undef VK_LESS
#undef VK_M
#undef VK_META
#undef VK_MINUS
#undef VK_MULTIPLY
#undef VK_N
#undef VK_NONCONVERT
#undef VK_NUMBER_SIGN
#undef VK_NUMPAD0
#undef VK_NUMPAD1
#undef VK_NUMPAD2
#undef VK_NUMPAD3
#undef VK_NUMPAD4
#undef VK_NUMPAD5
#undef VK_NUMPAD6
#undef VK_NUMPAD7
#undef VK_NUMPAD8
#undef VK_NUMPAD9
#undef VK_NUM_LOCK
#undef VK_O
#undef VK_OPEN_BRACKET
#undef VK_P
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP
#undef VK_PASTE
#undef VK_PAUSE
#undef VK_PERIOD
#undef VK_PLUS
#undef VK_PREVIOUS_CANDIDATE
#undef VK_PRINTSCREEN
#undef VK_PROPS
#undef VK_Q
#undef VK_QUOTE
#undef VK_QUOTEDBL
#undef VK_R
#undef VK_RIGHT
#undef VK_RIGHT_PARENTHESIS
#undef VK_S
#undef VK_SCROLL_LOCK
#undef VK_SEMICOLON
#undef VK_SEPARATOR
#undef VK_SHIFT
#undef VK_SLASH
#undef VK_SPACE
#undef VK_STOP
#undef VK_SUBTRACT
#undef VK_T
#undef VK_TAB
#undef VK_U
#undef VK_UNDEFINED
#undef VK_UNDERSCORE
#undef VK_UNDO
#undef VK_UP
#undef VK_V
#undef VK_W
#undef VK_WINDOWS
#undef VK_X
#undef VK_Y
#undef VK_Z
#undef XK_0
#undef XK_1
#undef XK_2
#undef XK_3
#undef XK_4
#undef XK_5
#undef XK_6
#undef XK_7
#undef XK_8
#undef XK_9
#undef XK_F1
#undef XK_F10
#undef XK_F11
#undef XK_F12
#undef XK_F2
#undef XK_F21
#undef XK_F22
#undef XK_F23
#undef XK_F24
#undef XK_F25
#undef XK_F26
#undef XK_F3
#undef XK_F4
#undef XK_F5
#undef XK_F6
#undef XK_F7
#undef XK_F8
#undef XK_F9
#undef XK_KP_0
#undef XK_KP_1
#undef XK_KP_2
#undef XK_KP_3
#undef XK_KP_4
#undef XK_KP_5
#undef XK_KP_6
#undef XK_KP_7
#undef XK_KP_8
#undef XK_KP_9
#undef XK_L1
#undef XK_L10
#undef XK_L2
#undef XK_L3
#undef XK_L4
#undef XK_L6
#undef XK_L8
#undef XK_L9
#undef XK_R1
#undef XK_R13
#undef XK_R15
#undef XK_R2
#undef XK_R3
#undef XK_R4
#undef XK_R5
#undef XK_R6
#undef XK_R7
#undef XK_R9

using $KeyEvent = ::java::awt::event::KeyEvent;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XConstants = ::sun::awt::X11::XConstants;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XKeySymConstants = ::sun::awt::X11::XKeySymConstants;
using $XKeysym$Keysym2JavaKeycode = ::sun::awt::X11::XKeysym$Keysym2JavaKeycode;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XKeysym_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(XKeysym, unsafe)},
	{"keysym2JavaKeycodeHash", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Long;Lsun/awt/X11/XKeysym$Keysym2JavaKeycode;>;", $STATIC, $staticField(XKeysym, keysym2JavaKeycodeHash)},
	{"keysym2UCSHash", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Long;Ljava/lang/Character;>;", $STATIC, $staticField(XKeysym, keysym2UCSHash)},
	{"uppercaseHash", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Long;Ljava/lang/Long;>;", $STATIC, $staticField(XKeysym, uppercaseHash)},
	{"javaKeycode2KeysymHash", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Integer;Ljava/lang/Long;>;", $STATIC, $staticField(XKeysym, javaKeycode2KeysymHash)},
	{"keysym_lowercase", "J", nullptr, $STATIC, $staticField(XKeysym, keysym_lowercase)},
	{"keysym_uppercase", "J", nullptr, $STATIC, $staticField(XKeysym, keysym_uppercase)},
	{"kanaLock", "Lsun/awt/X11/XKeysym$Keysym2JavaKeycode;", nullptr, $STATIC, $staticField(XKeysym, kanaLock)},
	{"keyEventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XKeysym, keyEventLog)},
	{}
};

$MethodInfo _XKeysym_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XKeysym::*)()>(&XKeysym::init$))},
	{"convertKeysym", "(JI)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int64_t,int32_t)>(&XKeysym::convertKeysym))},
	{"getJavaKeycode", "(J)Lsun/awt/X11/XKeysym$Keysym2JavaKeycode;", nullptr, $STATIC, $method(static_cast<$XKeysym$Keysym2JavaKeycode*(*)(int64_t)>(&XKeysym::getJavaKeycode))},
	{"getJavaKeycode", "(Lsun/awt/X11/XKeyEvent;)Lsun/awt/X11/XKeysym$Keysym2JavaKeycode;", nullptr, $STATIC, $method(static_cast<$XKeysym$Keysym2JavaKeycode*(*)($XKeyEvent*)>(&XKeysym::getJavaKeycode))},
	{"getJavaKeycodeOnly", "(Lsun/awt/X11/XKeyEvent;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($XKeyEvent*)>(&XKeysym::getJavaKeycodeOnly))},
	{"getKeypadKeysym", "(Lsun/awt/X11/XKeyEvent;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($XKeyEvent*)>(&XKeysym::getKeypadKeysym))},
	{"getKeysym", "(Lsun/awt/X11/XKeyEvent;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($XKeyEvent*)>(&XKeysym::getKeysym))},
	{"getLegacyJavaKeycodeOnly", "(Lsun/awt/X11/XKeyEvent;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($XKeyEvent*)>(&XKeysym::getLegacyJavaKeycodeOnly))},
	{"getUppercaseAlphabetic", "(J)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&XKeysym::getUppercaseAlphabetic))},
	{"isKPEvent", "(Lsun/awt/X11/XKeyEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($XKeyEvent*)>(&XKeysym::isKPEvent))},
	{"javaKeycode2Keysym", "(I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&XKeysym::javaKeycode2Keysym))},
	{"xkeycode2keysym", "(Lsun/awt/X11/XKeyEvent;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($XKeyEvent*,int32_t)>(&XKeysym::xkeycode2keysym))},
	{"xkeycode2keysym_noxkb", "(Lsun/awt/X11/XKeyEvent;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($XKeyEvent*,int32_t)>(&XKeysym::xkeycode2keysym_noxkb))},
	{"xkeycode2keysym_xkb", "(Lsun/awt/X11/XKeyEvent;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($XKeyEvent*,int32_t)>(&XKeysym::xkeycode2keysym_xkb))},
	{"xkeycode2primary_keysym", "(Lsun/awt/X11/XKeyEvent;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($XKeyEvent*)>(&XKeysym::xkeycode2primary_keysym))},
	{}
};

$InnerClassInfo _XKeysym_InnerClassesInfo_[] = {
	{"sun.awt.X11.XKeysym$Keysym2JavaKeycode", "sun.awt.X11.XKeysym", "Keysym2JavaKeycode", $STATIC},
	{}
};

$ClassInfo _XKeysym_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XKeysym",
	"java.lang.Object",
	nullptr,
	_XKeysym_FieldInfo_,
	_XKeysym_MethodInfo_,
	nullptr,
	nullptr,
	_XKeysym_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XKeysym$Keysym2JavaKeycode"
};

$Object* allocate$XKeysym($Class* clazz) {
	return $of($alloc(XKeysym));
}

$Unsafe* XKeysym::unsafe = nullptr;
$Hashtable* XKeysym::keysym2JavaKeycodeHash = nullptr;
$Hashtable* XKeysym::keysym2UCSHash = nullptr;
$Hashtable* XKeysym::uppercaseHash = nullptr;
$Hashtable* XKeysym::javaKeycode2KeysymHash = nullptr;
int64_t XKeysym::keysym_lowercase = 0;
int64_t XKeysym::keysym_uppercase = 0;
$XKeysym$Keysym2JavaKeycode* XKeysym::kanaLock = nullptr;
$PlatformLogger* XKeysym::keyEventLog = nullptr;

void XKeysym::init$() {
}

char16_t XKeysym::convertKeysym(int64_t ks, int32_t state) {
	$init(XKeysym);
	$useLocalCurrentObjectStackCache();
	if ((ks >= 32 && ks <= 126) || (ks >= 160 && ks <= 255)) {
		if (((int32_t)(state & (uint32_t)$XConstants::ControlMask)) != 0) {
			if ((ks >= u'A' && ks <= u']') || (ks == u'_') || (ks >= u'a' && ks <= u'z')) {
				ks &= (uint64_t)31;
			}
		}
		return (char16_t)ks;
	}
	if (((int64_t)(ks & (uint64_t)(int64_t)(int32_t)0xFF000000)) == 0x01000000) {
		return (char16_t)((int64_t)(ks & (uint64_t)(int64_t)0x00FFFFFF));
	}
	$var($Character, ch, $cast($Character, $nc(XKeysym::keysym2UCSHash)->get($($Long::valueOf(ks)))));
	return ch == nullptr ? (char16_t)0 : $nc(ch)->charValue();
}

int64_t XKeysym::xkeycode2keysym_noxkb($XKeyEvent* ev, int32_t ndx) {
	$init(XKeysym);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int64_t var$3 = $nc(ev)->get_display();
			var$2 = $XlibWrapper::XKeycodeToKeysym(var$3, ev->get_keycode(), ndx);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t XKeysym::xkeycode2keysym_xkb($XKeyEvent* ev, int32_t ndx) {
	$init(XKeysym);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t mods = $nc(ev)->get_state();
			if ((ndx == 0) && (((int32_t)(mods & (uint32_t)$XConstants::ShiftMask)) != 0)) {
				mods ^= $XConstants::ShiftMask;
			}
			int64_t kbdDesc = $XToolkit::getXKBKbdDesc();
			if (kbdDesc != 0) {
				$init($XlibWrapper);
				$XlibWrapper::XkbTranslateKeyCode(kbdDesc, ev->get_keycode(), mods, $XlibWrapper::iarg1, $XlibWrapper::larg3);
			} else {
				$nc(XKeysym::keyEventLog)->fine("Thread race: Toolkit shutdown before the end of a key event processing."_s);
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			$init($XlibWrapper);
			var$2 = $Native::getLong($XlibWrapper::larg3);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t XKeysym::xkeycode2keysym($XKeyEvent* ev, int32_t ndx) {
	$init(XKeysym);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if ($XToolkit::canUseXKBCalls()) {
				var$2 = xkeycode2keysym_xkb(ev, ndx);
				return$1 = true;
				goto $finally;
			} else {
				var$2 = xkeycode2keysym_noxkb(ev, ndx);
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t XKeysym::xkeycode2primary_keysym($XKeyEvent* ev) {
	$init(XKeysym);
	return xkeycode2keysym(ev, 0);
}

bool XKeysym::isKPEvent($XKeyEvent* ev) {
	$init(XKeysym);
	bool var$0 = $XToolkit::isXsunKPBehavior();
	int32_t ndx = var$0 && !$XToolkit::isXKBenabled() ? 2 : 1;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$1, nullptr);
		bool var$3 = false;
		bool return$2 = false;
		try {
			int64_t var$5 = $nc(ev)->get_display();
			bool var$4 = $XlibWrapper::IsKeypadKey($XlibWrapper::XKeycodeToKeysym(var$5, ev->get_keycode(), ndx));
			if (!var$4) {
				int64_t var$6 = $nc(ev)->get_display();
				var$4 = $XlibWrapper::IsKeypadKey($XlibWrapper::XKeycodeToKeysym(var$6, ev->get_keycode(), 0));
			}
			var$3 = (var$4);
			return$2 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$1, var$7);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		if (return$2) {
			return var$3;
		}
	}
	$shouldNotReachHere();
}

int64_t XKeysym::getUppercaseAlphabetic(int64_t keysym) {
	$init(XKeysym);
	$useLocalCurrentObjectStackCache();
	int64_t lc = -1;
	int64_t uc = -1;
	$var($Long, stored, $cast($Long, $nc(XKeysym::uppercaseHash)->get($($Long::valueOf(keysym)))));
	if (stored != nullptr) {
		return stored->longValue();
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XConvertCase(keysym, XKeysym::keysym_lowercase, XKeysym::keysym_uppercase);
			lc = $Native::getLong(XKeysym::keysym_lowercase);
			uc = $Native::getLong(XKeysym::keysym_uppercase);
			if (lc == uc) {
				uc = -1;
			}
			$var($Object, var$1, $of($Long::valueOf(keysym)));
			$nc(XKeysym::uppercaseHash)->put(var$1, $($Long::valueOf(uc)));
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return uc;
}

int64_t XKeysym::getKeypadKeysym($XKeyEvent* ev) {
	$init(XKeysym);
	int32_t ndx = 0;
	int64_t keysym = $XConstants::NoSymbol;
	bool var$0 = $XToolkit::isXsunKPBehavior();
	if (var$0 && !$XToolkit::isXKBenabled()) {
		if (((int32_t)($nc(ev)->get_state() & (uint32_t)$XConstants::ShiftMask)) != 0) {
			ndx = 3;
			keysym = xkeycode2keysym(ev, ndx);
		} else {
			ndx = 2;
			keysym = xkeycode2keysym(ev, ndx);
		}
	} else {
		bool var$2 = ((int32_t)($nc(ev)->get_state() & (uint32_t)$XConstants::ShiftMask)) != 0;
		if (var$2 || (((int32_t)($nc(ev)->get_state() & (uint32_t)$XConstants::LockMask)) != 0 && ($XToolkit::modLockIsShiftLock != 0))) {
			ndx = 0;
			keysym = xkeycode2keysym(ev, ndx);
		} else {
			ndx = 1;
			keysym = xkeycode2keysym(ev, ndx);
		}
	}
	return keysym;
}

$XKeysym$Keysym2JavaKeycode* XKeysym::getJavaKeycode(int64_t keysym) {
	$init(XKeysym);
	if (keysym == $XKeySymConstants::XK_Mode_switch) {
		if ($XToolkit::isKanaKeyboard()) {
			return XKeysym::kanaLock;
		}
	} else if (keysym == $XKeySymConstants::XK_L1) {
		if ($XToolkit::isSunKeyboard()) {
			keysym = $XKeySymConstants::SunXK_Stop;
		}
	} else if (keysym == $XKeySymConstants::XK_L2) {
		if ($XToolkit::isSunKeyboard()) {
			keysym = $XKeySymConstants::SunXK_Again;
		}
	}
	return $cast($XKeysym$Keysym2JavaKeycode, $nc(XKeysym::keysym2JavaKeycodeHash)->get($($Long::valueOf(keysym))));
}

$XKeysym$Keysym2JavaKeycode* XKeysym::getJavaKeycode($XKeyEvent* ev) {
	$init(XKeysym);
	int64_t keysym = $XConstants::NoSymbol;
	int32_t ndx = 0;
	$init($XToolkit);
	bool var$0 = ((int32_t)($nc(ev)->get_state() & (uint32_t)$XToolkit::numLockMask)) != 0;
	if (var$0 && isKPEvent(ev)) {
		keysym = getKeypadKeysym(ev);
	} else {
		ndx = 0;
		keysym = xkeycode2keysym(ev, ndx);
	}
	$var($XKeysym$Keysym2JavaKeycode, jkc, getJavaKeycode(keysym));
	return jkc;
}

int32_t XKeysym::getJavaKeycodeOnly($XKeyEvent* ev) {
	$init(XKeysym);
	$var($XKeysym$Keysym2JavaKeycode, jkc, getJavaKeycode(ev));
	return jkc == nullptr ? $KeyEvent::VK_UNDEFINED : $nc(jkc)->getJavaKeycode();
}

int32_t XKeysym::getLegacyJavaKeycodeOnly($XKeyEvent* ev) {
	$init(XKeysym);
	int64_t keysym = $XConstants::NoSymbol;
	int32_t ndx = 0;
	$init($XToolkit);
	bool var$0 = ((int32_t)($nc(ev)->get_state() & (uint32_t)$XToolkit::numLockMask)) != 0;
	if (var$0 && isKPEvent(ev)) {
		keysym = getKeypadKeysym(ev);
	} else {
		ndx = 0;
		keysym = xkeycode2keysym_noxkb(ev, ndx);
	}
	$var($XKeysym$Keysym2JavaKeycode, jkc, getJavaKeycode(keysym));
	return jkc == nullptr ? $KeyEvent::VK_UNDEFINED : $nc(jkc)->getJavaKeycode();
}

int64_t XKeysym::javaKeycode2Keysym(int32_t jkey) {
	$init(XKeysym);
	$useLocalCurrentObjectStackCache();
	$var($Long, ks, $cast($Long, $nc(XKeysym::javaKeycode2KeysymHash)->get($($Integer::valueOf(jkey)))));
	return (ks == nullptr ? (int64_t)0 : $nc(ks)->longValue());
}

int64_t XKeysym::getKeysym($XKeyEvent* ev) {
	$init(XKeysym);
	int64_t keysym = $XConstants::NoSymbol;
	int64_t uppercaseKeysym = $XConstants::NoSymbol;
	int32_t ndx = 0;
	bool getUppercase = false;
	$init($XToolkit);
	bool var$0 = ((int32_t)($nc(ev)->get_state() & (uint32_t)$XToolkit::numLockMask)) != 0;
	if (var$0 && isKPEvent(ev)) {
		keysym = getKeypadKeysym(ev);
	} else {
		if (((int32_t)(ev->get_state() & (uint32_t)$XConstants::ShiftMask)) == 0) {
			if (((int32_t)(ev->get_state() & (uint32_t)$XConstants::LockMask)) == 0) {
				ndx = 0;
				getUppercase = false;
			} else {
				if (((int32_t)(ev->get_state() & (uint32_t)$XConstants::LockMask)) != 0 && ($XToolkit::modLockIsShiftLock == 0)) {
					ndx = 0;
					getUppercase = true;
				} else {
					if (((int32_t)(ev->get_state() & (uint32_t)$XConstants::LockMask)) != 0 && ($XToolkit::modLockIsShiftLock != 0)) {
						ndx = 1;
						getUppercase = false;
					}
				}
			}
		} else {
			if (((int32_t)(ev->get_state() & (uint32_t)$XConstants::LockMask)) != 0 && ($XToolkit::modLockIsShiftLock == 0)) {
				ndx = 1;
				getUppercase = true;
			} else {
				ndx = 1;
				getUppercase = false;
			}
		}
		keysym = xkeycode2keysym(ev, ndx);
		if (getUppercase && (uppercaseKeysym = getUppercaseAlphabetic(keysym)) != -1) {
			keysym = uppercaseKeysym;
		}
	}
	return keysym;
}

void clinit$XKeysym($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($XlibWrapper);
	$assignStatic(XKeysym::unsafe, $XlibWrapper::unsafe);
	$assignStatic(XKeysym::keysym2JavaKeycodeHash, $new($Hashtable));
	$assignStatic(XKeysym::keysym2UCSHash, $new($Hashtable));
	$assignStatic(XKeysym::uppercaseHash, $new($Hashtable));
	$assignStatic(XKeysym::javaKeycode2KeysymHash, $new($Hashtable));
	XKeysym::keysym_lowercase = $nc(XKeysym::unsafe)->allocateMemory($Native::getLongSize());
	XKeysym::keysym_uppercase = $nc(XKeysym::unsafe)->allocateMemory($Native::getLongSize());
	$assignStatic(XKeysym::kanaLock, $new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KANA_LOCK, $KeyEvent::KEY_LOCATION_STANDARD));
	$assignStatic(XKeysym::keyEventLog, $PlatformLogger::getLogger("sun.awt.X11.key.XKeysym"_s));
	{
		$var($Object, var$0, $of($Long::valueOf((int64_t)0x0000FF08)));
		$nc(XKeysym::keysym2UCSHash)->put(var$0, $($Character::valueOf((char16_t)8)));
		$var($Object, var$1, $of($Long::valueOf((int64_t)0x0000FF09)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1, $($Character::valueOf((char16_t)9)));
		$var($Object, var$2, $of($Long::valueOf((int64_t)0x0000FF0A)));
		$nc(XKeysym::keysym2UCSHash)->put(var$2, $($Character::valueOf((char16_t)10)));
		$var($Object, var$3, $of($Long::valueOf((int64_t)0x0000FF0B)));
		$nc(XKeysym::keysym2UCSHash)->put(var$3, $($Character::valueOf((char16_t)11)));
		$var($Object, var$4, $of($Long::valueOf((int64_t)0x0000FF0D)));
		$nc(XKeysym::keysym2UCSHash)->put(var$4, $($Character::valueOf((char16_t)10)));
		$var($Object, var$5, $of($Long::valueOf((int64_t)0x0000FF1B)));
		$nc(XKeysym::keysym2UCSHash)->put(var$5, $($Character::valueOf((char16_t)27)));
		$var($Object, var$6, $of($Long::valueOf((int64_t)0x0000FFFF)));
		$nc(XKeysym::keysym2UCSHash)->put(var$6, $($Character::valueOf((char16_t)127)));
		$var($Object, var$7, $of($Long::valueOf((int64_t)0x0000FF80)));
		$nc(XKeysym::keysym2UCSHash)->put(var$7, $($Character::valueOf((char16_t)32)));
		$var($Object, var$8, $of($Long::valueOf((int64_t)0x0000FF89)));
		$nc(XKeysym::keysym2UCSHash)->put(var$8, $($Character::valueOf((char16_t)9)));
		$var($Object, var$9, $of($Long::valueOf((int64_t)0x0000FF8D)));
		$nc(XKeysym::keysym2UCSHash)->put(var$9, $($Character::valueOf((char16_t)10)));
		$var($Object, var$10, $of($Long::valueOf((int64_t)0x0000FF9F)));
		$nc(XKeysym::keysym2UCSHash)->put(var$10, $($Character::valueOf((char16_t)127)));
		$var($Object, var$11, $of($Long::valueOf((int64_t)0x0000FFBD)));
		$nc(XKeysym::keysym2UCSHash)->put(var$11, $($Character::valueOf((char16_t)61)));
		$var($Object, var$12, $of($Long::valueOf((int64_t)0x0000FFAA)));
		$nc(XKeysym::keysym2UCSHash)->put(var$12, $($Character::valueOf((char16_t)42)));
		$var($Object, var$13, $of($Long::valueOf((int64_t)0x0000FFAB)));
		$nc(XKeysym::keysym2UCSHash)->put(var$13, $($Character::valueOf((char16_t)43)));
		$var($Object, var$14, $of($Long::valueOf((int64_t)0x0000FFAC)));
		$nc(XKeysym::keysym2UCSHash)->put(var$14, $($Character::valueOf((char16_t)44)));
		$var($Object, var$15, $of($Long::valueOf((int64_t)0x0000FFAD)));
		$nc(XKeysym::keysym2UCSHash)->put(var$15, $($Character::valueOf((char16_t)45)));
		$var($Object, var$16, $of($Long::valueOf((int64_t)0x0000FFAE)));
		$nc(XKeysym::keysym2UCSHash)->put(var$16, $($Character::valueOf((char16_t)46)));
		$var($Object, var$17, $of($Long::valueOf((int64_t)0x0000FFAF)));
		$nc(XKeysym::keysym2UCSHash)->put(var$17, $($Character::valueOf((char16_t)47)));
		$var($Object, var$18, $of($Long::valueOf((int64_t)0x0000FFB0)));
		$nc(XKeysym::keysym2UCSHash)->put(var$18, $($Character::valueOf((char16_t)48)));
		$var($Object, var$19, $of($Long::valueOf((int64_t)0x0000FFB1)));
		$nc(XKeysym::keysym2UCSHash)->put(var$19, $($Character::valueOf((char16_t)49)));
		$var($Object, var$20, $of($Long::valueOf((int64_t)0x0000FFB2)));
		$nc(XKeysym::keysym2UCSHash)->put(var$20, $($Character::valueOf((char16_t)50)));
		$var($Object, var$21, $of($Long::valueOf((int64_t)0x0000FFB3)));
		$nc(XKeysym::keysym2UCSHash)->put(var$21, $($Character::valueOf((char16_t)51)));
		$var($Object, var$22, $of($Long::valueOf((int64_t)0x0000FFB4)));
		$nc(XKeysym::keysym2UCSHash)->put(var$22, $($Character::valueOf((char16_t)52)));
		$var($Object, var$23, $of($Long::valueOf((int64_t)0x0000FFB5)));
		$nc(XKeysym::keysym2UCSHash)->put(var$23, $($Character::valueOf((char16_t)53)));
		$var($Object, var$24, $of($Long::valueOf((int64_t)0x0000FFB6)));
		$nc(XKeysym::keysym2UCSHash)->put(var$24, $($Character::valueOf((char16_t)54)));
		$var($Object, var$25, $of($Long::valueOf((int64_t)0x0000FFB7)));
		$nc(XKeysym::keysym2UCSHash)->put(var$25, $($Character::valueOf((char16_t)55)));
		$var($Object, var$26, $of($Long::valueOf((int64_t)0x0000FFB8)));
		$nc(XKeysym::keysym2UCSHash)->put(var$26, $($Character::valueOf((char16_t)56)));
		$var($Object, var$27, $of($Long::valueOf((int64_t)0x0000FFB9)));
		$nc(XKeysym::keysym2UCSHash)->put(var$27, $($Character::valueOf((char16_t)57)));
		$var($Object, var$28, $of($Long::valueOf((int64_t)0x0000FE20)));
		$nc(XKeysym::keysym2UCSHash)->put(var$28, $($Character::valueOf((char16_t)9)));
		$var($Object, var$29, $of($Long::valueOf((int64_t)0x0000FE50)));
		$nc(XKeysym::keysym2UCSHash)->put(var$29, $($Character::valueOf((char16_t)715)));
		$var($Object, var$30, $of($Long::valueOf((int64_t)0x0000FE51)));
		$nc(XKeysym::keysym2UCSHash)->put(var$30, $($Character::valueOf((char16_t)714)));
		$var($Object, var$31, $of($Long::valueOf((int64_t)0x0000FE52)));
		$nc(XKeysym::keysym2UCSHash)->put(var$31, $($Character::valueOf((char16_t)710)));
		$var($Object, var$32, $of($Long::valueOf((int64_t)0x0000FE53)));
		$nc(XKeysym::keysym2UCSHash)->put(var$32, $($Character::valueOf((char16_t)732)));
		$var($Object, var$33, $of($Long::valueOf((int64_t)0x0000FE54)));
		$nc(XKeysym::keysym2UCSHash)->put(var$33, $($Character::valueOf((char16_t)713)));
		$var($Object, var$34, $of($Long::valueOf((int64_t)0x0000FE55)));
		$nc(XKeysym::keysym2UCSHash)->put(var$34, $($Character::valueOf((char16_t)728)));
		$var($Object, var$35, $of($Long::valueOf((int64_t)0x0000FE56)));
		$nc(XKeysym::keysym2UCSHash)->put(var$35, $($Character::valueOf((char16_t)729)));
		$var($Object, var$36, $of($Long::valueOf((int64_t)0x0000FE57)));
		$nc(XKeysym::keysym2UCSHash)->put(var$36, $($Character::valueOf((char16_t)168)));
		$var($Object, var$37, $of($Long::valueOf((int64_t)0x0000FE58)));
		$nc(XKeysym::keysym2UCSHash)->put(var$37, $($Character::valueOf((char16_t)730)));
		$var($Object, var$38, $of($Long::valueOf((int64_t)0x0000FE59)));
		$nc(XKeysym::keysym2UCSHash)->put(var$38, $($Character::valueOf((char16_t)733)));
		$var($Object, var$39, $of($Long::valueOf((int64_t)0x0000FE5A)));
		$nc(XKeysym::keysym2UCSHash)->put(var$39, $($Character::valueOf((char16_t)711)));
		$var($Object, var$40, $of($Long::valueOf((int64_t)0x0000FE5B)));
		$nc(XKeysym::keysym2UCSHash)->put(var$40, $($Character::valueOf((char16_t)184)));
		$var($Object, var$41, $of($Long::valueOf((int64_t)0x0000FE5C)));
		$nc(XKeysym::keysym2UCSHash)->put(var$41, $($Character::valueOf((char16_t)731)));
		$var($Object, var$42, $of($Long::valueOf((int64_t)0x0000FE5D)));
		$nc(XKeysym::keysym2UCSHash)->put(var$42, $($Character::valueOf((char16_t)617)));
		$var($Object, var$43, $of($Long::valueOf((int64_t)0x0000FE5E)));
		$nc(XKeysym::keysym2UCSHash)->put(var$43, $($Character::valueOf((char16_t)12441)));
		$var($Object, var$44, $of($Long::valueOf((int64_t)0x0000FE5F)));
		$nc(XKeysym::keysym2UCSHash)->put(var$44, $($Character::valueOf((char16_t)12442)));
		$var($Object, var$45, $of($Long::valueOf((int64_t)0x0000FE60)));
		$nc(XKeysym::keysym2UCSHash)->put(var$45, $($Character::valueOf((char16_t)803)));
		$var($Object, var$46, $of($Long::valueOf((int64_t)0x0000FE61)));
		$nc(XKeysym::keysym2UCSHash)->put(var$46, $($Character::valueOf((char16_t)801)));
		$var($Object, var$47, $of($Long::valueOf((int64_t)0x0000FE62)));
		$nc(XKeysym::keysym2UCSHash)->put(var$47, $($Character::valueOf((char16_t)795)));
		$var($Object, var$48, $of($Long::valueOf((int64_t)417)));
		$nc(XKeysym::keysym2UCSHash)->put(var$48, $($Character::valueOf((char16_t)260)));
		$var($Object, var$49, $of($Long::valueOf((int64_t)418)));
		$nc(XKeysym::keysym2UCSHash)->put(var$49, $($Character::valueOf((char16_t)728)));
		$var($Object, var$50, $of($Long::valueOf((int64_t)419)));
		$nc(XKeysym::keysym2UCSHash)->put(var$50, $($Character::valueOf((char16_t)321)));
		$var($Object, var$51, $of($Long::valueOf((int64_t)421)));
		$nc(XKeysym::keysym2UCSHash)->put(var$51, $($Character::valueOf((char16_t)317)));
		$var($Object, var$52, $of($Long::valueOf((int64_t)422)));
		$nc(XKeysym::keysym2UCSHash)->put(var$52, $($Character::valueOf((char16_t)346)));
		$var($Object, var$53, $of($Long::valueOf((int64_t)425)));
		$nc(XKeysym::keysym2UCSHash)->put(var$53, $($Character::valueOf((char16_t)352)));
		$var($Object, var$54, $of($Long::valueOf((int64_t)426)));
		$nc(XKeysym::keysym2UCSHash)->put(var$54, $($Character::valueOf((char16_t)350)));
		$var($Object, var$55, $of($Long::valueOf((int64_t)427)));
		$nc(XKeysym::keysym2UCSHash)->put(var$55, $($Character::valueOf((char16_t)356)));
		$var($Object, var$56, $of($Long::valueOf((int64_t)428)));
		$nc(XKeysym::keysym2UCSHash)->put(var$56, $($Character::valueOf((char16_t)377)));
		$var($Object, var$57, $of($Long::valueOf((int64_t)430)));
		$nc(XKeysym::keysym2UCSHash)->put(var$57, $($Character::valueOf((char16_t)381)));
		$var($Object, var$58, $of($Long::valueOf((int64_t)431)));
		$nc(XKeysym::keysym2UCSHash)->put(var$58, $($Character::valueOf((char16_t)379)));
		$var($Object, var$59, $of($Long::valueOf((int64_t)433)));
		$nc(XKeysym::keysym2UCSHash)->put(var$59, $($Character::valueOf((char16_t)261)));
		$var($Object, var$60, $of($Long::valueOf((int64_t)434)));
		$nc(XKeysym::keysym2UCSHash)->put(var$60, $($Character::valueOf((char16_t)731)));
		$var($Object, var$61, $of($Long::valueOf((int64_t)435)));
		$nc(XKeysym::keysym2UCSHash)->put(var$61, $($Character::valueOf((char16_t)322)));
		$var($Object, var$62, $of($Long::valueOf((int64_t)437)));
		$nc(XKeysym::keysym2UCSHash)->put(var$62, $($Character::valueOf((char16_t)318)));
		$var($Object, var$63, $of($Long::valueOf((int64_t)438)));
		$nc(XKeysym::keysym2UCSHash)->put(var$63, $($Character::valueOf((char16_t)347)));
		$var($Object, var$64, $of($Long::valueOf((int64_t)439)));
		$nc(XKeysym::keysym2UCSHash)->put(var$64, $($Character::valueOf((char16_t)711)));
		$var($Object, var$65, $of($Long::valueOf((int64_t)441)));
		$nc(XKeysym::keysym2UCSHash)->put(var$65, $($Character::valueOf((char16_t)353)));
		$var($Object, var$66, $of($Long::valueOf((int64_t)442)));
		$nc(XKeysym::keysym2UCSHash)->put(var$66, $($Character::valueOf((char16_t)351)));
		$var($Object, var$67, $of($Long::valueOf((int64_t)443)));
		$nc(XKeysym::keysym2UCSHash)->put(var$67, $($Character::valueOf((char16_t)357)));
		$var($Object, var$68, $of($Long::valueOf((int64_t)444)));
		$nc(XKeysym::keysym2UCSHash)->put(var$68, $($Character::valueOf((char16_t)378)));
		$var($Object, var$69, $of($Long::valueOf((int64_t)445)));
		$nc(XKeysym::keysym2UCSHash)->put(var$69, $($Character::valueOf((char16_t)733)));
		$var($Object, var$70, $of($Long::valueOf((int64_t)446)));
		$nc(XKeysym::keysym2UCSHash)->put(var$70, $($Character::valueOf((char16_t)382)));
		$var($Object, var$71, $of($Long::valueOf((int64_t)447)));
		$nc(XKeysym::keysym2UCSHash)->put(var$71, $($Character::valueOf((char16_t)380)));
		$var($Object, var$72, $of($Long::valueOf((int64_t)448)));
		$nc(XKeysym::keysym2UCSHash)->put(var$72, $($Character::valueOf((char16_t)340)));
		$var($Object, var$73, $of($Long::valueOf((int64_t)451)));
		$nc(XKeysym::keysym2UCSHash)->put(var$73, $($Character::valueOf((char16_t)258)));
		$var($Object, var$74, $of($Long::valueOf((int64_t)453)));
		$nc(XKeysym::keysym2UCSHash)->put(var$74, $($Character::valueOf((char16_t)313)));
		$var($Object, var$75, $of($Long::valueOf((int64_t)454)));
		$nc(XKeysym::keysym2UCSHash)->put(var$75, $($Character::valueOf((char16_t)262)));
		$var($Object, var$76, $of($Long::valueOf((int64_t)456)));
		$nc(XKeysym::keysym2UCSHash)->put(var$76, $($Character::valueOf((char16_t)268)));
		$var($Object, var$77, $of($Long::valueOf((int64_t)458)));
		$nc(XKeysym::keysym2UCSHash)->put(var$77, $($Character::valueOf((char16_t)280)));
		$var($Object, var$78, $of($Long::valueOf((int64_t)460)));
		$nc(XKeysym::keysym2UCSHash)->put(var$78, $($Character::valueOf((char16_t)282)));
		$var($Object, var$79, $of($Long::valueOf((int64_t)463)));
		$nc(XKeysym::keysym2UCSHash)->put(var$79, $($Character::valueOf((char16_t)270)));
		$var($Object, var$80, $of($Long::valueOf((int64_t)464)));
		$nc(XKeysym::keysym2UCSHash)->put(var$80, $($Character::valueOf((char16_t)272)));
		$var($Object, var$81, $of($Long::valueOf((int64_t)465)));
		$nc(XKeysym::keysym2UCSHash)->put(var$81, $($Character::valueOf((char16_t)323)));
		$var($Object, var$82, $of($Long::valueOf((int64_t)466)));
		$nc(XKeysym::keysym2UCSHash)->put(var$82, $($Character::valueOf((char16_t)327)));
		$var($Object, var$83, $of($Long::valueOf((int64_t)469)));
		$nc(XKeysym::keysym2UCSHash)->put(var$83, $($Character::valueOf((char16_t)336)));
		$var($Object, var$84, $of($Long::valueOf((int64_t)472)));
		$nc(XKeysym::keysym2UCSHash)->put(var$84, $($Character::valueOf((char16_t)344)));
		$var($Object, var$85, $of($Long::valueOf((int64_t)473)));
		$nc(XKeysym::keysym2UCSHash)->put(var$85, $($Character::valueOf((char16_t)366)));
		$var($Object, var$86, $of($Long::valueOf((int64_t)475)));
		$nc(XKeysym::keysym2UCSHash)->put(var$86, $($Character::valueOf((char16_t)368)));
		$var($Object, var$87, $of($Long::valueOf((int64_t)478)));
		$nc(XKeysym::keysym2UCSHash)->put(var$87, $($Character::valueOf((char16_t)354)));
		$var($Object, var$88, $of($Long::valueOf((int64_t)480)));
		$nc(XKeysym::keysym2UCSHash)->put(var$88, $($Character::valueOf((char16_t)341)));
		$var($Object, var$89, $of($Long::valueOf((int64_t)483)));
		$nc(XKeysym::keysym2UCSHash)->put(var$89, $($Character::valueOf((char16_t)259)));
		$var($Object, var$90, $of($Long::valueOf((int64_t)485)));
		$nc(XKeysym::keysym2UCSHash)->put(var$90, $($Character::valueOf((char16_t)314)));
		$var($Object, var$91, $of($Long::valueOf((int64_t)486)));
		$nc(XKeysym::keysym2UCSHash)->put(var$91, $($Character::valueOf((char16_t)263)));
		$var($Object, var$92, $of($Long::valueOf((int64_t)488)));
		$nc(XKeysym::keysym2UCSHash)->put(var$92, $($Character::valueOf((char16_t)269)));
		$var($Object, var$93, $of($Long::valueOf((int64_t)490)));
		$nc(XKeysym::keysym2UCSHash)->put(var$93, $($Character::valueOf((char16_t)281)));
		$var($Object, var$94, $of($Long::valueOf((int64_t)492)));
		$nc(XKeysym::keysym2UCSHash)->put(var$94, $($Character::valueOf((char16_t)283)));
		$var($Object, var$95, $of($Long::valueOf((int64_t)495)));
		$nc(XKeysym::keysym2UCSHash)->put(var$95, $($Character::valueOf((char16_t)271)));
		$var($Object, var$96, $of($Long::valueOf((int64_t)496)));
		$nc(XKeysym::keysym2UCSHash)->put(var$96, $($Character::valueOf((char16_t)273)));
		$var($Object, var$97, $of($Long::valueOf((int64_t)497)));
		$nc(XKeysym::keysym2UCSHash)->put(var$97, $($Character::valueOf((char16_t)324)));
		$var($Object, var$98, $of($Long::valueOf((int64_t)498)));
		$nc(XKeysym::keysym2UCSHash)->put(var$98, $($Character::valueOf((char16_t)328)));
		$var($Object, var$99, $of($Long::valueOf((int64_t)501)));
		$nc(XKeysym::keysym2UCSHash)->put(var$99, $($Character::valueOf((char16_t)337)));
		$var($Object, var$100, $of($Long::valueOf((int64_t)507)));
		$nc(XKeysym::keysym2UCSHash)->put(var$100, $($Character::valueOf((char16_t)369)));
		$var($Object, var$101, $of($Long::valueOf((int64_t)504)));
		$nc(XKeysym::keysym2UCSHash)->put(var$101, $($Character::valueOf((char16_t)345)));
		$var($Object, var$102, $of($Long::valueOf((int64_t)505)));
		$nc(XKeysym::keysym2UCSHash)->put(var$102, $($Character::valueOf((char16_t)367)));
		$var($Object, var$103, $of($Long::valueOf((int64_t)510)));
		$nc(XKeysym::keysym2UCSHash)->put(var$103, $($Character::valueOf((char16_t)355)));
		$var($Object, var$104, $of($Long::valueOf((int64_t)511)));
		$nc(XKeysym::keysym2UCSHash)->put(var$104, $($Character::valueOf((char16_t)729)));
		$var($Object, var$105, $of($Long::valueOf((int64_t)673)));
		$nc(XKeysym::keysym2UCSHash)->put(var$105, $($Character::valueOf((char16_t)294)));
		$var($Object, var$106, $of($Long::valueOf((int64_t)678)));
		$nc(XKeysym::keysym2UCSHash)->put(var$106, $($Character::valueOf((char16_t)292)));
		$var($Object, var$107, $of($Long::valueOf((int64_t)681)));
		$nc(XKeysym::keysym2UCSHash)->put(var$107, $($Character::valueOf((char16_t)304)));
		$var($Object, var$108, $of($Long::valueOf((int64_t)683)));
		$nc(XKeysym::keysym2UCSHash)->put(var$108, $($Character::valueOf((char16_t)286)));
		$var($Object, var$109, $of($Long::valueOf((int64_t)684)));
		$nc(XKeysym::keysym2UCSHash)->put(var$109, $($Character::valueOf((char16_t)308)));
		$var($Object, var$110, $of($Long::valueOf((int64_t)689)));
		$nc(XKeysym::keysym2UCSHash)->put(var$110, $($Character::valueOf((char16_t)295)));
		$var($Object, var$111, $of($Long::valueOf((int64_t)694)));
		$nc(XKeysym::keysym2UCSHash)->put(var$111, $($Character::valueOf((char16_t)293)));
		$var($Object, var$112, $of($Long::valueOf((int64_t)697)));
		$nc(XKeysym::keysym2UCSHash)->put(var$112, $($Character::valueOf((char16_t)305)));
		$var($Object, var$113, $of($Long::valueOf((int64_t)699)));
		$nc(XKeysym::keysym2UCSHash)->put(var$113, $($Character::valueOf((char16_t)287)));
		$var($Object, var$114, $of($Long::valueOf((int64_t)700)));
		$nc(XKeysym::keysym2UCSHash)->put(var$114, $($Character::valueOf((char16_t)309)));
		$var($Object, var$115, $of($Long::valueOf((int64_t)709)));
		$nc(XKeysym::keysym2UCSHash)->put(var$115, $($Character::valueOf((char16_t)266)));
		$var($Object, var$116, $of($Long::valueOf((int64_t)710)));
		$nc(XKeysym::keysym2UCSHash)->put(var$116, $($Character::valueOf((char16_t)264)));
		$var($Object, var$117, $of($Long::valueOf((int64_t)725)));
		$nc(XKeysym::keysym2UCSHash)->put(var$117, $($Character::valueOf((char16_t)288)));
		$var($Object, var$118, $of($Long::valueOf((int64_t)728)));
		$nc(XKeysym::keysym2UCSHash)->put(var$118, $($Character::valueOf((char16_t)284)));
		$var($Object, var$119, $of($Long::valueOf((int64_t)733)));
		$nc(XKeysym::keysym2UCSHash)->put(var$119, $($Character::valueOf((char16_t)364)));
		$var($Object, var$120, $of($Long::valueOf((int64_t)734)));
		$nc(XKeysym::keysym2UCSHash)->put(var$120, $($Character::valueOf((char16_t)348)));
		$var($Object, var$121, $of($Long::valueOf((int64_t)741)));
		$nc(XKeysym::keysym2UCSHash)->put(var$121, $($Character::valueOf((char16_t)267)));
		$var($Object, var$122, $of($Long::valueOf((int64_t)742)));
		$nc(XKeysym::keysym2UCSHash)->put(var$122, $($Character::valueOf((char16_t)265)));
		$var($Object, var$123, $of($Long::valueOf((int64_t)757)));
		$nc(XKeysym::keysym2UCSHash)->put(var$123, $($Character::valueOf((char16_t)289)));
		$var($Object, var$124, $of($Long::valueOf((int64_t)760)));
		$nc(XKeysym::keysym2UCSHash)->put(var$124, $($Character::valueOf((char16_t)285)));
		$var($Object, var$125, $of($Long::valueOf((int64_t)765)));
		$nc(XKeysym::keysym2UCSHash)->put(var$125, $($Character::valueOf((char16_t)365)));
		$var($Object, var$126, $of($Long::valueOf((int64_t)766)));
		$nc(XKeysym::keysym2UCSHash)->put(var$126, $($Character::valueOf((char16_t)349)));
		$var($Object, var$127, $of($Long::valueOf((int64_t)930)));
		$nc(XKeysym::keysym2UCSHash)->put(var$127, $($Character::valueOf((char16_t)312)));
		$var($Object, var$128, $of($Long::valueOf((int64_t)931)));
		$nc(XKeysym::keysym2UCSHash)->put(var$128, $($Character::valueOf((char16_t)342)));
		$var($Object, var$129, $of($Long::valueOf((int64_t)933)));
		$nc(XKeysym::keysym2UCSHash)->put(var$129, $($Character::valueOf((char16_t)296)));
		$var($Object, var$130, $of($Long::valueOf((int64_t)934)));
		$nc(XKeysym::keysym2UCSHash)->put(var$130, $($Character::valueOf((char16_t)315)));
		$var($Object, var$131, $of($Long::valueOf((int64_t)938)));
		$nc(XKeysym::keysym2UCSHash)->put(var$131, $($Character::valueOf((char16_t)274)));
		$var($Object, var$132, $of($Long::valueOf((int64_t)939)));
		$nc(XKeysym::keysym2UCSHash)->put(var$132, $($Character::valueOf((char16_t)290)));
		$var($Object, var$133, $of($Long::valueOf((int64_t)940)));
		$nc(XKeysym::keysym2UCSHash)->put(var$133, $($Character::valueOf((char16_t)358)));
		$var($Object, var$134, $of($Long::valueOf((int64_t)947)));
		$nc(XKeysym::keysym2UCSHash)->put(var$134, $($Character::valueOf((char16_t)343)));
		$var($Object, var$135, $of($Long::valueOf((int64_t)949)));
		$nc(XKeysym::keysym2UCSHash)->put(var$135, $($Character::valueOf((char16_t)297)));
		$var($Object, var$136, $of($Long::valueOf((int64_t)950)));
		$nc(XKeysym::keysym2UCSHash)->put(var$136, $($Character::valueOf((char16_t)316)));
		$var($Object, var$137, $of($Long::valueOf((int64_t)954)));
		$nc(XKeysym::keysym2UCSHash)->put(var$137, $($Character::valueOf((char16_t)275)));
		$var($Object, var$138, $of($Long::valueOf((int64_t)955)));
		$nc(XKeysym::keysym2UCSHash)->put(var$138, $($Character::valueOf((char16_t)291)));
		$var($Object, var$139, $of($Long::valueOf((int64_t)956)));
		$nc(XKeysym::keysym2UCSHash)->put(var$139, $($Character::valueOf((char16_t)359)));
		$var($Object, var$140, $of($Long::valueOf((int64_t)957)));
		$nc(XKeysym::keysym2UCSHash)->put(var$140, $($Character::valueOf((char16_t)330)));
		$var($Object, var$141, $of($Long::valueOf((int64_t)959)));
		$nc(XKeysym::keysym2UCSHash)->put(var$141, $($Character::valueOf((char16_t)331)));
		$var($Object, var$142, $of($Long::valueOf((int64_t)960)));
		$nc(XKeysym::keysym2UCSHash)->put(var$142, $($Character::valueOf((char16_t)256)));
		$var($Object, var$143, $of($Long::valueOf((int64_t)967)));
		$nc(XKeysym::keysym2UCSHash)->put(var$143, $($Character::valueOf((char16_t)302)));
		$var($Object, var$144, $of($Long::valueOf((int64_t)972)));
		$nc(XKeysym::keysym2UCSHash)->put(var$144, $($Character::valueOf((char16_t)278)));
		$var($Object, var$145, $of($Long::valueOf((int64_t)975)));
		$nc(XKeysym::keysym2UCSHash)->put(var$145, $($Character::valueOf((char16_t)298)));
		$var($Object, var$146, $of($Long::valueOf((int64_t)977)));
		$nc(XKeysym::keysym2UCSHash)->put(var$146, $($Character::valueOf((char16_t)325)));
		$var($Object, var$147, $of($Long::valueOf((int64_t)978)));
		$nc(XKeysym::keysym2UCSHash)->put(var$147, $($Character::valueOf((char16_t)332)));
		$var($Object, var$148, $of($Long::valueOf((int64_t)979)));
		$nc(XKeysym::keysym2UCSHash)->put(var$148, $($Character::valueOf((char16_t)310)));
		$var($Object, var$149, $of($Long::valueOf((int64_t)985)));
		$nc(XKeysym::keysym2UCSHash)->put(var$149, $($Character::valueOf((char16_t)370)));
		$var($Object, var$150, $of($Long::valueOf((int64_t)989)));
		$nc(XKeysym::keysym2UCSHash)->put(var$150, $($Character::valueOf((char16_t)360)));
		$var($Object, var$151, $of($Long::valueOf((int64_t)990)));
		$nc(XKeysym::keysym2UCSHash)->put(var$151, $($Character::valueOf((char16_t)362)));
		$var($Object, var$152, $of($Long::valueOf((int64_t)992)));
		$nc(XKeysym::keysym2UCSHash)->put(var$152, $($Character::valueOf((char16_t)257)));
		$var($Object, var$153, $of($Long::valueOf((int64_t)999)));
		$nc(XKeysym::keysym2UCSHash)->put(var$153, $($Character::valueOf((char16_t)303)));
		$var($Object, var$154, $of($Long::valueOf((int64_t)1004)));
		$nc(XKeysym::keysym2UCSHash)->put(var$154, $($Character::valueOf((char16_t)279)));
		$var($Object, var$155, $of($Long::valueOf((int64_t)1007)));
		$nc(XKeysym::keysym2UCSHash)->put(var$155, $($Character::valueOf((char16_t)299)));
		$var($Object, var$156, $of($Long::valueOf((int64_t)1009)));
		$nc(XKeysym::keysym2UCSHash)->put(var$156, $($Character::valueOf((char16_t)326)));
		$var($Object, var$157, $of($Long::valueOf((int64_t)1010)));
		$nc(XKeysym::keysym2UCSHash)->put(var$157, $($Character::valueOf((char16_t)333)));
		$var($Object, var$158, $of($Long::valueOf((int64_t)1011)));
		$nc(XKeysym::keysym2UCSHash)->put(var$158, $($Character::valueOf((char16_t)311)));
		$var($Object, var$159, $of($Long::valueOf((int64_t)1017)));
		$nc(XKeysym::keysym2UCSHash)->put(var$159, $($Character::valueOf((char16_t)371)));
		$var($Object, var$160, $of($Long::valueOf((int64_t)1021)));
		$nc(XKeysym::keysym2UCSHash)->put(var$160, $($Character::valueOf((char16_t)361)));
		$var($Object, var$161, $of($Long::valueOf((int64_t)1022)));
		$nc(XKeysym::keysym2UCSHash)->put(var$161, $($Character::valueOf((char16_t)363)));
		$var($Object, var$162, $of($Long::valueOf((int64_t)4769)));
		$nc(XKeysym::keysym2UCSHash)->put(var$162, $($Character::valueOf((char16_t)7682)));
		$var($Object, var$163, $of($Long::valueOf((int64_t)4770)));
		$nc(XKeysym::keysym2UCSHash)->put(var$163, $($Character::valueOf((char16_t)7683)));
		$var($Object, var$164, $of($Long::valueOf((int64_t)4774)));
		$nc(XKeysym::keysym2UCSHash)->put(var$164, $($Character::valueOf((char16_t)7690)));
		$var($Object, var$165, $of($Long::valueOf((int64_t)4776)));
		$nc(XKeysym::keysym2UCSHash)->put(var$165, $($Character::valueOf((char16_t)7808)));
		$var($Object, var$166, $of($Long::valueOf((int64_t)4778)));
		$nc(XKeysym::keysym2UCSHash)->put(var$166, $($Character::valueOf((char16_t)7810)));
		$var($Object, var$167, $of($Long::valueOf((int64_t)4779)));
		$nc(XKeysym::keysym2UCSHash)->put(var$167, $($Character::valueOf((char16_t)7691)));
		$var($Object, var$168, $of($Long::valueOf((int64_t)4780)));
		$nc(XKeysym::keysym2UCSHash)->put(var$168, $($Character::valueOf((char16_t)7922)));
		$var($Object, var$169, $of($Long::valueOf((int64_t)4784)));
		$nc(XKeysym::keysym2UCSHash)->put(var$169, $($Character::valueOf((char16_t)7710)));
		$var($Object, var$170, $of($Long::valueOf((int64_t)4785)));
		$nc(XKeysym::keysym2UCSHash)->put(var$170, $($Character::valueOf((char16_t)7711)));
		$var($Object, var$171, $of($Long::valueOf((int64_t)4788)));
		$nc(XKeysym::keysym2UCSHash)->put(var$171, $($Character::valueOf((char16_t)7744)));
		$var($Object, var$172, $of($Long::valueOf((int64_t)4789)));
		$nc(XKeysym::keysym2UCSHash)->put(var$172, $($Character::valueOf((char16_t)7745)));
		$var($Object, var$173, $of($Long::valueOf((int64_t)4791)));
		$nc(XKeysym::keysym2UCSHash)->put(var$173, $($Character::valueOf((char16_t)7766)));
		$var($Object, var$174, $of($Long::valueOf((int64_t)4792)));
		$nc(XKeysym::keysym2UCSHash)->put(var$174, $($Character::valueOf((char16_t)7809)));
		$var($Object, var$175, $of($Long::valueOf((int64_t)4793)));
		$nc(XKeysym::keysym2UCSHash)->put(var$175, $($Character::valueOf((char16_t)7767)));
		$var($Object, var$176, $of($Long::valueOf((int64_t)4794)));
		$nc(XKeysym::keysym2UCSHash)->put(var$176, $($Character::valueOf((char16_t)7811)));
		$var($Object, var$177, $of($Long::valueOf((int64_t)4795)));
		$nc(XKeysym::keysym2UCSHash)->put(var$177, $($Character::valueOf((char16_t)7776)));
		$var($Object, var$178, $of($Long::valueOf((int64_t)4796)));
		$nc(XKeysym::keysym2UCSHash)->put(var$178, $($Character::valueOf((char16_t)7923)));
		$var($Object, var$179, $of($Long::valueOf((int64_t)4797)));
		$nc(XKeysym::keysym2UCSHash)->put(var$179, $($Character::valueOf((char16_t)7812)));
		$var($Object, var$180, $of($Long::valueOf((int64_t)4798)));
		$nc(XKeysym::keysym2UCSHash)->put(var$180, $($Character::valueOf((char16_t)7813)));
		$var($Object, var$181, $of($Long::valueOf((int64_t)4799)));
		$nc(XKeysym::keysym2UCSHash)->put(var$181, $($Character::valueOf((char16_t)7777)));
		$var($Object, var$182, $of($Long::valueOf((int64_t)4816)));
		$nc(XKeysym::keysym2UCSHash)->put(var$182, $($Character::valueOf((char16_t)23)));
		$var($Object, var$183, $of($Long::valueOf((int64_t)4823)));
		$nc(XKeysym::keysym2UCSHash)->put(var$183, $($Character::valueOf((char16_t)7786)));
		$var($Object, var$184, $of($Long::valueOf((int64_t)4830)));
		$nc(XKeysym::keysym2UCSHash)->put(var$184, $($Character::valueOf((char16_t)374)));
		$var($Object, var$185, $of($Long::valueOf((int64_t)4848)));
		$nc(XKeysym::keysym2UCSHash)->put(var$185, $($Character::valueOf((char16_t)373)));
		$var($Object, var$186, $of($Long::valueOf((int64_t)4855)));
		$nc(XKeysym::keysym2UCSHash)->put(var$186, $($Character::valueOf((char16_t)7787)));
		$var($Object, var$187, $of($Long::valueOf((int64_t)4862)));
		$nc(XKeysym::keysym2UCSHash)->put(var$187, $($Character::valueOf((char16_t)375)));
		$var($Object, var$188, $of($Long::valueOf((int64_t)5052)));
		$nc(XKeysym::keysym2UCSHash)->put(var$188, $($Character::valueOf((char16_t)338)));
		$var($Object, var$189, $of($Long::valueOf((int64_t)5053)));
		$nc(XKeysym::keysym2UCSHash)->put(var$189, $($Character::valueOf((char16_t)339)));
		$var($Object, var$190, $of($Long::valueOf((int64_t)5054)));
		$nc(XKeysym::keysym2UCSHash)->put(var$190, $($Character::valueOf((char16_t)376)));
		$var($Object, var$191, $of($Long::valueOf((int64_t)1150)));
		$nc(XKeysym::keysym2UCSHash)->put(var$191, $($Character::valueOf((char16_t)8254)));
		$var($Object, var$192, $of($Long::valueOf((int64_t)1185)));
		$nc(XKeysym::keysym2UCSHash)->put(var$192, $($Character::valueOf((char16_t)12290)));
		$var($Object, var$193, $of($Long::valueOf((int64_t)1186)));
		$nc(XKeysym::keysym2UCSHash)->put(var$193, $($Character::valueOf((char16_t)12300)));
		$var($Object, var$194, $of($Long::valueOf((int64_t)1187)));
		$nc(XKeysym::keysym2UCSHash)->put(var$194, $($Character::valueOf((char16_t)12301)));
		$var($Object, var$195, $of($Long::valueOf((int64_t)1188)));
		$nc(XKeysym::keysym2UCSHash)->put(var$195, $($Character::valueOf((char16_t)12289)));
		$var($Object, var$196, $of($Long::valueOf((int64_t)1189)));
		$nc(XKeysym::keysym2UCSHash)->put(var$196, $($Character::valueOf((char16_t)12539)));
		$var($Object, var$197, $of($Long::valueOf((int64_t)1190)));
		$nc(XKeysym::keysym2UCSHash)->put(var$197, $($Character::valueOf((char16_t)12530)));
		$var($Object, var$198, $of($Long::valueOf((int64_t)1191)));
		$nc(XKeysym::keysym2UCSHash)->put(var$198, $($Character::valueOf((char16_t)12449)));
		$var($Object, var$199, $of($Long::valueOf((int64_t)1192)));
		$nc(XKeysym::keysym2UCSHash)->put(var$199, $($Character::valueOf((char16_t)12451)));
		$var($Object, var$200, $of($Long::valueOf((int64_t)1193)));
		$nc(XKeysym::keysym2UCSHash)->put(var$200, $($Character::valueOf((char16_t)12453)));
		$var($Object, var$201, $of($Long::valueOf((int64_t)1194)));
		$nc(XKeysym::keysym2UCSHash)->put(var$201, $($Character::valueOf((char16_t)12455)));
		$var($Object, var$202, $of($Long::valueOf((int64_t)1195)));
		$nc(XKeysym::keysym2UCSHash)->put(var$202, $($Character::valueOf((char16_t)12457)));
		$var($Object, var$203, $of($Long::valueOf((int64_t)1196)));
		$nc(XKeysym::keysym2UCSHash)->put(var$203, $($Character::valueOf((char16_t)12515)));
		$var($Object, var$204, $of($Long::valueOf((int64_t)1197)));
		$nc(XKeysym::keysym2UCSHash)->put(var$204, $($Character::valueOf((char16_t)12517)));
		$var($Object, var$205, $of($Long::valueOf((int64_t)1198)));
		$nc(XKeysym::keysym2UCSHash)->put(var$205, $($Character::valueOf((char16_t)12519)));
		$var($Object, var$206, $of($Long::valueOf((int64_t)1199)));
		$nc(XKeysym::keysym2UCSHash)->put(var$206, $($Character::valueOf((char16_t)12483)));
		$var($Object, var$207, $of($Long::valueOf((int64_t)1200)));
		$nc(XKeysym::keysym2UCSHash)->put(var$207, $($Character::valueOf((char16_t)12540)));
		$var($Object, var$208, $of($Long::valueOf((int64_t)1201)));
		$nc(XKeysym::keysym2UCSHash)->put(var$208, $($Character::valueOf((char16_t)12450)));
		$var($Object, var$209, $of($Long::valueOf((int64_t)1202)));
		$nc(XKeysym::keysym2UCSHash)->put(var$209, $($Character::valueOf((char16_t)12452)));
		$var($Object, var$210, $of($Long::valueOf((int64_t)1203)));
		$nc(XKeysym::keysym2UCSHash)->put(var$210, $($Character::valueOf((char16_t)12454)));
		$var($Object, var$211, $of($Long::valueOf((int64_t)1204)));
		$nc(XKeysym::keysym2UCSHash)->put(var$211, $($Character::valueOf((char16_t)12456)));
		$var($Object, var$212, $of($Long::valueOf((int64_t)1205)));
		$nc(XKeysym::keysym2UCSHash)->put(var$212, $($Character::valueOf((char16_t)12458)));
		$var($Object, var$213, $of($Long::valueOf((int64_t)1206)));
		$nc(XKeysym::keysym2UCSHash)->put(var$213, $($Character::valueOf((char16_t)12459)));
		$var($Object, var$214, $of($Long::valueOf((int64_t)1207)));
		$nc(XKeysym::keysym2UCSHash)->put(var$214, $($Character::valueOf((char16_t)12461)));
		$var($Object, var$215, $of($Long::valueOf((int64_t)1208)));
		$nc(XKeysym::keysym2UCSHash)->put(var$215, $($Character::valueOf((char16_t)12463)));
		$var($Object, var$216, $of($Long::valueOf((int64_t)1209)));
		$nc(XKeysym::keysym2UCSHash)->put(var$216, $($Character::valueOf((char16_t)12465)));
		$var($Object, var$217, $of($Long::valueOf((int64_t)1210)));
		$nc(XKeysym::keysym2UCSHash)->put(var$217, $($Character::valueOf((char16_t)12467)));
		$var($Object, var$218, $of($Long::valueOf((int64_t)1211)));
		$nc(XKeysym::keysym2UCSHash)->put(var$218, $($Character::valueOf((char16_t)12469)));
		$var($Object, var$219, $of($Long::valueOf((int64_t)1212)));
		$nc(XKeysym::keysym2UCSHash)->put(var$219, $($Character::valueOf((char16_t)12471)));
		$var($Object, var$220, $of($Long::valueOf((int64_t)1213)));
		$nc(XKeysym::keysym2UCSHash)->put(var$220, $($Character::valueOf((char16_t)12473)));
		$var($Object, var$221, $of($Long::valueOf((int64_t)1214)));
		$nc(XKeysym::keysym2UCSHash)->put(var$221, $($Character::valueOf((char16_t)12475)));
		$var($Object, var$222, $of($Long::valueOf((int64_t)1215)));
		$nc(XKeysym::keysym2UCSHash)->put(var$222, $($Character::valueOf((char16_t)12477)));
		$var($Object, var$223, $of($Long::valueOf((int64_t)1216)));
		$nc(XKeysym::keysym2UCSHash)->put(var$223, $($Character::valueOf((char16_t)12479)));
		$var($Object, var$224, $of($Long::valueOf((int64_t)1217)));
		$nc(XKeysym::keysym2UCSHash)->put(var$224, $($Character::valueOf((char16_t)12481)));
		$var($Object, var$225, $of($Long::valueOf((int64_t)1218)));
		$nc(XKeysym::keysym2UCSHash)->put(var$225, $($Character::valueOf((char16_t)12484)));
		$var($Object, var$226, $of($Long::valueOf((int64_t)1219)));
		$nc(XKeysym::keysym2UCSHash)->put(var$226, $($Character::valueOf((char16_t)12486)));
		$var($Object, var$227, $of($Long::valueOf((int64_t)1220)));
		$nc(XKeysym::keysym2UCSHash)->put(var$227, $($Character::valueOf((char16_t)12488)));
		$var($Object, var$228, $of($Long::valueOf((int64_t)1221)));
		$nc(XKeysym::keysym2UCSHash)->put(var$228, $($Character::valueOf((char16_t)12490)));
		$var($Object, var$229, $of($Long::valueOf((int64_t)1222)));
		$nc(XKeysym::keysym2UCSHash)->put(var$229, $($Character::valueOf((char16_t)12491)));
		$var($Object, var$230, $of($Long::valueOf((int64_t)1223)));
		$nc(XKeysym::keysym2UCSHash)->put(var$230, $($Character::valueOf((char16_t)12492)));
		$var($Object, var$231, $of($Long::valueOf((int64_t)1224)));
		$nc(XKeysym::keysym2UCSHash)->put(var$231, $($Character::valueOf((char16_t)12493)));
		$var($Object, var$232, $of($Long::valueOf((int64_t)1225)));
		$nc(XKeysym::keysym2UCSHash)->put(var$232, $($Character::valueOf((char16_t)12494)));
		$var($Object, var$233, $of($Long::valueOf((int64_t)1226)));
		$nc(XKeysym::keysym2UCSHash)->put(var$233, $($Character::valueOf((char16_t)12495)));
		$var($Object, var$234, $of($Long::valueOf((int64_t)1227)));
		$nc(XKeysym::keysym2UCSHash)->put(var$234, $($Character::valueOf((char16_t)12498)));
		$var($Object, var$235, $of($Long::valueOf((int64_t)1228)));
		$nc(XKeysym::keysym2UCSHash)->put(var$235, $($Character::valueOf((char16_t)12501)));
		$var($Object, var$236, $of($Long::valueOf((int64_t)1229)));
		$nc(XKeysym::keysym2UCSHash)->put(var$236, $($Character::valueOf((char16_t)12504)));
		$var($Object, var$237, $of($Long::valueOf((int64_t)1230)));
		$nc(XKeysym::keysym2UCSHash)->put(var$237, $($Character::valueOf((char16_t)12507)));
		$var($Object, var$238, $of($Long::valueOf((int64_t)1231)));
		$nc(XKeysym::keysym2UCSHash)->put(var$238, $($Character::valueOf((char16_t)12510)));
		$var($Object, var$239, $of($Long::valueOf((int64_t)1232)));
		$nc(XKeysym::keysym2UCSHash)->put(var$239, $($Character::valueOf((char16_t)12511)));
		$var($Object, var$240, $of($Long::valueOf((int64_t)1233)));
		$nc(XKeysym::keysym2UCSHash)->put(var$240, $($Character::valueOf((char16_t)12512)));
		$var($Object, var$241, $of($Long::valueOf((int64_t)1234)));
		$nc(XKeysym::keysym2UCSHash)->put(var$241, $($Character::valueOf((char16_t)12513)));
		$var($Object, var$242, $of($Long::valueOf((int64_t)1235)));
		$nc(XKeysym::keysym2UCSHash)->put(var$242, $($Character::valueOf((char16_t)12514)));
		$var($Object, var$243, $of($Long::valueOf((int64_t)1236)));
		$nc(XKeysym::keysym2UCSHash)->put(var$243, $($Character::valueOf((char16_t)12516)));
		$var($Object, var$244, $of($Long::valueOf((int64_t)1237)));
		$nc(XKeysym::keysym2UCSHash)->put(var$244, $($Character::valueOf((char16_t)12518)));
		$var($Object, var$245, $of($Long::valueOf((int64_t)1238)));
		$nc(XKeysym::keysym2UCSHash)->put(var$245, $($Character::valueOf((char16_t)12520)));
		$var($Object, var$246, $of($Long::valueOf((int64_t)1239)));
		$nc(XKeysym::keysym2UCSHash)->put(var$246, $($Character::valueOf((char16_t)12521)));
		$var($Object, var$247, $of($Long::valueOf((int64_t)1240)));
		$nc(XKeysym::keysym2UCSHash)->put(var$247, $($Character::valueOf((char16_t)12522)));
		$var($Object, var$248, $of($Long::valueOf((int64_t)1241)));
		$nc(XKeysym::keysym2UCSHash)->put(var$248, $($Character::valueOf((char16_t)12523)));
		$var($Object, var$249, $of($Long::valueOf((int64_t)1242)));
		$nc(XKeysym::keysym2UCSHash)->put(var$249, $($Character::valueOf((char16_t)12524)));
		$var($Object, var$250, $of($Long::valueOf((int64_t)1243)));
		$nc(XKeysym::keysym2UCSHash)->put(var$250, $($Character::valueOf((char16_t)12525)));
		$var($Object, var$251, $of($Long::valueOf((int64_t)1244)));
		$nc(XKeysym::keysym2UCSHash)->put(var$251, $($Character::valueOf((char16_t)12527)));
		$var($Object, var$252, $of($Long::valueOf((int64_t)1245)));
		$nc(XKeysym::keysym2UCSHash)->put(var$252, $($Character::valueOf((char16_t)12531)));
		$var($Object, var$253, $of($Long::valueOf((int64_t)1246)));
		$nc(XKeysym::keysym2UCSHash)->put(var$253, $($Character::valueOf((char16_t)12443)));
		$var($Object, var$254, $of($Long::valueOf((int64_t)1247)));
		$nc(XKeysym::keysym2UCSHash)->put(var$254, $($Character::valueOf((char16_t)12444)));
		$var($Object, var$255, $of($Long::valueOf((int64_t)1424)));
		$nc(XKeysym::keysym2UCSHash)->put(var$255, $($Character::valueOf((char16_t)1648)));
		$var($Object, var$256, $of($Long::valueOf((int64_t)1425)));
		$nc(XKeysym::keysym2UCSHash)->put(var$256, $($Character::valueOf((char16_t)1777)));
		$var($Object, var$257, $of($Long::valueOf((int64_t)1426)));
		$nc(XKeysym::keysym2UCSHash)->put(var$257, $($Character::valueOf((char16_t)1778)));
		$var($Object, var$258, $of($Long::valueOf((int64_t)1427)));
		$nc(XKeysym::keysym2UCSHash)->put(var$258, $($Character::valueOf((char16_t)1779)));
		$var($Object, var$259, $of($Long::valueOf((int64_t)1428)));
		$nc(XKeysym::keysym2UCSHash)->put(var$259, $($Character::valueOf((char16_t)1780)));
		$var($Object, var$260, $of($Long::valueOf((int64_t)1429)));
		$nc(XKeysym::keysym2UCSHash)->put(var$260, $($Character::valueOf((char16_t)1781)));
		$var($Object, var$261, $of($Long::valueOf((int64_t)1430)));
		$nc(XKeysym::keysym2UCSHash)->put(var$261, $($Character::valueOf((char16_t)1782)));
		$var($Object, var$262, $of($Long::valueOf((int64_t)1431)));
		$nc(XKeysym::keysym2UCSHash)->put(var$262, $($Character::valueOf((char16_t)1783)));
		$var($Object, var$263, $of($Long::valueOf((int64_t)1432)));
		$nc(XKeysym::keysym2UCSHash)->put(var$263, $($Character::valueOf((char16_t)1784)));
		$var($Object, var$264, $of($Long::valueOf((int64_t)1433)));
		$nc(XKeysym::keysym2UCSHash)->put(var$264, $($Character::valueOf((char16_t)1785)));
		$var($Object, var$265, $of($Long::valueOf((int64_t)1445)));
		$nc(XKeysym::keysym2UCSHash)->put(var$265, $($Character::valueOf((char16_t)1642)));
		$var($Object, var$266, $of($Long::valueOf((int64_t)1446)));
		$nc(XKeysym::keysym2UCSHash)->put(var$266, $($Character::valueOf((char16_t)1648)));
		$var($Object, var$267, $of($Long::valueOf((int64_t)1447)));
		$nc(XKeysym::keysym2UCSHash)->put(var$267, $($Character::valueOf((char16_t)1657)));
		$var($Object, var$268, $of($Long::valueOf((int64_t)1448)));
		$nc(XKeysym::keysym2UCSHash)->put(var$268, $($Character::valueOf((char16_t)1662)));
		$var($Object, var$269, $of($Long::valueOf((int64_t)1449)));
		$nc(XKeysym::keysym2UCSHash)->put(var$269, $($Character::valueOf((char16_t)1670)));
		$var($Object, var$270, $of($Long::valueOf((int64_t)1450)));
		$nc(XKeysym::keysym2UCSHash)->put(var$270, $($Character::valueOf((char16_t)1672)));
		$var($Object, var$271, $of($Long::valueOf((int64_t)1451)));
		$nc(XKeysym::keysym2UCSHash)->put(var$271, $($Character::valueOf((char16_t)1681)));
		$var($Object, var$272, $of($Long::valueOf((int64_t)1452)));
		$nc(XKeysym::keysym2UCSHash)->put(var$272, $($Character::valueOf((char16_t)1548)));
		$var($Object, var$273, $of($Long::valueOf((int64_t)1454)));
		$nc(XKeysym::keysym2UCSHash)->put(var$273, $($Character::valueOf((char16_t)1748)));
		$var($Object, var$274, $of($Long::valueOf((int64_t)1456)));
		$nc(XKeysym::keysym2UCSHash)->put(var$274, $($Character::valueOf((char16_t)1632)));
		$var($Object, var$275, $of($Long::valueOf((int64_t)1457)));
		$nc(XKeysym::keysym2UCSHash)->put(var$275, $($Character::valueOf((char16_t)1633)));
		$var($Object, var$276, $of($Long::valueOf((int64_t)1458)));
		$nc(XKeysym::keysym2UCSHash)->put(var$276, $($Character::valueOf((char16_t)1634)));
		$var($Object, var$277, $of($Long::valueOf((int64_t)1459)));
		$nc(XKeysym::keysym2UCSHash)->put(var$277, $($Character::valueOf((char16_t)1635)));
		$var($Object, var$278, $of($Long::valueOf((int64_t)1460)));
		$nc(XKeysym::keysym2UCSHash)->put(var$278, $($Character::valueOf((char16_t)1636)));
		$var($Object, var$279, $of($Long::valueOf((int64_t)1461)));
		$nc(XKeysym::keysym2UCSHash)->put(var$279, $($Character::valueOf((char16_t)1637)));
		$var($Object, var$280, $of($Long::valueOf((int64_t)1462)));
		$nc(XKeysym::keysym2UCSHash)->put(var$280, $($Character::valueOf((char16_t)1638)));
		$var($Object, var$281, $of($Long::valueOf((int64_t)1463)));
		$nc(XKeysym::keysym2UCSHash)->put(var$281, $($Character::valueOf((char16_t)1639)));
		$var($Object, var$282, $of($Long::valueOf((int64_t)1464)));
		$nc(XKeysym::keysym2UCSHash)->put(var$282, $($Character::valueOf((char16_t)1640)));
		$var($Object, var$283, $of($Long::valueOf((int64_t)1465)));
		$nc(XKeysym::keysym2UCSHash)->put(var$283, $($Character::valueOf((char16_t)1641)));
		$var($Object, var$284, $of($Long::valueOf((int64_t)1467)));
		$nc(XKeysym::keysym2UCSHash)->put(var$284, $($Character::valueOf((char16_t)1563)));
		$var($Object, var$285, $of($Long::valueOf((int64_t)1471)));
		$nc(XKeysym::keysym2UCSHash)->put(var$285, $($Character::valueOf((char16_t)1567)));
		$var($Object, var$286, $of($Long::valueOf((int64_t)1473)));
		$nc(XKeysym::keysym2UCSHash)->put(var$286, $($Character::valueOf((char16_t)1569)));
		$var($Object, var$287, $of($Long::valueOf((int64_t)1474)));
		$nc(XKeysym::keysym2UCSHash)->put(var$287, $($Character::valueOf((char16_t)1570)));
		$var($Object, var$288, $of($Long::valueOf((int64_t)1475)));
		$nc(XKeysym::keysym2UCSHash)->put(var$288, $($Character::valueOf((char16_t)1571)));
		$var($Object, var$289, $of($Long::valueOf((int64_t)1476)));
		$nc(XKeysym::keysym2UCSHash)->put(var$289, $($Character::valueOf((char16_t)1572)));
		$var($Object, var$290, $of($Long::valueOf((int64_t)1477)));
		$nc(XKeysym::keysym2UCSHash)->put(var$290, $($Character::valueOf((char16_t)1573)));
		$var($Object, var$291, $of($Long::valueOf((int64_t)1478)));
		$nc(XKeysym::keysym2UCSHash)->put(var$291, $($Character::valueOf((char16_t)1574)));
		$var($Object, var$292, $of($Long::valueOf((int64_t)1479)));
		$nc(XKeysym::keysym2UCSHash)->put(var$292, $($Character::valueOf((char16_t)1575)));
		$var($Object, var$293, $of($Long::valueOf((int64_t)1480)));
		$nc(XKeysym::keysym2UCSHash)->put(var$293, $($Character::valueOf((char16_t)1576)));
		$var($Object, var$294, $of($Long::valueOf((int64_t)1481)));
		$nc(XKeysym::keysym2UCSHash)->put(var$294, $($Character::valueOf((char16_t)1577)));
		$var($Object, var$295, $of($Long::valueOf((int64_t)1482)));
		$nc(XKeysym::keysym2UCSHash)->put(var$295, $($Character::valueOf((char16_t)1578)));
		$var($Object, var$296, $of($Long::valueOf((int64_t)1483)));
		$nc(XKeysym::keysym2UCSHash)->put(var$296, $($Character::valueOf((char16_t)1579)));
		$var($Object, var$297, $of($Long::valueOf((int64_t)1484)));
		$nc(XKeysym::keysym2UCSHash)->put(var$297, $($Character::valueOf((char16_t)1580)));
		$var($Object, var$298, $of($Long::valueOf((int64_t)1485)));
		$nc(XKeysym::keysym2UCSHash)->put(var$298, $($Character::valueOf((char16_t)1581)));
		$var($Object, var$299, $of($Long::valueOf((int64_t)1486)));
		$nc(XKeysym::keysym2UCSHash)->put(var$299, $($Character::valueOf((char16_t)1582)));
		$var($Object, var$300, $of($Long::valueOf((int64_t)1487)));
		$nc(XKeysym::keysym2UCSHash)->put(var$300, $($Character::valueOf((char16_t)1583)));
		$var($Object, var$301, $of($Long::valueOf((int64_t)1488)));
		$nc(XKeysym::keysym2UCSHash)->put(var$301, $($Character::valueOf((char16_t)1584)));
		$var($Object, var$302, $of($Long::valueOf((int64_t)1489)));
		$nc(XKeysym::keysym2UCSHash)->put(var$302, $($Character::valueOf((char16_t)1585)));
		$var($Object, var$303, $of($Long::valueOf((int64_t)1490)));
		$nc(XKeysym::keysym2UCSHash)->put(var$303, $($Character::valueOf((char16_t)1586)));
		$var($Object, var$304, $of($Long::valueOf((int64_t)1491)));
		$nc(XKeysym::keysym2UCSHash)->put(var$304, $($Character::valueOf((char16_t)1587)));
		$var($Object, var$305, $of($Long::valueOf((int64_t)1492)));
		$nc(XKeysym::keysym2UCSHash)->put(var$305, $($Character::valueOf((char16_t)1588)));
		$var($Object, var$306, $of($Long::valueOf((int64_t)1493)));
		$nc(XKeysym::keysym2UCSHash)->put(var$306, $($Character::valueOf((char16_t)1589)));
		$var($Object, var$307, $of($Long::valueOf((int64_t)1494)));
		$nc(XKeysym::keysym2UCSHash)->put(var$307, $($Character::valueOf((char16_t)1590)));
		$var($Object, var$308, $of($Long::valueOf((int64_t)1495)));
		$nc(XKeysym::keysym2UCSHash)->put(var$308, $($Character::valueOf((char16_t)1591)));
		$var($Object, var$309, $of($Long::valueOf((int64_t)1496)));
		$nc(XKeysym::keysym2UCSHash)->put(var$309, $($Character::valueOf((char16_t)1592)));
		$var($Object, var$310, $of($Long::valueOf((int64_t)1497)));
		$nc(XKeysym::keysym2UCSHash)->put(var$310, $($Character::valueOf((char16_t)1593)));
		$var($Object, var$311, $of($Long::valueOf((int64_t)1498)));
		$nc(XKeysym::keysym2UCSHash)->put(var$311, $($Character::valueOf((char16_t)1594)));
		$var($Object, var$312, $of($Long::valueOf((int64_t)1504)));
		$nc(XKeysym::keysym2UCSHash)->put(var$312, $($Character::valueOf((char16_t)1600)));
		$var($Object, var$313, $of($Long::valueOf((int64_t)1505)));
		$nc(XKeysym::keysym2UCSHash)->put(var$313, $($Character::valueOf((char16_t)1601)));
		$var($Object, var$314, $of($Long::valueOf((int64_t)1506)));
		$nc(XKeysym::keysym2UCSHash)->put(var$314, $($Character::valueOf((char16_t)1602)));
		$var($Object, var$315, $of($Long::valueOf((int64_t)1507)));
		$nc(XKeysym::keysym2UCSHash)->put(var$315, $($Character::valueOf((char16_t)1603)));
		$var($Object, var$316, $of($Long::valueOf((int64_t)1508)));
		$nc(XKeysym::keysym2UCSHash)->put(var$316, $($Character::valueOf((char16_t)1604)));
		$var($Object, var$317, $of($Long::valueOf((int64_t)1509)));
		$nc(XKeysym::keysym2UCSHash)->put(var$317, $($Character::valueOf((char16_t)1605)));
		$var($Object, var$318, $of($Long::valueOf((int64_t)1510)));
		$nc(XKeysym::keysym2UCSHash)->put(var$318, $($Character::valueOf((char16_t)1606)));
		$var($Object, var$319, $of($Long::valueOf((int64_t)1511)));
		$nc(XKeysym::keysym2UCSHash)->put(var$319, $($Character::valueOf((char16_t)1607)));
		$var($Object, var$320, $of($Long::valueOf((int64_t)1512)));
		$nc(XKeysym::keysym2UCSHash)->put(var$320, $($Character::valueOf((char16_t)1608)));
		$var($Object, var$321, $of($Long::valueOf((int64_t)1513)));
		$nc(XKeysym::keysym2UCSHash)->put(var$321, $($Character::valueOf((char16_t)1609)));
		$var($Object, var$322, $of($Long::valueOf((int64_t)1514)));
		$nc(XKeysym::keysym2UCSHash)->put(var$322, $($Character::valueOf((char16_t)1610)));
		$var($Object, var$323, $of($Long::valueOf((int64_t)1515)));
		$nc(XKeysym::keysym2UCSHash)->put(var$323, $($Character::valueOf((char16_t)1611)));
		$var($Object, var$324, $of($Long::valueOf((int64_t)1516)));
		$nc(XKeysym::keysym2UCSHash)->put(var$324, $($Character::valueOf((char16_t)1612)));
		$var($Object, var$325, $of($Long::valueOf((int64_t)1517)));
		$nc(XKeysym::keysym2UCSHash)->put(var$325, $($Character::valueOf((char16_t)1613)));
		$var($Object, var$326, $of($Long::valueOf((int64_t)1518)));
		$nc(XKeysym::keysym2UCSHash)->put(var$326, $($Character::valueOf((char16_t)1614)));
		$var($Object, var$327, $of($Long::valueOf((int64_t)1519)));
		$nc(XKeysym::keysym2UCSHash)->put(var$327, $($Character::valueOf((char16_t)1615)));
		$var($Object, var$328, $of($Long::valueOf((int64_t)1520)));
		$nc(XKeysym::keysym2UCSHash)->put(var$328, $($Character::valueOf((char16_t)1616)));
		$var($Object, var$329, $of($Long::valueOf((int64_t)1521)));
		$nc(XKeysym::keysym2UCSHash)->put(var$329, $($Character::valueOf((char16_t)1617)));
		$var($Object, var$330, $of($Long::valueOf((int64_t)1522)));
		$nc(XKeysym::keysym2UCSHash)->put(var$330, $($Character::valueOf((char16_t)1618)));
		$var($Object, var$331, $of($Long::valueOf((int64_t)1523)));
		$nc(XKeysym::keysym2UCSHash)->put(var$331, $($Character::valueOf((char16_t)1619)));
		$var($Object, var$332, $of($Long::valueOf((int64_t)1524)));
		$nc(XKeysym::keysym2UCSHash)->put(var$332, $($Character::valueOf((char16_t)1620)));
		$var($Object, var$333, $of($Long::valueOf((int64_t)1525)));
		$nc(XKeysym::keysym2UCSHash)->put(var$333, $($Character::valueOf((char16_t)1621)));
		$var($Object, var$334, $of($Long::valueOf((int64_t)1526)));
		$nc(XKeysym::keysym2UCSHash)->put(var$334, $($Character::valueOf((char16_t)1688)));
		$var($Object, var$335, $of($Long::valueOf((int64_t)1527)));
		$nc(XKeysym::keysym2UCSHash)->put(var$335, $($Character::valueOf((char16_t)1700)));
		$var($Object, var$336, $of($Long::valueOf((int64_t)1528)));
		$nc(XKeysym::keysym2UCSHash)->put(var$336, $($Character::valueOf((char16_t)1705)));
		$var($Object, var$337, $of($Long::valueOf((int64_t)1529)));
		$nc(XKeysym::keysym2UCSHash)->put(var$337, $($Character::valueOf((char16_t)1711)));
		$var($Object, var$338, $of($Long::valueOf((int64_t)1530)));
		$nc(XKeysym::keysym2UCSHash)->put(var$338, $($Character::valueOf((char16_t)1722)));
		$var($Object, var$339, $of($Long::valueOf((int64_t)1531)));
		$nc(XKeysym::keysym2UCSHash)->put(var$339, $($Character::valueOf((char16_t)1726)));
		$var($Object, var$340, $of($Long::valueOf((int64_t)1532)));
		$nc(XKeysym::keysym2UCSHash)->put(var$340, $($Character::valueOf((char16_t)1740)));
		$var($Object, var$341, $of($Long::valueOf((int64_t)1533)));
		$nc(XKeysym::keysym2UCSHash)->put(var$341, $($Character::valueOf((char16_t)1746)));
		$var($Object, var$342, $of($Long::valueOf((int64_t)1534)));
		$nc(XKeysym::keysym2UCSHash)->put(var$342, $($Character::valueOf((char16_t)1729)));
		$var($Object, var$343, $of($Long::valueOf((int64_t)1664)));
		$nc(XKeysym::keysym2UCSHash)->put(var$343, $($Character::valueOf((char16_t)1170)));
		$var($Object, var$344, $of($Long::valueOf((int64_t)1680)));
		$nc(XKeysym::keysym2UCSHash)->put(var$344, $($Character::valueOf((char16_t)1171)));
		$var($Object, var$345, $of($Long::valueOf((int64_t)1665)));
		$nc(XKeysym::keysym2UCSHash)->put(var$345, $($Character::valueOf((char16_t)1174)));
		$var($Object, var$346, $of($Long::valueOf((int64_t)1681)));
		$nc(XKeysym::keysym2UCSHash)->put(var$346, $($Character::valueOf((char16_t)1175)));
		$var($Object, var$347, $of($Long::valueOf((int64_t)1666)));
		$nc(XKeysym::keysym2UCSHash)->put(var$347, $($Character::valueOf((char16_t)1178)));
		$var($Object, var$348, $of($Long::valueOf((int64_t)1682)));
		$nc(XKeysym::keysym2UCSHash)->put(var$348, $($Character::valueOf((char16_t)1179)));
		$var($Object, var$349, $of($Long::valueOf((int64_t)1667)));
		$nc(XKeysym::keysym2UCSHash)->put(var$349, $($Character::valueOf((char16_t)1180)));
		$var($Object, var$350, $of($Long::valueOf((int64_t)1683)));
		$nc(XKeysym::keysym2UCSHash)->put(var$350, $($Character::valueOf((char16_t)1181)));
		$var($Object, var$351, $of($Long::valueOf((int64_t)1668)));
		$nc(XKeysym::keysym2UCSHash)->put(var$351, $($Character::valueOf((char16_t)1186)));
		$var($Object, var$352, $of($Long::valueOf((int64_t)1684)));
		$nc(XKeysym::keysym2UCSHash)->put(var$352, $($Character::valueOf((char16_t)1187)));
		$var($Object, var$353, $of($Long::valueOf((int64_t)1669)));
		$nc(XKeysym::keysym2UCSHash)->put(var$353, $($Character::valueOf((char16_t)1198)));
		$var($Object, var$354, $of($Long::valueOf((int64_t)1685)));
		$nc(XKeysym::keysym2UCSHash)->put(var$354, $($Character::valueOf((char16_t)1199)));
		$var($Object, var$355, $of($Long::valueOf((int64_t)1670)));
		$nc(XKeysym::keysym2UCSHash)->put(var$355, $($Character::valueOf((char16_t)1200)));
		$var($Object, var$356, $of($Long::valueOf((int64_t)1686)));
		$nc(XKeysym::keysym2UCSHash)->put(var$356, $($Character::valueOf((char16_t)1201)));
		$var($Object, var$357, $of($Long::valueOf((int64_t)1671)));
		$nc(XKeysym::keysym2UCSHash)->put(var$357, $($Character::valueOf((char16_t)1202)));
		$var($Object, var$358, $of($Long::valueOf((int64_t)1687)));
		$nc(XKeysym::keysym2UCSHash)->put(var$358, $($Character::valueOf((char16_t)1203)));
		$var($Object, var$359, $of($Long::valueOf((int64_t)1672)));
		$nc(XKeysym::keysym2UCSHash)->put(var$359, $($Character::valueOf((char16_t)1206)));
		$var($Object, var$360, $of($Long::valueOf((int64_t)1688)));
		$nc(XKeysym::keysym2UCSHash)->put(var$360, $($Character::valueOf((char16_t)1207)));
		$var($Object, var$361, $of($Long::valueOf((int64_t)1673)));
		$nc(XKeysym::keysym2UCSHash)->put(var$361, $($Character::valueOf((char16_t)1208)));
		$var($Object, var$362, $of($Long::valueOf((int64_t)1689)));
		$nc(XKeysym::keysym2UCSHash)->put(var$362, $($Character::valueOf((char16_t)1209)));
		$var($Object, var$363, $of($Long::valueOf((int64_t)1674)));
		$nc(XKeysym::keysym2UCSHash)->put(var$363, $($Character::valueOf((char16_t)1210)));
		$var($Object, var$364, $of($Long::valueOf((int64_t)1690)));
		$nc(XKeysym::keysym2UCSHash)->put(var$364, $($Character::valueOf((char16_t)1211)));
		$var($Object, var$365, $of($Long::valueOf((int64_t)1676)));
		$nc(XKeysym::keysym2UCSHash)->put(var$365, $($Character::valueOf((char16_t)1240)));
		$var($Object, var$366, $of($Long::valueOf((int64_t)1692)));
		$nc(XKeysym::keysym2UCSHash)->put(var$366, $($Character::valueOf((char16_t)1241)));
		$var($Object, var$367, $of($Long::valueOf((int64_t)1677)));
		$nc(XKeysym::keysym2UCSHash)->put(var$367, $($Character::valueOf((char16_t)1250)));
		$var($Object, var$368, $of($Long::valueOf((int64_t)1693)));
		$nc(XKeysym::keysym2UCSHash)->put(var$368, $($Character::valueOf((char16_t)1251)));
		$var($Object, var$369, $of($Long::valueOf((int64_t)1678)));
		$nc(XKeysym::keysym2UCSHash)->put(var$369, $($Character::valueOf((char16_t)1256)));
		$var($Object, var$370, $of($Long::valueOf((int64_t)1694)));
		$nc(XKeysym::keysym2UCSHash)->put(var$370, $($Character::valueOf((char16_t)1257)));
		$var($Object, var$371, $of($Long::valueOf((int64_t)1679)));
		$nc(XKeysym::keysym2UCSHash)->put(var$371, $($Character::valueOf((char16_t)1262)));
		$var($Object, var$372, $of($Long::valueOf((int64_t)1695)));
		$nc(XKeysym::keysym2UCSHash)->put(var$372, $($Character::valueOf((char16_t)1263)));
		$var($Object, var$373, $of($Long::valueOf((int64_t)1697)));
		$nc(XKeysym::keysym2UCSHash)->put(var$373, $($Character::valueOf((char16_t)1106)));
		$var($Object, var$374, $of($Long::valueOf((int64_t)1698)));
		$nc(XKeysym::keysym2UCSHash)->put(var$374, $($Character::valueOf((char16_t)1107)));
		$var($Object, var$375, $of($Long::valueOf((int64_t)1699)));
		$nc(XKeysym::keysym2UCSHash)->put(var$375, $($Character::valueOf((char16_t)1105)));
		$var($Object, var$376, $of($Long::valueOf((int64_t)1700)));
		$nc(XKeysym::keysym2UCSHash)->put(var$376, $($Character::valueOf((char16_t)1108)));
		$var($Object, var$377, $of($Long::valueOf((int64_t)1701)));
		$nc(XKeysym::keysym2UCSHash)->put(var$377, $($Character::valueOf((char16_t)1109)));
		$var($Object, var$378, $of($Long::valueOf((int64_t)1702)));
		$nc(XKeysym::keysym2UCSHash)->put(var$378, $($Character::valueOf((char16_t)1110)));
		$var($Object, var$379, $of($Long::valueOf((int64_t)1703)));
		$nc(XKeysym::keysym2UCSHash)->put(var$379, $($Character::valueOf((char16_t)1111)));
		$var($Object, var$380, $of($Long::valueOf((int64_t)1704)));
		$nc(XKeysym::keysym2UCSHash)->put(var$380, $($Character::valueOf((char16_t)1112)));
		$var($Object, var$381, $of($Long::valueOf((int64_t)1705)));
		$nc(XKeysym::keysym2UCSHash)->put(var$381, $($Character::valueOf((char16_t)1113)));
		$var($Object, var$382, $of($Long::valueOf((int64_t)1706)));
		$nc(XKeysym::keysym2UCSHash)->put(var$382, $($Character::valueOf((char16_t)1114)));
		$var($Object, var$383, $of($Long::valueOf((int64_t)1707)));
		$nc(XKeysym::keysym2UCSHash)->put(var$383, $($Character::valueOf((char16_t)1115)));
		$var($Object, var$384, $of($Long::valueOf((int64_t)1708)));
		$nc(XKeysym::keysym2UCSHash)->put(var$384, $($Character::valueOf((char16_t)1116)));
		$var($Object, var$385, $of($Long::valueOf((int64_t)1709)));
		$nc(XKeysym::keysym2UCSHash)->put(var$385, $($Character::valueOf((char16_t)1169)));
		$var($Object, var$386, $of($Long::valueOf((int64_t)1710)));
		$nc(XKeysym::keysym2UCSHash)->put(var$386, $($Character::valueOf((char16_t)1118)));
		$var($Object, var$387, $of($Long::valueOf((int64_t)1711)));
		$nc(XKeysym::keysym2UCSHash)->put(var$387, $($Character::valueOf((char16_t)1119)));
		$var($Object, var$388, $of($Long::valueOf((int64_t)1712)));
		$nc(XKeysym::keysym2UCSHash)->put(var$388, $($Character::valueOf((char16_t)8470)));
		$var($Object, var$389, $of($Long::valueOf((int64_t)1713)));
		$nc(XKeysym::keysym2UCSHash)->put(var$389, $($Character::valueOf((char16_t)1026)));
		$var($Object, var$390, $of($Long::valueOf((int64_t)1714)));
		$nc(XKeysym::keysym2UCSHash)->put(var$390, $($Character::valueOf((char16_t)1027)));
		$var($Object, var$391, $of($Long::valueOf((int64_t)1715)));
		$nc(XKeysym::keysym2UCSHash)->put(var$391, $($Character::valueOf((char16_t)1025)));
		$var($Object, var$392, $of($Long::valueOf((int64_t)1716)));
		$nc(XKeysym::keysym2UCSHash)->put(var$392, $($Character::valueOf((char16_t)1028)));
		$var($Object, var$393, $of($Long::valueOf((int64_t)1717)));
		$nc(XKeysym::keysym2UCSHash)->put(var$393, $($Character::valueOf((char16_t)1029)));
		$var($Object, var$394, $of($Long::valueOf((int64_t)1718)));
		$nc(XKeysym::keysym2UCSHash)->put(var$394, $($Character::valueOf((char16_t)1030)));
		$var($Object, var$395, $of($Long::valueOf((int64_t)1719)));
		$nc(XKeysym::keysym2UCSHash)->put(var$395, $($Character::valueOf((char16_t)1031)));
		$var($Object, var$396, $of($Long::valueOf((int64_t)1720)));
		$nc(XKeysym::keysym2UCSHash)->put(var$396, $($Character::valueOf((char16_t)1032)));
		$var($Object, var$397, $of($Long::valueOf((int64_t)1721)));
		$nc(XKeysym::keysym2UCSHash)->put(var$397, $($Character::valueOf((char16_t)1033)));
		$var($Object, var$398, $of($Long::valueOf((int64_t)1722)));
		$nc(XKeysym::keysym2UCSHash)->put(var$398, $($Character::valueOf((char16_t)1034)));
		$var($Object, var$399, $of($Long::valueOf((int64_t)1723)));
		$nc(XKeysym::keysym2UCSHash)->put(var$399, $($Character::valueOf((char16_t)1035)));
		$var($Object, var$400, $of($Long::valueOf((int64_t)1724)));
		$nc(XKeysym::keysym2UCSHash)->put(var$400, $($Character::valueOf((char16_t)1036)));
		$var($Object, var$401, $of($Long::valueOf((int64_t)1725)));
		$nc(XKeysym::keysym2UCSHash)->put(var$401, $($Character::valueOf((char16_t)1168)));
		$var($Object, var$402, $of($Long::valueOf((int64_t)1726)));
		$nc(XKeysym::keysym2UCSHash)->put(var$402, $($Character::valueOf((char16_t)1038)));
		$var($Object, var$403, $of($Long::valueOf((int64_t)1727)));
		$nc(XKeysym::keysym2UCSHash)->put(var$403, $($Character::valueOf((char16_t)1039)));
		$var($Object, var$404, $of($Long::valueOf((int64_t)1728)));
		$nc(XKeysym::keysym2UCSHash)->put(var$404, $($Character::valueOf((char16_t)1102)));
		$var($Object, var$405, $of($Long::valueOf((int64_t)1729)));
		$nc(XKeysym::keysym2UCSHash)->put(var$405, $($Character::valueOf((char16_t)1072)));
		$var($Object, var$406, $of($Long::valueOf((int64_t)1730)));
		$nc(XKeysym::keysym2UCSHash)->put(var$406, $($Character::valueOf((char16_t)1073)));
		$var($Object, var$407, $of($Long::valueOf((int64_t)1731)));
		$nc(XKeysym::keysym2UCSHash)->put(var$407, $($Character::valueOf((char16_t)1094)));
		$var($Object, var$408, $of($Long::valueOf((int64_t)1732)));
		$nc(XKeysym::keysym2UCSHash)->put(var$408, $($Character::valueOf((char16_t)1076)));
		$var($Object, var$409, $of($Long::valueOf((int64_t)1733)));
		$nc(XKeysym::keysym2UCSHash)->put(var$409, $($Character::valueOf((char16_t)1077)));
		$var($Object, var$410, $of($Long::valueOf((int64_t)1734)));
		$nc(XKeysym::keysym2UCSHash)->put(var$410, $($Character::valueOf((char16_t)1092)));
		$var($Object, var$411, $of($Long::valueOf((int64_t)1735)));
		$nc(XKeysym::keysym2UCSHash)->put(var$411, $($Character::valueOf((char16_t)1075)));
		$var($Object, var$412, $of($Long::valueOf((int64_t)1736)));
		$nc(XKeysym::keysym2UCSHash)->put(var$412, $($Character::valueOf((char16_t)1093)));
		$var($Object, var$413, $of($Long::valueOf((int64_t)1737)));
		$nc(XKeysym::keysym2UCSHash)->put(var$413, $($Character::valueOf((char16_t)1080)));
		$var($Object, var$414, $of($Long::valueOf((int64_t)1738)));
		$nc(XKeysym::keysym2UCSHash)->put(var$414, $($Character::valueOf((char16_t)1081)));
		$var($Object, var$415, $of($Long::valueOf((int64_t)1739)));
		$nc(XKeysym::keysym2UCSHash)->put(var$415, $($Character::valueOf((char16_t)1082)));
		$var($Object, var$416, $of($Long::valueOf((int64_t)1740)));
		$nc(XKeysym::keysym2UCSHash)->put(var$416, $($Character::valueOf((char16_t)1083)));
		$var($Object, var$417, $of($Long::valueOf((int64_t)1741)));
		$nc(XKeysym::keysym2UCSHash)->put(var$417, $($Character::valueOf((char16_t)1084)));
		$var($Object, var$418, $of($Long::valueOf((int64_t)1742)));
		$nc(XKeysym::keysym2UCSHash)->put(var$418, $($Character::valueOf((char16_t)1085)));
		$var($Object, var$419, $of($Long::valueOf((int64_t)1743)));
		$nc(XKeysym::keysym2UCSHash)->put(var$419, $($Character::valueOf((char16_t)1086)));
		$var($Object, var$420, $of($Long::valueOf((int64_t)1744)));
		$nc(XKeysym::keysym2UCSHash)->put(var$420, $($Character::valueOf((char16_t)1087)));
		$var($Object, var$421, $of($Long::valueOf((int64_t)1745)));
		$nc(XKeysym::keysym2UCSHash)->put(var$421, $($Character::valueOf((char16_t)1103)));
		$var($Object, var$422, $of($Long::valueOf((int64_t)1746)));
		$nc(XKeysym::keysym2UCSHash)->put(var$422, $($Character::valueOf((char16_t)1088)));
		$var($Object, var$423, $of($Long::valueOf((int64_t)1747)));
		$nc(XKeysym::keysym2UCSHash)->put(var$423, $($Character::valueOf((char16_t)1089)));
		$var($Object, var$424, $of($Long::valueOf((int64_t)1748)));
		$nc(XKeysym::keysym2UCSHash)->put(var$424, $($Character::valueOf((char16_t)1090)));
		$var($Object, var$425, $of($Long::valueOf((int64_t)1749)));
		$nc(XKeysym::keysym2UCSHash)->put(var$425, $($Character::valueOf((char16_t)1091)));
		$var($Object, var$426, $of($Long::valueOf((int64_t)1750)));
		$nc(XKeysym::keysym2UCSHash)->put(var$426, $($Character::valueOf((char16_t)1078)));
		$var($Object, var$427, $of($Long::valueOf((int64_t)1751)));
		$nc(XKeysym::keysym2UCSHash)->put(var$427, $($Character::valueOf((char16_t)1074)));
		$var($Object, var$428, $of($Long::valueOf((int64_t)1752)));
		$nc(XKeysym::keysym2UCSHash)->put(var$428, $($Character::valueOf((char16_t)1100)));
		$var($Object, var$429, $of($Long::valueOf((int64_t)1753)));
		$nc(XKeysym::keysym2UCSHash)->put(var$429, $($Character::valueOf((char16_t)1099)));
		$var($Object, var$430, $of($Long::valueOf((int64_t)1754)));
		$nc(XKeysym::keysym2UCSHash)->put(var$430, $($Character::valueOf((char16_t)1079)));
		$var($Object, var$431, $of($Long::valueOf((int64_t)1755)));
		$nc(XKeysym::keysym2UCSHash)->put(var$431, $($Character::valueOf((char16_t)1096)));
		$var($Object, var$432, $of($Long::valueOf((int64_t)1756)));
		$nc(XKeysym::keysym2UCSHash)->put(var$432, $($Character::valueOf((char16_t)1101)));
		$var($Object, var$433, $of($Long::valueOf((int64_t)1757)));
		$nc(XKeysym::keysym2UCSHash)->put(var$433, $($Character::valueOf((char16_t)1097)));
		$var($Object, var$434, $of($Long::valueOf((int64_t)1758)));
		$nc(XKeysym::keysym2UCSHash)->put(var$434, $($Character::valueOf((char16_t)1095)));
		$var($Object, var$435, $of($Long::valueOf((int64_t)1759)));
		$nc(XKeysym::keysym2UCSHash)->put(var$435, $($Character::valueOf((char16_t)1098)));
		$var($Object, var$436, $of($Long::valueOf((int64_t)1760)));
		$nc(XKeysym::keysym2UCSHash)->put(var$436, $($Character::valueOf((char16_t)1070)));
		$var($Object, var$437, $of($Long::valueOf((int64_t)1761)));
		$nc(XKeysym::keysym2UCSHash)->put(var$437, $($Character::valueOf((char16_t)1040)));
		$var($Object, var$438, $of($Long::valueOf((int64_t)1762)));
		$nc(XKeysym::keysym2UCSHash)->put(var$438, $($Character::valueOf((char16_t)1041)));
		$var($Object, var$439, $of($Long::valueOf((int64_t)1763)));
		$nc(XKeysym::keysym2UCSHash)->put(var$439, $($Character::valueOf((char16_t)1062)));
		$var($Object, var$440, $of($Long::valueOf((int64_t)1764)));
		$nc(XKeysym::keysym2UCSHash)->put(var$440, $($Character::valueOf((char16_t)1044)));
		$var($Object, var$441, $of($Long::valueOf((int64_t)1765)));
		$nc(XKeysym::keysym2UCSHash)->put(var$441, $($Character::valueOf((char16_t)1045)));
		$var($Object, var$442, $of($Long::valueOf((int64_t)1766)));
		$nc(XKeysym::keysym2UCSHash)->put(var$442, $($Character::valueOf((char16_t)1060)));
		$var($Object, var$443, $of($Long::valueOf((int64_t)1767)));
		$nc(XKeysym::keysym2UCSHash)->put(var$443, $($Character::valueOf((char16_t)1043)));
		$var($Object, var$444, $of($Long::valueOf((int64_t)1768)));
		$nc(XKeysym::keysym2UCSHash)->put(var$444, $($Character::valueOf((char16_t)1061)));
		$var($Object, var$445, $of($Long::valueOf((int64_t)1769)));
		$nc(XKeysym::keysym2UCSHash)->put(var$445, $($Character::valueOf((char16_t)1048)));
		$var($Object, var$446, $of($Long::valueOf((int64_t)1770)));
		$nc(XKeysym::keysym2UCSHash)->put(var$446, $($Character::valueOf((char16_t)1049)));
		$var($Object, var$447, $of($Long::valueOf((int64_t)1771)));
		$nc(XKeysym::keysym2UCSHash)->put(var$447, $($Character::valueOf((char16_t)1050)));
		$var($Object, var$448, $of($Long::valueOf((int64_t)1772)));
		$nc(XKeysym::keysym2UCSHash)->put(var$448, $($Character::valueOf((char16_t)1051)));
		$var($Object, var$449, $of($Long::valueOf((int64_t)1773)));
		$nc(XKeysym::keysym2UCSHash)->put(var$449, $($Character::valueOf((char16_t)1052)));
		$var($Object, var$450, $of($Long::valueOf((int64_t)1774)));
		$nc(XKeysym::keysym2UCSHash)->put(var$450, $($Character::valueOf((char16_t)1053)));
		$var($Object, var$451, $of($Long::valueOf((int64_t)1775)));
		$nc(XKeysym::keysym2UCSHash)->put(var$451, $($Character::valueOf((char16_t)1054)));
		$var($Object, var$452, $of($Long::valueOf((int64_t)1776)));
		$nc(XKeysym::keysym2UCSHash)->put(var$452, $($Character::valueOf((char16_t)1055)));
		$var($Object, var$453, $of($Long::valueOf((int64_t)1777)));
		$nc(XKeysym::keysym2UCSHash)->put(var$453, $($Character::valueOf((char16_t)1071)));
		$var($Object, var$454, $of($Long::valueOf((int64_t)1778)));
		$nc(XKeysym::keysym2UCSHash)->put(var$454, $($Character::valueOf((char16_t)1056)));
		$var($Object, var$455, $of($Long::valueOf((int64_t)1779)));
		$nc(XKeysym::keysym2UCSHash)->put(var$455, $($Character::valueOf((char16_t)1057)));
		$var($Object, var$456, $of($Long::valueOf((int64_t)1780)));
		$nc(XKeysym::keysym2UCSHash)->put(var$456, $($Character::valueOf((char16_t)1058)));
		$var($Object, var$457, $of($Long::valueOf((int64_t)1781)));
		$nc(XKeysym::keysym2UCSHash)->put(var$457, $($Character::valueOf((char16_t)1059)));
		$var($Object, var$458, $of($Long::valueOf((int64_t)1782)));
		$nc(XKeysym::keysym2UCSHash)->put(var$458, $($Character::valueOf((char16_t)1046)));
		$var($Object, var$459, $of($Long::valueOf((int64_t)1783)));
		$nc(XKeysym::keysym2UCSHash)->put(var$459, $($Character::valueOf((char16_t)1042)));
		$var($Object, var$460, $of($Long::valueOf((int64_t)1784)));
		$nc(XKeysym::keysym2UCSHash)->put(var$460, $($Character::valueOf((char16_t)1068)));
		$var($Object, var$461, $of($Long::valueOf((int64_t)1785)));
		$nc(XKeysym::keysym2UCSHash)->put(var$461, $($Character::valueOf((char16_t)1067)));
		$var($Object, var$462, $of($Long::valueOf((int64_t)1786)));
		$nc(XKeysym::keysym2UCSHash)->put(var$462, $($Character::valueOf((char16_t)1047)));
		$var($Object, var$463, $of($Long::valueOf((int64_t)1787)));
		$nc(XKeysym::keysym2UCSHash)->put(var$463, $($Character::valueOf((char16_t)1064)));
		$var($Object, var$464, $of($Long::valueOf((int64_t)1788)));
		$nc(XKeysym::keysym2UCSHash)->put(var$464, $($Character::valueOf((char16_t)1069)));
		$var($Object, var$465, $of($Long::valueOf((int64_t)1789)));
		$nc(XKeysym::keysym2UCSHash)->put(var$465, $($Character::valueOf((char16_t)1065)));
		$var($Object, var$466, $of($Long::valueOf((int64_t)1790)));
		$nc(XKeysym::keysym2UCSHash)->put(var$466, $($Character::valueOf((char16_t)1063)));
		$var($Object, var$467, $of($Long::valueOf((int64_t)1791)));
		$nc(XKeysym::keysym2UCSHash)->put(var$467, $($Character::valueOf((char16_t)1066)));
		$var($Object, var$468, $of($Long::valueOf((int64_t)1953)));
		$nc(XKeysym::keysym2UCSHash)->put(var$468, $($Character::valueOf((char16_t)902)));
		$var($Object, var$469, $of($Long::valueOf((int64_t)1954)));
		$nc(XKeysym::keysym2UCSHash)->put(var$469, $($Character::valueOf((char16_t)904)));
		$var($Object, var$470, $of($Long::valueOf((int64_t)1955)));
		$nc(XKeysym::keysym2UCSHash)->put(var$470, $($Character::valueOf((char16_t)905)));
		$var($Object, var$471, $of($Long::valueOf((int64_t)1956)));
		$nc(XKeysym::keysym2UCSHash)->put(var$471, $($Character::valueOf((char16_t)906)));
		$var($Object, var$472, $of($Long::valueOf((int64_t)1957)));
		$nc(XKeysym::keysym2UCSHash)->put(var$472, $($Character::valueOf((char16_t)938)));
		$var($Object, var$473, $of($Long::valueOf((int64_t)1959)));
		$nc(XKeysym::keysym2UCSHash)->put(var$473, $($Character::valueOf((char16_t)908)));
		$var($Object, var$474, $of($Long::valueOf((int64_t)1960)));
		$nc(XKeysym::keysym2UCSHash)->put(var$474, $($Character::valueOf((char16_t)910)));
		$var($Object, var$475, $of($Long::valueOf((int64_t)1961)));
		$nc(XKeysym::keysym2UCSHash)->put(var$475, $($Character::valueOf((char16_t)939)));
		$var($Object, var$476, $of($Long::valueOf((int64_t)1963)));
		$nc(XKeysym::keysym2UCSHash)->put(var$476, $($Character::valueOf((char16_t)911)));
		$var($Object, var$477, $of($Long::valueOf((int64_t)1966)));
		$nc(XKeysym::keysym2UCSHash)->put(var$477, $($Character::valueOf((char16_t)901)));
		$var($Object, var$478, $of($Long::valueOf((int64_t)1967)));
		$nc(XKeysym::keysym2UCSHash)->put(var$478, $($Character::valueOf((char16_t)8213)));
		$var($Object, var$479, $of($Long::valueOf((int64_t)1969)));
		$nc(XKeysym::keysym2UCSHash)->put(var$479, $($Character::valueOf((char16_t)940)));
		$var($Object, var$480, $of($Long::valueOf((int64_t)1970)));
		$nc(XKeysym::keysym2UCSHash)->put(var$480, $($Character::valueOf((char16_t)941)));
		$var($Object, var$481, $of($Long::valueOf((int64_t)1971)));
		$nc(XKeysym::keysym2UCSHash)->put(var$481, $($Character::valueOf((char16_t)942)));
		$var($Object, var$482, $of($Long::valueOf((int64_t)1972)));
		$nc(XKeysym::keysym2UCSHash)->put(var$482, $($Character::valueOf((char16_t)943)));
		$var($Object, var$483, $of($Long::valueOf((int64_t)1973)));
		$nc(XKeysym::keysym2UCSHash)->put(var$483, $($Character::valueOf((char16_t)970)));
		$var($Object, var$484, $of($Long::valueOf((int64_t)1974)));
		$nc(XKeysym::keysym2UCSHash)->put(var$484, $($Character::valueOf((char16_t)912)));
		$var($Object, var$485, $of($Long::valueOf((int64_t)1975)));
		$nc(XKeysym::keysym2UCSHash)->put(var$485, $($Character::valueOf((char16_t)972)));
		$var($Object, var$486, $of($Long::valueOf((int64_t)1976)));
		$nc(XKeysym::keysym2UCSHash)->put(var$486, $($Character::valueOf((char16_t)973)));
		$var($Object, var$487, $of($Long::valueOf((int64_t)1977)));
		$nc(XKeysym::keysym2UCSHash)->put(var$487, $($Character::valueOf((char16_t)971)));
		$var($Object, var$488, $of($Long::valueOf((int64_t)1978)));
		$nc(XKeysym::keysym2UCSHash)->put(var$488, $($Character::valueOf((char16_t)944)));
		$var($Object, var$489, $of($Long::valueOf((int64_t)1979)));
		$nc(XKeysym::keysym2UCSHash)->put(var$489, $($Character::valueOf((char16_t)974)));
		$var($Object, var$490, $of($Long::valueOf((int64_t)1985)));
		$nc(XKeysym::keysym2UCSHash)->put(var$490, $($Character::valueOf((char16_t)913)));
		$var($Object, var$491, $of($Long::valueOf((int64_t)1986)));
		$nc(XKeysym::keysym2UCSHash)->put(var$491, $($Character::valueOf((char16_t)914)));
		$var($Object, var$492, $of($Long::valueOf((int64_t)1987)));
		$nc(XKeysym::keysym2UCSHash)->put(var$492, $($Character::valueOf((char16_t)915)));
		$var($Object, var$493, $of($Long::valueOf((int64_t)1988)));
		$nc(XKeysym::keysym2UCSHash)->put(var$493, $($Character::valueOf((char16_t)916)));
		$var($Object, var$494, $of($Long::valueOf((int64_t)1989)));
		$nc(XKeysym::keysym2UCSHash)->put(var$494, $($Character::valueOf((char16_t)917)));
		$var($Object, var$495, $of($Long::valueOf((int64_t)1990)));
		$nc(XKeysym::keysym2UCSHash)->put(var$495, $($Character::valueOf((char16_t)918)));
		$var($Object, var$496, $of($Long::valueOf((int64_t)1991)));
		$nc(XKeysym::keysym2UCSHash)->put(var$496, $($Character::valueOf((char16_t)919)));
		$var($Object, var$497, $of($Long::valueOf((int64_t)1992)));
		$nc(XKeysym::keysym2UCSHash)->put(var$497, $($Character::valueOf((char16_t)920)));
		$var($Object, var$498, $of($Long::valueOf((int64_t)1993)));
		$nc(XKeysym::keysym2UCSHash)->put(var$498, $($Character::valueOf((char16_t)921)));
		$var($Object, var$499, $of($Long::valueOf((int64_t)1994)));
		$nc(XKeysym::keysym2UCSHash)->put(var$499, $($Character::valueOf((char16_t)922)));
		$var($Object, var$500, $of($Long::valueOf((int64_t)1995)));
		$nc(XKeysym::keysym2UCSHash)->put(var$500, $($Character::valueOf((char16_t)923)));
		$var($Object, var$501, $of($Long::valueOf((int64_t)1996)));
		$nc(XKeysym::keysym2UCSHash)->put(var$501, $($Character::valueOf((char16_t)924)));
		$var($Object, var$502, $of($Long::valueOf((int64_t)1997)));
		$nc(XKeysym::keysym2UCSHash)->put(var$502, $($Character::valueOf((char16_t)925)));
		$var($Object, var$503, $of($Long::valueOf((int64_t)1998)));
		$nc(XKeysym::keysym2UCSHash)->put(var$503, $($Character::valueOf((char16_t)926)));
		$var($Object, var$504, $of($Long::valueOf((int64_t)1999)));
		$nc(XKeysym::keysym2UCSHash)->put(var$504, $($Character::valueOf((char16_t)927)));
		$var($Object, var$505, $of($Long::valueOf((int64_t)2000)));
		$nc(XKeysym::keysym2UCSHash)->put(var$505, $($Character::valueOf((char16_t)928)));
		$var($Object, var$506, $of($Long::valueOf((int64_t)2001)));
		$nc(XKeysym::keysym2UCSHash)->put(var$506, $($Character::valueOf((char16_t)929)));
		$var($Object, var$507, $of($Long::valueOf((int64_t)2002)));
		$nc(XKeysym::keysym2UCSHash)->put(var$507, $($Character::valueOf((char16_t)931)));
		$var($Object, var$508, $of($Long::valueOf((int64_t)2004)));
		$nc(XKeysym::keysym2UCSHash)->put(var$508, $($Character::valueOf((char16_t)932)));
		$var($Object, var$509, $of($Long::valueOf((int64_t)2005)));
		$nc(XKeysym::keysym2UCSHash)->put(var$509, $($Character::valueOf((char16_t)933)));
		$var($Object, var$510, $of($Long::valueOf((int64_t)2006)));
		$nc(XKeysym::keysym2UCSHash)->put(var$510, $($Character::valueOf((char16_t)934)));
		$var($Object, var$511, $of($Long::valueOf((int64_t)2007)));
		$nc(XKeysym::keysym2UCSHash)->put(var$511, $($Character::valueOf((char16_t)935)));
		$var($Object, var$512, $of($Long::valueOf((int64_t)2008)));
		$nc(XKeysym::keysym2UCSHash)->put(var$512, $($Character::valueOf((char16_t)936)));
		$var($Object, var$513, $of($Long::valueOf((int64_t)2009)));
		$nc(XKeysym::keysym2UCSHash)->put(var$513, $($Character::valueOf((char16_t)937)));
		$var($Object, var$514, $of($Long::valueOf((int64_t)2017)));
		$nc(XKeysym::keysym2UCSHash)->put(var$514, $($Character::valueOf((char16_t)945)));
		$var($Object, var$515, $of($Long::valueOf((int64_t)2018)));
		$nc(XKeysym::keysym2UCSHash)->put(var$515, $($Character::valueOf((char16_t)946)));
		$var($Object, var$516, $of($Long::valueOf((int64_t)2019)));
		$nc(XKeysym::keysym2UCSHash)->put(var$516, $($Character::valueOf((char16_t)947)));
		$var($Object, var$517, $of($Long::valueOf((int64_t)2020)));
		$nc(XKeysym::keysym2UCSHash)->put(var$517, $($Character::valueOf((char16_t)948)));
		$var($Object, var$518, $of($Long::valueOf((int64_t)2021)));
		$nc(XKeysym::keysym2UCSHash)->put(var$518, $($Character::valueOf((char16_t)949)));
		$var($Object, var$519, $of($Long::valueOf((int64_t)2022)));
		$nc(XKeysym::keysym2UCSHash)->put(var$519, $($Character::valueOf((char16_t)950)));
		$var($Object, var$520, $of($Long::valueOf((int64_t)2023)));
		$nc(XKeysym::keysym2UCSHash)->put(var$520, $($Character::valueOf((char16_t)951)));
		$var($Object, var$521, $of($Long::valueOf((int64_t)2024)));
		$nc(XKeysym::keysym2UCSHash)->put(var$521, $($Character::valueOf((char16_t)952)));
		$var($Object, var$522, $of($Long::valueOf((int64_t)2025)));
		$nc(XKeysym::keysym2UCSHash)->put(var$522, $($Character::valueOf((char16_t)953)));
		$var($Object, var$523, $of($Long::valueOf((int64_t)2026)));
		$nc(XKeysym::keysym2UCSHash)->put(var$523, $($Character::valueOf((char16_t)954)));
		$var($Object, var$524, $of($Long::valueOf((int64_t)2027)));
		$nc(XKeysym::keysym2UCSHash)->put(var$524, $($Character::valueOf((char16_t)955)));
		$var($Object, var$525, $of($Long::valueOf((int64_t)2028)));
		$nc(XKeysym::keysym2UCSHash)->put(var$525, $($Character::valueOf((char16_t)956)));
		$var($Object, var$526, $of($Long::valueOf((int64_t)2029)));
		$nc(XKeysym::keysym2UCSHash)->put(var$526, $($Character::valueOf((char16_t)957)));
		$var($Object, var$527, $of($Long::valueOf((int64_t)2030)));
		$nc(XKeysym::keysym2UCSHash)->put(var$527, $($Character::valueOf((char16_t)958)));
		$var($Object, var$528, $of($Long::valueOf((int64_t)2031)));
		$nc(XKeysym::keysym2UCSHash)->put(var$528, $($Character::valueOf((char16_t)959)));
		$var($Object, var$529, $of($Long::valueOf((int64_t)2032)));
		$nc(XKeysym::keysym2UCSHash)->put(var$529, $($Character::valueOf((char16_t)960)));
		$var($Object, var$530, $of($Long::valueOf((int64_t)2033)));
		$nc(XKeysym::keysym2UCSHash)->put(var$530, $($Character::valueOf((char16_t)961)));
		$var($Object, var$531, $of($Long::valueOf((int64_t)2034)));
		$nc(XKeysym::keysym2UCSHash)->put(var$531, $($Character::valueOf((char16_t)963)));
		$var($Object, var$532, $of($Long::valueOf((int64_t)2035)));
		$nc(XKeysym::keysym2UCSHash)->put(var$532, $($Character::valueOf((char16_t)962)));
		$var($Object, var$533, $of($Long::valueOf((int64_t)2036)));
		$nc(XKeysym::keysym2UCSHash)->put(var$533, $($Character::valueOf((char16_t)964)));
		$var($Object, var$534, $of($Long::valueOf((int64_t)2037)));
		$nc(XKeysym::keysym2UCSHash)->put(var$534, $($Character::valueOf((char16_t)965)));
		$var($Object, var$535, $of($Long::valueOf((int64_t)2038)));
		$nc(XKeysym::keysym2UCSHash)->put(var$535, $($Character::valueOf((char16_t)966)));
		$var($Object, var$536, $of($Long::valueOf((int64_t)2039)));
		$nc(XKeysym::keysym2UCSHash)->put(var$536, $($Character::valueOf((char16_t)967)));
		$var($Object, var$537, $of($Long::valueOf((int64_t)2040)));
		$nc(XKeysym::keysym2UCSHash)->put(var$537, $($Character::valueOf((char16_t)968)));
		$var($Object, var$538, $of($Long::valueOf((int64_t)2041)));
		$nc(XKeysym::keysym2UCSHash)->put(var$538, $($Character::valueOf((char16_t)969)));
		$var($Object, var$539, $of($Long::valueOf((int64_t)2209)));
		$nc(XKeysym::keysym2UCSHash)->put(var$539, $($Character::valueOf((char16_t)9143)));
		$var($Object, var$540, $of($Long::valueOf((int64_t)2210)));
		$nc(XKeysym::keysym2UCSHash)->put(var$540, $($Character::valueOf((char16_t)9484)));
		$var($Object, var$541, $of($Long::valueOf((int64_t)2211)));
		$nc(XKeysym::keysym2UCSHash)->put(var$541, $($Character::valueOf((char16_t)9472)));
		$var($Object, var$542, $of($Long::valueOf((int64_t)2212)));
		$nc(XKeysym::keysym2UCSHash)->put(var$542, $($Character::valueOf((char16_t)8992)));
		$var($Object, var$543, $of($Long::valueOf((int64_t)2213)));
		$nc(XKeysym::keysym2UCSHash)->put(var$543, $($Character::valueOf((char16_t)8993)));
		$var($Object, var$544, $of($Long::valueOf((int64_t)2214)));
		$nc(XKeysym::keysym2UCSHash)->put(var$544, $($Character::valueOf((char16_t)9474)));
		$var($Object, var$545, $of($Long::valueOf((int64_t)2215)));
		$nc(XKeysym::keysym2UCSHash)->put(var$545, $($Character::valueOf((char16_t)9121)));
		$var($Object, var$546, $of($Long::valueOf((int64_t)2216)));
		$nc(XKeysym::keysym2UCSHash)->put(var$546, $($Character::valueOf((char16_t)9123)));
		$var($Object, var$547, $of($Long::valueOf((int64_t)2217)));
		$nc(XKeysym::keysym2UCSHash)->put(var$547, $($Character::valueOf((char16_t)9124)));
		$var($Object, var$548, $of($Long::valueOf((int64_t)2218)));
		$nc(XKeysym::keysym2UCSHash)->put(var$548, $($Character::valueOf((char16_t)9126)));
		$var($Object, var$549, $of($Long::valueOf((int64_t)2219)));
		$nc(XKeysym::keysym2UCSHash)->put(var$549, $($Character::valueOf((char16_t)9115)));
		$var($Object, var$550, $of($Long::valueOf((int64_t)2220)));
		$nc(XKeysym::keysym2UCSHash)->put(var$550, $($Character::valueOf((char16_t)9117)));
		$var($Object, var$551, $of($Long::valueOf((int64_t)2221)));
		$nc(XKeysym::keysym2UCSHash)->put(var$551, $($Character::valueOf((char16_t)9118)));
		$var($Object, var$552, $of($Long::valueOf((int64_t)2222)));
		$nc(XKeysym::keysym2UCSHash)->put(var$552, $($Character::valueOf((char16_t)9120)));
		$var($Object, var$553, $of($Long::valueOf((int64_t)2223)));
		$nc(XKeysym::keysym2UCSHash)->put(var$553, $($Character::valueOf((char16_t)9128)));
		$var($Object, var$554, $of($Long::valueOf((int64_t)2224)));
		$nc(XKeysym::keysym2UCSHash)->put(var$554, $($Character::valueOf((char16_t)9132)));
		$var($Object, var$555, $of($Long::valueOf((int64_t)2236)));
		$nc(XKeysym::keysym2UCSHash)->put(var$555, $($Character::valueOf((char16_t)8804)));
		$var($Object, var$556, $of($Long::valueOf((int64_t)2237)));
		$nc(XKeysym::keysym2UCSHash)->put(var$556, $($Character::valueOf((char16_t)8800)));
		$var($Object, var$557, $of($Long::valueOf((int64_t)2238)));
		$nc(XKeysym::keysym2UCSHash)->put(var$557, $($Character::valueOf((char16_t)8805)));
		$var($Object, var$558, $of($Long::valueOf((int64_t)2239)));
		$nc(XKeysym::keysym2UCSHash)->put(var$558, $($Character::valueOf((char16_t)8747)));
		$var($Object, var$559, $of($Long::valueOf((int64_t)2240)));
		$nc(XKeysym::keysym2UCSHash)->put(var$559, $($Character::valueOf((char16_t)8756)));
		$var($Object, var$560, $of($Long::valueOf((int64_t)2241)));
		$nc(XKeysym::keysym2UCSHash)->put(var$560, $($Character::valueOf((char16_t)8733)));
		$var($Object, var$561, $of($Long::valueOf((int64_t)2242)));
		$nc(XKeysym::keysym2UCSHash)->put(var$561, $($Character::valueOf((char16_t)8734)));
		$var($Object, var$562, $of($Long::valueOf((int64_t)2245)));
		$nc(XKeysym::keysym2UCSHash)->put(var$562, $($Character::valueOf((char16_t)8711)));
		$var($Object, var$563, $of($Long::valueOf((int64_t)2248)));
		$nc(XKeysym::keysym2UCSHash)->put(var$563, $($Character::valueOf((char16_t)8764)));
		$var($Object, var$564, $of($Long::valueOf((int64_t)2249)));
		$nc(XKeysym::keysym2UCSHash)->put(var$564, $($Character::valueOf((char16_t)8771)));
		$var($Object, var$565, $of($Long::valueOf((int64_t)2253)));
		$nc(XKeysym::keysym2UCSHash)->put(var$565, $($Character::valueOf((char16_t)8452)));
		$var($Object, var$566, $of($Long::valueOf((int64_t)2254)));
		$nc(XKeysym::keysym2UCSHash)->put(var$566, $($Character::valueOf((char16_t)8658)));
		$var($Object, var$567, $of($Long::valueOf((int64_t)2255)));
		$nc(XKeysym::keysym2UCSHash)->put(var$567, $($Character::valueOf((char16_t)8801)));
		$var($Object, var$568, $of($Long::valueOf((int64_t)2262)));
		$nc(XKeysym::keysym2UCSHash)->put(var$568, $($Character::valueOf((char16_t)8730)));
		$var($Object, var$569, $of($Long::valueOf((int64_t)2266)));
		$nc(XKeysym::keysym2UCSHash)->put(var$569, $($Character::valueOf((char16_t)8834)));
		$var($Object, var$570, $of($Long::valueOf((int64_t)2267)));
		$nc(XKeysym::keysym2UCSHash)->put(var$570, $($Character::valueOf((char16_t)8835)));
		$var($Object, var$571, $of($Long::valueOf((int64_t)2268)));
		$nc(XKeysym::keysym2UCSHash)->put(var$571, $($Character::valueOf((char16_t)8745)));
		$var($Object, var$572, $of($Long::valueOf((int64_t)2269)));
		$nc(XKeysym::keysym2UCSHash)->put(var$572, $($Character::valueOf((char16_t)8746)));
		$var($Object, var$573, $of($Long::valueOf((int64_t)2270)));
		$nc(XKeysym::keysym2UCSHash)->put(var$573, $($Character::valueOf((char16_t)8743)));
		$var($Object, var$574, $of($Long::valueOf((int64_t)2271)));
		$nc(XKeysym::keysym2UCSHash)->put(var$574, $($Character::valueOf((char16_t)8744)));
		$var($Object, var$575, $of($Long::valueOf((int64_t)2287)));
		$nc(XKeysym::keysym2UCSHash)->put(var$575, $($Character::valueOf((char16_t)8706)));
		$var($Object, var$576, $of($Long::valueOf((int64_t)2294)));
		$nc(XKeysym::keysym2UCSHash)->put(var$576, $($Character::valueOf((char16_t)402)));
		$var($Object, var$577, $of($Long::valueOf((int64_t)2299)));
		$nc(XKeysym::keysym2UCSHash)->put(var$577, $($Character::valueOf((char16_t)8592)));
		$var($Object, var$578, $of($Long::valueOf((int64_t)2300)));
		$nc(XKeysym::keysym2UCSHash)->put(var$578, $($Character::valueOf((char16_t)8593)));
		$var($Object, var$579, $of($Long::valueOf((int64_t)2301)));
		$nc(XKeysym::keysym2UCSHash)->put(var$579, $($Character::valueOf((char16_t)8594)));
		$var($Object, var$580, $of($Long::valueOf((int64_t)2302)));
		$nc(XKeysym::keysym2UCSHash)->put(var$580, $($Character::valueOf((char16_t)8595)));
		$var($Object, var$581, $of($Long::valueOf((int64_t)2528)));
		$nc(XKeysym::keysym2UCSHash)->put(var$581, $($Character::valueOf((char16_t)9670)));
		$var($Object, var$582, $of($Long::valueOf((int64_t)2529)));
		$nc(XKeysym::keysym2UCSHash)->put(var$582, $($Character::valueOf((char16_t)9618)));
		$var($Object, var$583, $of($Long::valueOf((int64_t)2530)));
		$nc(XKeysym::keysym2UCSHash)->put(var$583, $($Character::valueOf((char16_t)9225)));
		$var($Object, var$584, $of($Long::valueOf((int64_t)2531)));
		$nc(XKeysym::keysym2UCSHash)->put(var$584, $($Character::valueOf((char16_t)9228)));
		$var($Object, var$585, $of($Long::valueOf((int64_t)2532)));
		$nc(XKeysym::keysym2UCSHash)->put(var$585, $($Character::valueOf((char16_t)9229)));
		$var($Object, var$586, $of($Long::valueOf((int64_t)2533)));
		$nc(XKeysym::keysym2UCSHash)->put(var$586, $($Character::valueOf((char16_t)9226)));
		$var($Object, var$587, $of($Long::valueOf((int64_t)2536)));
		$nc(XKeysym::keysym2UCSHash)->put(var$587, $($Character::valueOf((char16_t)9252)));
		$var($Object, var$588, $of($Long::valueOf((int64_t)2537)));
		$nc(XKeysym::keysym2UCSHash)->put(var$588, $($Character::valueOf((char16_t)9227)));
		$var($Object, var$589, $of($Long::valueOf((int64_t)2538)));
		$nc(XKeysym::keysym2UCSHash)->put(var$589, $($Character::valueOf((char16_t)9496)));
		$var($Object, var$590, $of($Long::valueOf((int64_t)2539)));
		$nc(XKeysym::keysym2UCSHash)->put(var$590, $($Character::valueOf((char16_t)9488)));
		$var($Object, var$591, $of($Long::valueOf((int64_t)2540)));
		$nc(XKeysym::keysym2UCSHash)->put(var$591, $($Character::valueOf((char16_t)9484)));
		$var($Object, var$592, $of($Long::valueOf((int64_t)2541)));
		$nc(XKeysym::keysym2UCSHash)->put(var$592, $($Character::valueOf((char16_t)9492)));
		$var($Object, var$593, $of($Long::valueOf((int64_t)2542)));
		$nc(XKeysym::keysym2UCSHash)->put(var$593, $($Character::valueOf((char16_t)9532)));
		$var($Object, var$594, $of($Long::valueOf((int64_t)2543)));
		$nc(XKeysym::keysym2UCSHash)->put(var$594, $($Character::valueOf((char16_t)9146)));
		$var($Object, var$595, $of($Long::valueOf((int64_t)2544)));
		$nc(XKeysym::keysym2UCSHash)->put(var$595, $($Character::valueOf((char16_t)9147)));
		$var($Object, var$596, $of($Long::valueOf((int64_t)2545)));
		$nc(XKeysym::keysym2UCSHash)->put(var$596, $($Character::valueOf((char16_t)9472)));
		$var($Object, var$597, $of($Long::valueOf((int64_t)2546)));
		$nc(XKeysym::keysym2UCSHash)->put(var$597, $($Character::valueOf((char16_t)9148)));
		$var($Object, var$598, $of($Long::valueOf((int64_t)2547)));
		$nc(XKeysym::keysym2UCSHash)->put(var$598, $($Character::valueOf((char16_t)9149)));
		$var($Object, var$599, $of($Long::valueOf((int64_t)2548)));
		$nc(XKeysym::keysym2UCSHash)->put(var$599, $($Character::valueOf((char16_t)9500)));
		$var($Object, var$600, $of($Long::valueOf((int64_t)2549)));
		$nc(XKeysym::keysym2UCSHash)->put(var$600, $($Character::valueOf((char16_t)9508)));
		$var($Object, var$601, $of($Long::valueOf((int64_t)2550)));
		$nc(XKeysym::keysym2UCSHash)->put(var$601, $($Character::valueOf((char16_t)9524)));
		$var($Object, var$602, $of($Long::valueOf((int64_t)2551)));
		$nc(XKeysym::keysym2UCSHash)->put(var$602, $($Character::valueOf((char16_t)9516)));
		$var($Object, var$603, $of($Long::valueOf((int64_t)2552)));
		$nc(XKeysym::keysym2UCSHash)->put(var$603, $($Character::valueOf((char16_t)9474)));
		$var($Object, var$604, $of($Long::valueOf((int64_t)2721)));
		$nc(XKeysym::keysym2UCSHash)->put(var$604, $($Character::valueOf((char16_t)8195)));
		$var($Object, var$605, $of($Long::valueOf((int64_t)2722)));
		$nc(XKeysym::keysym2UCSHash)->put(var$605, $($Character::valueOf((char16_t)8194)));
		$var($Object, var$606, $of($Long::valueOf((int64_t)2723)));
		$nc(XKeysym::keysym2UCSHash)->put(var$606, $($Character::valueOf((char16_t)8196)));
		$var($Object, var$607, $of($Long::valueOf((int64_t)2724)));
		$nc(XKeysym::keysym2UCSHash)->put(var$607, $($Character::valueOf((char16_t)8197)));
		$var($Object, var$608, $of($Long::valueOf((int64_t)2725)));
		$nc(XKeysym::keysym2UCSHash)->put(var$608, $($Character::valueOf((char16_t)8199)));
		$var($Object, var$609, $of($Long::valueOf((int64_t)2726)));
		$nc(XKeysym::keysym2UCSHash)->put(var$609, $($Character::valueOf((char16_t)8200)));
		$var($Object, var$610, $of($Long::valueOf((int64_t)2727)));
		$nc(XKeysym::keysym2UCSHash)->put(var$610, $($Character::valueOf((char16_t)8201)));
		$var($Object, var$611, $of($Long::valueOf((int64_t)2728)));
		$nc(XKeysym::keysym2UCSHash)->put(var$611, $($Character::valueOf((char16_t)8202)));
		$var($Object, var$612, $of($Long::valueOf((int64_t)2729)));
		$nc(XKeysym::keysym2UCSHash)->put(var$612, $($Character::valueOf((char16_t)8212)));
		$var($Object, var$613, $of($Long::valueOf((int64_t)2730)));
		$nc(XKeysym::keysym2UCSHash)->put(var$613, $($Character::valueOf((char16_t)8211)));
		$var($Object, var$614, $of($Long::valueOf((int64_t)2732)));
		$nc(XKeysym::keysym2UCSHash)->put(var$614, $($Character::valueOf((char16_t)9251)));
		$var($Object, var$615, $of($Long::valueOf((int64_t)2734)));
		$nc(XKeysym::keysym2UCSHash)->put(var$615, $($Character::valueOf((char16_t)8230)));
		$var($Object, var$616, $of($Long::valueOf((int64_t)2735)));
		$nc(XKeysym::keysym2UCSHash)->put(var$616, $($Character::valueOf((char16_t)8229)));
		$var($Object, var$617, $of($Long::valueOf((int64_t)2736)));
		$nc(XKeysym::keysym2UCSHash)->put(var$617, $($Character::valueOf((char16_t)8531)));
		$var($Object, var$618, $of($Long::valueOf((int64_t)2737)));
		$nc(XKeysym::keysym2UCSHash)->put(var$618, $($Character::valueOf((char16_t)8532)));
		$var($Object, var$619, $of($Long::valueOf((int64_t)2738)));
		$nc(XKeysym::keysym2UCSHash)->put(var$619, $($Character::valueOf((char16_t)8533)));
		$var($Object, var$620, $of($Long::valueOf((int64_t)2739)));
		$nc(XKeysym::keysym2UCSHash)->put(var$620, $($Character::valueOf((char16_t)8534)));
		$var($Object, var$621, $of($Long::valueOf((int64_t)2740)));
		$nc(XKeysym::keysym2UCSHash)->put(var$621, $($Character::valueOf((char16_t)8535)));
		$var($Object, var$622, $of($Long::valueOf((int64_t)2741)));
		$nc(XKeysym::keysym2UCSHash)->put(var$622, $($Character::valueOf((char16_t)8536)));
		$var($Object, var$623, $of($Long::valueOf((int64_t)2742)));
		$nc(XKeysym::keysym2UCSHash)->put(var$623, $($Character::valueOf((char16_t)8537)));
		$var($Object, var$624, $of($Long::valueOf((int64_t)2743)));
		$nc(XKeysym::keysym2UCSHash)->put(var$624, $($Character::valueOf((char16_t)8538)));
		$var($Object, var$625, $of($Long::valueOf((int64_t)2744)));
		$nc(XKeysym::keysym2UCSHash)->put(var$625, $($Character::valueOf((char16_t)8453)));
		$var($Object, var$626, $of($Long::valueOf((int64_t)2747)));
		$nc(XKeysym::keysym2UCSHash)->put(var$626, $($Character::valueOf((char16_t)8210)));
		$var($Object, var$627, $of($Long::valueOf((int64_t)2748)));
		$nc(XKeysym::keysym2UCSHash)->put(var$627, $($Character::valueOf((char16_t)10216)));
		$var($Object, var$628, $of($Long::valueOf((int64_t)2749)));
		$nc(XKeysym::keysym2UCSHash)->put(var$628, $($Character::valueOf((char16_t)46)));
		$var($Object, var$629, $of($Long::valueOf((int64_t)2750)));
		$nc(XKeysym::keysym2UCSHash)->put(var$629, $($Character::valueOf((char16_t)10217)));
		$var($Object, var$630, $of($Long::valueOf((int64_t)2755)));
		$nc(XKeysym::keysym2UCSHash)->put(var$630, $($Character::valueOf((char16_t)8539)));
		$var($Object, var$631, $of($Long::valueOf((int64_t)2756)));
		$nc(XKeysym::keysym2UCSHash)->put(var$631, $($Character::valueOf((char16_t)8540)));
		$var($Object, var$632, $of($Long::valueOf((int64_t)2757)));
		$nc(XKeysym::keysym2UCSHash)->put(var$632, $($Character::valueOf((char16_t)8541)));
		$var($Object, var$633, $of($Long::valueOf((int64_t)2758)));
		$nc(XKeysym::keysym2UCSHash)->put(var$633, $($Character::valueOf((char16_t)8542)));
		$var($Object, var$634, $of($Long::valueOf((int64_t)2761)));
		$nc(XKeysym::keysym2UCSHash)->put(var$634, $($Character::valueOf((char16_t)8482)));
		$var($Object, var$635, $of($Long::valueOf((int64_t)2762)));
		$nc(XKeysym::keysym2UCSHash)->put(var$635, $($Character::valueOf((char16_t)9747)));
		$var($Object, var$636, $of($Long::valueOf((int64_t)2764)));
		$nc(XKeysym::keysym2UCSHash)->put(var$636, $($Character::valueOf((char16_t)9665)));
		$var($Object, var$637, $of($Long::valueOf((int64_t)2765)));
		$nc(XKeysym::keysym2UCSHash)->put(var$637, $($Character::valueOf((char16_t)9655)));
		$var($Object, var$638, $of($Long::valueOf((int64_t)2766)));
		$nc(XKeysym::keysym2UCSHash)->put(var$638, $($Character::valueOf((char16_t)9675)));
		$var($Object, var$639, $of($Long::valueOf((int64_t)2767)));
		$nc(XKeysym::keysym2UCSHash)->put(var$639, $($Character::valueOf((char16_t)9647)));
		$var($Object, var$640, $of($Long::valueOf((int64_t)2768)));
		$nc(XKeysym::keysym2UCSHash)->put(var$640, $($Character::valueOf((char16_t)8216)));
		$var($Object, var$641, $of($Long::valueOf((int64_t)2769)));
		$nc(XKeysym::keysym2UCSHash)->put(var$641, $($Character::valueOf((char16_t)8217)));
		$var($Object, var$642, $of($Long::valueOf((int64_t)2770)));
		$nc(XKeysym::keysym2UCSHash)->put(var$642, $($Character::valueOf((char16_t)8220)));
		$var($Object, var$643, $of($Long::valueOf((int64_t)2771)));
		$nc(XKeysym::keysym2UCSHash)->put(var$643, $($Character::valueOf((char16_t)8221)));
		$var($Object, var$644, $of($Long::valueOf((int64_t)2772)));
		$nc(XKeysym::keysym2UCSHash)->put(var$644, $($Character::valueOf((char16_t)8478)));
		$var($Object, var$645, $of($Long::valueOf((int64_t)2774)));
		$nc(XKeysym::keysym2UCSHash)->put(var$645, $($Character::valueOf((char16_t)8242)));
		$var($Object, var$646, $of($Long::valueOf((int64_t)2775)));
		$nc(XKeysym::keysym2UCSHash)->put(var$646, $($Character::valueOf((char16_t)8243)));
		$var($Object, var$647, $of($Long::valueOf((int64_t)2777)));
		$nc(XKeysym::keysym2UCSHash)->put(var$647, $($Character::valueOf((char16_t)10013)));
		$var($Object, var$648, $of($Long::valueOf((int64_t)2779)));
		$nc(XKeysym::keysym2UCSHash)->put(var$648, $($Character::valueOf((char16_t)9644)));
		$var($Object, var$649, $of($Long::valueOf((int64_t)2780)));
		$nc(XKeysym::keysym2UCSHash)->put(var$649, $($Character::valueOf((char16_t)9664)));
		$var($Object, var$650, $of($Long::valueOf((int64_t)2781)));
		$nc(XKeysym::keysym2UCSHash)->put(var$650, $($Character::valueOf((char16_t)9654)));
		$var($Object, var$651, $of($Long::valueOf((int64_t)2782)));
		$nc(XKeysym::keysym2UCSHash)->put(var$651, $($Character::valueOf((char16_t)9679)));
		$var($Object, var$652, $of($Long::valueOf((int64_t)2783)));
		$nc(XKeysym::keysym2UCSHash)->put(var$652, $($Character::valueOf((char16_t)9646)));
		$var($Object, var$653, $of($Long::valueOf((int64_t)2784)));
		$nc(XKeysym::keysym2UCSHash)->put(var$653, $($Character::valueOf((char16_t)9702)));
		$var($Object, var$654, $of($Long::valueOf((int64_t)2785)));
		$nc(XKeysym::keysym2UCSHash)->put(var$654, $($Character::valueOf((char16_t)9643)));
		$var($Object, var$655, $of($Long::valueOf((int64_t)2786)));
		$nc(XKeysym::keysym2UCSHash)->put(var$655, $($Character::valueOf((char16_t)9645)));
		$var($Object, var$656, $of($Long::valueOf((int64_t)2787)));
		$nc(XKeysym::keysym2UCSHash)->put(var$656, $($Character::valueOf((char16_t)9651)));
		$var($Object, var$657, $of($Long::valueOf((int64_t)2788)));
		$nc(XKeysym::keysym2UCSHash)->put(var$657, $($Character::valueOf((char16_t)9661)));
		$var($Object, var$658, $of($Long::valueOf((int64_t)2789)));
		$nc(XKeysym::keysym2UCSHash)->put(var$658, $($Character::valueOf((char16_t)9734)));
		$var($Object, var$659, $of($Long::valueOf((int64_t)2790)));
		$nc(XKeysym::keysym2UCSHash)->put(var$659, $($Character::valueOf((char16_t)8226)));
		$var($Object, var$660, $of($Long::valueOf((int64_t)2791)));
		$nc(XKeysym::keysym2UCSHash)->put(var$660, $($Character::valueOf((char16_t)9642)));
		$var($Object, var$661, $of($Long::valueOf((int64_t)2792)));
		$nc(XKeysym::keysym2UCSHash)->put(var$661, $($Character::valueOf((char16_t)9650)));
		$var($Object, var$662, $of($Long::valueOf((int64_t)2793)));
		$nc(XKeysym::keysym2UCSHash)->put(var$662, $($Character::valueOf((char16_t)9660)));
		$var($Object, var$663, $of($Long::valueOf((int64_t)2794)));
		$nc(XKeysym::keysym2UCSHash)->put(var$663, $($Character::valueOf((char16_t)9756)));
		$var($Object, var$664, $of($Long::valueOf((int64_t)2795)));
		$nc(XKeysym::keysym2UCSHash)->put(var$664, $($Character::valueOf((char16_t)9758)));
		$var($Object, var$665, $of($Long::valueOf((int64_t)2796)));
		$nc(XKeysym::keysym2UCSHash)->put(var$665, $($Character::valueOf((char16_t)9827)));
		$var($Object, var$666, $of($Long::valueOf((int64_t)2797)));
		$nc(XKeysym::keysym2UCSHash)->put(var$666, $($Character::valueOf((char16_t)9830)));
		$var($Object, var$667, $of($Long::valueOf((int64_t)2798)));
		$nc(XKeysym::keysym2UCSHash)->put(var$667, $($Character::valueOf((char16_t)9829)));
		$var($Object, var$668, $of($Long::valueOf((int64_t)2800)));
		$nc(XKeysym::keysym2UCSHash)->put(var$668, $($Character::valueOf((char16_t)10016)));
		$var($Object, var$669, $of($Long::valueOf((int64_t)2801)));
		$nc(XKeysym::keysym2UCSHash)->put(var$669, $($Character::valueOf((char16_t)8224)));
		$var($Object, var$670, $of($Long::valueOf((int64_t)2802)));
		$nc(XKeysym::keysym2UCSHash)->put(var$670, $($Character::valueOf((char16_t)8225)));
		$var($Object, var$671, $of($Long::valueOf((int64_t)2803)));
		$nc(XKeysym::keysym2UCSHash)->put(var$671, $($Character::valueOf((char16_t)10003)));
		$var($Object, var$672, $of($Long::valueOf((int64_t)2804)));
		$nc(XKeysym::keysym2UCSHash)->put(var$672, $($Character::valueOf((char16_t)10007)));
		$var($Object, var$673, $of($Long::valueOf((int64_t)2805)));
		$nc(XKeysym::keysym2UCSHash)->put(var$673, $($Character::valueOf((char16_t)9839)));
		$var($Object, var$674, $of($Long::valueOf((int64_t)2806)));
		$nc(XKeysym::keysym2UCSHash)->put(var$674, $($Character::valueOf((char16_t)9837)));
		$var($Object, var$675, $of($Long::valueOf((int64_t)2807)));
		$nc(XKeysym::keysym2UCSHash)->put(var$675, $($Character::valueOf((char16_t)9794)));
		$var($Object, var$676, $of($Long::valueOf((int64_t)2808)));
		$nc(XKeysym::keysym2UCSHash)->put(var$676, $($Character::valueOf((char16_t)9792)));
		$var($Object, var$677, $of($Long::valueOf((int64_t)2809)));
		$nc(XKeysym::keysym2UCSHash)->put(var$677, $($Character::valueOf((char16_t)9742)));
		$var($Object, var$678, $of($Long::valueOf((int64_t)2810)));
		$nc(XKeysym::keysym2UCSHash)->put(var$678, $($Character::valueOf((char16_t)8981)));
		$var($Object, var$679, $of($Long::valueOf((int64_t)2811)));
		$nc(XKeysym::keysym2UCSHash)->put(var$679, $($Character::valueOf((char16_t)8471)));
		$var($Object, var$680, $of($Long::valueOf((int64_t)2812)));
		$nc(XKeysym::keysym2UCSHash)->put(var$680, $($Character::valueOf((char16_t)8248)));
		$var($Object, var$681, $of($Long::valueOf((int64_t)2813)));
		$nc(XKeysym::keysym2UCSHash)->put(var$681, $($Character::valueOf((char16_t)8218)));
		$var($Object, var$682, $of($Long::valueOf((int64_t)2814)));
		$nc(XKeysym::keysym2UCSHash)->put(var$682, $($Character::valueOf((char16_t)8222)));
		$var($Object, var$683, $of($Long::valueOf((int64_t)2979)));
		$nc(XKeysym::keysym2UCSHash)->put(var$683, $($Character::valueOf((char16_t)60)));
		$var($Object, var$684, $of($Long::valueOf((int64_t)2982)));
		$nc(XKeysym::keysym2UCSHash)->put(var$684, $($Character::valueOf((char16_t)62)));
		$var($Object, var$685, $of($Long::valueOf((int64_t)2984)));
		$nc(XKeysym::keysym2UCSHash)->put(var$685, $($Character::valueOf((char16_t)8744)));
		$var($Object, var$686, $of($Long::valueOf((int64_t)2985)));
		$nc(XKeysym::keysym2UCSHash)->put(var$686, $($Character::valueOf((char16_t)8743)));
		$var($Object, var$687, $of($Long::valueOf((int64_t)3008)));
		$nc(XKeysym::keysym2UCSHash)->put(var$687, $($Character::valueOf((char16_t)175)));
		$var($Object, var$688, $of($Long::valueOf((int64_t)3010)));
		$nc(XKeysym::keysym2UCSHash)->put(var$688, $($Character::valueOf((char16_t)8869)));
		$var($Object, var$689, $of($Long::valueOf((int64_t)3011)));
		$nc(XKeysym::keysym2UCSHash)->put(var$689, $($Character::valueOf((char16_t)8745)));
		$var($Object, var$690, $of($Long::valueOf((int64_t)3012)));
		$nc(XKeysym::keysym2UCSHash)->put(var$690, $($Character::valueOf((char16_t)8970)));
		$var($Object, var$691, $of($Long::valueOf((int64_t)3014)));
		$nc(XKeysym::keysym2UCSHash)->put(var$691, $($Character::valueOf((char16_t)95)));
		$var($Object, var$692, $of($Long::valueOf((int64_t)3018)));
		$nc(XKeysym::keysym2UCSHash)->put(var$692, $($Character::valueOf((char16_t)8728)));
		$var($Object, var$693, $of($Long::valueOf((int64_t)3020)));
		$nc(XKeysym::keysym2UCSHash)->put(var$693, $($Character::valueOf((char16_t)9109)));
		$var($Object, var$694, $of($Long::valueOf((int64_t)3022)));
		$nc(XKeysym::keysym2UCSHash)->put(var$694, $($Character::valueOf((char16_t)8868)));
		$var($Object, var$695, $of($Long::valueOf((int64_t)3023)));
		$nc(XKeysym::keysym2UCSHash)->put(var$695, $($Character::valueOf((char16_t)9675)));
		$var($Object, var$696, $of($Long::valueOf((int64_t)3027)));
		$nc(XKeysym::keysym2UCSHash)->put(var$696, $($Character::valueOf((char16_t)8968)));
		$var($Object, var$697, $of($Long::valueOf((int64_t)3030)));
		$nc(XKeysym::keysym2UCSHash)->put(var$697, $($Character::valueOf((char16_t)8746)));
		$var($Object, var$698, $of($Long::valueOf((int64_t)3032)));
		$nc(XKeysym::keysym2UCSHash)->put(var$698, $($Character::valueOf((char16_t)8835)));
		$var($Object, var$699, $of($Long::valueOf((int64_t)3034)));
		$nc(XKeysym::keysym2UCSHash)->put(var$699, $($Character::valueOf((char16_t)8834)));
		$var($Object, var$700, $of($Long::valueOf((int64_t)3036)));
		$nc(XKeysym::keysym2UCSHash)->put(var$700, $($Character::valueOf((char16_t)8866)));
		$var($Object, var$701, $of($Long::valueOf((int64_t)3068)));
		$nc(XKeysym::keysym2UCSHash)->put(var$701, $($Character::valueOf((char16_t)8867)));
		$var($Object, var$702, $of($Long::valueOf((int64_t)3295)));
		$nc(XKeysym::keysym2UCSHash)->put(var$702, $($Character::valueOf((char16_t)8215)));
		$var($Object, var$703, $of($Long::valueOf((int64_t)3296)));
		$nc(XKeysym::keysym2UCSHash)->put(var$703, $($Character::valueOf((char16_t)1488)));
		$var($Object, var$704, $of($Long::valueOf((int64_t)3297)));
		$nc(XKeysym::keysym2UCSHash)->put(var$704, $($Character::valueOf((char16_t)1489)));
		$var($Object, var$705, $of($Long::valueOf((int64_t)3298)));
		$nc(XKeysym::keysym2UCSHash)->put(var$705, $($Character::valueOf((char16_t)1490)));
		$var($Object, var$706, $of($Long::valueOf((int64_t)3299)));
		$nc(XKeysym::keysym2UCSHash)->put(var$706, $($Character::valueOf((char16_t)1491)));
		$var($Object, var$707, $of($Long::valueOf((int64_t)3300)));
		$nc(XKeysym::keysym2UCSHash)->put(var$707, $($Character::valueOf((char16_t)1492)));
		$var($Object, var$708, $of($Long::valueOf((int64_t)3301)));
		$nc(XKeysym::keysym2UCSHash)->put(var$708, $($Character::valueOf((char16_t)1493)));
		$var($Object, var$709, $of($Long::valueOf((int64_t)3302)));
		$nc(XKeysym::keysym2UCSHash)->put(var$709, $($Character::valueOf((char16_t)1494)));
		$var($Object, var$710, $of($Long::valueOf((int64_t)3303)));
		$nc(XKeysym::keysym2UCSHash)->put(var$710, $($Character::valueOf((char16_t)1495)));
		$var($Object, var$711, $of($Long::valueOf((int64_t)3304)));
		$nc(XKeysym::keysym2UCSHash)->put(var$711, $($Character::valueOf((char16_t)1496)));
		$var($Object, var$712, $of($Long::valueOf((int64_t)3305)));
		$nc(XKeysym::keysym2UCSHash)->put(var$712, $($Character::valueOf((char16_t)1497)));
		$var($Object, var$713, $of($Long::valueOf((int64_t)3306)));
		$nc(XKeysym::keysym2UCSHash)->put(var$713, $($Character::valueOf((char16_t)1498)));
		$var($Object, var$714, $of($Long::valueOf((int64_t)3307)));
		$nc(XKeysym::keysym2UCSHash)->put(var$714, $($Character::valueOf((char16_t)1499)));
		$var($Object, var$715, $of($Long::valueOf((int64_t)3308)));
		$nc(XKeysym::keysym2UCSHash)->put(var$715, $($Character::valueOf((char16_t)1500)));
		$var($Object, var$716, $of($Long::valueOf((int64_t)3309)));
		$nc(XKeysym::keysym2UCSHash)->put(var$716, $($Character::valueOf((char16_t)1501)));
		$var($Object, var$717, $of($Long::valueOf((int64_t)3310)));
		$nc(XKeysym::keysym2UCSHash)->put(var$717, $($Character::valueOf((char16_t)1502)));
		$var($Object, var$718, $of($Long::valueOf((int64_t)3311)));
		$nc(XKeysym::keysym2UCSHash)->put(var$718, $($Character::valueOf((char16_t)1503)));
		$var($Object, var$719, $of($Long::valueOf((int64_t)3312)));
		$nc(XKeysym::keysym2UCSHash)->put(var$719, $($Character::valueOf((char16_t)1504)));
		$var($Object, var$720, $of($Long::valueOf((int64_t)3313)));
		$nc(XKeysym::keysym2UCSHash)->put(var$720, $($Character::valueOf((char16_t)1505)));
		$var($Object, var$721, $of($Long::valueOf((int64_t)3314)));
		$nc(XKeysym::keysym2UCSHash)->put(var$721, $($Character::valueOf((char16_t)1506)));
		$var($Object, var$722, $of($Long::valueOf((int64_t)3315)));
		$nc(XKeysym::keysym2UCSHash)->put(var$722, $($Character::valueOf((char16_t)1507)));
		$var($Object, var$723, $of($Long::valueOf((int64_t)3316)));
		$nc(XKeysym::keysym2UCSHash)->put(var$723, $($Character::valueOf((char16_t)1508)));
		$var($Object, var$724, $of($Long::valueOf((int64_t)3317)));
		$nc(XKeysym::keysym2UCSHash)->put(var$724, $($Character::valueOf((char16_t)1509)));
		$var($Object, var$725, $of($Long::valueOf((int64_t)3318)));
		$nc(XKeysym::keysym2UCSHash)->put(var$725, $($Character::valueOf((char16_t)1510)));
		$var($Object, var$726, $of($Long::valueOf((int64_t)3319)));
		$nc(XKeysym::keysym2UCSHash)->put(var$726, $($Character::valueOf((char16_t)1511)));
		$var($Object, var$727, $of($Long::valueOf((int64_t)3320)));
		$nc(XKeysym::keysym2UCSHash)->put(var$727, $($Character::valueOf((char16_t)1512)));
		$var($Object, var$728, $of($Long::valueOf((int64_t)3321)));
		$nc(XKeysym::keysym2UCSHash)->put(var$728, $($Character::valueOf((char16_t)1513)));
		$var($Object, var$729, $of($Long::valueOf((int64_t)3322)));
		$nc(XKeysym::keysym2UCSHash)->put(var$729, $($Character::valueOf((char16_t)1514)));
		$var($Object, var$730, $of($Long::valueOf((int64_t)3489)));
		$nc(XKeysym::keysym2UCSHash)->put(var$730, $($Character::valueOf((char16_t)3585)));
		$var($Object, var$731, $of($Long::valueOf((int64_t)3490)));
		$nc(XKeysym::keysym2UCSHash)->put(var$731, $($Character::valueOf((char16_t)3586)));
		$var($Object, var$732, $of($Long::valueOf((int64_t)3491)));
		$nc(XKeysym::keysym2UCSHash)->put(var$732, $($Character::valueOf((char16_t)3587)));
		$var($Object, var$733, $of($Long::valueOf((int64_t)3492)));
		$nc(XKeysym::keysym2UCSHash)->put(var$733, $($Character::valueOf((char16_t)3588)));
		$var($Object, var$734, $of($Long::valueOf((int64_t)3493)));
		$nc(XKeysym::keysym2UCSHash)->put(var$734, $($Character::valueOf((char16_t)3589)));
		$var($Object, var$735, $of($Long::valueOf((int64_t)3494)));
		$nc(XKeysym::keysym2UCSHash)->put(var$735, $($Character::valueOf((char16_t)3590)));
		$var($Object, var$736, $of($Long::valueOf((int64_t)3495)));
		$nc(XKeysym::keysym2UCSHash)->put(var$736, $($Character::valueOf((char16_t)3591)));
		$var($Object, var$737, $of($Long::valueOf((int64_t)3496)));
		$nc(XKeysym::keysym2UCSHash)->put(var$737, $($Character::valueOf((char16_t)3592)));
		$var($Object, var$738, $of($Long::valueOf((int64_t)3497)));
		$nc(XKeysym::keysym2UCSHash)->put(var$738, $($Character::valueOf((char16_t)3593)));
		$var($Object, var$739, $of($Long::valueOf((int64_t)3498)));
		$nc(XKeysym::keysym2UCSHash)->put(var$739, $($Character::valueOf((char16_t)3594)));
		$var($Object, var$740, $of($Long::valueOf((int64_t)3499)));
		$nc(XKeysym::keysym2UCSHash)->put(var$740, $($Character::valueOf((char16_t)3595)));
		$var($Object, var$741, $of($Long::valueOf((int64_t)3500)));
		$nc(XKeysym::keysym2UCSHash)->put(var$741, $($Character::valueOf((char16_t)3596)));
		$var($Object, var$742, $of($Long::valueOf((int64_t)3501)));
		$nc(XKeysym::keysym2UCSHash)->put(var$742, $($Character::valueOf((char16_t)3597)));
		$var($Object, var$743, $of($Long::valueOf((int64_t)3502)));
		$nc(XKeysym::keysym2UCSHash)->put(var$743, $($Character::valueOf((char16_t)3598)));
		$var($Object, var$744, $of($Long::valueOf((int64_t)3503)));
		$nc(XKeysym::keysym2UCSHash)->put(var$744, $($Character::valueOf((char16_t)3599)));
		$var($Object, var$745, $of($Long::valueOf((int64_t)3504)));
		$nc(XKeysym::keysym2UCSHash)->put(var$745, $($Character::valueOf((char16_t)3600)));
		$var($Object, var$746, $of($Long::valueOf((int64_t)3505)));
		$nc(XKeysym::keysym2UCSHash)->put(var$746, $($Character::valueOf((char16_t)3601)));
		$var($Object, var$747, $of($Long::valueOf((int64_t)3506)));
		$nc(XKeysym::keysym2UCSHash)->put(var$747, $($Character::valueOf((char16_t)3602)));
		$var($Object, var$748, $of($Long::valueOf((int64_t)3507)));
		$nc(XKeysym::keysym2UCSHash)->put(var$748, $($Character::valueOf((char16_t)3603)));
		$var($Object, var$749, $of($Long::valueOf((int64_t)3508)));
		$nc(XKeysym::keysym2UCSHash)->put(var$749, $($Character::valueOf((char16_t)3604)));
		$var($Object, var$750, $of($Long::valueOf((int64_t)3509)));
		$nc(XKeysym::keysym2UCSHash)->put(var$750, $($Character::valueOf((char16_t)3605)));
		$var($Object, var$751, $of($Long::valueOf((int64_t)3510)));
		$nc(XKeysym::keysym2UCSHash)->put(var$751, $($Character::valueOf((char16_t)3606)));
		$var($Object, var$752, $of($Long::valueOf((int64_t)3511)));
		$nc(XKeysym::keysym2UCSHash)->put(var$752, $($Character::valueOf((char16_t)3607)));
		$var($Object, var$753, $of($Long::valueOf((int64_t)3512)));
		$nc(XKeysym::keysym2UCSHash)->put(var$753, $($Character::valueOf((char16_t)3608)));
		$var($Object, var$754, $of($Long::valueOf((int64_t)3513)));
		$nc(XKeysym::keysym2UCSHash)->put(var$754, $($Character::valueOf((char16_t)3609)));
		$var($Object, var$755, $of($Long::valueOf((int64_t)3514)));
		$nc(XKeysym::keysym2UCSHash)->put(var$755, $($Character::valueOf((char16_t)3610)));
		$var($Object, var$756, $of($Long::valueOf((int64_t)3515)));
		$nc(XKeysym::keysym2UCSHash)->put(var$756, $($Character::valueOf((char16_t)3611)));
		$var($Object, var$757, $of($Long::valueOf((int64_t)3516)));
		$nc(XKeysym::keysym2UCSHash)->put(var$757, $($Character::valueOf((char16_t)3612)));
		$var($Object, var$758, $of($Long::valueOf((int64_t)3517)));
		$nc(XKeysym::keysym2UCSHash)->put(var$758, $($Character::valueOf((char16_t)3613)));
		$var($Object, var$759, $of($Long::valueOf((int64_t)3518)));
		$nc(XKeysym::keysym2UCSHash)->put(var$759, $($Character::valueOf((char16_t)3614)));
		$var($Object, var$760, $of($Long::valueOf((int64_t)3519)));
		$nc(XKeysym::keysym2UCSHash)->put(var$760, $($Character::valueOf((char16_t)3615)));
		$var($Object, var$761, $of($Long::valueOf((int64_t)3520)));
		$nc(XKeysym::keysym2UCSHash)->put(var$761, $($Character::valueOf((char16_t)3616)));
		$var($Object, var$762, $of($Long::valueOf((int64_t)3521)));
		$nc(XKeysym::keysym2UCSHash)->put(var$762, $($Character::valueOf((char16_t)3617)));
		$var($Object, var$763, $of($Long::valueOf((int64_t)3522)));
		$nc(XKeysym::keysym2UCSHash)->put(var$763, $($Character::valueOf((char16_t)3618)));
		$var($Object, var$764, $of($Long::valueOf((int64_t)3523)));
		$nc(XKeysym::keysym2UCSHash)->put(var$764, $($Character::valueOf((char16_t)3619)));
		$var($Object, var$765, $of($Long::valueOf((int64_t)3524)));
		$nc(XKeysym::keysym2UCSHash)->put(var$765, $($Character::valueOf((char16_t)3620)));
		$var($Object, var$766, $of($Long::valueOf((int64_t)3525)));
		$nc(XKeysym::keysym2UCSHash)->put(var$766, $($Character::valueOf((char16_t)3621)));
		$var($Object, var$767, $of($Long::valueOf((int64_t)3526)));
		$nc(XKeysym::keysym2UCSHash)->put(var$767, $($Character::valueOf((char16_t)3622)));
		$var($Object, var$768, $of($Long::valueOf((int64_t)3527)));
		$nc(XKeysym::keysym2UCSHash)->put(var$768, $($Character::valueOf((char16_t)3623)));
		$var($Object, var$769, $of($Long::valueOf((int64_t)3528)));
		$nc(XKeysym::keysym2UCSHash)->put(var$769, $($Character::valueOf((char16_t)3624)));
		$var($Object, var$770, $of($Long::valueOf((int64_t)3529)));
		$nc(XKeysym::keysym2UCSHash)->put(var$770, $($Character::valueOf((char16_t)3625)));
		$var($Object, var$771, $of($Long::valueOf((int64_t)3530)));
		$nc(XKeysym::keysym2UCSHash)->put(var$771, $($Character::valueOf((char16_t)3626)));
		$var($Object, var$772, $of($Long::valueOf((int64_t)3531)));
		$nc(XKeysym::keysym2UCSHash)->put(var$772, $($Character::valueOf((char16_t)3627)));
		$var($Object, var$773, $of($Long::valueOf((int64_t)3532)));
		$nc(XKeysym::keysym2UCSHash)->put(var$773, $($Character::valueOf((char16_t)3628)));
		$var($Object, var$774, $of($Long::valueOf((int64_t)3533)));
		$nc(XKeysym::keysym2UCSHash)->put(var$774, $($Character::valueOf((char16_t)3629)));
		$var($Object, var$775, $of($Long::valueOf((int64_t)3534)));
		$nc(XKeysym::keysym2UCSHash)->put(var$775, $($Character::valueOf((char16_t)3630)));
		$var($Object, var$776, $of($Long::valueOf((int64_t)3535)));
		$nc(XKeysym::keysym2UCSHash)->put(var$776, $($Character::valueOf((char16_t)3631)));
		$var($Object, var$777, $of($Long::valueOf((int64_t)3536)));
		$nc(XKeysym::keysym2UCSHash)->put(var$777, $($Character::valueOf((char16_t)3632)));
		$var($Object, var$778, $of($Long::valueOf((int64_t)3537)));
		$nc(XKeysym::keysym2UCSHash)->put(var$778, $($Character::valueOf((char16_t)3633)));
		$var($Object, var$779, $of($Long::valueOf((int64_t)3538)));
		$nc(XKeysym::keysym2UCSHash)->put(var$779, $($Character::valueOf((char16_t)3634)));
		$var($Object, var$780, $of($Long::valueOf((int64_t)3539)));
		$nc(XKeysym::keysym2UCSHash)->put(var$780, $($Character::valueOf((char16_t)3635)));
		$var($Object, var$781, $of($Long::valueOf((int64_t)3540)));
		$nc(XKeysym::keysym2UCSHash)->put(var$781, $($Character::valueOf((char16_t)3636)));
		$var($Object, var$782, $of($Long::valueOf((int64_t)3541)));
		$nc(XKeysym::keysym2UCSHash)->put(var$782, $($Character::valueOf((char16_t)3637)));
		$var($Object, var$783, $of($Long::valueOf((int64_t)3542)));
		$nc(XKeysym::keysym2UCSHash)->put(var$783, $($Character::valueOf((char16_t)3638)));
		$var($Object, var$784, $of($Long::valueOf((int64_t)3543)));
		$nc(XKeysym::keysym2UCSHash)->put(var$784, $($Character::valueOf((char16_t)3639)));
		$var($Object, var$785, $of($Long::valueOf((int64_t)3544)));
		$nc(XKeysym::keysym2UCSHash)->put(var$785, $($Character::valueOf((char16_t)3640)));
		$var($Object, var$786, $of($Long::valueOf((int64_t)3545)));
		$nc(XKeysym::keysym2UCSHash)->put(var$786, $($Character::valueOf((char16_t)3641)));
		$var($Object, var$787, $of($Long::valueOf((int64_t)3546)));
		$nc(XKeysym::keysym2UCSHash)->put(var$787, $($Character::valueOf((char16_t)3642)));
		$var($Object, var$788, $of($Long::valueOf((int64_t)3551)));
		$nc(XKeysym::keysym2UCSHash)->put(var$788, $($Character::valueOf((char16_t)3647)));
		$var($Object, var$789, $of($Long::valueOf((int64_t)3552)));
		$nc(XKeysym::keysym2UCSHash)->put(var$789, $($Character::valueOf((char16_t)3648)));
		$var($Object, var$790, $of($Long::valueOf((int64_t)3553)));
		$nc(XKeysym::keysym2UCSHash)->put(var$790, $($Character::valueOf((char16_t)3649)));
		$var($Object, var$791, $of($Long::valueOf((int64_t)3554)));
		$nc(XKeysym::keysym2UCSHash)->put(var$791, $($Character::valueOf((char16_t)3650)));
		$var($Object, var$792, $of($Long::valueOf((int64_t)3555)));
		$nc(XKeysym::keysym2UCSHash)->put(var$792, $($Character::valueOf((char16_t)3651)));
		$var($Object, var$793, $of($Long::valueOf((int64_t)3556)));
		$nc(XKeysym::keysym2UCSHash)->put(var$793, $($Character::valueOf((char16_t)3652)));
		$var($Object, var$794, $of($Long::valueOf((int64_t)3557)));
		$nc(XKeysym::keysym2UCSHash)->put(var$794, $($Character::valueOf((char16_t)3653)));
		$var($Object, var$795, $of($Long::valueOf((int64_t)3558)));
		$nc(XKeysym::keysym2UCSHash)->put(var$795, $($Character::valueOf((char16_t)3654)));
		$var($Object, var$796, $of($Long::valueOf((int64_t)3559)));
		$nc(XKeysym::keysym2UCSHash)->put(var$796, $($Character::valueOf((char16_t)3655)));
		$var($Object, var$797, $of($Long::valueOf((int64_t)3560)));
		$nc(XKeysym::keysym2UCSHash)->put(var$797, $($Character::valueOf((char16_t)3656)));
		$var($Object, var$798, $of($Long::valueOf((int64_t)3561)));
		$nc(XKeysym::keysym2UCSHash)->put(var$798, $($Character::valueOf((char16_t)3657)));
		$var($Object, var$799, $of($Long::valueOf((int64_t)3562)));
		$nc(XKeysym::keysym2UCSHash)->put(var$799, $($Character::valueOf((char16_t)3658)));
		$var($Object, var$800, $of($Long::valueOf((int64_t)3563)));
		$nc(XKeysym::keysym2UCSHash)->put(var$800, $($Character::valueOf((char16_t)3659)));
		$var($Object, var$801, $of($Long::valueOf((int64_t)3564)));
		$nc(XKeysym::keysym2UCSHash)->put(var$801, $($Character::valueOf((char16_t)3660)));
		$var($Object, var$802, $of($Long::valueOf((int64_t)3565)));
		$nc(XKeysym::keysym2UCSHash)->put(var$802, $($Character::valueOf((char16_t)3661)));
		$var($Object, var$803, $of($Long::valueOf((int64_t)3568)));
		$nc(XKeysym::keysym2UCSHash)->put(var$803, $($Character::valueOf((char16_t)3664)));
		$var($Object, var$804, $of($Long::valueOf((int64_t)3569)));
		$nc(XKeysym::keysym2UCSHash)->put(var$804, $($Character::valueOf((char16_t)3665)));
		$var($Object, var$805, $of($Long::valueOf((int64_t)3570)));
		$nc(XKeysym::keysym2UCSHash)->put(var$805, $($Character::valueOf((char16_t)3666)));
		$var($Object, var$806, $of($Long::valueOf((int64_t)3571)));
		$nc(XKeysym::keysym2UCSHash)->put(var$806, $($Character::valueOf((char16_t)3667)));
		$var($Object, var$807, $of($Long::valueOf((int64_t)3572)));
		$nc(XKeysym::keysym2UCSHash)->put(var$807, $($Character::valueOf((char16_t)3668)));
		$var($Object, var$808, $of($Long::valueOf((int64_t)3573)));
		$nc(XKeysym::keysym2UCSHash)->put(var$808, $($Character::valueOf((char16_t)3669)));
		$var($Object, var$809, $of($Long::valueOf((int64_t)3574)));
		$nc(XKeysym::keysym2UCSHash)->put(var$809, $($Character::valueOf((char16_t)3670)));
		$var($Object, var$810, $of($Long::valueOf((int64_t)3575)));
		$nc(XKeysym::keysym2UCSHash)->put(var$810, $($Character::valueOf((char16_t)3671)));
		$var($Object, var$811, $of($Long::valueOf((int64_t)3576)));
		$nc(XKeysym::keysym2UCSHash)->put(var$811, $($Character::valueOf((char16_t)3672)));
		$var($Object, var$812, $of($Long::valueOf((int64_t)3577)));
		$nc(XKeysym::keysym2UCSHash)->put(var$812, $($Character::valueOf((char16_t)3673)));
		$var($Object, var$813, $of($Long::valueOf((int64_t)3745)));
		$nc(XKeysym::keysym2UCSHash)->put(var$813, $($Character::valueOf((char16_t)12593)));
		$var($Object, var$814, $of($Long::valueOf((int64_t)3746)));
		$nc(XKeysym::keysym2UCSHash)->put(var$814, $($Character::valueOf((char16_t)12594)));
		$var($Object, var$815, $of($Long::valueOf((int64_t)3747)));
		$nc(XKeysym::keysym2UCSHash)->put(var$815, $($Character::valueOf((char16_t)12595)));
		$var($Object, var$816, $of($Long::valueOf((int64_t)3748)));
		$nc(XKeysym::keysym2UCSHash)->put(var$816, $($Character::valueOf((char16_t)12596)));
		$var($Object, var$817, $of($Long::valueOf((int64_t)3749)));
		$nc(XKeysym::keysym2UCSHash)->put(var$817, $($Character::valueOf((char16_t)12597)));
		$var($Object, var$818, $of($Long::valueOf((int64_t)3750)));
		$nc(XKeysym::keysym2UCSHash)->put(var$818, $($Character::valueOf((char16_t)12598)));
		$var($Object, var$819, $of($Long::valueOf((int64_t)3751)));
		$nc(XKeysym::keysym2UCSHash)->put(var$819, $($Character::valueOf((char16_t)12599)));
		$var($Object, var$820, $of($Long::valueOf((int64_t)3752)));
		$nc(XKeysym::keysym2UCSHash)->put(var$820, $($Character::valueOf((char16_t)12600)));
		$var($Object, var$821, $of($Long::valueOf((int64_t)3753)));
		$nc(XKeysym::keysym2UCSHash)->put(var$821, $($Character::valueOf((char16_t)12601)));
		$var($Object, var$822, $of($Long::valueOf((int64_t)3754)));
		$nc(XKeysym::keysym2UCSHash)->put(var$822, $($Character::valueOf((char16_t)12602)));
		$var($Object, var$823, $of($Long::valueOf((int64_t)3755)));
		$nc(XKeysym::keysym2UCSHash)->put(var$823, $($Character::valueOf((char16_t)12603)));
		$var($Object, var$824, $of($Long::valueOf((int64_t)3756)));
		$nc(XKeysym::keysym2UCSHash)->put(var$824, $($Character::valueOf((char16_t)12604)));
		$var($Object, var$825, $of($Long::valueOf((int64_t)3757)));
		$nc(XKeysym::keysym2UCSHash)->put(var$825, $($Character::valueOf((char16_t)12605)));
		$var($Object, var$826, $of($Long::valueOf((int64_t)3758)));
		$nc(XKeysym::keysym2UCSHash)->put(var$826, $($Character::valueOf((char16_t)12606)));
		$var($Object, var$827, $of($Long::valueOf((int64_t)3759)));
		$nc(XKeysym::keysym2UCSHash)->put(var$827, $($Character::valueOf((char16_t)12607)));
		$var($Object, var$828, $of($Long::valueOf((int64_t)3760)));
		$nc(XKeysym::keysym2UCSHash)->put(var$828, $($Character::valueOf((char16_t)12608)));
		$var($Object, var$829, $of($Long::valueOf((int64_t)3761)));
		$nc(XKeysym::keysym2UCSHash)->put(var$829, $($Character::valueOf((char16_t)12609)));
		$var($Object, var$830, $of($Long::valueOf((int64_t)3762)));
		$nc(XKeysym::keysym2UCSHash)->put(var$830, $($Character::valueOf((char16_t)12610)));
		$var($Object, var$831, $of($Long::valueOf((int64_t)3763)));
		$nc(XKeysym::keysym2UCSHash)->put(var$831, $($Character::valueOf((char16_t)12611)));
		$var($Object, var$832, $of($Long::valueOf((int64_t)3764)));
		$nc(XKeysym::keysym2UCSHash)->put(var$832, $($Character::valueOf((char16_t)12612)));
		$var($Object, var$833, $of($Long::valueOf((int64_t)3765)));
		$nc(XKeysym::keysym2UCSHash)->put(var$833, $($Character::valueOf((char16_t)12613)));
		$var($Object, var$834, $of($Long::valueOf((int64_t)3766)));
		$nc(XKeysym::keysym2UCSHash)->put(var$834, $($Character::valueOf((char16_t)12614)));
		$var($Object, var$835, $of($Long::valueOf((int64_t)3767)));
		$nc(XKeysym::keysym2UCSHash)->put(var$835, $($Character::valueOf((char16_t)12615)));
		$var($Object, var$836, $of($Long::valueOf((int64_t)3768)));
		$nc(XKeysym::keysym2UCSHash)->put(var$836, $($Character::valueOf((char16_t)12616)));
		$var($Object, var$837, $of($Long::valueOf((int64_t)3769)));
		$nc(XKeysym::keysym2UCSHash)->put(var$837, $($Character::valueOf((char16_t)12617)));
		$var($Object, var$838, $of($Long::valueOf((int64_t)3770)));
		$nc(XKeysym::keysym2UCSHash)->put(var$838, $($Character::valueOf((char16_t)12618)));
		$var($Object, var$839, $of($Long::valueOf((int64_t)3771)));
		$nc(XKeysym::keysym2UCSHash)->put(var$839, $($Character::valueOf((char16_t)12619)));
		$var($Object, var$840, $of($Long::valueOf((int64_t)3772)));
		$nc(XKeysym::keysym2UCSHash)->put(var$840, $($Character::valueOf((char16_t)12620)));
		$var($Object, var$841, $of($Long::valueOf((int64_t)3773)));
		$nc(XKeysym::keysym2UCSHash)->put(var$841, $($Character::valueOf((char16_t)12621)));
		$var($Object, var$842, $of($Long::valueOf((int64_t)3774)));
		$nc(XKeysym::keysym2UCSHash)->put(var$842, $($Character::valueOf((char16_t)12622)));
		$var($Object, var$843, $of($Long::valueOf((int64_t)3775)));
		$nc(XKeysym::keysym2UCSHash)->put(var$843, $($Character::valueOf((char16_t)12623)));
		$var($Object, var$844, $of($Long::valueOf((int64_t)3776)));
		$nc(XKeysym::keysym2UCSHash)->put(var$844, $($Character::valueOf((char16_t)12624)));
		$var($Object, var$845, $of($Long::valueOf((int64_t)3777)));
		$nc(XKeysym::keysym2UCSHash)->put(var$845, $($Character::valueOf((char16_t)12625)));
		$var($Object, var$846, $of($Long::valueOf((int64_t)3778)));
		$nc(XKeysym::keysym2UCSHash)->put(var$846, $($Character::valueOf((char16_t)12626)));
		$var($Object, var$847, $of($Long::valueOf((int64_t)3779)));
		$nc(XKeysym::keysym2UCSHash)->put(var$847, $($Character::valueOf((char16_t)12627)));
		$var($Object, var$848, $of($Long::valueOf((int64_t)3780)));
		$nc(XKeysym::keysym2UCSHash)->put(var$848, $($Character::valueOf((char16_t)12628)));
		$var($Object, var$849, $of($Long::valueOf((int64_t)3781)));
		$nc(XKeysym::keysym2UCSHash)->put(var$849, $($Character::valueOf((char16_t)12629)));
		$var($Object, var$850, $of($Long::valueOf((int64_t)3782)));
		$nc(XKeysym::keysym2UCSHash)->put(var$850, $($Character::valueOf((char16_t)12630)));
		$var($Object, var$851, $of($Long::valueOf((int64_t)3783)));
		$nc(XKeysym::keysym2UCSHash)->put(var$851, $($Character::valueOf((char16_t)12631)));
		$var($Object, var$852, $of($Long::valueOf((int64_t)3784)));
		$nc(XKeysym::keysym2UCSHash)->put(var$852, $($Character::valueOf((char16_t)12632)));
		$var($Object, var$853, $of($Long::valueOf((int64_t)3785)));
		$nc(XKeysym::keysym2UCSHash)->put(var$853, $($Character::valueOf((char16_t)12633)));
		$var($Object, var$854, $of($Long::valueOf((int64_t)3786)));
		$nc(XKeysym::keysym2UCSHash)->put(var$854, $($Character::valueOf((char16_t)12634)));
		$var($Object, var$855, $of($Long::valueOf((int64_t)3787)));
		$nc(XKeysym::keysym2UCSHash)->put(var$855, $($Character::valueOf((char16_t)12635)));
		$var($Object, var$856, $of($Long::valueOf((int64_t)3788)));
		$nc(XKeysym::keysym2UCSHash)->put(var$856, $($Character::valueOf((char16_t)12636)));
		$var($Object, var$857, $of($Long::valueOf((int64_t)3789)));
		$nc(XKeysym::keysym2UCSHash)->put(var$857, $($Character::valueOf((char16_t)12637)));
		$var($Object, var$858, $of($Long::valueOf((int64_t)3790)));
		$nc(XKeysym::keysym2UCSHash)->put(var$858, $($Character::valueOf((char16_t)12638)));
		$var($Object, var$859, $of($Long::valueOf((int64_t)3791)));
		$nc(XKeysym::keysym2UCSHash)->put(var$859, $($Character::valueOf((char16_t)12639)));
		$var($Object, var$860, $of($Long::valueOf((int64_t)3792)));
		$nc(XKeysym::keysym2UCSHash)->put(var$860, $($Character::valueOf((char16_t)12640)));
		$var($Object, var$861, $of($Long::valueOf((int64_t)3793)));
		$nc(XKeysym::keysym2UCSHash)->put(var$861, $($Character::valueOf((char16_t)12641)));
		$var($Object, var$862, $of($Long::valueOf((int64_t)3794)));
		$nc(XKeysym::keysym2UCSHash)->put(var$862, $($Character::valueOf((char16_t)12642)));
		$var($Object, var$863, $of($Long::valueOf((int64_t)3795)));
		$nc(XKeysym::keysym2UCSHash)->put(var$863, $($Character::valueOf((char16_t)12643)));
		$var($Object, var$864, $of($Long::valueOf((int64_t)3796)));
		$nc(XKeysym::keysym2UCSHash)->put(var$864, $($Character::valueOf((char16_t)4520)));
		$var($Object, var$865, $of($Long::valueOf((int64_t)3797)));
		$nc(XKeysym::keysym2UCSHash)->put(var$865, $($Character::valueOf((char16_t)4521)));
		$var($Object, var$866, $of($Long::valueOf((int64_t)3798)));
		$nc(XKeysym::keysym2UCSHash)->put(var$866, $($Character::valueOf((char16_t)4522)));
		$var($Object, var$867, $of($Long::valueOf((int64_t)3799)));
		$nc(XKeysym::keysym2UCSHash)->put(var$867, $($Character::valueOf((char16_t)4523)));
		$var($Object, var$868, $of($Long::valueOf((int64_t)3800)));
		$nc(XKeysym::keysym2UCSHash)->put(var$868, $($Character::valueOf((char16_t)4524)));
		$var($Object, var$869, $of($Long::valueOf((int64_t)3801)));
		$nc(XKeysym::keysym2UCSHash)->put(var$869, $($Character::valueOf((char16_t)4525)));
		$var($Object, var$870, $of($Long::valueOf((int64_t)3802)));
		$nc(XKeysym::keysym2UCSHash)->put(var$870, $($Character::valueOf((char16_t)4526)));
		$var($Object, var$871, $of($Long::valueOf((int64_t)3803)));
		$nc(XKeysym::keysym2UCSHash)->put(var$871, $($Character::valueOf((char16_t)4527)));
		$var($Object, var$872, $of($Long::valueOf((int64_t)3804)));
		$nc(XKeysym::keysym2UCSHash)->put(var$872, $($Character::valueOf((char16_t)4528)));
		$var($Object, var$873, $of($Long::valueOf((int64_t)3805)));
		$nc(XKeysym::keysym2UCSHash)->put(var$873, $($Character::valueOf((char16_t)4529)));
		$var($Object, var$874, $of($Long::valueOf((int64_t)3806)));
		$nc(XKeysym::keysym2UCSHash)->put(var$874, $($Character::valueOf((char16_t)4530)));
		$var($Object, var$875, $of($Long::valueOf((int64_t)3807)));
		$nc(XKeysym::keysym2UCSHash)->put(var$875, $($Character::valueOf((char16_t)4531)));
		$var($Object, var$876, $of($Long::valueOf((int64_t)3808)));
		$nc(XKeysym::keysym2UCSHash)->put(var$876, $($Character::valueOf((char16_t)4532)));
		$var($Object, var$877, $of($Long::valueOf((int64_t)3809)));
		$nc(XKeysym::keysym2UCSHash)->put(var$877, $($Character::valueOf((char16_t)4533)));
		$var($Object, var$878, $of($Long::valueOf((int64_t)3810)));
		$nc(XKeysym::keysym2UCSHash)->put(var$878, $($Character::valueOf((char16_t)4534)));
		$var($Object, var$879, $of($Long::valueOf((int64_t)3811)));
		$nc(XKeysym::keysym2UCSHash)->put(var$879, $($Character::valueOf((char16_t)4535)));
		$var($Object, var$880, $of($Long::valueOf((int64_t)3812)));
		$nc(XKeysym::keysym2UCSHash)->put(var$880, $($Character::valueOf((char16_t)4536)));
		$var($Object, var$881, $of($Long::valueOf((int64_t)3813)));
		$nc(XKeysym::keysym2UCSHash)->put(var$881, $($Character::valueOf((char16_t)4537)));
		$var($Object, var$882, $of($Long::valueOf((int64_t)3814)));
		$nc(XKeysym::keysym2UCSHash)->put(var$882, $($Character::valueOf((char16_t)4538)));
		$var($Object, var$883, $of($Long::valueOf((int64_t)3815)));
		$nc(XKeysym::keysym2UCSHash)->put(var$883, $($Character::valueOf((char16_t)4539)));
		$var($Object, var$884, $of($Long::valueOf((int64_t)3816)));
		$nc(XKeysym::keysym2UCSHash)->put(var$884, $($Character::valueOf((char16_t)4540)));
		$var($Object, var$885, $of($Long::valueOf((int64_t)3817)));
		$nc(XKeysym::keysym2UCSHash)->put(var$885, $($Character::valueOf((char16_t)4541)));
		$var($Object, var$886, $of($Long::valueOf((int64_t)3818)));
		$nc(XKeysym::keysym2UCSHash)->put(var$886, $($Character::valueOf((char16_t)4542)));
		$var($Object, var$887, $of($Long::valueOf((int64_t)3819)));
		$nc(XKeysym::keysym2UCSHash)->put(var$887, $($Character::valueOf((char16_t)4543)));
		$var($Object, var$888, $of($Long::valueOf((int64_t)3820)));
		$nc(XKeysym::keysym2UCSHash)->put(var$888, $($Character::valueOf((char16_t)4544)));
		$var($Object, var$889, $of($Long::valueOf((int64_t)3821)));
		$nc(XKeysym::keysym2UCSHash)->put(var$889, $($Character::valueOf((char16_t)4545)));
		$var($Object, var$890, $of($Long::valueOf((int64_t)3822)));
		$nc(XKeysym::keysym2UCSHash)->put(var$890, $($Character::valueOf((char16_t)4546)));
		$var($Object, var$891, $of($Long::valueOf((int64_t)3823)));
		$nc(XKeysym::keysym2UCSHash)->put(var$891, $($Character::valueOf((char16_t)12653)));
		$var($Object, var$892, $of($Long::valueOf((int64_t)3824)));
		$nc(XKeysym::keysym2UCSHash)->put(var$892, $($Character::valueOf((char16_t)12657)));
		$var($Object, var$893, $of($Long::valueOf((int64_t)3825)));
		$nc(XKeysym::keysym2UCSHash)->put(var$893, $($Character::valueOf((char16_t)12664)));
		$var($Object, var$894, $of($Long::valueOf((int64_t)3826)));
		$nc(XKeysym::keysym2UCSHash)->put(var$894, $($Character::valueOf((char16_t)12671)));
		$var($Object, var$895, $of($Long::valueOf((int64_t)3827)));
		$nc(XKeysym::keysym2UCSHash)->put(var$895, $($Character::valueOf((char16_t)12673)));
		$var($Object, var$896, $of($Long::valueOf((int64_t)3828)));
		$nc(XKeysym::keysym2UCSHash)->put(var$896, $($Character::valueOf((char16_t)12676)));
		$var($Object, var$897, $of($Long::valueOf((int64_t)3829)));
		$nc(XKeysym::keysym2UCSHash)->put(var$897, $($Character::valueOf((char16_t)12678)));
		$var($Object, var$898, $of($Long::valueOf((int64_t)3830)));
		$nc(XKeysym::keysym2UCSHash)->put(var$898, $($Character::valueOf((char16_t)12685)));
		$var($Object, var$899, $of($Long::valueOf((int64_t)3831)));
		$nc(XKeysym::keysym2UCSHash)->put(var$899, $($Character::valueOf((char16_t)12686)));
		$var($Object, var$900, $of($Long::valueOf((int64_t)3832)));
		$nc(XKeysym::keysym2UCSHash)->put(var$900, $($Character::valueOf((char16_t)4587)));
		$var($Object, var$901, $of($Long::valueOf((int64_t)3833)));
		$nc(XKeysym::keysym2UCSHash)->put(var$901, $($Character::valueOf((char16_t)4592)));
		$var($Object, var$902, $of($Long::valueOf((int64_t)3834)));
		$nc(XKeysym::keysym2UCSHash)->put(var$902, $($Character::valueOf((char16_t)4601)));
		$var($Object, var$903, $of($Long::valueOf((int64_t)3839)));
		$nc(XKeysym::keysym2UCSHash)->put(var$903, $($Character::valueOf((char16_t)8361)));
		$var($Object, var$904, $of($Long::valueOf((int64_t)5795)));
		$nc(XKeysym::keysym2UCSHash)->put(var$904, $($Character::valueOf((char16_t)7818)));
		$var($Object, var$905, $of($Long::valueOf((int64_t)5798)));
		$nc(XKeysym::keysym2UCSHash)->put(var$905, $($Character::valueOf((char16_t)300)));
		$var($Object, var$906, $of($Long::valueOf((int64_t)5801)));
		$nc(XKeysym::keysym2UCSHash)->put(var$906, $($Character::valueOf((char16_t)437)));
		$var($Object, var$907, $of($Long::valueOf((int64_t)5802)));
		$nc(XKeysym::keysym2UCSHash)->put(var$907, $($Character::valueOf((char16_t)486)));
		$var($Object, var$908, $of($Long::valueOf((int64_t)5807)));
		$nc(XKeysym::keysym2UCSHash)->put(var$908, $($Character::valueOf((char16_t)415)));
		$var($Object, var$909, $of($Long::valueOf((int64_t)5811)));
		$nc(XKeysym::keysym2UCSHash)->put(var$909, $($Character::valueOf((char16_t)7819)));
		$var($Object, var$910, $of($Long::valueOf((int64_t)5814)));
		$nc(XKeysym::keysym2UCSHash)->put(var$910, $($Character::valueOf((char16_t)301)));
		$var($Object, var$911, $of($Long::valueOf((int64_t)5817)));
		$nc(XKeysym::keysym2UCSHash)->put(var$911, $($Character::valueOf((char16_t)438)));
		$var($Object, var$912, $of($Long::valueOf((int64_t)5818)));
		$nc(XKeysym::keysym2UCSHash)->put(var$912, $($Character::valueOf((char16_t)487)));
		$var($Object, var$913, $of($Long::valueOf((int64_t)5821)));
		$nc(XKeysym::keysym2UCSHash)->put(var$913, $($Character::valueOf((char16_t)466)));
		$var($Object, var$914, $of($Long::valueOf((int64_t)5823)));
		$nc(XKeysym::keysym2UCSHash)->put(var$914, $($Character::valueOf((char16_t)629)));
		$var($Object, var$915, $of($Long::valueOf((int64_t)5830)));
		$nc(XKeysym::keysym2UCSHash)->put(var$915, $($Character::valueOf((char16_t)399)));
		$var($Object, var$916, $of($Long::valueOf((int64_t)5878)));
		$nc(XKeysym::keysym2UCSHash)->put(var$916, $($Character::valueOf((char16_t)601)));
		$var($Object, var$917, $of($Long::valueOf((int64_t)7840)));
		$nc(XKeysym::keysym2UCSHash)->put(var$917, $($Character::valueOf((char16_t)7840)));
		$var($Object, var$918, $of($Long::valueOf((int64_t)7841)));
		$nc(XKeysym::keysym2UCSHash)->put(var$918, $($Character::valueOf((char16_t)7841)));
		$var($Object, var$919, $of($Long::valueOf((int64_t)7842)));
		$nc(XKeysym::keysym2UCSHash)->put(var$919, $($Character::valueOf((char16_t)7842)));
		$var($Object, var$920, $of($Long::valueOf((int64_t)7843)));
		$nc(XKeysym::keysym2UCSHash)->put(var$920, $($Character::valueOf((char16_t)7843)));
		$var($Object, var$921, $of($Long::valueOf((int64_t)7844)));
		$nc(XKeysym::keysym2UCSHash)->put(var$921, $($Character::valueOf((char16_t)7844)));
		$var($Object, var$922, $of($Long::valueOf((int64_t)7845)));
		$nc(XKeysym::keysym2UCSHash)->put(var$922, $($Character::valueOf((char16_t)7845)));
		$var($Object, var$923, $of($Long::valueOf((int64_t)7846)));
		$nc(XKeysym::keysym2UCSHash)->put(var$923, $($Character::valueOf((char16_t)7846)));
		$var($Object, var$924, $of($Long::valueOf((int64_t)7847)));
		$nc(XKeysym::keysym2UCSHash)->put(var$924, $($Character::valueOf((char16_t)7847)));
		$var($Object, var$925, $of($Long::valueOf((int64_t)7848)));
		$nc(XKeysym::keysym2UCSHash)->put(var$925, $($Character::valueOf((char16_t)7848)));
		$var($Object, var$926, $of($Long::valueOf((int64_t)7849)));
		$nc(XKeysym::keysym2UCSHash)->put(var$926, $($Character::valueOf((char16_t)7849)));
		$var($Object, var$927, $of($Long::valueOf((int64_t)7850)));
		$nc(XKeysym::keysym2UCSHash)->put(var$927, $($Character::valueOf((char16_t)7850)));
		$var($Object, var$928, $of($Long::valueOf((int64_t)7851)));
		$nc(XKeysym::keysym2UCSHash)->put(var$928, $($Character::valueOf((char16_t)7851)));
		$var($Object, var$929, $of($Long::valueOf((int64_t)7852)));
		$nc(XKeysym::keysym2UCSHash)->put(var$929, $($Character::valueOf((char16_t)7852)));
		$var($Object, var$930, $of($Long::valueOf((int64_t)7853)));
		$nc(XKeysym::keysym2UCSHash)->put(var$930, $($Character::valueOf((char16_t)7853)));
		$var($Object, var$931, $of($Long::valueOf((int64_t)7854)));
		$nc(XKeysym::keysym2UCSHash)->put(var$931, $($Character::valueOf((char16_t)7854)));
		$var($Object, var$932, $of($Long::valueOf((int64_t)7855)));
		$nc(XKeysym::keysym2UCSHash)->put(var$932, $($Character::valueOf((char16_t)7855)));
		$var($Object, var$933, $of($Long::valueOf((int64_t)7856)));
		$nc(XKeysym::keysym2UCSHash)->put(var$933, $($Character::valueOf((char16_t)7856)));
		$var($Object, var$934, $of($Long::valueOf((int64_t)7857)));
		$nc(XKeysym::keysym2UCSHash)->put(var$934, $($Character::valueOf((char16_t)7857)));
		$var($Object, var$935, $of($Long::valueOf((int64_t)7858)));
		$nc(XKeysym::keysym2UCSHash)->put(var$935, $($Character::valueOf((char16_t)7858)));
		$var($Object, var$936, $of($Long::valueOf((int64_t)7859)));
		$nc(XKeysym::keysym2UCSHash)->put(var$936, $($Character::valueOf((char16_t)7859)));
		$var($Object, var$937, $of($Long::valueOf((int64_t)7860)));
		$nc(XKeysym::keysym2UCSHash)->put(var$937, $($Character::valueOf((char16_t)7860)));
		$var($Object, var$938, $of($Long::valueOf((int64_t)7861)));
		$nc(XKeysym::keysym2UCSHash)->put(var$938, $($Character::valueOf((char16_t)7861)));
		$var($Object, var$939, $of($Long::valueOf((int64_t)7862)));
		$nc(XKeysym::keysym2UCSHash)->put(var$939, $($Character::valueOf((char16_t)7862)));
		$var($Object, var$940, $of($Long::valueOf((int64_t)7863)));
		$nc(XKeysym::keysym2UCSHash)->put(var$940, $($Character::valueOf((char16_t)7863)));
		$var($Object, var$941, $of($Long::valueOf((int64_t)7864)));
		$nc(XKeysym::keysym2UCSHash)->put(var$941, $($Character::valueOf((char16_t)7864)));
		$var($Object, var$942, $of($Long::valueOf((int64_t)7865)));
		$nc(XKeysym::keysym2UCSHash)->put(var$942, $($Character::valueOf((char16_t)7865)));
		$var($Object, var$943, $of($Long::valueOf((int64_t)7866)));
		$nc(XKeysym::keysym2UCSHash)->put(var$943, $($Character::valueOf((char16_t)7866)));
		$var($Object, var$944, $of($Long::valueOf((int64_t)7867)));
		$nc(XKeysym::keysym2UCSHash)->put(var$944, $($Character::valueOf((char16_t)7867)));
		$var($Object, var$945, $of($Long::valueOf((int64_t)7868)));
		$nc(XKeysym::keysym2UCSHash)->put(var$945, $($Character::valueOf((char16_t)7868)));
		$var($Object, var$946, $of($Long::valueOf((int64_t)7869)));
		$nc(XKeysym::keysym2UCSHash)->put(var$946, $($Character::valueOf((char16_t)7869)));
		$var($Object, var$947, $of($Long::valueOf((int64_t)7870)));
		$nc(XKeysym::keysym2UCSHash)->put(var$947, $($Character::valueOf((char16_t)7870)));
		$var($Object, var$948, $of($Long::valueOf((int64_t)7871)));
		$nc(XKeysym::keysym2UCSHash)->put(var$948, $($Character::valueOf((char16_t)7871)));
		$var($Object, var$949, $of($Long::valueOf((int64_t)7872)));
		$nc(XKeysym::keysym2UCSHash)->put(var$949, $($Character::valueOf((char16_t)7872)));
		$var($Object, var$950, $of($Long::valueOf((int64_t)7873)));
		$nc(XKeysym::keysym2UCSHash)->put(var$950, $($Character::valueOf((char16_t)7873)));
		$var($Object, var$951, $of($Long::valueOf((int64_t)7874)));
		$nc(XKeysym::keysym2UCSHash)->put(var$951, $($Character::valueOf((char16_t)7874)));
		$var($Object, var$952, $of($Long::valueOf((int64_t)7875)));
		$nc(XKeysym::keysym2UCSHash)->put(var$952, $($Character::valueOf((char16_t)7875)));
		$var($Object, var$953, $of($Long::valueOf((int64_t)7876)));
		$nc(XKeysym::keysym2UCSHash)->put(var$953, $($Character::valueOf((char16_t)7876)));
		$var($Object, var$954, $of($Long::valueOf((int64_t)7877)));
		$nc(XKeysym::keysym2UCSHash)->put(var$954, $($Character::valueOf((char16_t)7877)));
		$var($Object, var$955, $of($Long::valueOf((int64_t)7878)));
		$nc(XKeysym::keysym2UCSHash)->put(var$955, $($Character::valueOf((char16_t)7878)));
		$var($Object, var$956, $of($Long::valueOf((int64_t)7879)));
		$nc(XKeysym::keysym2UCSHash)->put(var$956, $($Character::valueOf((char16_t)7879)));
		$var($Object, var$957, $of($Long::valueOf((int64_t)7880)));
		$nc(XKeysym::keysym2UCSHash)->put(var$957, $($Character::valueOf((char16_t)7880)));
		$var($Object, var$958, $of($Long::valueOf((int64_t)7881)));
		$nc(XKeysym::keysym2UCSHash)->put(var$958, $($Character::valueOf((char16_t)7881)));
		$var($Object, var$959, $of($Long::valueOf((int64_t)7882)));
		$nc(XKeysym::keysym2UCSHash)->put(var$959, $($Character::valueOf((char16_t)7882)));
		$var($Object, var$960, $of($Long::valueOf((int64_t)7883)));
		$nc(XKeysym::keysym2UCSHash)->put(var$960, $($Character::valueOf((char16_t)7883)));
		$var($Object, var$961, $of($Long::valueOf((int64_t)7884)));
		$nc(XKeysym::keysym2UCSHash)->put(var$961, $($Character::valueOf((char16_t)7884)));
		$var($Object, var$962, $of($Long::valueOf((int64_t)7885)));
		$nc(XKeysym::keysym2UCSHash)->put(var$962, $($Character::valueOf((char16_t)7885)));
		$var($Object, var$963, $of($Long::valueOf((int64_t)7886)));
		$nc(XKeysym::keysym2UCSHash)->put(var$963, $($Character::valueOf((char16_t)7886)));
		$var($Object, var$964, $of($Long::valueOf((int64_t)7887)));
		$nc(XKeysym::keysym2UCSHash)->put(var$964, $($Character::valueOf((char16_t)7887)));
		$var($Object, var$965, $of($Long::valueOf((int64_t)7888)));
		$nc(XKeysym::keysym2UCSHash)->put(var$965, $($Character::valueOf((char16_t)7888)));
		$var($Object, var$966, $of($Long::valueOf((int64_t)7889)));
		$nc(XKeysym::keysym2UCSHash)->put(var$966, $($Character::valueOf((char16_t)7889)));
		$var($Object, var$967, $of($Long::valueOf((int64_t)7890)));
		$nc(XKeysym::keysym2UCSHash)->put(var$967, $($Character::valueOf((char16_t)7890)));
		$var($Object, var$968, $of($Long::valueOf((int64_t)7891)));
		$nc(XKeysym::keysym2UCSHash)->put(var$968, $($Character::valueOf((char16_t)7891)));
		$var($Object, var$969, $of($Long::valueOf((int64_t)7892)));
		$nc(XKeysym::keysym2UCSHash)->put(var$969, $($Character::valueOf((char16_t)7892)));
		$var($Object, var$970, $of($Long::valueOf((int64_t)7893)));
		$nc(XKeysym::keysym2UCSHash)->put(var$970, $($Character::valueOf((char16_t)7893)));
		$var($Object, var$971, $of($Long::valueOf((int64_t)7894)));
		$nc(XKeysym::keysym2UCSHash)->put(var$971, $($Character::valueOf((char16_t)7894)));
		$var($Object, var$972, $of($Long::valueOf((int64_t)7895)));
		$nc(XKeysym::keysym2UCSHash)->put(var$972, $($Character::valueOf((char16_t)7895)));
		$var($Object, var$973, $of($Long::valueOf((int64_t)7896)));
		$nc(XKeysym::keysym2UCSHash)->put(var$973, $($Character::valueOf((char16_t)7896)));
		$var($Object, var$974, $of($Long::valueOf((int64_t)7897)));
		$nc(XKeysym::keysym2UCSHash)->put(var$974, $($Character::valueOf((char16_t)7897)));
		$var($Object, var$975, $of($Long::valueOf((int64_t)7898)));
		$nc(XKeysym::keysym2UCSHash)->put(var$975, $($Character::valueOf((char16_t)7898)));
		$var($Object, var$976, $of($Long::valueOf((int64_t)7899)));
		$nc(XKeysym::keysym2UCSHash)->put(var$976, $($Character::valueOf((char16_t)7899)));
		$var($Object, var$977, $of($Long::valueOf((int64_t)7900)));
		$nc(XKeysym::keysym2UCSHash)->put(var$977, $($Character::valueOf((char16_t)7900)));
		$var($Object, var$978, $of($Long::valueOf((int64_t)7901)));
		$nc(XKeysym::keysym2UCSHash)->put(var$978, $($Character::valueOf((char16_t)7901)));
		$var($Object, var$979, $of($Long::valueOf((int64_t)7902)));
		$nc(XKeysym::keysym2UCSHash)->put(var$979, $($Character::valueOf((char16_t)7902)));
		$var($Object, var$980, $of($Long::valueOf((int64_t)7903)));
		$nc(XKeysym::keysym2UCSHash)->put(var$980, $($Character::valueOf((char16_t)7903)));
		$var($Object, var$981, $of($Long::valueOf((int64_t)7904)));
		$nc(XKeysym::keysym2UCSHash)->put(var$981, $($Character::valueOf((char16_t)7904)));
		$var($Object, var$982, $of($Long::valueOf((int64_t)7905)));
		$nc(XKeysym::keysym2UCSHash)->put(var$982, $($Character::valueOf((char16_t)7905)));
		$var($Object, var$983, $of($Long::valueOf((int64_t)7906)));
		$nc(XKeysym::keysym2UCSHash)->put(var$983, $($Character::valueOf((char16_t)7906)));
		$var($Object, var$984, $of($Long::valueOf((int64_t)7907)));
		$nc(XKeysym::keysym2UCSHash)->put(var$984, $($Character::valueOf((char16_t)7907)));
		$var($Object, var$985, $of($Long::valueOf((int64_t)7908)));
		$nc(XKeysym::keysym2UCSHash)->put(var$985, $($Character::valueOf((char16_t)7908)));
		$var($Object, var$986, $of($Long::valueOf((int64_t)7909)));
		$nc(XKeysym::keysym2UCSHash)->put(var$986, $($Character::valueOf((char16_t)7909)));
		$var($Object, var$987, $of($Long::valueOf((int64_t)7910)));
		$nc(XKeysym::keysym2UCSHash)->put(var$987, $($Character::valueOf((char16_t)7910)));
		$var($Object, var$988, $of($Long::valueOf((int64_t)7911)));
		$nc(XKeysym::keysym2UCSHash)->put(var$988, $($Character::valueOf((char16_t)7911)));
		$var($Object, var$989, $of($Long::valueOf((int64_t)7912)));
		$nc(XKeysym::keysym2UCSHash)->put(var$989, $($Character::valueOf((char16_t)7912)));
		$var($Object, var$990, $of($Long::valueOf((int64_t)7913)));
		$nc(XKeysym::keysym2UCSHash)->put(var$990, $($Character::valueOf((char16_t)7913)));
		$var($Object, var$991, $of($Long::valueOf((int64_t)7914)));
		$nc(XKeysym::keysym2UCSHash)->put(var$991, $($Character::valueOf((char16_t)7914)));
		$var($Object, var$992, $of($Long::valueOf((int64_t)7915)));
		$nc(XKeysym::keysym2UCSHash)->put(var$992, $($Character::valueOf((char16_t)7915)));
		$var($Object, var$993, $of($Long::valueOf((int64_t)7916)));
		$nc(XKeysym::keysym2UCSHash)->put(var$993, $($Character::valueOf((char16_t)7916)));
		$var($Object, var$994, $of($Long::valueOf((int64_t)7917)));
		$nc(XKeysym::keysym2UCSHash)->put(var$994, $($Character::valueOf((char16_t)7917)));
		$var($Object, var$995, $of($Long::valueOf((int64_t)7918)));
		$nc(XKeysym::keysym2UCSHash)->put(var$995, $($Character::valueOf((char16_t)7918)));
		$var($Object, var$996, $of($Long::valueOf((int64_t)7919)));
		$nc(XKeysym::keysym2UCSHash)->put(var$996, $($Character::valueOf((char16_t)7919)));
		$var($Object, var$997, $of($Long::valueOf((int64_t)7920)));
		$nc(XKeysym::keysym2UCSHash)->put(var$997, $($Character::valueOf((char16_t)7920)));
		$var($Object, var$998, $of($Long::valueOf((int64_t)7921)));
		$nc(XKeysym::keysym2UCSHash)->put(var$998, $($Character::valueOf((char16_t)7921)));
		$var($Object, var$999, $of($Long::valueOf((int64_t)7924)));
		$nc(XKeysym::keysym2UCSHash)->put(var$999, $($Character::valueOf((char16_t)7924)));
		$var($Object, var$1000, $of($Long::valueOf((int64_t)7925)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1000, $($Character::valueOf((char16_t)7925)));
		$var($Object, var$1001, $of($Long::valueOf((int64_t)7926)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1001, $($Character::valueOf((char16_t)7926)));
		$var($Object, var$1002, $of($Long::valueOf((int64_t)7927)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1002, $($Character::valueOf((char16_t)7927)));
		$var($Object, var$1003, $of($Long::valueOf((int64_t)7928)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1003, $($Character::valueOf((char16_t)7928)));
		$var($Object, var$1004, $of($Long::valueOf((int64_t)7929)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1004, $($Character::valueOf((char16_t)7929)));
		$var($Object, var$1005, $of($Long::valueOf((int64_t)7930)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1005, $($Character::valueOf((char16_t)416)));
		$var($Object, var$1006, $of($Long::valueOf((int64_t)7931)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1006, $($Character::valueOf((char16_t)417)));
		$var($Object, var$1007, $of($Long::valueOf((int64_t)7932)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1007, $($Character::valueOf((char16_t)431)));
		$var($Object, var$1008, $of($Long::valueOf((int64_t)7933)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1008, $($Character::valueOf((char16_t)432)));
		$var($Object, var$1009, $of($Long::valueOf((int64_t)8352)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1009, $($Character::valueOf((char16_t)8352)));
		$var($Object, var$1010, $of($Long::valueOf((int64_t)8353)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1010, $($Character::valueOf((char16_t)8353)));
		$var($Object, var$1011, $of($Long::valueOf((int64_t)8354)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1011, $($Character::valueOf((char16_t)8354)));
		$var($Object, var$1012, $of($Long::valueOf((int64_t)8355)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1012, $($Character::valueOf((char16_t)8355)));
		$var($Object, var$1013, $of($Long::valueOf((int64_t)8356)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1013, $($Character::valueOf((char16_t)8356)));
		$var($Object, var$1014, $of($Long::valueOf((int64_t)8357)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1014, $($Character::valueOf((char16_t)8357)));
		$var($Object, var$1015, $of($Long::valueOf((int64_t)8358)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1015, $($Character::valueOf((char16_t)8358)));
		$var($Object, var$1016, $of($Long::valueOf((int64_t)8359)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1016, $($Character::valueOf((char16_t)8359)));
		$var($Object, var$1017, $of($Long::valueOf((int64_t)8360)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1017, $($Character::valueOf((char16_t)8360)));
		$var($Object, var$1018, $of($Long::valueOf((int64_t)8361)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1018, $($Character::valueOf((char16_t)8361)));
		$var($Object, var$1019, $of($Long::valueOf((int64_t)8362)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1019, $($Character::valueOf((char16_t)8362)));
		$var($Object, var$1020, $of($Long::valueOf((int64_t)8363)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1020, $($Character::valueOf((char16_t)8363)));
		$var($Object, var$1021, $of($Long::valueOf((int64_t)8364)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1021, $($Character::valueOf((char16_t)8364)));
		$var($Object, var$1022, $of($Long::valueOf((int64_t)0x1004FF08)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1022, $($Character::valueOf((char16_t)8)));
		$var($Object, var$1023, $of($Long::valueOf((int64_t)0x1004FF1B)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1023, $($Character::valueOf((char16_t)27)));
		$var($Object, var$1024, $of($Long::valueOf((int64_t)0x1004FFFF)));
		$nc(XKeysym::keysym2UCSHash)->put(var$1024, $($Character::valueOf((char16_t)127)));
		$var($Object, var$1025, $of($Long::valueOf($XKeySymConstants::XK_a)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1025, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_A, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1026, $of($Long::valueOf($XKeySymConstants::XK_b)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1026, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_B, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1027, $of($Long::valueOf($XKeySymConstants::XK_c)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1027, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_C, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1028, $of($Long::valueOf($XKeySymConstants::XK_d)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1028, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_D, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1029, $of($Long::valueOf($XKeySymConstants::XK_e)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1029, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_E, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1030, $of($Long::valueOf($XKeySymConstants::XK_f)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1030, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1031, $of($Long::valueOf($XKeySymConstants::XK_g)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1031, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_G, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1032, $of($Long::valueOf($XKeySymConstants::XK_h)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1032, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_H, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1033, $of($Long::valueOf($XKeySymConstants::XK_i)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1033, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_I, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1034, $of($Long::valueOf($XKeySymConstants::XK_j)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1034, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_J, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1035, $of($Long::valueOf($XKeySymConstants::XK_k)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1035, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_K, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1036, $of($Long::valueOf($XKeySymConstants::XK_l)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1036, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_L, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1037, $of($Long::valueOf($XKeySymConstants::XK_m)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1037, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_M, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1038, $of($Long::valueOf($XKeySymConstants::XK_n)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1038, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_N, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1039, $of($Long::valueOf($XKeySymConstants::XK_o)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1039, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_O, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1040, $of($Long::valueOf($XKeySymConstants::XK_p)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1040, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_P, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1041, $of($Long::valueOf($XKeySymConstants::XK_q)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1041, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_Q, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1042, $of($Long::valueOf($XKeySymConstants::XK_r)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1042, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_R, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1043, $of($Long::valueOf($XKeySymConstants::XK_s)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1043, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_S, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1044, $of($Long::valueOf($XKeySymConstants::XK_t)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1044, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_T, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1045, $of($Long::valueOf($XKeySymConstants::XK_u)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1045, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_U, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1046, $of($Long::valueOf($XKeySymConstants::XK_v)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1046, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_V, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1047, $of($Long::valueOf($XKeySymConstants::XK_w)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1047, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_W, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1048, $of($Long::valueOf($XKeySymConstants::XK_x)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1048, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_X, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1049, $of($Long::valueOf($XKeySymConstants::XK_y)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1049, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_Y, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1050, $of($Long::valueOf($XKeySymConstants::XK_z)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1050, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_Z, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1051, $of($Long::valueOf($XKeySymConstants::XK_BackSpace)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1051, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BACK_SPACE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1052, $of($Long::valueOf($XKeySymConstants::XK_Tab)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1052, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_TAB, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1053, $of($Long::valueOf($XKeySymConstants::XK_ISO_Left_Tab)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1053, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_TAB, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1054, $of($Long::valueOf($XKeySymConstants::XK_Clear)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1054, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CLEAR, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1055, $of($Long::valueOf($XKeySymConstants::XK_Return)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1055, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ENTER, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1056, $of($Long::valueOf($XKeySymConstants::XK_Linefeed)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1056, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ENTER, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1057, $of($Long::valueOf($XKeySymConstants::XK_Pause)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1057, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAUSE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1058, $of($Long::valueOf($XKeySymConstants::XK_F21)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1058, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAUSE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1059, $of($Long::valueOf($XKeySymConstants::XK_R1)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1059, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAUSE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1060, $of($Long::valueOf($XKeySymConstants::XK_Scroll_Lock)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1060, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SCROLL_LOCK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1061, $of($Long::valueOf($XKeySymConstants::XK_F23)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1061, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SCROLL_LOCK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1062, $of($Long::valueOf($XKeySymConstants::XK_R3)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1062, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SCROLL_LOCK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1063, $of($Long::valueOf($XKeySymConstants::XK_Escape)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1063, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ESCAPE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1064, $of($Long::valueOf($XKeySymConstants::osfXK_BackSpace)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1064, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BACK_SPACE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1065, $of($Long::valueOf($XKeySymConstants::osfXK_Clear)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1065, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CLEAR, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1066, $of($Long::valueOf($XKeySymConstants::osfXK_Escape)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1066, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ESCAPE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1067, $of($Long::valueOf($XKeySymConstants::XK_Shift_L)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1067, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SHIFT, $KeyEvent::KEY_LOCATION_LEFT));
		$var($Object, var$1068, $of($Long::valueOf($XKeySymConstants::XK_Shift_R)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1068, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SHIFT, $KeyEvent::KEY_LOCATION_RIGHT));
		$var($Object, var$1069, $of($Long::valueOf($XKeySymConstants::XK_Control_L)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1069, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CONTROL, $KeyEvent::KEY_LOCATION_LEFT));
		$var($Object, var$1070, $of($Long::valueOf($XKeySymConstants::XK_Control_R)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1070, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CONTROL, $KeyEvent::KEY_LOCATION_RIGHT));
		$var($Object, var$1071, $of($Long::valueOf($XKeySymConstants::XK_Alt_L)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1071, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ALT, $KeyEvent::KEY_LOCATION_LEFT));
		$var($Object, var$1072, $of($Long::valueOf($XKeySymConstants::XK_Alt_R)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1072, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ALT, $KeyEvent::KEY_LOCATION_RIGHT));
		$var($Object, var$1073, $of($Long::valueOf($XKeySymConstants::XK_Meta_L)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1073, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_META, $KeyEvent::KEY_LOCATION_LEFT));
		$var($Object, var$1074, $of($Long::valueOf($XKeySymConstants::XK_Meta_R)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1074, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_META, $KeyEvent::KEY_LOCATION_RIGHT));
		$var($Object, var$1075, $of($Long::valueOf($XKeySymConstants::XK_Caps_Lock)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1075, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CAPS_LOCK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1076, $of($Long::valueOf($XKeySymConstants::XK_Shift_Lock)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1076, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CAPS_LOCK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1077, $of($Long::valueOf($XKeySymConstants::XK_Print)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1077, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PRINTSCREEN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1078, $of($Long::valueOf($XKeySymConstants::XK_F22)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1078, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PRINTSCREEN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1079, $of($Long::valueOf($XKeySymConstants::XK_R2)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1079, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PRINTSCREEN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1080, $of($Long::valueOf($XKeySymConstants::XK_Cancel)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1080, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CANCEL, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1081, $of($Long::valueOf($XKeySymConstants::XK_Help)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1081, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_HELP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1082, $of($Long::valueOf($XKeySymConstants::XK_Num_Lock)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1082, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUM_LOCK, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1083, $of($Long::valueOf($XKeySymConstants::osfXK_Cancel)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1083, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CANCEL, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1084, $of($Long::valueOf($XKeySymConstants::osfXK_Help)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1084, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_HELP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1085, $of($Long::valueOf($XKeySymConstants::XK_Home)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1085, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_HOME, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1086, $of($Long::valueOf($XKeySymConstants::XK_R7)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1086, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_HOME, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1087, $of($Long::valueOf($XKeySymConstants::XK_Page_Up)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1087, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_UP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1088, $of($Long::valueOf($XKeySymConstants::XK_Prior)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1088, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_UP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1089, $of($Long::valueOf($XKeySymConstants::XK_R9)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1089, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_UP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1090, $of($Long::valueOf($XKeySymConstants::XK_Page_Down)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1090, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_DOWN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1091, $of($Long::valueOf($XKeySymConstants::XK_Next)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1091, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_DOWN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1092, $of($Long::valueOf($XKeySymConstants::XK_R15)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1092, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_DOWN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1093, $of($Long::valueOf($XKeySymConstants::XK_End)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1093, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_END, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1094, $of($Long::valueOf($XKeySymConstants::XK_R13)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1094, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_END, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1095, $of($Long::valueOf($XKeySymConstants::XK_Insert)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1095, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_INSERT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1096, $of($Long::valueOf($XKeySymConstants::XK_Delete)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1096, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DELETE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1097, $of($Long::valueOf($XKeySymConstants::XK_KP_Home)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1097, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_HOME, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1098, $of($Long::valueOf($XKeySymConstants::XK_KP_Page_Up)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1098, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_UP, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1099, $of($Long::valueOf($XKeySymConstants::XK_KP_Prior)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1099, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_UP, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1100, $of($Long::valueOf($XKeySymConstants::XK_KP_Page_Down)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1100, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_DOWN, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1101, $of($Long::valueOf($XKeySymConstants::XK_KP_Next)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1101, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_DOWN, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1102, $of($Long::valueOf($XKeySymConstants::XK_KP_End)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1102, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_END, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1103, $of($Long::valueOf($XKeySymConstants::XK_KP_Insert)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1103, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_INSERT, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1104, $of($Long::valueOf($XKeySymConstants::XK_KP_Delete)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1104, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DELETE, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1105, $of($Long::valueOf($XKeySymConstants::osfXK_PageUp)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1105, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_UP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1106, $of($Long::valueOf($XKeySymConstants::osfXK_Prior)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1106, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_UP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1107, $of($Long::valueOf($XKeySymConstants::osfXK_PageDown)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1107, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_DOWN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1108, $of($Long::valueOf($XKeySymConstants::osfXK_Next)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1108, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PAGE_DOWN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1109, $of($Long::valueOf($XKeySymConstants::osfXK_EndLine)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1109, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_END, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1110, $of($Long::valueOf($XKeySymConstants::osfXK_Insert)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1110, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_INSERT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1111, $of($Long::valueOf($XKeySymConstants::osfXK_Delete)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1111, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DELETE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1112, $of($Long::valueOf($XKeySymConstants::XK_Left)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1112, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_LEFT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1113, $of($Long::valueOf($XKeySymConstants::XK_Up)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1113, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1114, $of($Long::valueOf($XKeySymConstants::XK_Right)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1114, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_RIGHT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1115, $of($Long::valueOf($XKeySymConstants::XK_Down)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1115, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DOWN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1116, $of($Long::valueOf($XKeySymConstants::XK_KP_Left)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1116, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KP_LEFT, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1117, $of($Long::valueOf($XKeySymConstants::XK_KP_Up)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1117, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KP_UP, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1118, $of($Long::valueOf($XKeySymConstants::XK_KP_Right)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1118, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KP_RIGHT, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1119, $of($Long::valueOf($XKeySymConstants::XK_KP_Down)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1119, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KP_DOWN, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1120, $of($Long::valueOf($XKeySymConstants::osfXK_Left)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1120, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_LEFT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1121, $of($Long::valueOf($XKeySymConstants::osfXK_Up)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1121, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1122, $of($Long::valueOf($XKeySymConstants::osfXK_Right)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1122, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_RIGHT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1123, $of($Long::valueOf($XKeySymConstants::osfXK_Down)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1123, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DOWN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1124, $of($Long::valueOf($XKeySymConstants::XK_Begin)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1124, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BEGIN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1125, $of($Long::valueOf($XKeySymConstants::XK_KP_Begin)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1125, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BEGIN, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1126, $of($Long::valueOf($XKeySymConstants::XK_0)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1126, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_0, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1127, $of($Long::valueOf($XKeySymConstants::XK_1)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1127, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_1, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1128, $of($Long::valueOf($XKeySymConstants::XK_2)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1128, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_2, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1129, $of($Long::valueOf($XKeySymConstants::XK_3)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1129, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_3, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1130, $of($Long::valueOf($XKeySymConstants::XK_4)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1130, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_4, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1131, $of($Long::valueOf($XKeySymConstants::XK_5)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1131, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_5, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1132, $of($Long::valueOf($XKeySymConstants::XK_6)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1132, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_6, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1133, $of($Long::valueOf($XKeySymConstants::XK_7)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1133, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_7, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1134, $of($Long::valueOf($XKeySymConstants::XK_8)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1134, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_8, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1135, $of($Long::valueOf($XKeySymConstants::XK_9)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1135, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_9, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1136, $of($Long::valueOf($XKeySymConstants::XK_space)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1136, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SPACE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1137, $of($Long::valueOf($XKeySymConstants::XK_exclam)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1137, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_EXCLAMATION_MARK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1138, $of($Long::valueOf($XKeySymConstants::XK_quotedbl)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1138, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_QUOTEDBL, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1139, $of($Long::valueOf($XKeySymConstants::XK_numbersign)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1139, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMBER_SIGN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1140, $of($Long::valueOf($XKeySymConstants::XK_dollar)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1140, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DOLLAR, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1141, $of($Long::valueOf($XKeySymConstants::XK_ampersand)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1141, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_AMPERSAND, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1142, $of($Long::valueOf($XKeySymConstants::XK_apostrophe)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1142, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_QUOTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1143, $of($Long::valueOf($XKeySymConstants::XK_parenleft)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1143, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_LEFT_PARENTHESIS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1144, $of($Long::valueOf($XKeySymConstants::XK_parenright)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1144, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_RIGHT_PARENTHESIS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1145, $of($Long::valueOf($XKeySymConstants::XK_asterisk)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1145, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ASTERISK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1146, $of($Long::valueOf($XKeySymConstants::XK_plus)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1146, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PLUS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1147, $of($Long::valueOf($XKeySymConstants::XK_comma)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1147, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_COMMA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1148, $of($Long::valueOf($XKeySymConstants::XK_minus)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1148, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_MINUS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1149, $of($Long::valueOf($XKeySymConstants::XK_period)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1149, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PERIOD, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1150, $of($Long::valueOf($XKeySymConstants::XK_slash)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1150, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SLASH, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1151, $of($Long::valueOf($XKeySymConstants::XK_colon)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1151, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_COLON, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1152, $of($Long::valueOf($XKeySymConstants::XK_semicolon)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1152, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SEMICOLON, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1153, $of($Long::valueOf($XKeySymConstants::XK_less)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1153, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_LESS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1154, $of($Long::valueOf($XKeySymConstants::XK_equal)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1154, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_EQUALS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1155, $of($Long::valueOf($XKeySymConstants::XK_greater)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1155, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_GREATER, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1156, $of($Long::valueOf($XKeySymConstants::XK_at)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1156, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_AT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1157, $of($Long::valueOf($XKeySymConstants::XK_bracketleft)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1157, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_OPEN_BRACKET, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1158, $of($Long::valueOf($XKeySymConstants::XK_backslash)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1158, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BACK_SLASH, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1159, $of($Long::valueOf($XKeySymConstants::XK_bracketright)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1159, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CLOSE_BRACKET, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1160, $of($Long::valueOf($XKeySymConstants::XK_asciicircum)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1160, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CIRCUMFLEX, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1161, $of($Long::valueOf($XKeySymConstants::XK_underscore)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1161, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDERSCORE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1162, $of($Long::valueOf($XKeySymConstants::XK_Super_L)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1162, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_WINDOWS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1163, $of($Long::valueOf($XKeySymConstants::XK_Super_R)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1163, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_WINDOWS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1164, $of($Long::valueOf($XKeySymConstants::XK_Menu)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1164, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CONTEXT_MENU, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1165, $of($Long::valueOf($XKeySymConstants::XK_grave)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1165, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BACK_QUOTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1166, $of($Long::valueOf($XKeySymConstants::XK_braceleft)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1166, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BRACELEFT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1167, $of($Long::valueOf($XKeySymConstants::XK_braceright)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1167, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_BRACERIGHT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1168, $of($Long::valueOf($XKeySymConstants::XK_exclamdown)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1168, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_INVERTED_EXCLAMATION_MARK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1169, $of($Long::valueOf($XKeySymConstants::XK_KP_0)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1169, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD0, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1170, $of($Long::valueOf($XKeySymConstants::XK_KP_1)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1170, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD1, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1171, $of($Long::valueOf($XKeySymConstants::XK_KP_2)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1171, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD2, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1172, $of($Long::valueOf($XKeySymConstants::XK_KP_3)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1172, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD3, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1173, $of($Long::valueOf($XKeySymConstants::XK_KP_4)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1173, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD4, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1174, $of($Long::valueOf($XKeySymConstants::XK_KP_5)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1174, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD5, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1175, $of($Long::valueOf($XKeySymConstants::XK_KP_6)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1175, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD6, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1176, $of($Long::valueOf($XKeySymConstants::XK_KP_7)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1176, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD7, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1177, $of($Long::valueOf($XKeySymConstants::XK_KP_8)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1177, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD8, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1178, $of($Long::valueOf($XKeySymConstants::XK_KP_9)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1178, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NUMPAD9, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1179, $of($Long::valueOf($XKeySymConstants::XK_KP_Space)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1179, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SPACE, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1180, $of($Long::valueOf($XKeySymConstants::XK_KP_Tab)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1180, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_TAB, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1181, $of($Long::valueOf($XKeySymConstants::XK_KP_Enter)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1181, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ENTER, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1182, $of($Long::valueOf($XKeySymConstants::XK_KP_Equal)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1182, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_EQUALS, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1183, $of($Long::valueOf($XKeySymConstants::XK_R4)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1183, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_EQUALS, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1184, $of($Long::valueOf($XKeySymConstants::XK_KP_Multiply)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1184, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_MULTIPLY, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1185, $of($Long::valueOf($XKeySymConstants::XK_F26)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1185, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_MULTIPLY, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1186, $of($Long::valueOf($XKeySymConstants::XK_R6)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1186, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_MULTIPLY, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1187, $of($Long::valueOf($XKeySymConstants::XK_KP_Add)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1187, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ADD, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1188, $of($Long::valueOf($XKeySymConstants::XK_KP_Separator)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1188, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SEPARATOR, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1189, $of($Long::valueOf($XKeySymConstants::XK_KP_Subtract)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1189, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SUBTRACT, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1190, $of($Long::valueOf($XKeySymConstants::XK_F24)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1190, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_SUBTRACT, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1191, $of($Long::valueOf($XKeySymConstants::XK_KP_Decimal)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1191, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DECIMAL, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1192, $of($Long::valueOf($XKeySymConstants::XK_KP_Divide)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1192, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DIVIDE, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1193, $of($Long::valueOf($XKeySymConstants::XK_F25)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1193, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DIVIDE, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1194, $of($Long::valueOf($XKeySymConstants::XK_R5)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1194, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DIVIDE, $KeyEvent::KEY_LOCATION_NUMPAD));
		$var($Object, var$1195, $of($Long::valueOf($XKeySymConstants::XK_F1)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1195, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F1, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1196, $of($Long::valueOf($XKeySymConstants::XK_F2)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1196, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F2, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1197, $of($Long::valueOf($XKeySymConstants::XK_F3)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1197, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F3, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1198, $of($Long::valueOf($XKeySymConstants::XK_F4)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1198, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F4, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1199, $of($Long::valueOf($XKeySymConstants::XK_F5)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1199, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F5, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1200, $of($Long::valueOf($XKeySymConstants::XK_F6)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1200, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F6, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1201, $of($Long::valueOf($XKeySymConstants::XK_F7)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1201, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F7, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1202, $of($Long::valueOf($XKeySymConstants::XK_F8)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1202, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F8, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1203, $of($Long::valueOf($XKeySymConstants::XK_F9)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1203, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F9, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1204, $of($Long::valueOf($XKeySymConstants::XK_F10)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1204, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F10, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1205, $of($Long::valueOf($XKeySymConstants::XK_F11)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1205, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F11, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1206, $of($Long::valueOf($XKeySymConstants::XK_F12)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1206, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F12, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1207, $of($Long::valueOf($XKeySymConstants::SunXK_F36)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1207, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F11, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1208, $of($Long::valueOf($XKeySymConstants::SunXK_F37)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1208, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_F12, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1209, $of($Long::valueOf($XKeySymConstants::XK_Execute)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1209, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ACCEPT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1210, $of($Long::valueOf($XKeySymConstants::XK_Kanji)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1210, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CONVERT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1211, $of($Long::valueOf($XKeySymConstants::XK_Henkan_Mode)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1211, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_INPUT_METHOD_ON_OFF, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1212, $of($Long::valueOf($XKeySymConstants::XK_Eisu_Shift)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1212, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ALPHANUMERIC, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1213, $of($Long::valueOf($XKeySymConstants::XK_Eisu_toggle)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1213, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ALPHANUMERIC, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1214, $of($Long::valueOf($XKeySymConstants::XK_Zenkaku)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1214, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_FULL_WIDTH, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1215, $of($Long::valueOf($XKeySymConstants::XK_Hankaku)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1215, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_HALF_WIDTH, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1216, $of($Long::valueOf($XKeySymConstants::XK_Hiragana)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1216, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_HIRAGANA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1217, $of($Long::valueOf($XKeySymConstants::XK_Katakana)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1217, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KATAKANA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1218, $of($Long::valueOf($XKeySymConstants::XK_Romaji)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1218, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_JAPANESE_ROMAN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1219, $of($Long::valueOf($XKeySymConstants::XK_Kana_Shift)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1219, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KANA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1220, $of($Long::valueOf($XKeySymConstants::XK_Kana_Lock)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1220, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_KANA_LOCK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1221, $of($Long::valueOf($XKeySymConstants::XK_Muhenkan)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1221, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_NONCONVERT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1222, $of($Long::valueOf($XKeySymConstants::XK_Zen_Koho)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1222, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ALL_CANDIDATES, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1223, $of($Long::valueOf($XKeySymConstants::XK_Kanji_Bangou)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1223, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CODE_INPUT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1224, $of($Long::valueOf($XKeySymConstants::XK_Mae_Koho)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1224, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PREVIOUS_CANDIDATE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1225, $of($Long::valueOf($XKeySymConstants::XK_Multi_key)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1225, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_COMPOSE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1226, $of($Long::valueOf($XKeySymConstants::XK_Mode_switch)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1226, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ALT_GRAPH, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1227, $of($Long::valueOf($XKeySymConstants::XK_ISO_Level3_Shift)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1227, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_ALT_GRAPH, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1228, $of($Long::valueOf($XKeySymConstants::XK_Redo)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1228, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_AGAIN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1229, $of($Long::valueOf($XKeySymConstants::XK_Undo)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1229, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDO, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1230, $of($Long::valueOf($XKeySymConstants::XK_L4)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1230, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDO, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1231, $of($Long::valueOf($XKeySymConstants::XK_L6)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1231, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_COPY, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1232, $of($Long::valueOf($XKeySymConstants::XK_L8)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1232, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PASTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1233, $of($Long::valueOf($XKeySymConstants::XK_L10)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1233, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CUT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1234, $of($Long::valueOf($XKeySymConstants::XK_Find)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1234, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_FIND, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1235, $of($Long::valueOf($XKeySymConstants::XK_L9)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1235, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_FIND, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1236, $of($Long::valueOf($XKeySymConstants::XK_L3)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1236, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PROPS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1237, $of($Long::valueOf($XKeySymConstants::SunXK_Again)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1237, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_AGAIN, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1238, $of($Long::valueOf($XKeySymConstants::SunXK_Undo)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1238, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDO, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1239, $of($Long::valueOf($XKeySymConstants::SunXK_Copy)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1239, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_COPY, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1240, $of($Long::valueOf($XKeySymConstants::SunXK_Paste)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1240, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PASTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1241, $of($Long::valueOf($XKeySymConstants::SunXK_Cut)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1241, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CUT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1242, $of($Long::valueOf($XKeySymConstants::SunXK_Find)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1242, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_FIND, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1243, $of($Long::valueOf($XKeySymConstants::SunXK_Props)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1243, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PROPS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1244, $of($Long::valueOf($XKeySymConstants::SunXK_Stop)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1244, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_STOP, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1245, $of($Long::valueOf($XKeySymConstants::apXK_Copy)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1245, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_COPY, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1246, $of($Long::valueOf($XKeySymConstants::apXK_Cut)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1246, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CUT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1247, $of($Long::valueOf($XKeySymConstants::apXK_Paste)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1247, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PASTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1248, $of($Long::valueOf($XKeySymConstants::osfXK_Copy)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1248, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_COPY, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1249, $of($Long::valueOf($XKeySymConstants::osfXK_Cut)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1249, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_CUT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1250, $of($Long::valueOf($XKeySymConstants::osfXK_Paste)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1250, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_PASTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1251, $of($Long::valueOf($XKeySymConstants::osfXK_Undo)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1251, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDO, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1252, $of($Long::valueOf($XKeySymConstants::XK_dead_grave)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1252, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_GRAVE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1253, $of($Long::valueOf($XKeySymConstants::XK_dead_acute)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1253, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_ACUTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1254, $of($Long::valueOf($XKeySymConstants::XK_dead_circumflex)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1254, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CIRCUMFLEX, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1255, $of($Long::valueOf($XKeySymConstants::XK_dead_tilde)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1255, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_TILDE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1256, $of($Long::valueOf($XKeySymConstants::XK_dead_macron)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1256, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_MACRON, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1257, $of($Long::valueOf($XKeySymConstants::XK_dead_breve)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1257, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_BREVE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1258, $of($Long::valueOf($XKeySymConstants::XK_dead_abovedot)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1258, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_ABOVEDOT, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1259, $of($Long::valueOf($XKeySymConstants::XK_dead_diaeresis)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1259, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_DIAERESIS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1260, $of($Long::valueOf($XKeySymConstants::XK_dead_abovering)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1260, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_ABOVERING, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1261, $of($Long::valueOf($XKeySymConstants::XK_dead_doubleacute)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1261, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_DOUBLEACUTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1262, $of($Long::valueOf($XKeySymConstants::XK_dead_caron)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1262, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CARON, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1263, $of($Long::valueOf($XKeySymConstants::XK_dead_cedilla)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1263, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CEDILLA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1264, $of($Long::valueOf($XKeySymConstants::XK_dead_ogonek)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1264, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_OGONEK, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1265, $of($Long::valueOf($XKeySymConstants::XK_dead_iota)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1265, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_IOTA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1266, $of($Long::valueOf($XKeySymConstants::XK_dead_voiced_sound)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1266, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_VOICED_SOUND, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1267, $of($Long::valueOf($XKeySymConstants::XK_dead_semivoiced_sound)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1267, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_SEMIVOICED_SOUND, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1268, $of($Long::valueOf($XKeySymConstants::SunXK_FA_Grave)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1268, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_GRAVE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1269, $of($Long::valueOf($XKeySymConstants::SunXK_FA_Circum)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1269, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CIRCUMFLEX, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1270, $of($Long::valueOf($XKeySymConstants::SunXK_FA_Tilde)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1270, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_TILDE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1271, $of($Long::valueOf($XKeySymConstants::SunXK_FA_Acute)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1271, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_ACUTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1272, $of($Long::valueOf($XKeySymConstants::SunXK_FA_Diaeresis)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1272, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_DIAERESIS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1273, $of($Long::valueOf($XKeySymConstants::SunXK_FA_Cedilla)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1273, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CEDILLA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1274, $of($Long::valueOf($XKeySymConstants::DXK_ring_accent)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1274, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_ABOVERING, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1275, $of($Long::valueOf($XKeySymConstants::DXK_circumflex_accent)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1275, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CIRCUMFLEX, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1276, $of($Long::valueOf($XKeySymConstants::DXK_cedilla_accent)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1276, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CEDILLA, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1277, $of($Long::valueOf($XKeySymConstants::DXK_acute_accent)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1277, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_ACUTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1278, $of($Long::valueOf($XKeySymConstants::DXK_grave_accent)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1278, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_GRAVE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1279, $of($Long::valueOf($XKeySymConstants::DXK_tilde)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1279, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_TILDE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1280, $of($Long::valueOf($XKeySymConstants::DXK_diaeresis)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1280, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_DIAERESIS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1281, $of($Long::valueOf($XKeySymConstants::hpXK_mute_acute)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1281, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_ACUTE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1282, $of($Long::valueOf($XKeySymConstants::hpXK_mute_grave)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1282, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_GRAVE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1283, $of($Long::valueOf($XKeySymConstants::hpXK_mute_asciicircum)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1283, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_CIRCUMFLEX, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1284, $of($Long::valueOf($XKeySymConstants::hpXK_mute_diaeresis)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1284, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_DIAERESIS, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1285, $of($Long::valueOf($XKeySymConstants::hpXK_mute_asciitilde)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1285, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_DEAD_TILDE, $KeyEvent::KEY_LOCATION_STANDARD));
		$var($Object, var$1286, $of($Long::valueOf($XConstants::NoSymbol)));
		$nc(XKeysym::keysym2JavaKeycodeHash)->put(var$1286, $$new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDEFINED, $KeyEvent::KEY_LOCATION_UNKNOWN));
		$var($Object, var$1287, $of($Integer::valueOf($KeyEvent::VK_CAPS_LOCK)));
		$nc(XKeysym::javaKeycode2KeysymHash)->put(var$1287, $($Long::valueOf($XKeySymConstants::XK_Caps_Lock)));
		$var($Object, var$1288, $of($Integer::valueOf($KeyEvent::VK_NUM_LOCK)));
		$nc(XKeysym::javaKeycode2KeysymHash)->put(var$1288, $($Long::valueOf($XKeySymConstants::XK_Num_Lock)));
		$var($Object, var$1289, $of($Integer::valueOf($KeyEvent::VK_SCROLL_LOCK)));
		$nc(XKeysym::javaKeycode2KeysymHash)->put(var$1289, $($Long::valueOf($XKeySymConstants::XK_Scroll_Lock)));
		$var($Object, var$1290, $of($Integer::valueOf($KeyEvent::VK_KANA_LOCK)));
		$nc(XKeysym::javaKeycode2KeysymHash)->put(var$1290, $($Long::valueOf($XKeySymConstants::XK_Kana_Lock)));
	}
}

XKeysym::XKeysym() {
}

$Class* XKeysym::load$($String* name, bool initialize) {
	$loadClass(XKeysym, name, initialize, &_XKeysym_ClassInfo_, clinit$XKeysym, allocate$XKeysym);
	return class$;
}

$Class* XKeysym::class$ = nullptr;

		} // X11
	} // awt
} // sun