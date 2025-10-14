#include <sun/java2d/d3d/D3DGraphicsDevice$8.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$4Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$4Result = ::sun::java2d::d3d::D3DGraphicsDevice$4Result;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$8_FieldInfo_[] = {
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$8, val$screen)},
	{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$4Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$8, val$res)},
	{}
};

$MethodInfo _D3DGraphicsDevice$8_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice$4Result;I)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$8::*)($D3DGraphicsDevice$4Result*,int32_t)>(&D3DGraphicsDevice$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$8_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"isD3DAvailableOnDevice",
	"(I)Z"
};

$InnerClassInfo _D3DGraphicsDevice$8_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$8",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$8_FieldInfo_,
	_D3DGraphicsDevice$8_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$8_EnclosingMethodInfo_,
	_D3DGraphicsDevice$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$8($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$8));
}

void D3DGraphicsDevice$8::init$($D3DGraphicsDevice$4Result* val$res, int32_t val$screen) {
	$set(this, val$res, val$res);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$8::run() {
	$nc(this->val$res)->avail = $D3DGraphicsDevice::isD3DAvailableOnDeviceNative(this->val$screen);
}

D3DGraphicsDevice$8::D3DGraphicsDevice$8() {
}

$Class* D3DGraphicsDevice$8::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$8, name, initialize, &_D3DGraphicsDevice$8_ClassInfo_, allocate$D3DGraphicsDevice$8);
	return class$;
}

$Class* D3DGraphicsDevice$8::class$ = nullptr;

		} // d3d
	} // java2d
} // sun