#ifndef _java_awt_AWTKeyStroke_h_
#define _java_awt_AWTKeyStroke_h_
//$ class java.awt.AWTKeyStroke
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("APP_CONTEXT_CACHE_KEY")
#undef APP_CONTEXT_CACHE_KEY
#pragma push_macro("APP_CONTEXT_KEYSTROKE_KEY")
#undef APP_CONTEXT_KEYSTROKE_KEY

namespace java {
	namespace awt {
		class VKCollection;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Character;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace awt {

class $import AWTKeyStroke : public ::java::io::Serializable {
	$class(AWTKeyStroke, 0, ::java::io::Serializable)
public:
	AWTKeyStroke();
	void init$();
	void init$(char16_t keyChar, int32_t keyCode, int32_t modifiers, bool onKeyRelease);
	virtual bool equals(Object$* anObject) override;
	static ::java::awt::AWTKeyStroke* getAWTKeyStroke(char16_t keyChar);
	static ::java::awt::AWTKeyStroke* getAWTKeyStroke(::java::lang::Character* keyChar, int32_t modifiers);
	static ::java::awt::AWTKeyStroke* getAWTKeyStroke(int32_t keyCode, int32_t modifiers, bool onKeyRelease);
	static ::java::awt::AWTKeyStroke* getAWTKeyStroke(int32_t keyCode, int32_t modifiers);
	static ::java::awt::AWTKeyStroke* getAWTKeyStroke($String* s);
	static ::java::awt::AWTKeyStroke* getAWTKeyStrokeForEvent(::java::awt::event::KeyEvent* anEvent);
	static ::java::awt::AWTKeyStroke* getCachedStroke(char16_t keyChar, int32_t keyCode, int32_t modifiers, bool onKeyRelease);
	char16_t getKeyChar();
	int32_t getKeyCode();
	int32_t getKeyEventType();
	int32_t getModifiers();
	static $String* getModifiersText(int32_t modifiers);
	static ::java::awt::VKCollection* getVKCollection();
	static $String* getVKText(int32_t keyCode);
	static int32_t getVKValue($String* key);
	virtual int32_t hashCode() override;
	bool isOnKeyRelease();
	static int32_t mapNewModifiers(int32_t modifiers);
	static int32_t mapOldModifiers(int32_t modifiers);
	virtual $Object* readResolve();
	static void registerSubclass($Class* subclass);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xA6C22238AAA57CF1;
	static ::java::util::Map* modifierKeywords;
	static ::java::awt::VKCollection* vks;
	static $Object* APP_CONTEXT_CACHE_KEY;
	static ::java::awt::AWTKeyStroke* APP_CONTEXT_KEYSTROKE_KEY;
	char16_t keyChar = 0;
	int32_t keyCode = 0;
	int32_t modifiers = 0;
	bool onKeyRelease = false;
};

	} // awt
} // java

#pragma pop_macro("APP_CONTEXT_CACHE_KEY")
#pragma pop_macro("APP_CONTEXT_KEYSTROKE_KEY")

#endif // _java_awt_AWTKeyStroke_h_