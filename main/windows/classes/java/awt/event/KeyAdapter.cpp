#include <java/awt/event/KeyAdapter.h>

#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _KeyAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(KeyAdapter::*)()>(&KeyAdapter::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeyAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.KeyAdapter",
	"java.lang.Object",
	"java.awt.event.KeyListener",
	nullptr,
	_KeyAdapter_MethodInfo_
};

$Object* allocate$KeyAdapter($Class* clazz) {
	return $of($alloc(KeyAdapter));
}

void KeyAdapter::init$() {
}

void KeyAdapter::keyTyped($KeyEvent* e) {
}

void KeyAdapter::keyPressed($KeyEvent* e) {
}

void KeyAdapter::keyReleased($KeyEvent* e) {
}

KeyAdapter::KeyAdapter() {
}

$Class* KeyAdapter::load$($String* name, bool initialize) {
	$loadClass(KeyAdapter, name, initialize, &_KeyAdapter_ClassInfo_, allocate$KeyAdapter);
	return class$;
}

$Class* KeyAdapter::class$ = nullptr;

		} // event
	} // awt
} // java