#include <sun/java2d/d3d/D3DGraphicsDevice$6.h>

#include <java/util/ArrayList.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice$6_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$6, this$0)},
	{"val$modes", "Ljava/util/ArrayList;", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$6, val$modes)},
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DGraphicsDevice$6, val$screen)},
	{}
};

$MethodInfo _D3DGraphicsDevice$6_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;ILjava/util/ArrayList;)V", "()V", 0, $method(static_cast<void(D3DGraphicsDevice$6::*)($D3DGraphicsDevice*,int32_t,$ArrayList*)>(&D3DGraphicsDevice$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DGraphicsDevice$6_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DGraphicsDevice",
	"enumDisplayModes",
	"(ILjava/util/ArrayList;)V"
};

$InnerClassInfo _D3DGraphicsDevice$6_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DGraphicsDevice$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DGraphicsDevice$6_FieldInfo_,
	_D3DGraphicsDevice$6_MethodInfo_,
	nullptr,
	&_D3DGraphicsDevice$6_EnclosingMethodInfo_,
	_D3DGraphicsDevice$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$6($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$6));
}

void D3DGraphicsDevice$6::init$($D3DGraphicsDevice* this$0, int32_t val$screen, $ArrayList* val$modes) {
	$set(this, this$0, this$0);
	this->val$screen = val$screen;
	$set(this, val$modes, val$modes);
}

void D3DGraphicsDevice$6::run() {
	$D3DGraphicsDevice::enumDisplayModesNative(this->val$screen, this->val$modes);
}

D3DGraphicsDevice$6::D3DGraphicsDevice$6() {
}

$Class* D3DGraphicsDevice$6::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$6, name, initialize, &_D3DGraphicsDevice$6_ClassInfo_, allocate$D3DGraphicsDevice$6);
	return class$;
}

$Class* D3DGraphicsDevice$6::class$ = nullptr;

		} // d3d
	} // java2d
} // sun