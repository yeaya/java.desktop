#include <sun/java2d/d3d/D3DGraphicsDevice$3Result.h>

#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$3Result_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$3Result, this$0)},
	{"mem", "J", nullptr, 0, $field(D3DGraphicsDevice$3Result, mem)},
	{}
};

$MethodInfo _D3DGraphicsDevice$3Result_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;)V", nullptr, 0, $method(static_cast<void(D3DGraphicsDevice$3Result::*)($D3DGraphicsDevice*)>(&D3DGraphicsDevice$3Result::init$))},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$3Result_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"getAvailableAcceleratedMemory",
	"()I"
};

$InnerClassInfo _D3DGraphicsDevice$3Result_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$3Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$3Result_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$3Result",
	"java.lang.Object",
	nullptr,
	_D3DGraphicsDevice$3Result_FieldInfo_,
	_D3DGraphicsDevice$3Result_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$3Result_EnclosingMethodInfo_,
	_D3DGraphicsDevice$3Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$3Result($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$3Result));
}

void D3DGraphicsDevice$3Result::init$($D3DGraphicsDevice* this$0) {
	$set(this, this$0, this$0);
	this->mem = 0;
}

D3DGraphicsDevice$3Result::D3DGraphicsDevice$3Result() {
}

$Class* D3DGraphicsDevice$3Result::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$3Result, name, initialize, &_D3DGraphicsDevice$3Result_ClassInfo_, allocate$D3DGraphicsDevice$3Result);
	return class$;
}

$Class* D3DGraphicsDevice$3Result::class$ = nullptr;

		} // d3d
	} // java2d
} // sun