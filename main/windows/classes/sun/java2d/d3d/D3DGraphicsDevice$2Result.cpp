#include <sun/java2d/d3d/D3DGraphicsDevice$2Result.h>

#include <java/awt/DisplayMode.h>
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

$FieldInfo _D3DGraphicsDevice$2Result_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$2Result, this$0)},
	{"dm", "Ljava/awt/DisplayMode;", nullptr, 0, $field(D3DGraphicsDevice$2Result, dm)},
	{}
};

$MethodInfo _D3DGraphicsDevice$2Result_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;)V", nullptr, 0, $method(static_cast<void(D3DGraphicsDevice$2Result::*)($D3DGraphicsDevice*)>(&D3DGraphicsDevice$2Result::init$))},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$2Result_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"getCurrentDisplayMode",
	"(I)Ljava/awt/DisplayMode;"
};

$InnerClassInfo _D3DGraphicsDevice$2Result_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$2Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$2Result_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$2Result",
	"java.lang.Object",
	nullptr,
	_D3DGraphicsDevice$2Result_FieldInfo_,
	_D3DGraphicsDevice$2Result_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$2Result_EnclosingMethodInfo_,
	_D3DGraphicsDevice$2Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$2Result($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$2Result));
}

void D3DGraphicsDevice$2Result::init$($D3DGraphicsDevice* this$0) {
	$set(this, this$0, this$0);
	$set(this, dm, nullptr);
}

D3DGraphicsDevice$2Result::D3DGraphicsDevice$2Result() {
}

$Class* D3DGraphicsDevice$2Result::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$2Result, name, initialize, &_D3DGraphicsDevice$2Result_ClassInfo_, allocate$D3DGraphicsDevice$2Result);
	return class$;
}

$Class* D3DGraphicsDevice$2Result::class$ = nullptr;

		} // d3d
	} // java2d
} // sun