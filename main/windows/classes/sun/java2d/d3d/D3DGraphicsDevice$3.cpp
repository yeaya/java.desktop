#include <sun/java2d/d3d/D3DGraphicsDevice$3.h>

#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$3_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$3, this$0)},
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$3, val$screen)},
	{}
};

$MethodInfo _D3DGraphicsDevice$3_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;I)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$3::*)($D3DGraphicsDevice*,int32_t)>(&D3DGraphicsDevice$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$3_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"exitFullScreenExclusive",
	"(ILjava/awt/peer/WindowPeer;)V"
};

$InnerClassInfo _D3DGraphicsDevice$3_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$3_FieldInfo_,
	_D3DGraphicsDevice$3_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$3_EnclosingMethodInfo_,
	_D3DGraphicsDevice$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$3($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$3));
}

void D3DGraphicsDevice$3::init$($D3DGraphicsDevice* this$0, int32_t val$screen) {
	$set(this, this$0, this$0);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$3::run() {
	$D3DGraphicsDevice::exitFullScreenExclusiveNative(this->val$screen);
}

D3DGraphicsDevice$3::D3DGraphicsDevice$3() {
}

$Class* D3DGraphicsDevice$3::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$3, name, initialize, &_D3DGraphicsDevice$3_ClassInfo_, allocate$D3DGraphicsDevice$3);
	return class$;
}

$Class* D3DGraphicsDevice$3::class$ = nullptr;

		} // d3d
	} // java2d
} // sun