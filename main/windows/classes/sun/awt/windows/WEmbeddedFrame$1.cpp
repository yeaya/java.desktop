#include <sun/awt/windows/WEmbeddedFrame$1.h>

#include <sun/awt/windows/WEmbeddedFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WEmbeddedFrame = ::sun::awt::windows::WEmbeddedFrame;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WEmbeddedFrame$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WEmbeddedFrame$1::*)()>(&WEmbeddedFrame$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WEmbeddedFrame$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WEmbeddedFrame",
	"getPrintScaleFactor",
	"()I"
};

$InnerClassInfo _WEmbeddedFrame$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WEmbeddedFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WEmbeddedFrame$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WEmbeddedFrame$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_WEmbeddedFrame$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_WEmbeddedFrame$1_EnclosingMethodInfo_,
	_WEmbeddedFrame$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WEmbeddedFrame"
};

$Object* allocate$WEmbeddedFrame$1($Class* clazz) {
	return $of($alloc(WEmbeddedFrame$1));
}

void WEmbeddedFrame$1::init$() {
}

$Object* WEmbeddedFrame$1::run() {
	return $of($System::getenv("JAVA2D_PLUGIN_PRINT_SCALE"_s));
}

WEmbeddedFrame$1::WEmbeddedFrame$1() {
}

$Class* WEmbeddedFrame$1::load$($String* name, bool initialize) {
	$loadClass(WEmbeddedFrame$1, name, initialize, &_WEmbeddedFrame$1_ClassInfo_, allocate$WEmbeddedFrame$1);
	return class$;
}

$Class* WEmbeddedFrame$1::class$ = nullptr;

		} // windows
	} // awt
} // sun