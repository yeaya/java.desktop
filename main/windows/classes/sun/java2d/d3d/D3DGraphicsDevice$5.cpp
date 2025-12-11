#include <sun/java2d/d3d/D3DGraphicsDevice$5.h>

#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$5_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$5, this$0)},
	{"val$refreshRate", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$5, val$refreshRate)},
	{"val$bitDepth", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$5, val$bitDepth)},
	{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$5, val$height)},
	{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$5, val$width)},
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$5, val$screen)},
	{"val$wpeer", "Lsun/awt/windows/WWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$5, val$wpeer)},
	{}
};

$MethodInfo _D3DGraphicsDevice$5_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;Lsun/awt/windows/WWindowPeer;IIIII)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$5::*)($D3DGraphicsDevice*,$WWindowPeer*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&D3DGraphicsDevice$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$5_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"configDisplayMode",
	"(ILjava/awt/peer/WindowPeer;IIII)V"
};

$InnerClassInfo _D3DGraphicsDevice$5_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$5_FieldInfo_,
	_D3DGraphicsDevice$5_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$5_EnclosingMethodInfo_,
	_D3DGraphicsDevice$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$5($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$5));
}

void D3DGraphicsDevice$5::init$($D3DGraphicsDevice* this$0, $WWindowPeer* val$wpeer, int32_t val$screen, int32_t val$width, int32_t val$height, int32_t val$bitDepth, int32_t val$refreshRate) {
	$set(this, this$0, this$0);
	$set(this, val$wpeer, val$wpeer);
	this->val$screen = val$screen;
	this->val$width = val$width;
	this->val$height = val$height;
	this->val$bitDepth = val$bitDepth;
	this->val$refreshRate = val$refreshRate;
}

void D3DGraphicsDevice$5::run() {
	int64_t hwnd = $nc(this->val$wpeer)->getHWnd();
	if (hwnd == (int64_t)0) {
		return;
	}
	$D3DGraphicsDevice::configDisplayModeNative(this->val$screen, hwnd, this->val$width, this->val$height, this->val$bitDepth, this->val$refreshRate);
}

D3DGraphicsDevice$5::D3DGraphicsDevice$5() {
}

$Class* D3DGraphicsDevice$5::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$5, name, initialize, &_D3DGraphicsDevice$5_ClassInfo_, allocate$D3DGraphicsDevice$5);
	return class$;
}

$Class* D3DGraphicsDevice$5::class$ = nullptr;

		} // d3d
	} // java2d
} // sun