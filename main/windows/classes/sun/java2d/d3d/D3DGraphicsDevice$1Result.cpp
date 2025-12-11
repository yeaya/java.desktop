#include <sun/java2d/d3d/D3DGraphicsDevice$1Result.h>

#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$1Result_FieldInfo_[] = {
	{"caps", "I", nullptr, 0, $field(D3DGraphicsDevice$1Result, caps)},
	{"id", "Ljava/lang/String;", nullptr, 0, $field(D3DGraphicsDevice$1Result, id)},
	{}
};

$MethodInfo _D3DGraphicsDevice$1Result_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DGraphicsDevice$1Result::*)()>(&D3DGraphicsDevice$1Result::init$))},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$1Result_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"getDeviceCaps",
	"(I)Lsun/java2d/pipe/hw/ContextCapabilities;"
};

$InnerClassInfo _D3DGraphicsDevice$1Result_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$1Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$1Result_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$1Result",
	"java.lang.Object",
	nullptr,
	_D3DGraphicsDevice$1Result_FieldInfo_,
	_D3DGraphicsDevice$1Result_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$1Result_EnclosingMethodInfo_,
	_D3DGraphicsDevice$1Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$1Result($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$1Result));
}

void D3DGraphicsDevice$1Result::init$() {
}

D3DGraphicsDevice$1Result::D3DGraphicsDevice$1Result() {
}

$Class* D3DGraphicsDevice$1Result::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$1Result, name, initialize, &_D3DGraphicsDevice$1Result_ClassInfo_, allocate$D3DGraphicsDevice$1Result);
	return class$;
}

$Class* D3DGraphicsDevice$1Result::class$ = nullptr;

		} // d3d
	} // java2d
} // sun