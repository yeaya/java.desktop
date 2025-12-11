#include <java/awt/LightweightDispatcher$3.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LightweightDispatcher.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

#undef INCLUDE_SELF

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LightweightDispatcher = ::java::awt::LightweightDispatcher;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _LightweightDispatcher$3_FieldInfo_[] = {
	{"this$0", "Ljava/awt/LightweightDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(LightweightDispatcher$3, this$0)},
	{"val$ptSrcOrigin", "Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(LightweightDispatcher$3, val$ptSrcOrigin)},
	{"val$mouseEvent", "Ljava/awt/event/MouseEvent;", nullptr, $FINAL | $SYNTHETIC, $field(LightweightDispatcher$3, val$mouseEvent)},
	{}
};

$MethodInfo _LightweightDispatcher$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/LightweightDispatcher;Ljava/awt/event/MouseEvent;Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(LightweightDispatcher$3::*)($LightweightDispatcher*,$MouseEvent*,$Point*)>(&LightweightDispatcher$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LightweightDispatcher$3_EnclosingMethodInfo_ = {
	"java.awt.LightweightDispatcher",
	"eventDispatched",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _LightweightDispatcher$3_InnerClassesInfo_[] = {
	{"java.awt.LightweightDispatcher$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LightweightDispatcher$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.LightweightDispatcher$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_LightweightDispatcher$3_FieldInfo_,
	_LightweightDispatcher$3_MethodInfo_,
	nullptr,
	&_LightweightDispatcher$3_EnclosingMethodInfo_,
	_LightweightDispatcher$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.LightweightDispatcher"
};

$Object* allocate$LightweightDispatcher$3($Class* clazz) {
	return $of($alloc(LightweightDispatcher$3));
}

void LightweightDispatcher$3::init$($LightweightDispatcher* this$0, $MouseEvent* val$mouseEvent, $Point* val$ptSrcOrigin) {
	$set(this, this$0, this$0);
	$set(this, val$mouseEvent, val$mouseEvent);
	$set(this, val$ptSrcOrigin, val$ptSrcOrigin);
}

void LightweightDispatcher$3::run() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->this$0->nativeContainer)->isShowing()) {
		return;
	}
	$var($Point, ptDstOrigin, $nc(this->this$0->nativeContainer)->getLocationOnScreen());
	$nc(this->val$mouseEvent)->translatePoint($nc(this->val$ptSrcOrigin)->x - $nc(ptDstOrigin)->x, $nc(this->val$ptSrcOrigin)->y - ptDstOrigin->y);
	int32_t var$0 = $nc(this->val$mouseEvent)->getX();
	$var($Component, targetOver, $nc(this->this$0->nativeContainer)->getMouseEventTarget(var$0, $nc(this->val$mouseEvent)->getY(), $Container::INCLUDE_SELF));
	this->this$0->trackMouseEnterExit(targetOver, this->val$mouseEvent);
}

LightweightDispatcher$3::LightweightDispatcher$3() {
}

$Class* LightweightDispatcher$3::load$($String* name, bool initialize) {
	$loadClass(LightweightDispatcher$3, name, initialize, &_LightweightDispatcher$3_ClassInfo_, allocate$LightweightDispatcher$3);
	return class$;
}

$Class* LightweightDispatcher$3::class$ = nullptr;

	} // awt
} // java