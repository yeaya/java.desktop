#ifndef _java_awt_event_KeyEvent_h_
#define _java_awt_event_KeyEvent_h_
//$ class java.awt.event.KeyEvent
//$ extends java.awt.event.InputEvent

#include <java/awt/event/InputEvent.h>

#pragma push_macro("CHAR_UNDEFINED")
#undef CHAR_UNDEFINED
#pragma push_macro("KEY_FIRST")
#undef KEY_FIRST
#pragma push_macro("KEY_LAST")
#undef KEY_LAST
#pragma push_macro("KEY_LOCATION_LEFT")
#undef KEY_LOCATION_LEFT
#pragma push_macro("KEY_LOCATION_NUMPAD")
#undef KEY_LOCATION_NUMPAD
#pragma push_macro("KEY_LOCATION_RIGHT")
#undef KEY_LOCATION_RIGHT
#pragma push_macro("KEY_LOCATION_STANDARD")
#undef KEY_LOCATION_STANDARD
#pragma push_macro("KEY_LOCATION_UNKNOWN")
#undef KEY_LOCATION_UNKNOWN
#pragma push_macro("KEY_PRESSED")
#undef KEY_PRESSED
#pragma push_macro("KEY_RELEASED")
#undef KEY_RELEASED
#pragma push_macro("KEY_TYPED")
#undef KEY_TYPED
#pragma push_macro("VK_0")
#undef VK_0
#pragma push_macro("VK_1")
#undef VK_1
#pragma push_macro("VK_2")
#undef VK_2
#pragma push_macro("VK_3")
#undef VK_3
#pragma push_macro("VK_4")
#undef VK_4
#pragma push_macro("VK_5")
#undef VK_5
#pragma push_macro("VK_6")
#undef VK_6
#pragma push_macro("VK_7")
#undef VK_7
#pragma push_macro("VK_8")
#undef VK_8
#pragma push_macro("VK_9")
#undef VK_9
#pragma push_macro("VK_A")
#undef VK_A
#pragma push_macro("VK_ACCEPT")
#undef VK_ACCEPT
#pragma push_macro("VK_ADD")
#undef VK_ADD
#pragma push_macro("VK_AGAIN")
#undef VK_AGAIN
#pragma push_macro("VK_ALL_CANDIDATES")
#undef VK_ALL_CANDIDATES
#pragma push_macro("VK_ALPHANUMERIC")
#undef VK_ALPHANUMERIC
#pragma push_macro("VK_ALT")
#undef VK_ALT
#pragma push_macro("VK_ALT_GRAPH")
#undef VK_ALT_GRAPH
#pragma push_macro("VK_AMPERSAND")
#undef VK_AMPERSAND
#pragma push_macro("VK_ASTERISK")
#undef VK_ASTERISK
#pragma push_macro("VK_AT")
#undef VK_AT
#pragma push_macro("VK_B")
#undef VK_B
#pragma push_macro("VK_BACK_QUOTE")
#undef VK_BACK_QUOTE
#pragma push_macro("VK_BACK_SLASH")
#undef VK_BACK_SLASH
#pragma push_macro("VK_BACK_SPACE")
#undef VK_BACK_SPACE
#pragma push_macro("VK_BEGIN")
#undef VK_BEGIN
#pragma push_macro("VK_BRACELEFT")
#undef VK_BRACELEFT
#pragma push_macro("VK_BRACERIGHT")
#undef VK_BRACERIGHT
#pragma push_macro("VK_C")
#undef VK_C
#pragma push_macro("VK_CANCEL")
#undef VK_CANCEL
#pragma push_macro("VK_CAPS_LOCK")
#undef VK_CAPS_LOCK
#pragma push_macro("VK_CIRCUMFLEX")
#undef VK_CIRCUMFLEX
#pragma push_macro("VK_CLEAR")
#undef VK_CLEAR
#pragma push_macro("VK_CLOSE_BRACKET")
#undef VK_CLOSE_BRACKET
#pragma push_macro("VK_CODE_INPUT")
#undef VK_CODE_INPUT
#pragma push_macro("VK_COLON")
#undef VK_COLON
#pragma push_macro("VK_COMMA")
#undef VK_COMMA
#pragma push_macro("VK_COMPOSE")
#undef VK_COMPOSE
#pragma push_macro("VK_CONTEXT_MENU")
#undef VK_CONTEXT_MENU
#pragma push_macro("VK_CONTROL")
#undef VK_CONTROL
#pragma push_macro("VK_CONVERT")
#undef VK_CONVERT
#pragma push_macro("VK_COPY")
#undef VK_COPY
#pragma push_macro("VK_CUT")
#undef VK_CUT
#pragma push_macro("VK_D")
#undef VK_D
#pragma push_macro("VK_DEAD_ABOVEDOT")
#undef VK_DEAD_ABOVEDOT
#pragma push_macro("VK_DEAD_ABOVERING")
#undef VK_DEAD_ABOVERING
#pragma push_macro("VK_DEAD_ACUTE")
#undef VK_DEAD_ACUTE
#pragma push_macro("VK_DEAD_BREVE")
#undef VK_DEAD_BREVE
#pragma push_macro("VK_DEAD_CARON")
#undef VK_DEAD_CARON
#pragma push_macro("VK_DEAD_CEDILLA")
#undef VK_DEAD_CEDILLA
#pragma push_macro("VK_DEAD_CIRCUMFLEX")
#undef VK_DEAD_CIRCUMFLEX
#pragma push_macro("VK_DEAD_DIAERESIS")
#undef VK_DEAD_DIAERESIS
#pragma push_macro("VK_DEAD_DOUBLEACUTE")
#undef VK_DEAD_DOUBLEACUTE
#pragma push_macro("VK_DEAD_GRAVE")
#undef VK_DEAD_GRAVE
#pragma push_macro("VK_DEAD_IOTA")
#undef VK_DEAD_IOTA
#pragma push_macro("VK_DEAD_MACRON")
#undef VK_DEAD_MACRON
#pragma push_macro("VK_DEAD_OGONEK")
#undef VK_DEAD_OGONEK
#pragma push_macro("VK_DEAD_SEMIVOICED_SOUND")
#undef VK_DEAD_SEMIVOICED_SOUND
#pragma push_macro("VK_DEAD_TILDE")
#undef VK_DEAD_TILDE
#pragma push_macro("VK_DEAD_VOICED_SOUND")
#undef VK_DEAD_VOICED_SOUND
#pragma push_macro("VK_DECIMAL")
#undef VK_DECIMAL
#pragma push_macro("VK_DELETE")
#undef VK_DELETE
#pragma push_macro("VK_DIVIDE")
#undef VK_DIVIDE
#pragma push_macro("VK_DOLLAR")
#undef VK_DOLLAR
#pragma push_macro("VK_DOWN")
#undef VK_DOWN
#pragma push_macro("VK_E")
#undef VK_E
#pragma push_macro("VK_END")
#undef VK_END
#pragma push_macro("VK_ENTER")
#undef VK_ENTER
#pragma push_macro("VK_EQUALS")
#undef VK_EQUALS
#pragma push_macro("VK_ESCAPE")
#undef VK_ESCAPE
#pragma push_macro("VK_EURO_SIGN")
#undef VK_EURO_SIGN
#pragma push_macro("VK_EXCLAMATION_MARK")
#undef VK_EXCLAMATION_MARK
#pragma push_macro("VK_F")
#undef VK_F
#pragma push_macro("VK_F1")
#undef VK_F1
#pragma push_macro("VK_F10")
#undef VK_F10
#pragma push_macro("VK_F11")
#undef VK_F11
#pragma push_macro("VK_F12")
#undef VK_F12
#pragma push_macro("VK_F13")
#undef VK_F13
#pragma push_macro("VK_F14")
#undef VK_F14
#pragma push_macro("VK_F15")
#undef VK_F15
#pragma push_macro("VK_F16")
#undef VK_F16
#pragma push_macro("VK_F17")
#undef VK_F17
#pragma push_macro("VK_F18")
#undef VK_F18
#pragma push_macro("VK_F19")
#undef VK_F19
#pragma push_macro("VK_F2")
#undef VK_F2
#pragma push_macro("VK_F20")
#undef VK_F20
#pragma push_macro("VK_F21")
#undef VK_F21
#pragma push_macro("VK_F22")
#undef VK_F22
#pragma push_macro("VK_F23")
#undef VK_F23
#pragma push_macro("VK_F24")
#undef VK_F24
#pragma push_macro("VK_F3")
#undef VK_F3
#pragma push_macro("VK_F4")
#undef VK_F4
#pragma push_macro("VK_F5")
#undef VK_F5
#pragma push_macro("VK_F6")
#undef VK_F6
#pragma push_macro("VK_F7")
#undef VK_F7
#pragma push_macro("VK_F8")
#undef VK_F8
#pragma push_macro("VK_F9")
#undef VK_F9
#pragma push_macro("VK_FINAL")
#undef VK_FINAL
#pragma push_macro("VK_FIND")
#undef VK_FIND
#pragma push_macro("VK_FULL_WIDTH")
#undef VK_FULL_WIDTH
#pragma push_macro("VK_G")
#undef VK_G
#pragma push_macro("VK_GREATER")
#undef VK_GREATER
#pragma push_macro("VK_H")
#undef VK_H
#pragma push_macro("VK_HALF_WIDTH")
#undef VK_HALF_WIDTH
#pragma push_macro("VK_HELP")
#undef VK_HELP
#pragma push_macro("VK_HIRAGANA")
#undef VK_HIRAGANA
#pragma push_macro("VK_HOME")
#undef VK_HOME
#pragma push_macro("VK_I")
#undef VK_I
#pragma push_macro("VK_INPUT_METHOD_ON_OFF")
#undef VK_INPUT_METHOD_ON_OFF
#pragma push_macro("VK_INSERT")
#undef VK_INSERT
#pragma push_macro("VK_INVERTED_EXCLAMATION_MARK")
#undef VK_INVERTED_EXCLAMATION_MARK
#pragma push_macro("VK_J")
#undef VK_J
#pragma push_macro("VK_JAPANESE_HIRAGANA")
#undef VK_JAPANESE_HIRAGANA
#pragma push_macro("VK_JAPANESE_KATAKANA")
#undef VK_JAPANESE_KATAKANA
#pragma push_macro("VK_JAPANESE_ROMAN")
#undef VK_JAPANESE_ROMAN
#pragma push_macro("VK_K")
#undef VK_K
#pragma push_macro("VK_KANA")
#undef VK_KANA
#pragma push_macro("VK_KANA_LOCK")
#undef VK_KANA_LOCK
#pragma push_macro("VK_KANJI")
#undef VK_KANJI
#pragma push_macro("VK_KATAKANA")
#undef VK_KATAKANA
#pragma push_macro("VK_KP_DOWN")
#undef VK_KP_DOWN
#pragma push_macro("VK_KP_LEFT")
#undef VK_KP_LEFT
#pragma push_macro("VK_KP_RIGHT")
#undef VK_KP_RIGHT
#pragma push_macro("VK_KP_UP")
#undef VK_KP_UP
#pragma push_macro("VK_L")
#undef VK_L
#pragma push_macro("VK_LEFT")
#undef VK_LEFT
#pragma push_macro("VK_LEFT_PARENTHESIS")
#undef VK_LEFT_PARENTHESIS
#pragma push_macro("VK_LESS")
#undef VK_LESS
#pragma push_macro("VK_M")
#undef VK_M
#pragma push_macro("VK_META")
#undef VK_META
#pragma push_macro("VK_MINUS")
#undef VK_MINUS
#pragma push_macro("VK_MODECHANGE")
#undef VK_MODECHANGE
#pragma push_macro("VK_MULTIPLY")
#undef VK_MULTIPLY
#pragma push_macro("VK_N")
#undef VK_N
#pragma push_macro("VK_NONCONVERT")
#undef VK_NONCONVERT
#pragma push_macro("VK_NUMBER_SIGN")
#undef VK_NUMBER_SIGN
#pragma push_macro("VK_NUMPAD0")
#undef VK_NUMPAD0
#pragma push_macro("VK_NUMPAD1")
#undef VK_NUMPAD1
#pragma push_macro("VK_NUMPAD2")
#undef VK_NUMPAD2
#pragma push_macro("VK_NUMPAD3")
#undef VK_NUMPAD3
#pragma push_macro("VK_NUMPAD4")
#undef VK_NUMPAD4
#pragma push_macro("VK_NUMPAD5")
#undef VK_NUMPAD5
#pragma push_macro("VK_NUMPAD6")
#undef VK_NUMPAD6
#pragma push_macro("VK_NUMPAD7")
#undef VK_NUMPAD7
#pragma push_macro("VK_NUMPAD8")
#undef VK_NUMPAD8
#pragma push_macro("VK_NUMPAD9")
#undef VK_NUMPAD9
#pragma push_macro("VK_NUM_LOCK")
#undef VK_NUM_LOCK
#pragma push_macro("VK_O")
#undef VK_O
#pragma push_macro("VK_OPEN_BRACKET")
#undef VK_OPEN_BRACKET
#pragma push_macro("VK_P")
#undef VK_P
#pragma push_macro("VK_PAGE_DOWN")
#undef VK_PAGE_DOWN
#pragma push_macro("VK_PAGE_UP")
#undef VK_PAGE_UP
#pragma push_macro("VK_PASTE")
#undef VK_PASTE
#pragma push_macro("VK_PAUSE")
#undef VK_PAUSE
#pragma push_macro("VK_PERIOD")
#undef VK_PERIOD
#pragma push_macro("VK_PLUS")
#undef VK_PLUS
#pragma push_macro("VK_PREVIOUS_CANDIDATE")
#undef VK_PREVIOUS_CANDIDATE
#pragma push_macro("VK_PRINTSCREEN")
#undef VK_PRINTSCREEN
#pragma push_macro("VK_PROPS")
#undef VK_PROPS
#pragma push_macro("VK_Q")
#undef VK_Q
#pragma push_macro("VK_QUOTE")
#undef VK_QUOTE
#pragma push_macro("VK_QUOTEDBL")
#undef VK_QUOTEDBL
#pragma push_macro("VK_R")
#undef VK_R
#pragma push_macro("VK_RIGHT")
#undef VK_RIGHT
#pragma push_macro("VK_RIGHT_PARENTHESIS")
#undef VK_RIGHT_PARENTHESIS
#pragma push_macro("VK_ROMAN_CHARACTERS")
#undef VK_ROMAN_CHARACTERS
#pragma push_macro("VK_S")
#undef VK_S
#pragma push_macro("VK_SCROLL_LOCK")
#undef VK_SCROLL_LOCK
#pragma push_macro("VK_SEMICOLON")
#undef VK_SEMICOLON
#pragma push_macro("VK_SEPARATER")
#undef VK_SEPARATER
#pragma push_macro("VK_SEPARATOR")
#undef VK_SEPARATOR
#pragma push_macro("VK_SHIFT")
#undef VK_SHIFT
#pragma push_macro("VK_SLASH")
#undef VK_SLASH
#pragma push_macro("VK_SPACE")
#undef VK_SPACE
#pragma push_macro("VK_STOP")
#undef VK_STOP
#pragma push_macro("VK_SUBTRACT")
#undef VK_SUBTRACT
#pragma push_macro("VK_T")
#undef VK_T
#pragma push_macro("VK_TAB")
#undef VK_TAB
#pragma push_macro("VK_U")
#undef VK_U
#pragma push_macro("VK_UNDEFINED")
#undef VK_UNDEFINED
#pragma push_macro("VK_UNDERSCORE")
#undef VK_UNDERSCORE
#pragma push_macro("VK_UNDO")
#undef VK_UNDO
#pragma push_macro("VK_UP")
#undef VK_UP
#pragma push_macro("VK_V")
#undef VK_V
#pragma push_macro("VK_W")
#undef VK_W
#pragma push_macro("VK_WINDOWS")
#undef VK_WINDOWS
#pragma push_macro("VK_X")
#undef VK_X
#pragma push_macro("VK_Y")
#undef VK_Y
#pragma push_macro("VK_Z")
#undef VK_Z

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $import KeyEvent : public ::java::awt::event::InputEvent {
	$class(KeyEvent, 0, ::java::awt::event::InputEvent)
public:
	KeyEvent();
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation, bool isProxyActive);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar);
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode);
	virtual int32_t getExtendedKeyCode();
	static int32_t getExtendedKeyCodeForChar(int32_t c);
	virtual char16_t getKeyChar();
	virtual int32_t getKeyCode();
	virtual int32_t getKeyLocation();
	static $String* getKeyModifiersText(int32_t modifiers);
	static $String* getKeyText(int32_t keyCode);
	static void initIDs();
	virtual bool isActionKey();
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setKeyChar(char16_t keyChar);
	virtual void setKeyCode(int32_t keyCode);
	virtual void setModifiers(int32_t modifiers);
	void setNewModifiers();
	void setOldModifiers();
	bool isProxyActive = false;
	static const int32_t KEY_FIRST = 400;
	static const int32_t KEY_LAST = 402;
	static const int32_t KEY_TYPED = KEY_FIRST;
	static const int32_t KEY_PRESSED = 401; // 1 + KEY_FIRST
	static const int32_t KEY_RELEASED = 402; // 2 + KEY_FIRST
	static const int32_t VK_ENTER = ((char16_t)10);
	static const int32_t VK_BACK_SPACE = ((char16_t)8);
	static const int32_t VK_TAB = ((char16_t)9);
	static const int32_t VK_CANCEL = 3;
	static const int32_t VK_CLEAR = 12;
	static const int32_t VK_SHIFT = 16;
	static const int32_t VK_CONTROL = 17;
	static const int32_t VK_ALT = 18;
	static const int32_t VK_PAUSE = 19;
	static const int32_t VK_CAPS_LOCK = 20;
	static const int32_t VK_ESCAPE = 27;
	static const int32_t VK_SPACE = 32;
	static const int32_t VK_PAGE_UP = 33;
	static const int32_t VK_PAGE_DOWN = 34;
	static const int32_t VK_END = 35;
	static const int32_t VK_HOME = 36;
	static const int32_t VK_LEFT = 37;
	static const int32_t VK_UP = 38;
	static const int32_t VK_RIGHT = 39;
	static const int32_t VK_DOWN = 40;
	static const int32_t VK_COMMA = 44;
	static const int32_t VK_MINUS = 45;
	static const int32_t VK_PERIOD = 46;
	static const int32_t VK_SLASH = 47;
	static const int32_t VK_0 = 48;
	static const int32_t VK_1 = 49;
	static const int32_t VK_2 = 50;
	static const int32_t VK_3 = 51;
	static const int32_t VK_4 = 52;
	static const int32_t VK_5 = 53;
	static const int32_t VK_6 = 54;
	static const int32_t VK_7 = 55;
	static const int32_t VK_8 = 56;
	static const int32_t VK_9 = 57;
	static const int32_t VK_SEMICOLON = 59;
	static const int32_t VK_EQUALS = 61;
	static const int32_t VK_A = 65;
	static const int32_t VK_B = 66;
	static const int32_t VK_C = 67;
	static const int32_t VK_D = 68;
	static const int32_t VK_E = 69;
	static const int32_t VK_F = 70;
	static const int32_t VK_G = 71;
	static const int32_t VK_H = 72;
	static const int32_t VK_I = 73;
	static const int32_t VK_J = 74;
	static const int32_t VK_K = 75;
	static const int32_t VK_L = 76;
	static const int32_t VK_M = 77;
	static const int32_t VK_N = 78;
	static const int32_t VK_O = 79;
	static const int32_t VK_P = 80;
	static const int32_t VK_Q = 81;
	static const int32_t VK_R = 82;
	static const int32_t VK_S = 83;
	static const int32_t VK_T = 84;
	static const int32_t VK_U = 85;
	static const int32_t VK_V = 86;
	static const int32_t VK_W = 87;
	static const int32_t VK_X = 88;
	static const int32_t VK_Y = 89;
	static const int32_t VK_Z = 90;
	static const int32_t VK_OPEN_BRACKET = 91;
	static const int32_t VK_BACK_SLASH = 92;
	static const int32_t VK_CLOSE_BRACKET = 93;
	static const int32_t VK_NUMPAD0 = 96;
	static const int32_t VK_NUMPAD1 = 97;
	static const int32_t VK_NUMPAD2 = 98;
	static const int32_t VK_NUMPAD3 = 99;
	static const int32_t VK_NUMPAD4 = 100;
	static const int32_t VK_NUMPAD5 = 101;
	static const int32_t VK_NUMPAD6 = 102;
	static const int32_t VK_NUMPAD7 = 103;
	static const int32_t VK_NUMPAD8 = 104;
	static const int32_t VK_NUMPAD9 = 105;
	static const int32_t VK_MULTIPLY = 106;
	static const int32_t VK_ADD = 107;
	static const int32_t VK_SEPARATER = 108;
	static const int32_t VK_SEPARATOR = VK_SEPARATER;
	static const int32_t VK_SUBTRACT = 109;
	static const int32_t VK_DECIMAL = 110;
	static const int32_t VK_DIVIDE = 111;
	static const int32_t VK_DELETE = 127;
	static const int32_t VK_NUM_LOCK = 144;
	static const int32_t VK_SCROLL_LOCK = 145;
	static const int32_t VK_F1 = 112;
	static const int32_t VK_F2 = 113;
	static const int32_t VK_F3 = 114;
	static const int32_t VK_F4 = 115;
	static const int32_t VK_F5 = 116;
	static const int32_t VK_F6 = 117;
	static const int32_t VK_F7 = 118;
	static const int32_t VK_F8 = 119;
	static const int32_t VK_F9 = 120;
	static const int32_t VK_F10 = 121;
	static const int32_t VK_F11 = 122;
	static const int32_t VK_F12 = 123;
	static const int32_t VK_F13 = 0x0000F000;
	static const int32_t VK_F14 = 0x0000F001;
	static const int32_t VK_F15 = 0x0000F002;
	static const int32_t VK_F16 = 0x0000F003;
	static const int32_t VK_F17 = 0x0000F004;
	static const int32_t VK_F18 = 0x0000F005;
	static const int32_t VK_F19 = 0x0000F006;
	static const int32_t VK_F20 = 0x0000F007;
	static const int32_t VK_F21 = 0x0000F008;
	static const int32_t VK_F22 = 0x0000F009;
	static const int32_t VK_F23 = 0x0000F00A;
	static const int32_t VK_F24 = 0x0000F00B;
	static const int32_t VK_PRINTSCREEN = 154;
	static const int32_t VK_INSERT = 155;
	static const int32_t VK_HELP = 156;
	static const int32_t VK_META = 157;
	static const int32_t VK_BACK_QUOTE = 192;
	static const int32_t VK_QUOTE = 222;
	static const int32_t VK_KP_UP = 224;
	static const int32_t VK_KP_DOWN = 225;
	static const int32_t VK_KP_LEFT = 226;
	static const int32_t VK_KP_RIGHT = 227;
	static const int32_t VK_DEAD_GRAVE = 128;
	static const int32_t VK_DEAD_ACUTE = 129;
	static const int32_t VK_DEAD_CIRCUMFLEX = 130;
	static const int32_t VK_DEAD_TILDE = 131;
	static const int32_t VK_DEAD_MACRON = 132;
	static const int32_t VK_DEAD_BREVE = 133;
	static const int32_t VK_DEAD_ABOVEDOT = 134;
	static const int32_t VK_DEAD_DIAERESIS = 135;
	static const int32_t VK_DEAD_ABOVERING = 136;
	static const int32_t VK_DEAD_DOUBLEACUTE = 137;
	static const int32_t VK_DEAD_CARON = 138;
	static const int32_t VK_DEAD_CEDILLA = 139;
	static const int32_t VK_DEAD_OGONEK = 140;
	static const int32_t VK_DEAD_IOTA = 141;
	static const int32_t VK_DEAD_VOICED_SOUND = 142;
	static const int32_t VK_DEAD_SEMIVOICED_SOUND = 143;
	static const int32_t VK_AMPERSAND = 150;
	static const int32_t VK_ASTERISK = 151;
	static const int32_t VK_QUOTEDBL = 152;
	static const int32_t VK_LESS = 153;
	static const int32_t VK_GREATER = 160;
	static const int32_t VK_BRACELEFT = 161;
	static const int32_t VK_BRACERIGHT = 162;
	static const int32_t VK_AT = 512;
	static const int32_t VK_COLON = 513;
	static const int32_t VK_CIRCUMFLEX = 514;
	static const int32_t VK_DOLLAR = 515;
	static const int32_t VK_EURO_SIGN = 516;
	static const int32_t VK_EXCLAMATION_MARK = 517;
	static const int32_t VK_INVERTED_EXCLAMATION_MARK = 518;
	static const int32_t VK_LEFT_PARENTHESIS = 519;
	static const int32_t VK_NUMBER_SIGN = 520;
	static const int32_t VK_PLUS = 521;
	static const int32_t VK_RIGHT_PARENTHESIS = 522;
	static const int32_t VK_UNDERSCORE = 523;
	static const int32_t VK_WINDOWS = 524;
	static const int32_t VK_CONTEXT_MENU = 525;
	static const int32_t VK_FINAL = 24;
	static const int32_t VK_CONVERT = 28;
	static const int32_t VK_NONCONVERT = 29;
	static const int32_t VK_ACCEPT = 30;
	static const int32_t VK_MODECHANGE = 31;
	static const int32_t VK_KANA = 21;
	static const int32_t VK_KANJI = 25;
	static const int32_t VK_ALPHANUMERIC = 240;
	static const int32_t VK_KATAKANA = 241;
	static const int32_t VK_HIRAGANA = 242;
	static const int32_t VK_FULL_WIDTH = 243;
	static const int32_t VK_HALF_WIDTH = 244;
	static const int32_t VK_ROMAN_CHARACTERS = 245;
	static const int32_t VK_ALL_CANDIDATES = 256;
	static const int32_t VK_PREVIOUS_CANDIDATE = 257;
	static const int32_t VK_CODE_INPUT = 258;
	static const int32_t VK_JAPANESE_KATAKANA = 259;
	static const int32_t VK_JAPANESE_HIRAGANA = 260;
	static const int32_t VK_JAPANESE_ROMAN = 261;
	static const int32_t VK_KANA_LOCK = 262;
	static const int32_t VK_INPUT_METHOD_ON_OFF = 263;
	static const int32_t VK_CUT = 0x0000FFD1;
	static const int32_t VK_COPY = 0x0000FFCD;
	static const int32_t VK_PASTE = 0x0000FFCF;
	static const int32_t VK_UNDO = 0x0000FFCB;
	static const int32_t VK_AGAIN = 0x0000FFC9;
	static const int32_t VK_FIND = 0x0000FFD0;
	static const int32_t VK_PROPS = 0x0000FFCA;
	static const int32_t VK_STOP = 0x0000FFC8;
	static const int32_t VK_COMPOSE = 0x0000FF20;
	static const int32_t VK_ALT_GRAPH = 0x0000FF7E;
	static const int32_t VK_BEGIN = 0x0000FF58;
	static const int32_t VK_UNDEFINED = 0;
	static const char16_t CHAR_UNDEFINED = 0x0000FFFF;
	static const int32_t KEY_LOCATION_UNKNOWN = 0;
	static const int32_t KEY_LOCATION_STANDARD = 1;
	static const int32_t KEY_LOCATION_LEFT = 2;
	static const int32_t KEY_LOCATION_RIGHT = 3;
	static const int32_t KEY_LOCATION_NUMPAD = 4;
	int32_t keyCode = 0;
	char16_t keyChar = 0;
	int32_t keyLocation = 0;
	int64_t rawCode = 0;
	int64_t primaryLevelUnicode = 0;
	int64_t scancode = 0;
	int64_t extendedKeyCode = 0;
	static const int64_t serialVersionUID = (int64_t)0xDF5B8D5C3F8EB716;
	::java::awt::Component* originalSource = nullptr;
};

		} // event
	} // awt
} // java

#pragma pop_macro("CHAR_UNDEFINED")
#pragma pop_macro("KEY_FIRST")
#pragma pop_macro("KEY_LAST")
#pragma pop_macro("KEY_LOCATION_LEFT")
#pragma pop_macro("KEY_LOCATION_NUMPAD")
#pragma pop_macro("KEY_LOCATION_RIGHT")
#pragma pop_macro("KEY_LOCATION_STANDARD")
#pragma pop_macro("KEY_LOCATION_UNKNOWN")
#pragma pop_macro("KEY_PRESSED")
#pragma pop_macro("KEY_RELEASED")
#pragma pop_macro("KEY_TYPED")
#pragma pop_macro("VK_0")
#pragma pop_macro("VK_1")
#pragma pop_macro("VK_2")
#pragma pop_macro("VK_3")
#pragma pop_macro("VK_4")
#pragma pop_macro("VK_5")
#pragma pop_macro("VK_6")
#pragma pop_macro("VK_7")
#pragma pop_macro("VK_8")
#pragma pop_macro("VK_9")
#pragma pop_macro("VK_A")
#pragma pop_macro("VK_ACCEPT")
#pragma pop_macro("VK_ADD")
#pragma pop_macro("VK_AGAIN")
#pragma pop_macro("VK_ALL_CANDIDATES")
#pragma pop_macro("VK_ALPHANUMERIC")
#pragma pop_macro("VK_ALT")
#pragma pop_macro("VK_ALT_GRAPH")
#pragma pop_macro("VK_AMPERSAND")
#pragma pop_macro("VK_ASTERISK")
#pragma pop_macro("VK_AT")
#pragma pop_macro("VK_B")
#pragma pop_macro("VK_BACK_QUOTE")
#pragma pop_macro("VK_BACK_SLASH")
#pragma pop_macro("VK_BACK_SPACE")
#pragma pop_macro("VK_BEGIN")
#pragma pop_macro("VK_BRACELEFT")
#pragma pop_macro("VK_BRACERIGHT")
#pragma pop_macro("VK_C")
#pragma pop_macro("VK_CANCEL")
#pragma pop_macro("VK_CAPS_LOCK")
#pragma pop_macro("VK_CIRCUMFLEX")
#pragma pop_macro("VK_CLEAR")
#pragma pop_macro("VK_CLOSE_BRACKET")
#pragma pop_macro("VK_CODE_INPUT")
#pragma pop_macro("VK_COLON")
#pragma pop_macro("VK_COMMA")
#pragma pop_macro("VK_COMPOSE")
#pragma pop_macro("VK_CONTEXT_MENU")
#pragma pop_macro("VK_CONTROL")
#pragma pop_macro("VK_CONVERT")
#pragma pop_macro("VK_COPY")
#pragma pop_macro("VK_CUT")
#pragma pop_macro("VK_D")
#pragma pop_macro("VK_DEAD_ABOVEDOT")
#pragma pop_macro("VK_DEAD_ABOVERING")
#pragma pop_macro("VK_DEAD_ACUTE")
#pragma pop_macro("VK_DEAD_BREVE")
#pragma pop_macro("VK_DEAD_CARON")
#pragma pop_macro("VK_DEAD_CEDILLA")
#pragma pop_macro("VK_DEAD_CIRCUMFLEX")
#pragma pop_macro("VK_DEAD_DIAERESIS")
#pragma pop_macro("VK_DEAD_DOUBLEACUTE")
#pragma pop_macro("VK_DEAD_GRAVE")
#pragma pop_macro("VK_DEAD_IOTA")
#pragma pop_macro("VK_DEAD_MACRON")
#pragma pop_macro("VK_DEAD_OGONEK")
#pragma pop_macro("VK_DEAD_SEMIVOICED_SOUND")
#pragma pop_macro("VK_DEAD_TILDE")
#pragma pop_macro("VK_DEAD_VOICED_SOUND")
#pragma pop_macro("VK_DECIMAL")
#pragma pop_macro("VK_DELETE")
#pragma pop_macro("VK_DIVIDE")
#pragma pop_macro("VK_DOLLAR")
#pragma pop_macro("VK_DOWN")
#pragma pop_macro("VK_E")
#pragma pop_macro("VK_END")
#pragma pop_macro("VK_ENTER")
#pragma pop_macro("VK_EQUALS")
#pragma pop_macro("VK_ESCAPE")
#pragma pop_macro("VK_EURO_SIGN")
#pragma pop_macro("VK_EXCLAMATION_MARK")
#pragma pop_macro("VK_F")
#pragma pop_macro("VK_F1")
#pragma pop_macro("VK_F10")
#pragma pop_macro("VK_F11")
#pragma pop_macro("VK_F12")
#pragma pop_macro("VK_F13")
#pragma pop_macro("VK_F14")
#pragma pop_macro("VK_F15")
#pragma pop_macro("VK_F16")
#pragma pop_macro("VK_F17")
#pragma pop_macro("VK_F18")
#pragma pop_macro("VK_F19")
#pragma pop_macro("VK_F2")
#pragma pop_macro("VK_F20")
#pragma pop_macro("VK_F21")
#pragma pop_macro("VK_F22")
#pragma pop_macro("VK_F23")
#pragma pop_macro("VK_F24")
#pragma pop_macro("VK_F3")
#pragma pop_macro("VK_F4")
#pragma pop_macro("VK_F5")
#pragma pop_macro("VK_F6")
#pragma pop_macro("VK_F7")
#pragma pop_macro("VK_F8")
#pragma pop_macro("VK_F9")
#pragma pop_macro("VK_FINAL")
#pragma pop_macro("VK_FIND")
#pragma pop_macro("VK_FULL_WIDTH")
#pragma pop_macro("VK_G")
#pragma pop_macro("VK_GREATER")
#pragma pop_macro("VK_H")
#pragma pop_macro("VK_HALF_WIDTH")
#pragma pop_macro("VK_HELP")
#pragma pop_macro("VK_HIRAGANA")
#pragma pop_macro("VK_HOME")
#pragma pop_macro("VK_I")
#pragma pop_macro("VK_INPUT_METHOD_ON_OFF")
#pragma pop_macro("VK_INSERT")
#pragma pop_macro("VK_INVERTED_EXCLAMATION_MARK")
#pragma pop_macro("VK_J")
#pragma pop_macro("VK_JAPANESE_HIRAGANA")
#pragma pop_macro("VK_JAPANESE_KATAKANA")
#pragma pop_macro("VK_JAPANESE_ROMAN")
#pragma pop_macro("VK_K")
#pragma pop_macro("VK_KANA")
#pragma pop_macro("VK_KANA_LOCK")
#pragma pop_macro("VK_KANJI")
#pragma pop_macro("VK_KATAKANA")
#pragma pop_macro("VK_KP_DOWN")
#pragma pop_macro("VK_KP_LEFT")
#pragma pop_macro("VK_KP_RIGHT")
#pragma pop_macro("VK_KP_UP")
#pragma pop_macro("VK_L")
#pragma pop_macro("VK_LEFT")
#pragma pop_macro("VK_LEFT_PARENTHESIS")
#pragma pop_macro("VK_LESS")
#pragma pop_macro("VK_M")
#pragma pop_macro("VK_META")
#pragma pop_macro("VK_MINUS")
#pragma pop_macro("VK_MODECHANGE")
#pragma pop_macro("VK_MULTIPLY")
#pragma pop_macro("VK_N")
#pragma pop_macro("VK_NONCONVERT")
#pragma pop_macro("VK_NUMBER_SIGN")
#pragma pop_macro("VK_NUMPAD0")
#pragma pop_macro("VK_NUMPAD1")
#pragma pop_macro("VK_NUMPAD2")
#pragma pop_macro("VK_NUMPAD3")
#pragma pop_macro("VK_NUMPAD4")
#pragma pop_macro("VK_NUMPAD5")
#pragma pop_macro("VK_NUMPAD6")
#pragma pop_macro("VK_NUMPAD7")
#pragma pop_macro("VK_NUMPAD8")
#pragma pop_macro("VK_NUMPAD9")
#pragma pop_macro("VK_NUM_LOCK")
#pragma pop_macro("VK_O")
#pragma pop_macro("VK_OPEN_BRACKET")
#pragma pop_macro("VK_P")
#pragma pop_macro("VK_PAGE_DOWN")
#pragma pop_macro("VK_PAGE_UP")
#pragma pop_macro("VK_PASTE")
#pragma pop_macro("VK_PAUSE")
#pragma pop_macro("VK_PERIOD")
#pragma pop_macro("VK_PLUS")
#pragma pop_macro("VK_PREVIOUS_CANDIDATE")
#pragma pop_macro("VK_PRINTSCREEN")
#pragma pop_macro("VK_PROPS")
#pragma pop_macro("VK_Q")
#pragma pop_macro("VK_QUOTE")
#pragma pop_macro("VK_QUOTEDBL")
#pragma pop_macro("VK_R")
#pragma pop_macro("VK_RIGHT")
#pragma pop_macro("VK_RIGHT_PARENTHESIS")
#pragma pop_macro("VK_ROMAN_CHARACTERS")
#pragma pop_macro("VK_S")
#pragma pop_macro("VK_SCROLL_LOCK")
#pragma pop_macro("VK_SEMICOLON")
#pragma pop_macro("VK_SEPARATER")
#pragma pop_macro("VK_SEPARATOR")
#pragma pop_macro("VK_SHIFT")
#pragma pop_macro("VK_SLASH")
#pragma pop_macro("VK_SPACE")
#pragma pop_macro("VK_STOP")
#pragma pop_macro("VK_SUBTRACT")
#pragma pop_macro("VK_T")
#pragma pop_macro("VK_TAB")
#pragma pop_macro("VK_U")
#pragma pop_macro("VK_UNDEFINED")
#pragma pop_macro("VK_UNDERSCORE")
#pragma pop_macro("VK_UNDO")
#pragma pop_macro("VK_UP")
#pragma pop_macro("VK_V")
#pragma pop_macro("VK_W")
#pragma pop_macro("VK_WINDOWS")
#pragma pop_macro("VK_X")
#pragma pop_macro("VK_Y")
#pragma pop_macro("VK_Z")

#endif // _java_awt_event_KeyEvent_h_