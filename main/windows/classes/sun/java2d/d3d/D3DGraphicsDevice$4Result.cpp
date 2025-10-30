#include <sun/java2d/d3d/D3DGraphicsDevice$4Result.h>

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

$FieldInfo _D3DGraphicsDevice$4Result_FieldInfo_[] = {
	{"avail", "Z", nullptr, 0, $field(D3DGraphicsDevice$4Result, avail)},
	{}
};

$MethodInfo _D3DGraphicsDevice$4Result_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DGraphicsDevice$4Result::*)()>(&D3DGraphicsDevice$4Result::init$))},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$4Result_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"isD3DAvailableOnDevice",
	"(I)Z"
};

$InnerClassInfo _D3DGraphicsDevice$4Result_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$4Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$4Result_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$4Result",
	"java.lang.Object",
	nullptr,
	_D3DGraphicsDevice$4Result_FieldInfo_,
	_D3DGraphicsDevice$4Result_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$4Result_EnclosingMethodInfo_,
	_D3DGraphicsDevice$4Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$4Result($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$4Result));
}

void D3DGraphicsDevice$4Result::init$() {
	this->avail = false;
}

D3DGraphicsDevice$4Result::D3DGraphicsDevice$4Result() {
}

$Class* D3DGraphicsDevice$4Result::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$4Result, name, initialize, &_D3DGraphicsDevice$4Result_ClassInfo_, allocate$D3DGraphicsDevice$4Result);
	return class$;
}

$Class* D3DGraphicsDevice$4Result::class$ = nullptr;

		} // d3d
	} // java2d
} // sun