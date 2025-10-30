#include <sun/java2d/d3d/D3DGraphicsDevice$2.h>

#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$2_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$2, this$0)},
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$2, val$screen)},
	{"val$wpeer", "Lsun/awt/windows/WWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$2, val$wpeer)},
	{}
};

$MethodInfo _D3DGraphicsDevice$2_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;Lsun/awt/windows/WWindowPeer;I)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$2::*)($D3DGraphicsDevice*,$WWindowPeer*,int32_t)>(&D3DGraphicsDevice$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$2_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"enterFullScreenExclusive",
	"(ILjava/awt/peer/WindowPeer;)V"
};

$InnerClassInfo _D3DGraphicsDevice$2_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$2_FieldInfo_,
	_D3DGraphicsDevice$2_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$2_EnclosingMethodInfo_,
	_D3DGraphicsDevice$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$2($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$2));
}

void D3DGraphicsDevice$2::init$($D3DGraphicsDevice* this$0, $WWindowPeer* val$wpeer, int32_t val$screen) {
	$set(this, this$0, this$0);
	$set(this, val$wpeer, val$wpeer);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$2::run() {
	int64_t hwnd = $nc(this->val$wpeer)->getHWnd();
	if (hwnd == (int64_t)0) {
		this->this$0->fsStatus = false;
		return;
	}
	this->this$0->fsStatus = $D3DGraphicsDevice::enterFullScreenExclusiveNative(this->val$screen, hwnd);
}

D3DGraphicsDevice$2::D3DGraphicsDevice$2() {
}

$Class* D3DGraphicsDevice$2::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$2, name, initialize, &_D3DGraphicsDevice$2_ClassInfo_, allocate$D3DGraphicsDevice$2);
	return class$;
}

$Class* D3DGraphicsDevice$2::class$ = nullptr;

		} // d3d
	} // java2d
} // sun