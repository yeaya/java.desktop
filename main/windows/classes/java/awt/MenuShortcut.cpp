#include <java/awt/MenuShortcut.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

#undef SHIFT_DOWN_MASK

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _MenuShortcut_FieldInfo_[] = {
	{"key", "I", nullptr, 0, $field(MenuShortcut, key)},
	{"usesShift", "Z", nullptr, 0, $field(MenuShortcut, usesShift)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuShortcut, serialVersionUID)},
	{}
};

$MethodInfo _MenuShortcut_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MenuShortcut::*)(int32_t)>(&MenuShortcut::init$))},
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(MenuShortcut::*)(int32_t,bool)>(&MenuShortcut::init$))},
	{"equals", "(Ljava/awt/MenuShortcut;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"usesShiftModifier", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MenuShortcut_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.MenuShortcut",
	"java.lang.Object",
	"java.io.Serializable",
	_MenuShortcut_FieldInfo_,
	_MenuShortcut_MethodInfo_
};

$Object* allocate$MenuShortcut($Class* clazz) {
	return $of($alloc(MenuShortcut));
}

void MenuShortcut::init$(int32_t key) {
	MenuShortcut::init$(key, false);
}

void MenuShortcut::init$(int32_t key, bool useShiftModifier) {
	this->key = key;
	this->usesShift = useShiftModifier;
}

int32_t MenuShortcut::getKey() {
	return this->key;
}

bool MenuShortcut::usesShiftModifier() {
	return this->usesShift;
}

bool MenuShortcut::equals(MenuShortcut* s) {
	bool var$0 = s != nullptr && (s->getKey() == this->key);
	return (var$0 && (s->usesShiftModifier() == this->usesShift));
}

bool MenuShortcut::equals(Object$* obj) {
	if ($instanceOf(MenuShortcut, obj)) {
		return equals($cast(MenuShortcut, obj));
	}
	return false;
}

int32_t MenuShortcut::hashCode() {
	return (this->usesShift) ? (~this->key) : this->key;
}

$String* MenuShortcut::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t modifiers = 0;
	if (!$GraphicsEnvironment::isHeadless()) {
		modifiers = $nc($($Toolkit::getDefaultToolkit()))->getMenuShortcutKeyMaskEx();
	}
	if (usesShiftModifier()) {
		modifiers |= $InputEvent::SHIFT_DOWN_MASK;
	}
	$var($String, var$0, $$str({$($InputEvent::getModifiersExText(modifiers)), "+"_s}));
	return $concat(var$0, $($KeyEvent::getKeyText(this->key)));
}

$String* MenuShortcut::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $str({"key="_s, $$str(this->key)}));
	if (usesShiftModifier()) {
		$plusAssign(str, ",usesShiftModifier"_s);
	}
	return str;
}

MenuShortcut::MenuShortcut() {
}

$Class* MenuShortcut::load$($String* name, bool initialize) {
	$loadClass(MenuShortcut, name, initialize, &_MenuShortcut_ClassInfo_, allocate$MenuShortcut);
	return class$;
}

$Class* MenuShortcut::class$ = nullptr;

	} // awt
} // java