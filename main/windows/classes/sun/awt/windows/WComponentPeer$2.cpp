#include <sun/awt/windows/WComponentPeer$2.h>

#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WComponentPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$2, this$0)},
	{}
};

$MethodInfo _WComponentPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0, $method(static_cast<void(WComponentPeer$2::*)($WComponentPeer*)>(&WComponentPeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WComponentPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.windows.WComponentPeer",
	"replaceSurfaceDataLater",
	"()V"
};

$InnerClassInfo _WComponentPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.windows.WComponentPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WComponentPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WComponentPeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WComponentPeer$2_FieldInfo_,
	_WComponentPeer$2_MethodInfo_,
	nullptr,
	&_WComponentPeer$2_EnclosingMethodInfo_,
	_WComponentPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WComponentPeer"
};

$Object* allocate$WComponentPeer$2($Class* clazz) {
	return $of($alloc(WComponentPeer$2));
}

void WComponentPeer$2::init$($WComponentPeer* this$0) {
	$set(this, this$0, this$0);
}

void WComponentPeer$2::run() {
	if (!this->this$0->isDisposed()) {
		try {
			this->this$0->replaceSurfaceData();
		} catch ($InvalidPipeException& e) {
		}
	}
}

WComponentPeer$2::WComponentPeer$2() {
}

$Class* WComponentPeer$2::load$($String* name, bool initialize) {
	$loadClass(WComponentPeer$2, name, initialize, &_WComponentPeer$2_ClassInfo_, allocate$WComponentPeer$2);
	return class$;
}

$Class* WComponentPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun