#include <java/awt/event/MouseEvent$1.h>

#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _MouseEvent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MouseEvent$1::*)()>(&MouseEvent$1::init$))},
	{"isCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{"setCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MouseEvent$1_EnclosingMethodInfo_ = {
	"java.awt.event.MouseEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _MouseEvent$1_InnerClassesInfo_[] = {
	{"java.awt.event.MouseEvent$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$MouseEventAccessor", "sun.awt.AWTAccessor", "MouseEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MouseEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.event.MouseEvent$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$MouseEventAccessor",
	nullptr,
	_MouseEvent$1_MethodInfo_,
	nullptr,
	&_MouseEvent$1_EnclosingMethodInfo_,
	_MouseEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.event.MouseEvent"
};

$Object* allocate$MouseEvent$1($Class* clazz) {
	return $of($alloc(MouseEvent$1));
}

void MouseEvent$1::init$() {
}

bool MouseEvent$1::isCausedByTouchEvent($MouseEvent* ev) {
	return $nc(ev)->causedByTouchEvent;
}

void MouseEvent$1::setCausedByTouchEvent($MouseEvent* ev, bool causedByTouchEvent) {
	$nc(ev)->causedByTouchEvent = causedByTouchEvent;
}

MouseEvent$1::MouseEvent$1() {
}

$Class* MouseEvent$1::load$($String* name, bool initialize) {
	$loadClass(MouseEvent$1, name, initialize, &_MouseEvent$1_ClassInfo_, allocate$MouseEvent$1);
	return class$;
}

$Class* MouseEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java