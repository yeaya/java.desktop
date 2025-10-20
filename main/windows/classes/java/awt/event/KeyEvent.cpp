#include <java/awt/event/KeyEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent$1.h>
#include <java/awt/event/NativeLibLoader.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ExtendedKeyCodes.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef CHAR_UNDEFINED
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef KEY_FIRST
#undef KEY_LAST
#undef KEY_LOCATION_LEFT
#undef KEY_LOCATION_NUMPAD
#undef KEY_LOCATION_RIGHT
#undef KEY_LOCATION_STANDARD
#undef KEY_LOCATION_UNKNOWN
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef META_DOWN_MASK
#undef META_MASK
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK
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
#undef VK_EURO_SIGN
#undef VK_EXCLAMATION_MARK
#undef VK_F
#undef VK_F1
#undef VK_F10
#undef VK_F11
#undef VK_F12
#undef VK_F13
#undef VK_F14
#undef VK_F15
#undef VK_F16
#undef VK_F17
#undef VK_F18
#undef VK_F19
#undef VK_F2
#undef VK_F20
#undef VK_F21
#undef VK_F22
#undef VK_F23
#undef VK_F24
#undef VK_F3
#undef VK_F4
#undef VK_F5
#undef VK_F6
#undef VK_F7
#undef VK_F8
#undef VK_F9
#undef VK_FINAL
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
#undef VK_JAPANESE_HIRAGANA
#undef VK_JAPANESE_KATAKANA
#undef VK_JAPANESE_ROMAN
#undef VK_K
#undef VK_KANA
#undef VK_KANA_LOCK
#undef VK_KANJI
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
#undef VK_MODECHANGE
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
#undef VK_ROMAN_CHARACTERS
#undef VK_S
#undef VK_SCROLL_LOCK
#undef VK_SEMICOLON
#undef VK_SEPARATER
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

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent$1 = ::java::awt::event::KeyEvent$1;
using $NativeLibLoader = ::java::awt::event::NativeLibLoader;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$KeyEventAccessor = ::sun::awt::AWTAccessor$KeyEventAccessor;
using $ExtendedKeyCodes = ::sun::awt::ExtendedKeyCodes;

namespace java {
	namespace awt {
		namespace event {

$CompoundAttribute _KeyEvent_MethodAnnotations_init$3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute KeyEvent_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _KeyEvent_MethodAnnotations_getKeyModifiersText9[] = {
	{"Ljava/lang/Deprecated;", KeyEvent_Attribute_var$0},
	{}
};

$CompoundAttribute _KeyEvent_MethodAnnotations_setModifiers17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _KeyEvent_FieldInfo_[] = {
	{"isProxyActive", "Z", nullptr, $PRIVATE, $field(KeyEvent, isProxyActive)},
	{"KEY_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_FIRST)},
	{"KEY_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_LAST)},
	{"KEY_TYPED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_TYPED)},
	{"KEY_PRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_PRESSED)},
	{"KEY_RELEASED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_RELEASED)},
	{"VK_ENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ENTER)},
	{"VK_BACK_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_BACK_SPACE)},
	{"VK_TAB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_TAB)},
	{"VK_CANCEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CANCEL)},
	{"VK_CLEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CLEAR)},
	{"VK_SHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SHIFT)},
	{"VK_CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CONTROL)},
	{"VK_ALT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ALT)},
	{"VK_PAUSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PAUSE)},
	{"VK_CAPS_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CAPS_LOCK)},
	{"VK_ESCAPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ESCAPE)},
	{"VK_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SPACE)},
	{"VK_PAGE_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PAGE_UP)},
	{"VK_PAGE_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PAGE_DOWN)},
	{"VK_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_END)},
	{"VK_HOME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_HOME)},
	{"VK_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_LEFT)},
	{"VK_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_UP)},
	{"VK_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_RIGHT)},
	{"VK_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DOWN)},
	{"VK_COMMA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_COMMA)},
	{"VK_MINUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_MINUS)},
	{"VK_PERIOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PERIOD)},
	{"VK_SLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SLASH)},
	{"VK_0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_0)},
	{"VK_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_1)},
	{"VK_2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_2)},
	{"VK_3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_3)},
	{"VK_4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_4)},
	{"VK_5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_5)},
	{"VK_6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_6)},
	{"VK_7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_7)},
	{"VK_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_8)},
	{"VK_9", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_9)},
	{"VK_SEMICOLON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SEMICOLON)},
	{"VK_EQUALS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_EQUALS)},
	{"VK_A", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_A)},
	{"VK_B", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_B)},
	{"VK_C", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_C)},
	{"VK_D", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_D)},
	{"VK_E", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_E)},
	{"VK_F", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F)},
	{"VK_G", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_G)},
	{"VK_H", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_H)},
	{"VK_I", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_I)},
	{"VK_J", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_J)},
	{"VK_K", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_K)},
	{"VK_L", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_L)},
	{"VK_M", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_M)},
	{"VK_N", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_N)},
	{"VK_O", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_O)},
	{"VK_P", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_P)},
	{"VK_Q", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_Q)},
	{"VK_R", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_R)},
	{"VK_S", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_S)},
	{"VK_T", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_T)},
	{"VK_U", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_U)},
	{"VK_V", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_V)},
	{"VK_W", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_W)},
	{"VK_X", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_X)},
	{"VK_Y", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_Y)},
	{"VK_Z", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_Z)},
	{"VK_OPEN_BRACKET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_OPEN_BRACKET)},
	{"VK_BACK_SLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_BACK_SLASH)},
	{"VK_CLOSE_BRACKET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CLOSE_BRACKET)},
	{"VK_NUMPAD0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD0)},
	{"VK_NUMPAD1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD1)},
	{"VK_NUMPAD2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD2)},
	{"VK_NUMPAD3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD3)},
	{"VK_NUMPAD4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD4)},
	{"VK_NUMPAD5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD5)},
	{"VK_NUMPAD6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD6)},
	{"VK_NUMPAD7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD7)},
	{"VK_NUMPAD8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD8)},
	{"VK_NUMPAD9", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMPAD9)},
	{"VK_MULTIPLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_MULTIPLY)},
	{"VK_ADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ADD)},
	{"VK_SEPARATER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SEPARATER)},
	{"VK_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SEPARATOR)},
	{"VK_SUBTRACT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SUBTRACT)},
	{"VK_DECIMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DECIMAL)},
	{"VK_DIVIDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DIVIDE)},
	{"VK_DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DELETE)},
	{"VK_NUM_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUM_LOCK)},
	{"VK_SCROLL_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_SCROLL_LOCK)},
	{"VK_F1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F1)},
	{"VK_F2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F2)},
	{"VK_F3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F3)},
	{"VK_F4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F4)},
	{"VK_F5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F5)},
	{"VK_F6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F6)},
	{"VK_F7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F7)},
	{"VK_F8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F8)},
	{"VK_F9", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F9)},
	{"VK_F10", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F10)},
	{"VK_F11", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F11)},
	{"VK_F12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F12)},
	{"VK_F13", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F13)},
	{"VK_F14", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F14)},
	{"VK_F15", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F15)},
	{"VK_F16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F16)},
	{"VK_F17", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F17)},
	{"VK_F18", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F18)},
	{"VK_F19", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F19)},
	{"VK_F20", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F20)},
	{"VK_F21", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F21)},
	{"VK_F22", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F22)},
	{"VK_F23", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F23)},
	{"VK_F24", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_F24)},
	{"VK_PRINTSCREEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PRINTSCREEN)},
	{"VK_INSERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_INSERT)},
	{"VK_HELP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_HELP)},
	{"VK_META", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_META)},
	{"VK_BACK_QUOTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_BACK_QUOTE)},
	{"VK_QUOTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_QUOTE)},
	{"VK_KP_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KP_UP)},
	{"VK_KP_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KP_DOWN)},
	{"VK_KP_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KP_LEFT)},
	{"VK_KP_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KP_RIGHT)},
	{"VK_DEAD_GRAVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_GRAVE)},
	{"VK_DEAD_ACUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_ACUTE)},
	{"VK_DEAD_CIRCUMFLEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_CIRCUMFLEX)},
	{"VK_DEAD_TILDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_TILDE)},
	{"VK_DEAD_MACRON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_MACRON)},
	{"VK_DEAD_BREVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_BREVE)},
	{"VK_DEAD_ABOVEDOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_ABOVEDOT)},
	{"VK_DEAD_DIAERESIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_DIAERESIS)},
	{"VK_DEAD_ABOVERING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_ABOVERING)},
	{"VK_DEAD_DOUBLEACUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_DOUBLEACUTE)},
	{"VK_DEAD_CARON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_CARON)},
	{"VK_DEAD_CEDILLA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_CEDILLA)},
	{"VK_DEAD_OGONEK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_OGONEK)},
	{"VK_DEAD_IOTA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_IOTA)},
	{"VK_DEAD_VOICED_SOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_VOICED_SOUND)},
	{"VK_DEAD_SEMIVOICED_SOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DEAD_SEMIVOICED_SOUND)},
	{"VK_AMPERSAND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_AMPERSAND)},
	{"VK_ASTERISK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ASTERISK)},
	{"VK_QUOTEDBL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_QUOTEDBL)},
	{"VK_LESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_LESS)},
	{"VK_GREATER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_GREATER)},
	{"VK_BRACELEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_BRACELEFT)},
	{"VK_BRACERIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_BRACERIGHT)},
	{"VK_AT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_AT)},
	{"VK_COLON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_COLON)},
	{"VK_CIRCUMFLEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CIRCUMFLEX)},
	{"VK_DOLLAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_DOLLAR)},
	{"VK_EURO_SIGN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_EURO_SIGN)},
	{"VK_EXCLAMATION_MARK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_EXCLAMATION_MARK)},
	{"VK_INVERTED_EXCLAMATION_MARK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_INVERTED_EXCLAMATION_MARK)},
	{"VK_LEFT_PARENTHESIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_LEFT_PARENTHESIS)},
	{"VK_NUMBER_SIGN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NUMBER_SIGN)},
	{"VK_PLUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PLUS)},
	{"VK_RIGHT_PARENTHESIS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_RIGHT_PARENTHESIS)},
	{"VK_UNDERSCORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_UNDERSCORE)},
	{"VK_WINDOWS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_WINDOWS)},
	{"VK_CONTEXT_MENU", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CONTEXT_MENU)},
	{"VK_FINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_FINAL)},
	{"VK_CONVERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CONVERT)},
	{"VK_NONCONVERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_NONCONVERT)},
	{"VK_ACCEPT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ACCEPT)},
	{"VK_MODECHANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_MODECHANGE)},
	{"VK_KANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KANA)},
	{"VK_KANJI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KANJI)},
	{"VK_ALPHANUMERIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ALPHANUMERIC)},
	{"VK_KATAKANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KATAKANA)},
	{"VK_HIRAGANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_HIRAGANA)},
	{"VK_FULL_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_FULL_WIDTH)},
	{"VK_HALF_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_HALF_WIDTH)},
	{"VK_ROMAN_CHARACTERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ROMAN_CHARACTERS)},
	{"VK_ALL_CANDIDATES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ALL_CANDIDATES)},
	{"VK_PREVIOUS_CANDIDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PREVIOUS_CANDIDATE)},
	{"VK_CODE_INPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CODE_INPUT)},
	{"VK_JAPANESE_KATAKANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_JAPANESE_KATAKANA)},
	{"VK_JAPANESE_HIRAGANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_JAPANESE_HIRAGANA)},
	{"VK_JAPANESE_ROMAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_JAPANESE_ROMAN)},
	{"VK_KANA_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_KANA_LOCK)},
	{"VK_INPUT_METHOD_ON_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_INPUT_METHOD_ON_OFF)},
	{"VK_CUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_CUT)},
	{"VK_COPY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_COPY)},
	{"VK_PASTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PASTE)},
	{"VK_UNDO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_UNDO)},
	{"VK_AGAIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_AGAIN)},
	{"VK_FIND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_FIND)},
	{"VK_PROPS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_PROPS)},
	{"VK_STOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_STOP)},
	{"VK_COMPOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_COMPOSE)},
	{"VK_ALT_GRAPH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_ALT_GRAPH)},
	{"VK_BEGIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_BEGIN)},
	{"VK_UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, VK_UNDEFINED)},
	{"CHAR_UNDEFINED", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, CHAR_UNDEFINED)},
	{"KEY_LOCATION_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_LOCATION_UNKNOWN)},
	{"KEY_LOCATION_STANDARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_LOCATION_STANDARD)},
	{"KEY_LOCATION_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_LOCATION_LEFT)},
	{"KEY_LOCATION_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_LOCATION_RIGHT)},
	{"KEY_LOCATION_NUMPAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyEvent, KEY_LOCATION_NUMPAD)},
	{"keyCode", "I", nullptr, 0, $field(KeyEvent, keyCode)},
	{"keyChar", "C", nullptr, 0, $field(KeyEvent, keyChar)},
	{"keyLocation", "I", nullptr, 0, $field(KeyEvent, keyLocation)},
	{"rawCode", "J", nullptr, $PRIVATE | $TRANSIENT, $field(KeyEvent, rawCode)},
	{"primaryLevelUnicode", "J", nullptr, $PRIVATE | $TRANSIENT, $field(KeyEvent, primaryLevelUnicode)},
	{"scancode", "J", nullptr, $PRIVATE | $TRANSIENT, $field(KeyEvent, scancode)},
	{"extendedKeyCode", "J", nullptr, $PRIVATE | $TRANSIENT, $field(KeyEvent, extendedKeyCode)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyEvent, serialVersionUID)},
	{"originalSource", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(KeyEvent, originalSource)},
	{}
};

$MethodInfo _KeyEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IJIICIZ)V", nullptr, $PRIVATE, $method(static_cast<void(KeyEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,char16_t,int32_t,bool)>(&KeyEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJIICI)V", nullptr, $PUBLIC, $method(static_cast<void(KeyEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,char16_t,int32_t)>(&KeyEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJIIC)V", nullptr, $PUBLIC, $method(static_cast<void(KeyEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,char16_t)>(&KeyEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJII)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(KeyEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t)>(&KeyEvent::init$)), nullptr, nullptr, _KeyEvent_MethodAnnotations_init$3},
	{"getExtendedKeyCode", "()I", nullptr, $PUBLIC},
	{"getExtendedKeyCodeForChar", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&KeyEvent::getExtendedKeyCodeForChar))},
	{"getKeyChar", "()C", nullptr, $PUBLIC},
	{"getKeyCode", "()I", nullptr, $PUBLIC},
	{"getKeyLocation", "()I", nullptr, $PUBLIC},
	{"getKeyModifiersText", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$String*(*)(int32_t)>(&KeyEvent::getKeyModifiersText)), nullptr, nullptr, _KeyEvent_MethodAnnotations_getKeyModifiersText9},
	{"getKeyText", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&KeyEvent::getKeyText))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&KeyEvent::initIDs))},
	{"isActionKey", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(KeyEvent::*)($ObjectInputStream*)>(&KeyEvent::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setKeyChar", "(C)V", nullptr, $PUBLIC},
	{"setKeyCode", "(I)V", nullptr, $PUBLIC},
	{"setModifiers", "(I)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _KeyEvent_MethodAnnotations_setModifiers17},
	{"setNewModifiers", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyEvent::*)()>(&KeyEvent::setNewModifiers))},
	{"setOldModifiers", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyEvent::*)()>(&KeyEvent::setOldModifiers))},
	{}
};

#define _METHOD_INDEX_initIDs 11

$InnerClassInfo _KeyEvent_InnerClassesInfo_[] = {
	{"java.awt.event.KeyEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.KeyEvent",
	"java.awt.event.InputEvent",
	nullptr,
	_KeyEvent_FieldInfo_,
	_KeyEvent_MethodInfo_,
	nullptr,
	nullptr,
	_KeyEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.event.KeyEvent$1"
};

$Object* allocate$KeyEvent($Class* clazz) {
	return $of($alloc(KeyEvent));
}

void KeyEvent::initIDs() {
	$init(KeyEvent);
	$prepareNativeStatic(KeyEvent, initIDs, void);
	$invokeNativeStatic(KeyEvent, initIDs);
	$finishNativeStatic();
}

void KeyEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation, bool isProxyActive) {
	KeyEvent::init$(source, id, when, modifiers, keyCode, keyChar, keyLocation);
	this->isProxyActive = isProxyActive;
}

void KeyEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation) {
	$InputEvent::init$(source, id, when, modifiers);
	this->isProxyActive = false;
	this->rawCode = 0;
	this->primaryLevelUnicode = 0;
	this->scancode = 0;
	this->extendedKeyCode = 0;
	if (id == KeyEvent::KEY_TYPED) {
		if (keyChar == KeyEvent::CHAR_UNDEFINED) {
			$throwNew($IllegalArgumentException, "invalid keyChar"_s);
		}
		if (keyCode != KeyEvent::VK_UNDEFINED) {
			$throwNew($IllegalArgumentException, "invalid keyCode"_s);
		}
		if (keyLocation != KeyEvent::KEY_LOCATION_UNKNOWN) {
			$throwNew($IllegalArgumentException, "invalid keyLocation"_s);
		}
	}
	this->keyCode = keyCode;
	this->keyChar = keyChar;
	if ((keyLocation < KeyEvent::KEY_LOCATION_UNKNOWN) || (keyLocation > KeyEvent::KEY_LOCATION_NUMPAD)) {
		$throwNew($IllegalArgumentException, "invalid keyLocation"_s);
	}
	this->keyLocation = keyLocation;
	bool var$0 = (getModifiers() != 0);
	if (var$0 && (getModifiersEx() == 0)) {
		setNewModifiers();
	} else {
		bool var$2 = (getModifiers() == 0);
		if (var$2 && (getModifiersEx() != 0)) {
			setOldModifiers();
		}
	}
	$set(this, originalSource, source);
}

void KeyEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar) {
	KeyEvent::init$(source, id, when, modifiers, keyCode, keyChar, KeyEvent::KEY_LOCATION_UNKNOWN);
}

void KeyEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode) {
	KeyEvent::init$(source, id, when, modifiers, keyCode, (char16_t)keyCode);
}

int32_t KeyEvent::getKeyCode() {
	return this->keyCode;
}

void KeyEvent::setKeyCode(int32_t keyCode) {
	this->keyCode = keyCode;
}

char16_t KeyEvent::getKeyChar() {
	return this->keyChar;
}

void KeyEvent::setKeyChar(char16_t keyChar) {
	this->keyChar = keyChar;
}

void KeyEvent::setModifiers(int32_t modifiers) {
	this->modifiers = modifiers;
	bool var$0 = (getModifiers() != 0);
	if (var$0 && (getModifiersEx() == 0)) {
		setNewModifiers();
	} else {
		bool var$2 = (getModifiers() == 0);
		if (var$2 && (getModifiersEx() != 0)) {
			setOldModifiers();
		}
	}
}

int32_t KeyEvent::getKeyLocation() {
	return this->keyLocation;
}

$String* KeyEvent::getKeyText(int32_t keyCode) {
	$init(KeyEvent);
	$useLocalCurrentObjectStackCache();
	if (keyCode >= KeyEvent::VK_0 && keyCode <= KeyEvent::VK_9 || keyCode >= KeyEvent::VK_A && keyCode <= KeyEvent::VK_Z) {
		return $String::valueOf((char16_t)keyCode);
	}
	switch (keyCode) {
	case KeyEvent::VK_ENTER:
		{
			return $Toolkit::getProperty("AWT.enter"_s, "Enter"_s);
		}
	case KeyEvent::VK_BACK_SPACE:
		{
			return $Toolkit::getProperty("AWT.backSpace"_s, "Backspace"_s);
		}
	case KeyEvent::VK_TAB:
		{
			return $Toolkit::getProperty("AWT.tab"_s, "Tab"_s);
		}
	case KeyEvent::VK_CANCEL:
		{
			return $Toolkit::getProperty("AWT.cancel"_s, "Cancel"_s);
		}
	case KeyEvent::VK_CLEAR:
		{
			return $Toolkit::getProperty("AWT.clear"_s, "Clear"_s);
		}
	case KeyEvent::VK_COMPOSE:
		{
			return $Toolkit::getProperty("AWT.compose"_s, "Compose"_s);
		}
	case KeyEvent::VK_PAUSE:
		{
			return $Toolkit::getProperty("AWT.pause"_s, "Pause"_s);
		}
	case KeyEvent::VK_CAPS_LOCK:
		{
			return $Toolkit::getProperty("AWT.capsLock"_s, "Caps Lock"_s);
		}
	case KeyEvent::VK_ESCAPE:
		{
			return $Toolkit::getProperty("AWT.escape"_s, "Escape"_s);
		}
	case KeyEvent::VK_SPACE:
		{
			return $Toolkit::getProperty("AWT.space"_s, "Space"_s);
		}
	case KeyEvent::VK_PAGE_UP:
		{
			return $Toolkit::getProperty("AWT.pgup"_s, "Page Up"_s);
		}
	case KeyEvent::VK_PAGE_DOWN:
		{
			return $Toolkit::getProperty("AWT.pgdn"_s, "Page Down"_s);
		}
	case KeyEvent::VK_END:
		{
			return $Toolkit::getProperty("AWT.end"_s, "End"_s);
		}
	case KeyEvent::VK_HOME:
		{
			return $Toolkit::getProperty("AWT.home"_s, "Home"_s);
		}
	case KeyEvent::VK_LEFT:
		{
			return $Toolkit::getProperty("AWT.left"_s, "Left"_s);
		}
	case KeyEvent::VK_UP:
		{
			return $Toolkit::getProperty("AWT.up"_s, "Up"_s);
		}
	case KeyEvent::VK_RIGHT:
		{
			return $Toolkit::getProperty("AWT.right"_s, "Right"_s);
		}
	case KeyEvent::VK_DOWN:
		{
			return $Toolkit::getProperty("AWT.down"_s, "Down"_s);
		}
	case KeyEvent::VK_BEGIN:
		{
			return $Toolkit::getProperty("AWT.begin"_s, "Begin"_s);
		}
	case KeyEvent::VK_SHIFT:
		{
			return $Toolkit::getProperty("AWT.shift"_s, "Shift"_s);
		}
	case KeyEvent::VK_CONTROL:
		{
			return $Toolkit::getProperty("AWT.control"_s, "Control"_s);
		}
	case KeyEvent::VK_ALT:
		{
			return $Toolkit::getProperty("AWT.alt"_s, "Alt"_s);
		}
	case KeyEvent::VK_META:
		{
			return $Toolkit::getProperty("AWT.meta"_s, "Meta"_s);
		}
	case KeyEvent::VK_ALT_GRAPH:
		{
			return $Toolkit::getProperty("AWT.altGraph"_s, "Alt Graph"_s);
		}
	case KeyEvent::VK_COMMA:
		{
			return $Toolkit::getProperty("AWT.comma"_s, "Comma"_s);
		}
	case KeyEvent::VK_PERIOD:
		{
			return $Toolkit::getProperty("AWT.period"_s, "Period"_s);
		}
	case KeyEvent::VK_SLASH:
		{
			return $Toolkit::getProperty("AWT.slash"_s, "Slash"_s);
		}
	case KeyEvent::VK_SEMICOLON:
		{
			return $Toolkit::getProperty("AWT.semicolon"_s, "Semicolon"_s);
		}
	case KeyEvent::VK_EQUALS:
		{
			return $Toolkit::getProperty("AWT.equals"_s, "Equals"_s);
		}
	case KeyEvent::VK_OPEN_BRACKET:
		{
			return $Toolkit::getProperty("AWT.openBracket"_s, "Open Bracket"_s);
		}
	case KeyEvent::VK_BACK_SLASH:
		{
			return $Toolkit::getProperty("AWT.backSlash"_s, "Back Slash"_s);
		}
	case KeyEvent::VK_CLOSE_BRACKET:
		{
			return $Toolkit::getProperty("AWT.closeBracket"_s, "Close Bracket"_s);
		}
	case KeyEvent::VK_MULTIPLY:
		{
			return $Toolkit::getProperty("AWT.multiply"_s, "NumPad *"_s);
		}
	case KeyEvent::VK_ADD:
		{
			return $Toolkit::getProperty("AWT.add"_s, "NumPad +"_s);
		}
	case KeyEvent::VK_SEPARATOR:
		{
			return $Toolkit::getProperty("AWT.separator"_s, "NumPad ,"_s);
		}
	case KeyEvent::VK_SUBTRACT:
		{
			return $Toolkit::getProperty("AWT.subtract"_s, "NumPad -"_s);
		}
	case KeyEvent::VK_DECIMAL:
		{
			return $Toolkit::getProperty("AWT.decimal"_s, "NumPad ."_s);
		}
	case KeyEvent::VK_DIVIDE:
		{
			return $Toolkit::getProperty("AWT.divide"_s, "NumPad /"_s);
		}
	case KeyEvent::VK_DELETE:
		{
			return $Toolkit::getProperty("AWT.delete"_s, "Delete"_s);
		}
	case KeyEvent::VK_NUM_LOCK:
		{
			return $Toolkit::getProperty("AWT.numLock"_s, "Num Lock"_s);
		}
	case KeyEvent::VK_SCROLL_LOCK:
		{
			return $Toolkit::getProperty("AWT.scrollLock"_s, "Scroll Lock"_s);
		}
	case KeyEvent::VK_WINDOWS:
		{
			return $Toolkit::getProperty("AWT.windows"_s, "Windows"_s);
		}
	case KeyEvent::VK_CONTEXT_MENU:
		{
			return $Toolkit::getProperty("AWT.context"_s, "Context Menu"_s);
		}
	case KeyEvent::VK_F1:
		{
			return $Toolkit::getProperty("AWT.f1"_s, "F1"_s);
		}
	case KeyEvent::VK_F2:
		{
			return $Toolkit::getProperty("AWT.f2"_s, "F2"_s);
		}
	case KeyEvent::VK_F3:
		{
			return $Toolkit::getProperty("AWT.f3"_s, "F3"_s);
		}
	case KeyEvent::VK_F4:
		{
			return $Toolkit::getProperty("AWT.f4"_s, "F4"_s);
		}
	case KeyEvent::VK_F5:
		{
			return $Toolkit::getProperty("AWT.f5"_s, "F5"_s);
		}
	case KeyEvent::VK_F6:
		{
			return $Toolkit::getProperty("AWT.f6"_s, "F6"_s);
		}
	case KeyEvent::VK_F7:
		{
			return $Toolkit::getProperty("AWT.f7"_s, "F7"_s);
		}
	case KeyEvent::VK_F8:
		{
			return $Toolkit::getProperty("AWT.f8"_s, "F8"_s);
		}
	case KeyEvent::VK_F9:
		{
			return $Toolkit::getProperty("AWT.f9"_s, "F9"_s);
		}
	case KeyEvent::VK_F10:
		{
			return $Toolkit::getProperty("AWT.f10"_s, "F10"_s);
		}
	case KeyEvent::VK_F11:
		{
			return $Toolkit::getProperty("AWT.f11"_s, "F11"_s);
		}
	case KeyEvent::VK_F12:
		{
			return $Toolkit::getProperty("AWT.f12"_s, "F12"_s);
		}
	case KeyEvent::VK_F13:
		{
			return $Toolkit::getProperty("AWT.f13"_s, "F13"_s);
		}
	case KeyEvent::VK_F14:
		{
			return $Toolkit::getProperty("AWT.f14"_s, "F14"_s);
		}
	case KeyEvent::VK_F15:
		{
			return $Toolkit::getProperty("AWT.f15"_s, "F15"_s);
		}
	case KeyEvent::VK_F16:
		{
			return $Toolkit::getProperty("AWT.f16"_s, "F16"_s);
		}
	case KeyEvent::VK_F17:
		{
			return $Toolkit::getProperty("AWT.f17"_s, "F17"_s);
		}
	case KeyEvent::VK_F18:
		{
			return $Toolkit::getProperty("AWT.f18"_s, "F18"_s);
		}
	case KeyEvent::VK_F19:
		{
			return $Toolkit::getProperty("AWT.f19"_s, "F19"_s);
		}
	case KeyEvent::VK_F20:
		{
			return $Toolkit::getProperty("AWT.f20"_s, "F20"_s);
		}
	case KeyEvent::VK_F21:
		{
			return $Toolkit::getProperty("AWT.f21"_s, "F21"_s);
		}
	case KeyEvent::VK_F22:
		{
			return $Toolkit::getProperty("AWT.f22"_s, "F22"_s);
		}
	case KeyEvent::VK_F23:
		{
			return $Toolkit::getProperty("AWT.f23"_s, "F23"_s);
		}
	case KeyEvent::VK_F24:
		{
			return $Toolkit::getProperty("AWT.f24"_s, "F24"_s);
		}
	case KeyEvent::VK_PRINTSCREEN:
		{
			return $Toolkit::getProperty("AWT.printScreen"_s, "Print Screen"_s);
		}
	case KeyEvent::VK_INSERT:
		{
			return $Toolkit::getProperty("AWT.insert"_s, "Insert"_s);
		}
	case KeyEvent::VK_HELP:
		{
			return $Toolkit::getProperty("AWT.help"_s, "Help"_s);
		}
	case KeyEvent::VK_BACK_QUOTE:
		{
			return $Toolkit::getProperty("AWT.backQuote"_s, "Back Quote"_s);
		}
	case KeyEvent::VK_QUOTE:
		{
			return $Toolkit::getProperty("AWT.quote"_s, "Quote"_s);
		}
	case KeyEvent::VK_KP_UP:
		{
			return $Toolkit::getProperty("AWT.up"_s, "Up"_s);
		}
	case KeyEvent::VK_KP_DOWN:
		{
			return $Toolkit::getProperty("AWT.down"_s, "Down"_s);
		}
	case KeyEvent::VK_KP_LEFT:
		{
			return $Toolkit::getProperty("AWT.left"_s, "Left"_s);
		}
	case KeyEvent::VK_KP_RIGHT:
		{
			return $Toolkit::getProperty("AWT.right"_s, "Right"_s);
		}
	case KeyEvent::VK_DEAD_GRAVE:
		{
			return $Toolkit::getProperty("AWT.deadGrave"_s, "Dead Grave"_s);
		}
	case KeyEvent::VK_DEAD_ACUTE:
		{
			return $Toolkit::getProperty("AWT.deadAcute"_s, "Dead Acute"_s);
		}
	case KeyEvent::VK_DEAD_CIRCUMFLEX:
		{
			return $Toolkit::getProperty("AWT.deadCircumflex"_s, "Dead Circumflex"_s);
		}
	case KeyEvent::VK_DEAD_TILDE:
		{
			return $Toolkit::getProperty("AWT.deadTilde"_s, "Dead Tilde"_s);
		}
	case KeyEvent::VK_DEAD_MACRON:
		{
			return $Toolkit::getProperty("AWT.deadMacron"_s, "Dead Macron"_s);
		}
	case KeyEvent::VK_DEAD_BREVE:
		{
			return $Toolkit::getProperty("AWT.deadBreve"_s, "Dead Breve"_s);
		}
	case KeyEvent::VK_DEAD_ABOVEDOT:
		{
			return $Toolkit::getProperty("AWT.deadAboveDot"_s, "Dead Above Dot"_s);
		}
	case KeyEvent::VK_DEAD_DIAERESIS:
		{
			return $Toolkit::getProperty("AWT.deadDiaeresis"_s, "Dead Diaeresis"_s);
		}
	case KeyEvent::VK_DEAD_ABOVERING:
		{
			return $Toolkit::getProperty("AWT.deadAboveRing"_s, "Dead Above Ring"_s);
		}
	case KeyEvent::VK_DEAD_DOUBLEACUTE:
		{
			return $Toolkit::getProperty("AWT.deadDoubleAcute"_s, "Dead Double Acute"_s);
		}
	case KeyEvent::VK_DEAD_CARON:
		{
			return $Toolkit::getProperty("AWT.deadCaron"_s, "Dead Caron"_s);
		}
	case KeyEvent::VK_DEAD_CEDILLA:
		{
			return $Toolkit::getProperty("AWT.deadCedilla"_s, "Dead Cedilla"_s);
		}
	case KeyEvent::VK_DEAD_OGONEK:
		{
			return $Toolkit::getProperty("AWT.deadOgonek"_s, "Dead Ogonek"_s);
		}
	case KeyEvent::VK_DEAD_IOTA:
		{
			return $Toolkit::getProperty("AWT.deadIota"_s, "Dead Iota"_s);
		}
	case KeyEvent::VK_DEAD_VOICED_SOUND:
		{
			return $Toolkit::getProperty("AWT.deadVoicedSound"_s, "Dead Voiced Sound"_s);
		}
	case KeyEvent::VK_DEAD_SEMIVOICED_SOUND:
		{
			return $Toolkit::getProperty("AWT.deadSemivoicedSound"_s, "Dead Semivoiced Sound"_s);
		}
	case KeyEvent::VK_AMPERSAND:
		{
			return $Toolkit::getProperty("AWT.ampersand"_s, "Ampersand"_s);
		}
	case KeyEvent::VK_ASTERISK:
		{
			return $Toolkit::getProperty("AWT.asterisk"_s, "Asterisk"_s);
		}
	case KeyEvent::VK_QUOTEDBL:
		{
			return $Toolkit::getProperty("AWT.quoteDbl"_s, "Double Quote"_s);
		}
	case KeyEvent::VK_LESS:
		{
			return $Toolkit::getProperty("AWT.Less"_s, "Less"_s);
		}
	case KeyEvent::VK_GREATER:
		{
			return $Toolkit::getProperty("AWT.greater"_s, "Greater"_s);
		}
	case KeyEvent::VK_BRACELEFT:
		{
			return $Toolkit::getProperty("AWT.braceLeft"_s, "Left Brace"_s);
		}
	case KeyEvent::VK_BRACERIGHT:
		{
			return $Toolkit::getProperty("AWT.braceRight"_s, "Right Brace"_s);
		}
	case KeyEvent::VK_AT:
		{
			return $Toolkit::getProperty("AWT.at"_s, "At"_s);
		}
	case KeyEvent::VK_COLON:
		{
			return $Toolkit::getProperty("AWT.colon"_s, "Colon"_s);
		}
	case KeyEvent::VK_CIRCUMFLEX:
		{
			return $Toolkit::getProperty("AWT.circumflex"_s, "Circumflex"_s);
		}
	case KeyEvent::VK_DOLLAR:
		{
			return $Toolkit::getProperty("AWT.dollar"_s, "Dollar"_s);
		}
	case KeyEvent::VK_EURO_SIGN:
		{
			return $Toolkit::getProperty("AWT.euro"_s, "Euro"_s);
		}
	case KeyEvent::VK_EXCLAMATION_MARK:
		{
			return $Toolkit::getProperty("AWT.exclamationMark"_s, "Exclamation Mark"_s);
		}
	case KeyEvent::VK_INVERTED_EXCLAMATION_MARK:
		{
			return $Toolkit::getProperty("AWT.invertedExclamationMark"_s, "Inverted Exclamation Mark"_s);
		}
	case KeyEvent::VK_LEFT_PARENTHESIS:
		{
			return $Toolkit::getProperty("AWT.leftParenthesis"_s, "Left Parenthesis"_s);
		}
	case KeyEvent::VK_NUMBER_SIGN:
		{
			return $Toolkit::getProperty("AWT.numberSign"_s, "Number Sign"_s);
		}
	case KeyEvent::VK_MINUS:
		{
			return $Toolkit::getProperty("AWT.minus"_s, "Minus"_s);
		}
	case KeyEvent::VK_PLUS:
		{
			return $Toolkit::getProperty("AWT.plus"_s, "Plus"_s);
		}
	case KeyEvent::VK_RIGHT_PARENTHESIS:
		{
			return $Toolkit::getProperty("AWT.rightParenthesis"_s, "Right Parenthesis"_s);
		}
	case KeyEvent::VK_UNDERSCORE:
		{
			return $Toolkit::getProperty("AWT.underscore"_s, "Underscore"_s);
		}
	case KeyEvent::VK_FINAL:
		{
			return $Toolkit::getProperty("AWT.final"_s, "Final"_s);
		}
	case KeyEvent::VK_CONVERT:
		{
			return $Toolkit::getProperty("AWT.convert"_s, "Convert"_s);
		}
	case KeyEvent::VK_NONCONVERT:
		{
			return $Toolkit::getProperty("AWT.noconvert"_s, "No Convert"_s);
		}
	case KeyEvent::VK_ACCEPT:
		{
			return $Toolkit::getProperty("AWT.accept"_s, "Accept"_s);
		}
	case KeyEvent::VK_MODECHANGE:
		{
			return $Toolkit::getProperty("AWT.modechange"_s, "Mode Change"_s);
		}
	case KeyEvent::VK_KANA:
		{
			return $Toolkit::getProperty("AWT.kana"_s, "Kana"_s);
		}
	case KeyEvent::VK_KANJI:
		{
			return $Toolkit::getProperty("AWT.kanji"_s, "Kanji"_s);
		}
	case KeyEvent::VK_ALPHANUMERIC:
		{
			return $Toolkit::getProperty("AWT.alphanumeric"_s, "Alphanumeric"_s);
		}
	case KeyEvent::VK_KATAKANA:
		{
			return $Toolkit::getProperty("AWT.katakana"_s, "Katakana"_s);
		}
	case KeyEvent::VK_HIRAGANA:
		{
			return $Toolkit::getProperty("AWT.hiragana"_s, "Hiragana"_s);
		}
	case KeyEvent::VK_FULL_WIDTH:
		{
			return $Toolkit::getProperty("AWT.fullWidth"_s, "Full-Width"_s);
		}
	case KeyEvent::VK_HALF_WIDTH:
		{
			return $Toolkit::getProperty("AWT.halfWidth"_s, "Half-Width"_s);
		}
	case KeyEvent::VK_ROMAN_CHARACTERS:
		{
			return $Toolkit::getProperty("AWT.romanCharacters"_s, "Roman Characters"_s);
		}
	case KeyEvent::VK_ALL_CANDIDATES:
		{
			return $Toolkit::getProperty("AWT.allCandidates"_s, "All Candidates"_s);
		}
	case KeyEvent::VK_PREVIOUS_CANDIDATE:
		{
			return $Toolkit::getProperty("AWT.previousCandidate"_s, "Previous Candidate"_s);
		}
	case KeyEvent::VK_CODE_INPUT:
		{
			return $Toolkit::getProperty("AWT.codeInput"_s, "Code Input"_s);
		}
	case KeyEvent::VK_JAPANESE_KATAKANA:
		{
			return $Toolkit::getProperty("AWT.japaneseKatakana"_s, "Japanese Katakana"_s);
		}
	case KeyEvent::VK_JAPANESE_HIRAGANA:
		{
			return $Toolkit::getProperty("AWT.japaneseHiragana"_s, "Japanese Hiragana"_s);
		}
	case KeyEvent::VK_JAPANESE_ROMAN:
		{
			return $Toolkit::getProperty("AWT.japaneseRoman"_s, "Japanese Roman"_s);
		}
	case KeyEvent::VK_KANA_LOCK:
		{
			return $Toolkit::getProperty("AWT.kanaLock"_s, "Kana Lock"_s);
		}
	case KeyEvent::VK_INPUT_METHOD_ON_OFF:
		{
			return $Toolkit::getProperty("AWT.inputMethodOnOff"_s, "Input Method On/Off"_s);
		}
	case KeyEvent::VK_AGAIN:
		{
			return $Toolkit::getProperty("AWT.again"_s, "Again"_s);
		}
	case KeyEvent::VK_UNDO:
		{
			return $Toolkit::getProperty("AWT.undo"_s, "Undo"_s);
		}
	case KeyEvent::VK_COPY:
		{
			return $Toolkit::getProperty("AWT.copy"_s, "Copy"_s);
		}
	case KeyEvent::VK_PASTE:
		{
			return $Toolkit::getProperty("AWT.paste"_s, "Paste"_s);
		}
	case KeyEvent::VK_CUT:
		{
			return $Toolkit::getProperty("AWT.cut"_s, "Cut"_s);
		}
	case KeyEvent::VK_FIND:
		{
			return $Toolkit::getProperty("AWT.find"_s, "Find"_s);
		}
	case KeyEvent::VK_PROPS:
		{
			return $Toolkit::getProperty("AWT.props"_s, "Props"_s);
		}
	case KeyEvent::VK_STOP:
		{
			return $Toolkit::getProperty("AWT.stop"_s, "Stop"_s);
		}
	}
	if (keyCode >= KeyEvent::VK_NUMPAD0 && keyCode <= KeyEvent::VK_NUMPAD9) {
		$var($String, numpad, $Toolkit::getProperty("AWT.numpad"_s, "NumPad"_s));
		char16_t c = (char16_t)(keyCode - KeyEvent::VK_NUMPAD0 + u'0');
		return $str({numpad, "-"_s, $$str(c)});
	}
	if (((int32_t)(keyCode & (uint32_t)0x01000000)) != 0) {
		return $String::valueOf((char16_t)(keyCode ^ 0x01000000));
	}
	$var($String, unknown, $Toolkit::getProperty("AWT.unknown"_s, "Unknown"_s));
	return $str({unknown, " keyCode: 0x"_s, $($Integer::toString(keyCode, 16))});
}

$String* KeyEvent::getKeyModifiersText(int32_t modifiers) {
	$init(KeyEvent);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.meta"_s, "Meta"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.control"_s, "Ctrl"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.alt"_s, "Alt"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.shift"_s, "Shift"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.altGraph"_s, "Alt Graph"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.button1"_s, "Button1"_s)));
		buf->append("+"_s);
	}
	if (buf->length() > 0) {
		buf->setLength(buf->length() - 1);
	}
	return buf->toString();
}

bool KeyEvent::isActionKey() {
	switch (this->keyCode) {
	case KeyEvent::VK_HOME:
		{}
	case KeyEvent::VK_END:
		{}
	case KeyEvent::VK_PAGE_UP:
		{}
	case KeyEvent::VK_PAGE_DOWN:
		{}
	case KeyEvent::VK_UP:
		{}
	case KeyEvent::VK_DOWN:
		{}
	case KeyEvent::VK_LEFT:
		{}
	case KeyEvent::VK_RIGHT:
		{}
	case KeyEvent::VK_BEGIN:
		{}
	case KeyEvent::VK_KP_LEFT:
		{}
	case KeyEvent::VK_KP_UP:
		{}
	case KeyEvent::VK_KP_RIGHT:
		{}
	case KeyEvent::VK_KP_DOWN:
		{}
	case KeyEvent::VK_F1:
		{}
	case KeyEvent::VK_F2:
		{}
	case KeyEvent::VK_F3:
		{}
	case KeyEvent::VK_F4:
		{}
	case KeyEvent::VK_F5:
		{}
	case KeyEvent::VK_F6:
		{}
	case KeyEvent::VK_F7:
		{}
	case KeyEvent::VK_F8:
		{}
	case KeyEvent::VK_F9:
		{}
	case KeyEvent::VK_F10:
		{}
	case KeyEvent::VK_F11:
		{}
	case KeyEvent::VK_F12:
		{}
	case KeyEvent::VK_F13:
		{}
	case KeyEvent::VK_F14:
		{}
	case KeyEvent::VK_F15:
		{}
	case KeyEvent::VK_F16:
		{}
	case KeyEvent::VK_F17:
		{}
	case KeyEvent::VK_F18:
		{}
	case KeyEvent::VK_F19:
		{}
	case KeyEvent::VK_F20:
		{}
	case KeyEvent::VK_F21:
		{}
	case KeyEvent::VK_F22:
		{}
	case KeyEvent::VK_F23:
		{}
	case KeyEvent::VK_F24:
		{}
	case KeyEvent::VK_PRINTSCREEN:
		{}
	case KeyEvent::VK_SCROLL_LOCK:
		{}
	case KeyEvent::VK_CAPS_LOCK:
		{}
	case KeyEvent::VK_NUM_LOCK:
		{}
	case KeyEvent::VK_PAUSE:
		{}
	case KeyEvent::VK_INSERT:
		{}
	case KeyEvent::VK_FINAL:
		{}
	case KeyEvent::VK_CONVERT:
		{}
	case KeyEvent::VK_NONCONVERT:
		{}
	case KeyEvent::VK_ACCEPT:
		{}
	case KeyEvent::VK_MODECHANGE:
		{}
	case KeyEvent::VK_KANA:
		{}
	case KeyEvent::VK_KANJI:
		{}
	case KeyEvent::VK_ALPHANUMERIC:
		{}
	case KeyEvent::VK_KATAKANA:
		{}
	case KeyEvent::VK_HIRAGANA:
		{}
	case KeyEvent::VK_FULL_WIDTH:
		{}
	case KeyEvent::VK_HALF_WIDTH:
		{}
	case KeyEvent::VK_ROMAN_CHARACTERS:
		{}
	case KeyEvent::VK_ALL_CANDIDATES:
		{}
	case KeyEvent::VK_PREVIOUS_CANDIDATE:
		{}
	case KeyEvent::VK_CODE_INPUT:
		{}
	case KeyEvent::VK_JAPANESE_KATAKANA:
		{}
	case KeyEvent::VK_JAPANESE_HIRAGANA:
		{}
	case KeyEvent::VK_JAPANESE_ROMAN:
		{}
	case KeyEvent::VK_KANA_LOCK:
		{}
	case KeyEvent::VK_INPUT_METHOD_ON_OFF:
		{}
	case KeyEvent::VK_AGAIN:
		{}
	case KeyEvent::VK_UNDO:
		{}
	case KeyEvent::VK_COPY:
		{}
	case KeyEvent::VK_PASTE:
		{}
	case KeyEvent::VK_CUT:
		{}
	case KeyEvent::VK_FIND:
		{}
	case KeyEvent::VK_PROPS:
		{}
	case KeyEvent::VK_STOP:
		{}
	case KeyEvent::VK_HELP:
		{}
	case KeyEvent::VK_WINDOWS:
		{}
	case KeyEvent::VK_CONTEXT_MENU:
		{
			return true;
		}
	}
	return false;
}

$String* KeyEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, str, $new($StringBuilder, 100));
	switch (this->id) {
	case KeyEvent::KEY_PRESSED:
		{
			str->append("KEY_PRESSED"_s);
			break;
		}
	case KeyEvent::KEY_RELEASED:
		{
			str->append("KEY_RELEASED"_s);
			break;
		}
	case KeyEvent::KEY_TYPED:
		{
			str->append("KEY_TYPED"_s);
			break;
		}
	default:
		{
			str->append("unknown type"_s);
			break;
		}
	}
	str->append(",keyCode="_s)->append(this->keyCode);
	str->append(",keyText="_s)->append($(getKeyText(this->keyCode)));
	str->append(",keyChar="_s);
	switch (this->keyChar) {
	case u'\b':
		{
			str->append($(getKeyText(KeyEvent::VK_BACK_SPACE)));
			break;
		}
	case u'\t':
		{
			str->append($(getKeyText(KeyEvent::VK_TAB)));
			break;
		}
	case u'\n':
		{
			str->append($(getKeyText(KeyEvent::VK_ENTER)));
			break;
		}
	case (char16_t)0x18:
		{
			str->append($(getKeyText(KeyEvent::VK_CANCEL)));
			break;
		}
	case (char16_t)0x1B:
		{
			str->append($(getKeyText(KeyEvent::VK_ESCAPE)));
			break;
		}
	case (char16_t)0x7F:
		{
			str->append($(getKeyText(KeyEvent::VK_DELETE)));
			break;
		}
	case KeyEvent::CHAR_UNDEFINED:
		{
			str->append($($Toolkit::getProperty("AWT.undefined"_s, "Undefined"_s)));
			str->append(" keyChar"_s);
			break;
		}
	default:
		{
			str->append("\'"_s)->append(this->keyChar)->append("\'"_s);
			break;
		}
	}
	if (getModifiers() != 0) {
		str->append(",modifiers="_s)->append($(getKeyModifiersText(this->modifiers)));
	}
	if (getModifiersEx() != 0) {
		str->append(",extModifiers="_s)->append($(getModifiersExText(this->modifiers)));
	}
	str->append(",keyLocation="_s);
	switch (this->keyLocation) {
	case KeyEvent::KEY_LOCATION_UNKNOWN:
		{
			str->append("KEY_LOCATION_UNKNOWN"_s);
			break;
		}
	case KeyEvent::KEY_LOCATION_STANDARD:
		{
			str->append("KEY_LOCATION_STANDARD"_s);
			break;
		}
	case KeyEvent::KEY_LOCATION_LEFT:
		{
			str->append("KEY_LOCATION_LEFT"_s);
			break;
		}
	case KeyEvent::KEY_LOCATION_RIGHT:
		{
			str->append("KEY_LOCATION_RIGHT"_s);
			break;
		}
	case KeyEvent::KEY_LOCATION_NUMPAD:
		{
			str->append("KEY_LOCATION_NUMPAD"_s);
			break;
		}
	default:
		{
			str->append("KEY_LOCATION_UNKNOWN"_s);
			break;
		}
	}
	str->append(",rawCode="_s)->append(this->rawCode);
	str->append(",primaryLevelUnicode="_s)->append(this->primaryLevelUnicode);
	str->append(",scancode="_s)->append(this->scancode);
	str->append(",extendedKeyCode=0x"_s)->append($($Long::toHexString(this->extendedKeyCode)));
	return str->toString();
}

int32_t KeyEvent::getExtendedKeyCode() {
	return (int32_t)this->extendedKeyCode;
}

int32_t KeyEvent::getExtendedKeyCodeForChar(int32_t c) {
	$init(KeyEvent);
	return $ExtendedKeyCodes::getExtendedKeyCodeForChar(c);
}

void KeyEvent::setNewModifiers() {
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
		this->modifiers |= $InputEvent::SHIFT_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
		this->modifiers |= $InputEvent::CTRL_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
		this->modifiers |= $InputEvent::META_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_GRAPH_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_GRAPH_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0) {
		this->modifiers |= $InputEvent::BUTTON1_DOWN_MASK;
	}
}

void KeyEvent::setOldModifiers() {
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::SHIFT_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::SHIFT_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::CTRL_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::CTRL_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::META_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::META_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_GRAPH_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON1_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::BUTTON1_MASK;
	}
}

void KeyEvent::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	bool var$0 = getModifiers() != 0;
	if (var$0 && getModifiersEx() == 0) {
		setNewModifiers();
	}
}

void clinit$KeyEvent($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			KeyEvent::initIDs();
		}
		$AWTAccessor::setKeyEventAccessor($$new($KeyEvent$1));
	}
}

KeyEvent::KeyEvent() {
}

$Class* KeyEvent::load$($String* name, bool initialize) {
	$loadClass(KeyEvent, name, initialize, &_KeyEvent_ClassInfo_, clinit$KeyEvent, allocate$KeyEvent);
	return class$;
}

$Class* KeyEvent::class$ = nullptr;

		} // event
	} // awt
} // java