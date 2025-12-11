#include <sun/java2d/metal/MTLSurfaceData$1.h>

#include <sun/java2d/metal/MTLSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSurfaceData$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/metal/MTLSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(MTLSurfaceData$1, this$0)},
	{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(MTLSurfaceData$1, val$height)},
	{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(MTLSurfaceData$1, val$width)},
	{}
};

$MethodInfo _MTLSurfaceData$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLSurfaceData;II)V", "()V", 0, $method(static_cast<void(MTLSurfaceData$1::*)($MTLSurfaceData*,int32_t,int32_t)>(&MTLSurfaceData$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MTLSurfaceData$1_EnclosingMethodInfo_ = {
	"sun.java2d.metal.MTLSurfaceData",
	"initSurface",
	"(II)V"
};

$InnerClassInfo _MTLSurfaceData$1_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLSurfaceData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MTLSurfaceData$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLSurfaceData$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_MTLSurfaceData$1_FieldInfo_,
	_MTLSurfaceData$1_MethodInfo_,
	nullptr,
	&_MTLSurfaceData$1_EnclosingMethodInfo_,
	_MTLSurfaceData$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLSurfaceData"
};

$Object* allocate$MTLSurfaceData$1($Class* clazz) {
	return $of($alloc(MTLSurfaceData$1));
}

void MTLSurfaceData$1::init$($MTLSurfaceData* this$0, int32_t val$width, int32_t val$height) {
	$set(this, this$0, this$0);
	this->val$width = val$width;
	this->val$height = val$height;
}

void MTLSurfaceData$1::run() {
	this->this$0->initSurfaceNow(this->val$width, this->val$height);
}

MTLSurfaceData$1::MTLSurfaceData$1() {
}

$Class* MTLSurfaceData$1::load$($String* name, bool initialize) {
	$loadClass(MTLSurfaceData$1, name, initialize, &_MTLSurfaceData$1_ClassInfo_, allocate$MTLSurfaceData$1);
	return class$;
}

$Class* MTLSurfaceData$1::class$ = nullptr;

		} // metal
	} // java2d
} // sun