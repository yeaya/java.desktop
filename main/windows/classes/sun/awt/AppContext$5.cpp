#include <sun/awt/AppContext$5.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$5_FieldInfo_[] = {
	{"this$0", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$5, this$0)},
	{"val$notificationLock", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$5, val$notificationLock)},
	{}
};

$MethodInfo _AppContext$5_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext;Ljava/lang/Object;)V", "()V", 0, $method(static_cast<void(AppContext$5::*)($AppContext*,Object$*)>(&AppContext$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppContext$5_EnclosingMethodInfo_ = {
	"sun.awt.AppContext",
	"dispose",
	"()V"
};

$InnerClassInfo _AppContext$5_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_AppContext$5_FieldInfo_,
	_AppContext$5_MethodInfo_,
	nullptr,
	&_AppContext$5_EnclosingMethodInfo_,
	_AppContext$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$5($Class* clazz) {
	return $of($alloc(AppContext$5));
}

void AppContext$5::init$($AppContext* this$0, Object$* val$notificationLock) {
	$set(this, this$0, this$0);
	$set(this, val$notificationLock, val$notificationLock);
}

void AppContext$5::run() {
	$synchronized(this->val$notificationLock) {
		$nc($of(this->val$notificationLock))->notifyAll();
	}
}

AppContext$5::AppContext$5() {
}

$Class* AppContext$5::load$($String* name, bool initialize) {
	$loadClass(AppContext$5, name, initialize, &_AppContext$5_ClassInfo_, allocate$AppContext$5);
	return class$;
}

$Class* AppContext$5::class$ = nullptr;

	} // awt
} // sun