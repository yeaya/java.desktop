#include <java/awt/LightweightDispatcher$2.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LightweightDispatcher.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

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

$FieldInfo _LightweightDispatcher$2_FieldInfo_[] = {
	{"this$0", "Ljava/awt/LightweightDispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(LightweightDispatcher$2, this$0)},
	{}
};

$MethodInfo _LightweightDispatcher$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/LightweightDispatcher;)V", nullptr, 0, $method(static_cast<void(LightweightDispatcher$2::*)($LightweightDispatcher*)>(&LightweightDispatcher$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LightweightDispatcher$2_EnclosingMethodInfo_ = {
	"java.awt.LightweightDispatcher",
	"stopListeningForOtherDrags",
	"()V"
};

$InnerClassInfo _LightweightDispatcher$2_InnerClassesInfo_[] = {
	{"java.awt.LightweightDispatcher$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LightweightDispatcher$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.LightweightDispatcher$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LightweightDispatcher$2_FieldInfo_,
	_LightweightDispatcher$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_LightweightDispatcher$2_EnclosingMethodInfo_,
	_LightweightDispatcher$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.LightweightDispatcher"
};

$Object* allocate$LightweightDispatcher$2($Class* clazz) {
	return $of($alloc(LightweightDispatcher$2));
}

void LightweightDispatcher$2::init$($LightweightDispatcher* this$0) {
	$set(this, this$0, this$0);
}

$Object* LightweightDispatcher$2::run() {
	$nc($($nc(this->this$0->nativeContainer)->getToolkit()))->removeAWTEventListener(this->this$0);
	return $of(nullptr);
}

LightweightDispatcher$2::LightweightDispatcher$2() {
}

$Class* LightweightDispatcher$2::load$($String* name, bool initialize) {
	$loadClass(LightweightDispatcher$2, name, initialize, &_LightweightDispatcher$2_ClassInfo_, allocate$LightweightDispatcher$2);
	return class$;
}

$Class* LightweightDispatcher$2::class$ = nullptr;

	} // awt
} // java