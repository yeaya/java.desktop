#include <sun/awt/windows/WComponentPeer$3.h>

#include <sun/awt/windows/WComponentPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WComponentPeer$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$3, this$0)},
	{}
};

$MethodInfo _WComponentPeer$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0, $method(static_cast<void(WComponentPeer$3::*)($WComponentPeer*)>(&WComponentPeer$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WComponentPeer$3_EnclosingMethodInfo_ = {
	"sun.awt.windows.WComponentPeer",
	"disposeLater",
	"()V"
};

$InnerClassInfo _WComponentPeer$3_InnerClassesInfo_[] = {
	{"sun.awt.windows.WComponentPeer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WComponentPeer$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WComponentPeer$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_WComponentPeer$3_FieldInfo_,
	_WComponentPeer$3_MethodInfo_,
	nullptr,
	&_WComponentPeer$3_EnclosingMethodInfo_,
	_WComponentPeer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WComponentPeer"
};

$Object* allocate$WComponentPeer$3($Class* clazz) {
	return $of($alloc(WComponentPeer$3));
}

void WComponentPeer$3::init$($WComponentPeer* this$0) {
	$set(this, this$0, this$0);
}

void WComponentPeer$3::run() {
	this->this$0->dispose();
}

WComponentPeer$3::WComponentPeer$3() {
}

$Class* WComponentPeer$3::load$($String* name, bool initialize) {
	$loadClass(WComponentPeer$3, name, initialize, &_WComponentPeer$3_ClassInfo_, allocate$WComponentPeer$3);
	return class$;
}

$Class* WComponentPeer$3::class$ = nullptr;

		} // windows
	} // awt
} // sun