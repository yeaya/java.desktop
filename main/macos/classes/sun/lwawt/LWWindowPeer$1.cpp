#include <sun/lwawt/LWWindowPeer$1.h>

#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWWindowPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWWindowPeer$1, this$0)},
	{"val$newGC", "Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(LWWindowPeer$1, val$newGC)},
	{}
};

$MethodInfo _LWWindowPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWWindowPeer;Ljava/awt/GraphicsConfiguration;)V", "()V", 0, $method(static_cast<void(LWWindowPeer$1::*)($LWWindowPeer*,$GraphicsConfiguration*)>(&LWWindowPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWWindowPeer$1_EnclosingMethodInfo_ = {
	"sun.lwawt.LWWindowPeer",
	"updateGraphicsDevice",
	"()Z"
};

$InnerClassInfo _LWWindowPeer$1_InnerClassesInfo_[] = {
	{"sun.lwawt.LWWindowPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWWindowPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWWindowPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_LWWindowPeer$1_FieldInfo_,
	_LWWindowPeer$1_MethodInfo_,
	nullptr,
	&_LWWindowPeer$1_EnclosingMethodInfo_,
	_LWWindowPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWWindowPeer"
};

$Object* allocate$LWWindowPeer$1($Class* clazz) {
	return $of($alloc(LWWindowPeer$1));
}

void LWWindowPeer$1::init$($LWWindowPeer* this$0, $GraphicsConfiguration* val$newGC) {
	$set(this, this$0, this$0);
	$set(this, val$newGC, val$newGC);
}

void LWWindowPeer$1::run() {
	$useLocalCurrentObjectStackCache();
	$nc($($AWTAccessor::getComponentAccessor()))->setGraphicsConfiguration($(this->this$0->getTarget()), this->val$newGC);
}

LWWindowPeer$1::LWWindowPeer$1() {
}

$Class* LWWindowPeer$1::load$($String* name, bool initialize) {
	$loadClass(LWWindowPeer$1, name, initialize, &_LWWindowPeer$1_ClassInfo_, allocate$LWWindowPeer$1);
	return class$;
}

$Class* LWWindowPeer$1::class$ = nullptr;

	} // lwawt
} // sun