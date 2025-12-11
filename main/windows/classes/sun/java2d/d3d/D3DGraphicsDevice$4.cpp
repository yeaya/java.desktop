#include <sun/java2d/d3d/D3DGraphicsDevice$4.h>

#include <java/awt/DisplayMode.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$2Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$2Result = ::sun::java2d::d3d::D3DGraphicsDevice$2Result;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$4_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$4, this$0)},
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$4, val$screen)},
	{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$2Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$4, val$res)},
	{}
};

$MethodInfo _D3DGraphicsDevice$4_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;Lsun/java2d/d3d/D3DGraphicsDevice$2Result;I)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$4::*)($D3DGraphicsDevice*,$D3DGraphicsDevice$2Result*,int32_t)>(&D3DGraphicsDevice$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$4_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"getCurrentDisplayMode",
	"(I)Ljava/awt/DisplayMode;"
};

$InnerClassInfo _D3DGraphicsDevice$4_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$4_FieldInfo_,
	_D3DGraphicsDevice$4_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$4_EnclosingMethodInfo_,
	_D3DGraphicsDevice$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$4($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$4));
}

void D3DGraphicsDevice$4::init$($D3DGraphicsDevice* this$0, $D3DGraphicsDevice$2Result* val$res, int32_t val$screen) {
	$set(this, this$0, this$0);
	$set(this, val$res, val$res);
	this->val$screen = val$screen;
}

void D3DGraphicsDevice$4::run() {
	$set($nc(this->val$res), dm, $D3DGraphicsDevice::getCurrentDisplayModeNative(this->val$screen));
}

D3DGraphicsDevice$4::D3DGraphicsDevice$4() {
}

$Class* D3DGraphicsDevice$4::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$4, name, initialize, &_D3DGraphicsDevice$4_ClassInfo_, allocate$D3DGraphicsDevice$4);
	return class$;
}

$Class* D3DGraphicsDevice$4::class$ = nullptr;

		} // d3d
	} // java2d
} // sun