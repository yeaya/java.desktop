#include <sun/java2d/xr/XRCompositeManager$1.h>

#include <sun/java2d/xr/XRCompositeManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRCompositeManager$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/xr/XRCompositeManager;", nullptr, $FINAL | $SYNTHETIC, $field(XRCompositeManager$1, this$0)},
	{}
};

$MethodInfo _XRCompositeManager$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRCompositeManager;)V", nullptr, 0, $method(static_cast<void(XRCompositeManager$1::*)($XRCompositeManager*)>(&XRCompositeManager$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XRCompositeManager$1_EnclosingMethodInfo_ = {
	"sun.java2d.xr.XRCompositeManager",
	"<init>",
	"(Lsun/java2d/xr/XRSurfaceData;)V"
};

$InnerClassInfo _XRCompositeManager$1_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRCompositeManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XRCompositeManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRCompositeManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XRCompositeManager$1_FieldInfo_,
	_XRCompositeManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_XRCompositeManager$1_EnclosingMethodInfo_,
	_XRCompositeManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRCompositeManager"
};

$Object* allocate$XRCompositeManager$1($Class* clazz) {
	return $of($alloc(XRCompositeManager$1));
}

void XRCompositeManager$1::init$($XRCompositeManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* XRCompositeManager$1::run() {
	return $of($System::getProperty("sun.java2d.xrgradcache"_s));
}

XRCompositeManager$1::XRCompositeManager$1() {
}

$Class* XRCompositeManager$1::load$($String* name, bool initialize) {
	$loadClass(XRCompositeManager$1, name, initialize, &_XRCompositeManager$1_ClassInfo_, allocate$XRCompositeManager$1);
	return class$;
}

$Class* XRCompositeManager$1::class$ = nullptr;

		} // xr
	} // java2d
} // sun