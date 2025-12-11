#include <sun/lwawt/LWComponentPeer$2.h>

#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/lang/InternalError.h>
#include <java/lang/reflect/Field.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWComponentPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$2, this$0)},
	{}
};

$MethodInfo _LWComponentPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWComponentPeer;)V", nullptr, 0, $method(static_cast<void(LWComponentPeer$2::*)($LWComponentPeer*)>(&LWComponentPeer$2::init$))},
	{"run", "()Ljava/awt/event/AWTEventListener;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWComponentPeer$2_EnclosingMethodInfo_ = {
	"sun.lwawt.LWComponentPeer",
	"getToolkitAWTEventListener",
	"()Ljava/awt/event/AWTEventListener;"
};

$InnerClassInfo _LWComponentPeer$2_InnerClassesInfo_[] = {
	{"sun.lwawt.LWComponentPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWComponentPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWComponentPeer$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LWComponentPeer$2_FieldInfo_,
	_LWComponentPeer$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/event/AWTEventListener;>;",
	&_LWComponentPeer$2_EnclosingMethodInfo_,
	_LWComponentPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWComponentPeer"
};

$Object* allocate$LWComponentPeer$2($Class* clazz) {
	return $of($alloc(LWComponentPeer$2));
}

void LWComponentPeer$2::init$($LWComponentPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* LWComponentPeer$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	try {
		$var($Field, field, $Toolkit::class$->getDeclaredField("eventListener"_s));
		$nc(field)->setAccessible(true);
		return $of($cast($AWTEventListener, field->get(toolkit)));
	} catch ($Exception& e) {
		$throwNew($InternalError, $(e->toString()));
	}
	$shouldNotReachHere();
}

LWComponentPeer$2::LWComponentPeer$2() {
}

$Class* LWComponentPeer$2::load$($String* name, bool initialize) {
	$loadClass(LWComponentPeer$2, name, initialize, &_LWComponentPeer$2_ClassInfo_, allocate$LWComponentPeer$2);
	return class$;
}

$Class* LWComponentPeer$2::class$ = nullptr;

	} // lwawt
} // sun