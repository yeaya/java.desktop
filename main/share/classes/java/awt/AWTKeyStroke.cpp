#include <java/awt/AWTKeyStroke.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/VKCollection.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <javax/swing/KeyStroke.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingAccessor$KeyStrokeAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef APP_CONTEXT_CACHE_KEY
#undef APP_CONTEXT_KEYSTROKE_KEY
#undef BUTTON1_DOWN_MASK
#undef BUTTON2_DOWN_MASK
#undef BUTTON3_DOWN_MASK
#undef CHAR_UNDEFINED
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef FINAL
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef META_DOWN_MASK
#undef META_MASK
#undef PUBLIC
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK
#undef STATIC
#undef TYPE
#undef VK_UNDEFINED

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $Toolkit = ::java::awt::Toolkit;
using $VKCollection = ::java::awt::VKCollection;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $AppContext = ::sun::awt::AppContext;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$KeyStrokeAccessor = ::sun::swing::SwingAccessor$KeyStrokeAccessor;

namespace java {
	namespace awt {

$CompoundAttribute _AWTKeyStroke_MethodAnnotations_registerSubclass23[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _AWTKeyStroke_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AWTKeyStroke, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTKeyStroke, serialVersionUID)},
	{"modifierKeywords", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(AWTKeyStroke, modifierKeywords)},
	{"vks", "Ljava/awt/VKCollection;", nullptr, $PRIVATE | $STATIC, $staticField(AWTKeyStroke, vks)},
	{"APP_CONTEXT_CACHE_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(AWTKeyStroke, APP_CONTEXT_CACHE_KEY)},
	{"APP_CONTEXT_KEYSTROKE_KEY", "Ljava/awt/AWTKeyStroke;", nullptr, $PRIVATE | $STATIC, $staticField(AWTKeyStroke, APP_CONTEXT_KEYSTROKE_KEY)},
	{"keyChar", "C", nullptr, $PRIVATE, $field(AWTKeyStroke, keyChar)},
	{"keyCode", "I", nullptr, $PRIVATE, $field(AWTKeyStroke, keyCode)},
	{"modifiers", "I", nullptr, $PRIVATE, $field(AWTKeyStroke, modifiers)},
	{"onKeyRelease", "Z", nullptr, $PRIVATE, $field(AWTKeyStroke, onKeyRelease)},
	{}
};

$MethodInfo _AWTKeyStroke_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AWTKeyStroke::*)()>(&AWTKeyStroke::init$))},
	{"<init>", "(CIIZ)V", nullptr, $PROTECTED, $method(static_cast<void(AWTKeyStroke::*)(char16_t,int32_t,int32_t,bool)>(&AWTKeyStroke::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getAWTKeyStroke", "(C)Ljava/awt/AWTKeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AWTKeyStroke*(*)(char16_t)>(&AWTKeyStroke::getAWTKeyStroke))},
	{"getAWTKeyStroke", "(Ljava/lang/Character;I)Ljava/awt/AWTKeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AWTKeyStroke*(*)($Character*,int32_t)>(&AWTKeyStroke::getAWTKeyStroke))},
	{"getAWTKeyStroke", "(IIZ)Ljava/awt/AWTKeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AWTKeyStroke*(*)(int32_t,int32_t,bool)>(&AWTKeyStroke::getAWTKeyStroke))},
	{"getAWTKeyStroke", "(II)Ljava/awt/AWTKeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AWTKeyStroke*(*)(int32_t,int32_t)>(&AWTKeyStroke::getAWTKeyStroke))},
	{"getAWTKeyStroke", "(Ljava/lang/String;)Ljava/awt/AWTKeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AWTKeyStroke*(*)($String*)>(&AWTKeyStroke::getAWTKeyStroke))},
	{"getAWTKeyStrokeForEvent", "(Ljava/awt/event/KeyEvent;)Ljava/awt/AWTKeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AWTKeyStroke*(*)($KeyEvent*)>(&AWTKeyStroke::getAWTKeyStrokeForEvent))},
	{"getCachedStroke", "(CIIZ)Ljava/awt/AWTKeyStroke;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<AWTKeyStroke*(*)(char16_t,int32_t,int32_t,bool)>(&AWTKeyStroke::getCachedStroke))},
	{"getKeyChar", "()C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(AWTKeyStroke::*)()>(&AWTKeyStroke::getKeyChar))},
	{"getKeyCode", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AWTKeyStroke::*)()>(&AWTKeyStroke::getKeyCode))},
	{"getKeyEventType", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AWTKeyStroke::*)()>(&AWTKeyStroke::getKeyEventType))},
	{"getModifiers", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AWTKeyStroke::*)()>(&AWTKeyStroke::getModifiers))},
	{"getModifiersText", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&AWTKeyStroke::getModifiersText))},
	{"getVKCollection", "()Ljava/awt/VKCollection;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$VKCollection*(*)()>(&AWTKeyStroke::getVKCollection))},
	{"getVKText", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&AWTKeyStroke::getVKText))},
	{"getVKValue", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&AWTKeyStroke::getVKValue))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isOnKeyRelease", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AWTKeyStroke::*)()>(&AWTKeyStroke::isOnKeyRelease))},
	{"mapNewModifiers", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&AWTKeyStroke::mapNewModifiers))},
	{"mapOldModifiers", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&AWTKeyStroke::mapOldModifiers))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{"registerSubclass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED | $STATIC | $DEPRECATED, $method(static_cast<void(*)($Class*)>(&AWTKeyStroke::registerSubclass)), nullptr, nullptr, _AWTKeyStroke_MethodAnnotations_registerSubclass23},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AWTKeyStroke_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.AWTKeyStroke",
	"java.lang.Object",
	"java.io.Serializable",
	_AWTKeyStroke_FieldInfo_,
	_AWTKeyStroke_MethodInfo_
};

$Object* allocate$AWTKeyStroke($Class* clazz) {
	return $of($alloc(AWTKeyStroke));
}

bool AWTKeyStroke::$assertionsDisabled = false;
$Map* AWTKeyStroke::modifierKeywords = nullptr;
$VKCollection* AWTKeyStroke::vks = nullptr;
$Object* AWTKeyStroke::APP_CONTEXT_CACHE_KEY = nullptr;
AWTKeyStroke* AWTKeyStroke::APP_CONTEXT_KEYSTROKE_KEY = nullptr;

void AWTKeyStroke::init$() {
	this->keyChar = $KeyEvent::CHAR_UNDEFINED;
	this->keyCode = $KeyEvent::VK_UNDEFINED;
}

void AWTKeyStroke::init$(char16_t keyChar, int32_t keyCode, int32_t modifiers, bool onKeyRelease) {
	this->keyChar = $KeyEvent::CHAR_UNDEFINED;
	this->keyCode = $KeyEvent::VK_UNDEFINED;
	this->keyChar = keyChar;
	this->keyCode = keyCode;
	this->modifiers = modifiers;
	this->onKeyRelease = onKeyRelease;
}

void AWTKeyStroke::registerSubclass($Class* subclass) {
	$init(AWTKeyStroke);
}

AWTKeyStroke* AWTKeyStroke::getCachedStroke(char16_t keyChar, int32_t keyCode, int32_t modifiers, bool onKeyRelease) {
	$load(AWTKeyStroke);
	$synchronized(class$) {
		$init(AWTKeyStroke);
		$useLocalCurrentObjectStackCache();
		$var($Map, cache, $cast($Map, $nc($($AppContext::getAppContext()))->get(AWTKeyStroke::APP_CONTEXT_CACHE_KEY)));
		$var(AWTKeyStroke, cacheKey, $cast(AWTKeyStroke, $nc($($AppContext::getAppContext()))->get(AWTKeyStroke::APP_CONTEXT_KEYSTROKE_KEY)));
		if (cache == nullptr) {
			$assign(cache, $new($HashMap));
			$nc($($AppContext::getAppContext()))->put(AWTKeyStroke::APP_CONTEXT_CACHE_KEY, cache);
		}
		if (cacheKey == nullptr) {
			$assign(cacheKey, $nc($($SwingAccessor::getKeyStrokeAccessor()))->create());
			$nc($($AppContext::getAppContext()))->put(AWTKeyStroke::APP_CONTEXT_KEYSTROKE_KEY, cacheKey);
		}
		$nc(cacheKey)->keyChar = keyChar;
		cacheKey->keyCode = keyCode;
		cacheKey->modifiers = mapNewModifiers(mapOldModifiers(modifiers));
		cacheKey->onKeyRelease = onKeyRelease;
		$var(AWTKeyStroke, stroke, $cast(AWTKeyStroke, $nc(cache)->get(cacheKey)));
		if (stroke == nullptr) {
			$assign(stroke, cacheKey);
			cache->put(stroke, stroke);
			$nc($($AppContext::getAppContext()))->remove(AWTKeyStroke::APP_CONTEXT_KEYSTROKE_KEY);
		}
		return stroke;
	}
}

AWTKeyStroke* AWTKeyStroke::getAWTKeyStroke(char16_t keyChar) {
	$init(AWTKeyStroke);
	return getCachedStroke(keyChar, $KeyEvent::VK_UNDEFINED, 0, false);
}

AWTKeyStroke* AWTKeyStroke::getAWTKeyStroke($Character* keyChar, int32_t modifiers) {
	$init(AWTKeyStroke);
	if (keyChar == nullptr) {
		$throwNew($IllegalArgumentException, "keyChar cannot be null"_s);
	}
	return getCachedStroke($nc(keyChar)->charValue(), $KeyEvent::VK_UNDEFINED, modifiers, false);
}

AWTKeyStroke* AWTKeyStroke::getAWTKeyStroke(int32_t keyCode, int32_t modifiers, bool onKeyRelease) {
	$init(AWTKeyStroke);
	return getCachedStroke($KeyEvent::CHAR_UNDEFINED, keyCode, modifiers, onKeyRelease);
}

AWTKeyStroke* AWTKeyStroke::getAWTKeyStroke(int32_t keyCode, int32_t modifiers) {
	$init(AWTKeyStroke);
	return getCachedStroke($KeyEvent::CHAR_UNDEFINED, keyCode, modifiers, false);
}

AWTKeyStroke* AWTKeyStroke::getAWTKeyStrokeForEvent($KeyEvent* anEvent) {
	$init(AWTKeyStroke);
	int32_t id = $nc(anEvent)->getID();
	switch (id) {
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{
			int32_t var$0 = anEvent->getKeyCode();
			return getCachedStroke($KeyEvent::CHAR_UNDEFINED, var$0, anEvent->getModifiers(), (id == $KeyEvent::KEY_RELEASED));
		}
	case $KeyEvent::KEY_TYPED:
		{
			char16_t var$1 = anEvent->getKeyChar();
			return getCachedStroke(var$1, $KeyEvent::VK_UNDEFINED, anEvent->getModifiers(), false);
		}
	default:
		{
			return nullptr;
		}
	}
}

AWTKeyStroke* AWTKeyStroke::getAWTKeyStroke($String* s) {
	$init(AWTKeyStroke);
	$useLocalCurrentObjectStackCache();
	if (s == nullptr) {
		$throwNew($IllegalArgumentException, "String cannot be null"_s);
	}
	$var($String, errmsg, "String formatted incorrectly"_s);
	$var($StringTokenizer, st, $new($StringTokenizer, s, " "_s));
	int32_t mask = 0;
	bool released = false;
	bool typed = false;
	bool pressed = false;
	$synchronized(AWTKeyStroke::class$) {
		if (AWTKeyStroke::modifierKeywords == nullptr) {
			$var($Map, uninitializedMap, $new($HashMap, 8, 1.0f));
			uninitializedMap->put("shift"_s, $($Integer::valueOf($InputEvent::SHIFT_DOWN_MASK | $InputEvent::SHIFT_MASK)));
			uninitializedMap->put("control"_s, $($Integer::valueOf($InputEvent::CTRL_DOWN_MASK | $InputEvent::CTRL_MASK)));
			uninitializedMap->put("ctrl"_s, $($Integer::valueOf($InputEvent::CTRL_DOWN_MASK | $InputEvent::CTRL_MASK)));
			uninitializedMap->put("meta"_s, $($Integer::valueOf($InputEvent::META_DOWN_MASK | $InputEvent::META_MASK)));
			uninitializedMap->put("alt"_s, $($Integer::valueOf($InputEvent::ALT_DOWN_MASK | $InputEvent::ALT_MASK)));
			uninitializedMap->put("altGraph"_s, $($Integer::valueOf($InputEvent::ALT_GRAPH_DOWN_MASK | $InputEvent::ALT_GRAPH_MASK)));
			uninitializedMap->put("button1"_s, $($Integer::valueOf($InputEvent::BUTTON1_DOWN_MASK)));
			uninitializedMap->put("button2"_s, $($Integer::valueOf($InputEvent::BUTTON2_DOWN_MASK)));
			uninitializedMap->put("button3"_s, $($Integer::valueOf($InputEvent::BUTTON3_DOWN_MASK)));
			$assignStatic(AWTKeyStroke::modifierKeywords, $Collections::synchronizedMap(uninitializedMap));
		}
	}
	int32_t count = st->countTokens();
	for (int32_t i = 1; i <= count; ++i) {
		$var($String, token, st->nextToken());
		if (typed) {
			if ($nc(token)->length() != 1 || i != count) {
				$throwNew($IllegalArgumentException, errmsg);
			}
			return getCachedStroke($nc(token)->charAt(0), $KeyEvent::VK_UNDEFINED, mask, false);
		}
		if (pressed || released || i == count) {
			if (i != count) {
				$throwNew($IllegalArgumentException, errmsg);
			}
			$var($String, keyCodeName, $str({"VK_"_s, token}));
			int32_t keyCode = getVKValue(keyCodeName);
			return getCachedStroke($KeyEvent::CHAR_UNDEFINED, keyCode, mask, released);
		}
		if ($nc(token)->equals("released"_s)) {
			released = true;
			continue;
		}
		if ($nc(token)->equals("pressed"_s)) {
			pressed = true;
			continue;
		}
		if ($nc(token)->equals("typed"_s)) {
			typed = true;
			continue;
		}
		$var($Integer, tokenMask, $cast($Integer, $nc(AWTKeyStroke::modifierKeywords)->get(token)));
		if (tokenMask != nullptr) {
			mask |= tokenMask->intValue();
		} else {
			$throwNew($IllegalArgumentException, errmsg);
		}
	}
	$throwNew($IllegalArgumentException, errmsg);
}

$VKCollection* AWTKeyStroke::getVKCollection() {
	$init(AWTKeyStroke);
	if (AWTKeyStroke::vks == nullptr) {
		$assignStatic(AWTKeyStroke::vks, $new($VKCollection));
	}
	return AWTKeyStroke::vks;
}

int32_t AWTKeyStroke::getVKValue($String* key) {
	$init(AWTKeyStroke);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($VKCollection, vkCollect, getVKCollection());
	$var($Integer, value, $nc(vkCollect)->findCode(key));
	if (value == nullptr) {
		int32_t keyCode = 0;
		$var($String, errmsg, "String formatted incorrectly"_s);
		try {
			$load($KeyEvent);
			keyCode = $nc($($KeyEvent::class$->getField(key)))->getInt($KeyEvent::class$);
		} catch ($NoSuchFieldException& nsfe) {
			$throwNew($IllegalArgumentException, errmsg);
		} catch ($IllegalAccessException& iae) {
			$throwNew($IllegalArgumentException, errmsg);
		}
		$assign(value, $Integer::valueOf(keyCode));
		vkCollect->put(key, value);
	}
	return $nc(value)->intValue();
}

char16_t AWTKeyStroke::getKeyChar() {
	return this->keyChar;
}

int32_t AWTKeyStroke::getKeyCode() {
	return this->keyCode;
}

int32_t AWTKeyStroke::getModifiers() {
	return this->modifiers;
}

bool AWTKeyStroke::isOnKeyRelease() {
	return this->onKeyRelease;
}

int32_t AWTKeyStroke::getKeyEventType() {
	if (this->keyCode == $KeyEvent::VK_UNDEFINED) {
		return $KeyEvent::KEY_TYPED;
	} else {
		return (this->onKeyRelease) ? $KeyEvent::KEY_RELEASED : $KeyEvent::KEY_PRESSED;
	}
}

int32_t AWTKeyStroke::hashCode() {
	return (((int32_t)this->keyChar) + 1) * (2 * (this->keyCode + 1)) * (this->modifiers + 1) + (this->onKeyRelease ? 1 : 2);
}

bool AWTKeyStroke::equals(Object$* anObject) {
	if ($instanceOf(AWTKeyStroke, anObject)) {
		$var(AWTKeyStroke, ks, $cast(AWTKeyStroke, anObject));
		return ($nc(ks)->keyChar == this->keyChar && ks->keyCode == this->keyCode && ks->onKeyRelease == this->onKeyRelease && ks->modifiers == this->modifiers);
	}
	return false;
}

$String* AWTKeyStroke::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->keyCode == $KeyEvent::VK_UNDEFINED) {
		return $str({$(getModifiersText(this->modifiers)), "typed "_s, $$str(this->keyChar)});
	} else {
		$var($String, var$0, $$str({$(getModifiersText(this->modifiers)), (this->onKeyRelease ? "released"_s : "pressed"_s), " "_s}));
		return $concat(var$0, $(getVKText(this->keyCode)));
	}
}

$String* AWTKeyStroke::getModifiersText(int32_t modifiers) {
	$init(AWTKeyStroke);
	$var($StringBuilder, buf, $new($StringBuilder));
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_DOWN_MASK)) != 0) {
		buf->append("shift "_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_DOWN_MASK)) != 0) {
		buf->append("ctrl "_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_DOWN_MASK)) != 0) {
		buf->append("meta "_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_DOWN_MASK)) != 0) {
		buf->append("alt "_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) != 0) {
		buf->append("altGraph "_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON1_DOWN_MASK)) != 0) {
		buf->append("button1 "_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON2_DOWN_MASK)) != 0) {
		buf->append("button2 "_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON3_DOWN_MASK)) != 0) {
		buf->append("button3 "_s);
	}
	return buf->toString();
}

$String* AWTKeyStroke::getVKText(int32_t keyCode) {
	$init(AWTKeyStroke);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($VKCollection, vkCollect, getVKCollection());
	$var($Integer, key, $Integer::valueOf(keyCode));
	$var($String, name, $nc(vkCollect)->findName(key));
	if (name != nullptr) {
		return name->substring(3);
	}
	int32_t expected_modifiers = (($Modifier::PUBLIC | $Modifier::STATIC) | $Modifier::FINAL);
	$load($KeyEvent);
	$var($FieldArray, fields, $KeyEvent::class$->getDeclaredFields());
	for (int32_t i = 0; i < $nc(fields)->length; ++i) {
		try {
			bool var$2 = $nc(fields->get(i))->getModifiers() == expected_modifiers;
			bool var$1 = var$2 && $nc(fields->get(i))->getType() == $Integer::TYPE;
			bool var$0 = var$1 && $nc($($nc(fields->get(i))->getName()))->startsWith("VK_"_s);
			if (var$0 && $nc(fields->get(i))->getInt($KeyEvent::class$) == keyCode) {
				$assign(name, $nc(fields->get(i))->getName());
				vkCollect->put(name, key);
				return $nc(name)->substring(3);
			}
		} catch ($IllegalAccessException& e) {
			if (!AWTKeyStroke::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
	return "UNKNOWN"_s;
}

$Object* AWTKeyStroke::readResolve() {
	$synchronized(AWTKeyStroke::class$) {
		return $of(getCachedStroke(this->keyChar, this->keyCode, this->modifiers, this->onKeyRelease));
	}
}

int32_t AWTKeyStroke::mapOldModifiers(int32_t modifiers) {
	$init(AWTKeyStroke);
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
		modifiers |= $InputEvent::SHIFT_DOWN_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_MASK)) != 0) {
		modifiers |= $InputEvent::ALT_DOWN_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_MASK)) != 0) {
		modifiers |= $InputEvent::ALT_GRAPH_DOWN_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
		modifiers |= $InputEvent::CTRL_DOWN_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
		modifiers |= $InputEvent::META_DOWN_MASK;
	}
	modifiers &= (uint32_t)((((((($InputEvent::SHIFT_DOWN_MASK | $InputEvent::ALT_DOWN_MASK) | $InputEvent::ALT_GRAPH_DOWN_MASK) | $InputEvent::CTRL_DOWN_MASK) | $InputEvent::META_DOWN_MASK) | $InputEvent::BUTTON1_DOWN_MASK) | $InputEvent::BUTTON2_DOWN_MASK) | $InputEvent::BUTTON3_DOWN_MASK);
	return modifiers;
}

int32_t AWTKeyStroke::mapNewModifiers(int32_t modifiers) {
	$init(AWTKeyStroke);
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_DOWN_MASK)) != 0) {
		modifiers |= $InputEvent::SHIFT_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_DOWN_MASK)) != 0) {
		modifiers |= $InputEvent::ALT_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) != 0) {
		modifiers |= $InputEvent::ALT_GRAPH_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_DOWN_MASK)) != 0) {
		modifiers |= $InputEvent::CTRL_MASK;
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_DOWN_MASK)) != 0) {
		modifiers |= $InputEvent::META_MASK;
	}
	return modifiers;
}

void clinit$AWTKeyStroke($Class* class$) {
	AWTKeyStroke::$assertionsDisabled = !AWTKeyStroke::class$->desiredAssertionStatus();
	$assignStatic(AWTKeyStroke::APP_CONTEXT_CACHE_KEY, $new($Object));
	$assignStatic(AWTKeyStroke::APP_CONTEXT_KEYSTROKE_KEY, $new(AWTKeyStroke));
	{
		$Toolkit::loadLibraries();
	}
}

AWTKeyStroke::AWTKeyStroke() {
}

$Class* AWTKeyStroke::load$($String* name, bool initialize) {
	$loadClass(AWTKeyStroke, name, initialize, &_AWTKeyStroke_ClassInfo_, clinit$AWTKeyStroke, allocate$AWTKeyStroke);
	return class$;
}

$Class* AWTKeyStroke::class$ = nullptr;

	} // awt
} // java