#include <sun/java2d/d3d/D3DGraphicsDevice$1.h>

#include <sun/java2d/d3d/D3DGraphicsDevice$1Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$1Result = ::sun::java2d::d3d::D3DGraphicsDevice$1Result;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$1_FieldInfo_[] = {
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$1, val$screen)},
	{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$1Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$1, val$res)},
	{}
};

$MethodInfo _D3DGraphicsDevice$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice$1Result;I)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$1::*)($D3DGraphicsDevice$1Result*,int32_t)>(&D3DGraphicsDevice$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$1_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"getDeviceCaps",
	"(I)Lsun/java2d/pipe/hw/ContextCapabilities;"
};

$InnerClassInfo _D3DGraphicsDevice$1_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$1_FieldInfo_,
	_D3DGraphicsDevice$1_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$1_EnclosingMethodInfo_,
	_D3DGraphicsDevice$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$1($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$1));
}

void D3DGraphicsDevice$1::init$($D3DGraphicsDevice$1Result* val$res, int32_t val$screen) {
	$set(this, val$res, val$res);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$1::run() {
	$nc(this->val$res)->caps = $D3DGraphicsDevice::getDeviceCapsNative(this->val$screen);
	$set($nc(this->val$res), id, $D3DGraphicsDevice::getDeviceIdNative(this->val$screen));
}

D3DGraphicsDevice$1::D3DGraphicsDevice$1() {
}

$Class* D3DGraphicsDevice$1::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$1, name, initialize, &_D3DGraphicsDevice$1_ClassInfo_, allocate$D3DGraphicsDevice$1);
	return class$;
}

$Class* D3DGraphicsDevice$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun