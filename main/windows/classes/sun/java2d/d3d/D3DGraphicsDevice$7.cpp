#include <sun/java2d/d3d/D3DGraphicsDevice$7.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$3Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DGraphicsDevice$3Result = ::sun::java2d::d3d::D3DGraphicsDevice$3Result;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$7_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$7, this$0)},
	{"val$res", "Lsun/java2d/d3d/D3DGraphicsDevice$3Result;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$7, val$res)},
	{}
};

$MethodInfo _D3DGraphicsDevice$7_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;Lsun/java2d/d3d/D3DGraphicsDevice$3Result;)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$7::*)($D3DGraphicsDevice*,$D3DGraphicsDevice$3Result*)>(&D3DGraphicsDevice$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$7_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"getAvailableAcceleratedMemory",
	"()I"
};

$InnerClassInfo _D3DGraphicsDevice$7_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$7",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$7_FieldInfo_,
	_D3DGraphicsDevice$7_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$7_EnclosingMethodInfo_,
	_D3DGraphicsDevice$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$7($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$7));
}

void D3DGraphicsDevice$7::init$($D3DGraphicsDevice* this$0, $D3DGraphicsDevice$3Result* val$res) {
	$set(this, this$0, this$0);
	$set(this, val$res, val$res);
}

void D3DGraphicsDevice$7::run() {
	$nc(this->val$res)->mem = $D3DGraphicsDevice::getAvailableAcceleratedMemoryNative(this->this$0->getScreen());
}

D3DGraphicsDevice$7::D3DGraphicsDevice$7() {
}

$Class* D3DGraphicsDevice$7::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$7, name, initialize, &_D3DGraphicsDevice$7_ClassInfo_, allocate$D3DGraphicsDevice$7);
	return class$;
}

$Class* D3DGraphicsDevice$7::class$ = nullptr;

		} // d3d
	} // java2d
} // sun