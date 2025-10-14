#include <sun/awt/windows/WToolkit$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WToolkit$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WToolkit$1::*)()>(&WToolkit$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WToolkit$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WToolkit",
	"loadLibraries",
	"()V"
};

$InnerClassInfo _WToolkit$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WToolkit$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WToolkit$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_WToolkit$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_WToolkit$1_EnclosingMethodInfo_,
	_WToolkit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WToolkit"
};

$Object* allocate$WToolkit$1($Class* clazz) {
	return $of($alloc(WToolkit$1));
}

void WToolkit$1::init$() {
}

$Object* WToolkit$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

WToolkit$1::WToolkit$1() {
}

$Class* WToolkit$1::load$($String* name, bool initialize) {
	$loadClass(WToolkit$1, name, initialize, &_WToolkit$1_ClassInfo_, allocate$WToolkit$1);
	return class$;
}

$Class* WToolkit$1::class$ = nullptr;

		} // windows
	} // awt
} // sun