#include <java/awt/WaitDispatchSupport$4.h>

#include <java/awt/WaitDispatchSupport.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $WaitDispatchSupport = ::java::awt::WaitDispatchSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$FieldInfo _WaitDispatchSupport$4_FieldInfo_[] = {
	{"this$0", "Ljava/awt/WaitDispatchSupport;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$4, this$0)},
	{"val$run", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(WaitDispatchSupport$4, val$run)},
	{}
};

$MethodInfo _WaitDispatchSupport$4_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/WaitDispatchSupport;Ljava/lang/Runnable;)V", "()V", 0, $method(static_cast<void(WaitDispatchSupport$4::*)($WaitDispatchSupport*,$Runnable*)>(&WaitDispatchSupport$4::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WaitDispatchSupport$4_EnclosingMethodInfo_ = {
	"java.awt.WaitDispatchSupport",
	"enter",
	"()Z"
};

$InnerClassInfo _WaitDispatchSupport$4_InnerClassesInfo_[] = {
	{"java.awt.WaitDispatchSupport$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WaitDispatchSupport$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.WaitDispatchSupport$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_WaitDispatchSupport$4_FieldInfo_,
	_WaitDispatchSupport$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_WaitDispatchSupport$4_EnclosingMethodInfo_,
	_WaitDispatchSupport$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.WaitDispatchSupport"
};

$Object* allocate$WaitDispatchSupport$4($Class* clazz) {
	return $of($alloc(WaitDispatchSupport$4));
}

void WaitDispatchSupport$4::init$($WaitDispatchSupport* this$0, $Runnable* val$run) {
	$set(this, this$0, this$0);
	$set(this, val$run, val$run);
}

$Object* WaitDispatchSupport$4::run() {
	$nc(this->val$run)->run();
	return $of(nullptr);
}

WaitDispatchSupport$4::WaitDispatchSupport$4() {
}

$Class* WaitDispatchSupport$4::load$($String* name, bool initialize) {
	$loadClass(WaitDispatchSupport$4, name, initialize, &_WaitDispatchSupport$4_ClassInfo_, allocate$WaitDispatchSupport$4);
	return class$;
}

$Class* WaitDispatchSupport$4::class$ = nullptr;

	} // awt
} // java