#include <java/awt/LightweightDispatcher$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LightweightDispatcher.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <jcpp.h>

#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LightweightDispatcher = ::java::awt::LightweightDispatcher;
using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$FieldInfo _LightweightDispatcher$1_FieldInfo_[] = {
	{"this$0", "Ljava/awt/LightweightDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(LightweightDispatcher$1, this$0)},
	{}
};

$MethodInfo _LightweightDispatcher$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/LightweightDispatcher;)V", nullptr, 0, $method(static_cast<void(LightweightDispatcher$1::*)($LightweightDispatcher*)>(&LightweightDispatcher$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LightweightDispatcher$1_EnclosingMethodInfo_ = {
	"java.awt.LightweightDispatcher",
	"startListeningForOtherDrags",
	"()V"
};

$InnerClassInfo _LightweightDispatcher$1_InnerClassesInfo_[] = {
	{"java.awt.LightweightDispatcher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LightweightDispatcher$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.LightweightDispatcher$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LightweightDispatcher$1_FieldInfo_,
	_LightweightDispatcher$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_LightweightDispatcher$1_EnclosingMethodInfo_,
	_LightweightDispatcher$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.LightweightDispatcher"
};

$Object* allocate$LightweightDispatcher$1($Class* clazz) {
	return $of($alloc(LightweightDispatcher$1));
}

void LightweightDispatcher$1::init$($LightweightDispatcher* this$0) {
	$set(this, this$0, this$0);
}

$Object* LightweightDispatcher$1::run() {
	$nc($($nc(this->this$0->nativeContainer)->getToolkit()))->addAWTEventListener(this->this$0, $AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::MOUSE_MOTION_EVENT_MASK);
	return $of(nullptr);
}

LightweightDispatcher$1::LightweightDispatcher$1() {
}

$Class* LightweightDispatcher$1::load$($String* name, bool initialize) {
	$loadClass(LightweightDispatcher$1, name, initialize, &_LightweightDispatcher$1_ClassInfo_, allocate$LightweightDispatcher$1);
	return class$;
}

$Class* LightweightDispatcher$1::class$ = nullptr;

	} // awt
} // java