#include <java/awt/event/InputEvent$1.h>

#include <java/awt/event/InputEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$InputEventAccessor = ::sun::awt::AWTAccessor$InputEventAccessor;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _InputEvent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InputEvent$1::*)()>(&InputEvent$1::init$))},
	{"canAccessSystemClipboard", "(Ljava/awt/event/InputEvent;)Z", nullptr, $PUBLIC},
	{"getButtonDownMasks", "()[I", nullptr, $PUBLIC},
	{"setCanAccessSystemClipboard", "(Ljava/awt/event/InputEvent;Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InputEvent$1_EnclosingMethodInfo_ = {
	"java.awt.event.InputEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _InputEvent$1_InnerClassesInfo_[] = {
	{"java.awt.event.InputEvent$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$InputEventAccessor", "sun.awt.AWTAccessor", "InputEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InputEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.event.InputEvent$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$InputEventAccessor",
	nullptr,
	_InputEvent$1_MethodInfo_,
	nullptr,
	&_InputEvent$1_EnclosingMethodInfo_,
	_InputEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.event.InputEvent"
};

$Object* allocate$InputEvent$1($Class* clazz) {
	return $of($alloc(InputEvent$1));
}

void InputEvent$1::init$() {
}

$ints* InputEvent$1::getButtonDownMasks() {
	return $InputEvent::getButtonDownMasks();
}

bool InputEvent$1::canAccessSystemClipboard($InputEvent* event) {
	return $nc(event)->canAccessSystemClipboard$;
}

void InputEvent$1::setCanAccessSystemClipboard($InputEvent* event, bool canAccessSystemClipboard) {
	$nc(event)->canAccessSystemClipboard$ = canAccessSystemClipboard;
}

InputEvent$1::InputEvent$1() {
}

$Class* InputEvent$1::load$($String* name, bool initialize) {
	$loadClass(InputEvent$1, name, initialize, &_InputEvent$1_ClassInfo_, allocate$InputEvent$1);
	return class$;
}

$Class* InputEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java