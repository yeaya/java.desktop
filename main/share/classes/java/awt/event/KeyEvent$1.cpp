#include <java/awt/event/KeyEvent$1.h>

#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _KeyEvent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyEvent$1::*)()>(&KeyEvent$1::init$))},
	{"getOriginalSource", "(Ljava/awt/event/KeyEvent;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"isProxyActive", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"setExtendedKeyCode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC},
	{"setPrimaryLevelUnicode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC},
	{"setRawCode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyEvent$1_EnclosingMethodInfo_ = {
	"java.awt.event.KeyEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _KeyEvent$1_InnerClassesInfo_[] = {
	{"java.awt.event.KeyEvent$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$KeyEventAccessor", "sun.awt.AWTAccessor", "KeyEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.event.KeyEvent$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$KeyEventAccessor",
	nullptr,
	_KeyEvent$1_MethodInfo_,
	nullptr,
	&_KeyEvent$1_EnclosingMethodInfo_,
	_KeyEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.event.KeyEvent"
};

$Object* allocate$KeyEvent$1($Class* clazz) {
	return $of($alloc(KeyEvent$1));
}

void KeyEvent$1::init$() {
}

void KeyEvent$1::setRawCode($KeyEvent* ev, int64_t rawCode) {
	$nc(ev)->rawCode = rawCode;
}

void KeyEvent$1::setPrimaryLevelUnicode($KeyEvent* ev, int64_t primaryLevelUnicode) {
	$nc(ev)->primaryLevelUnicode = primaryLevelUnicode;
}

void KeyEvent$1::setExtendedKeyCode($KeyEvent* ev, int64_t extendedKeyCode) {
	$nc(ev)->extendedKeyCode = extendedKeyCode;
}

$Component* KeyEvent$1::getOriginalSource($KeyEvent* ev) {
	return $nc(ev)->originalSource;
}

bool KeyEvent$1::isProxyActive($KeyEvent* ev) {
	return $nc(ev)->isProxyActive;
}

KeyEvent$1::KeyEvent$1() {
}

$Class* KeyEvent$1::load$($String* name, bool initialize) {
	$loadClass(KeyEvent$1, name, initialize, &_KeyEvent$1_ClassInfo_, allocate$KeyEvent$1);
	return class$;
}

$Class* KeyEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java