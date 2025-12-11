#include <sun/java2d/d3d/D3DSurfaceData$1.h>

#include <sun/java2d/d3d/D3DSurfaceData$1Status.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DSurfaceData$1Status = ::sun::java2d::d3d::D3DSurfaceData$1Status;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$1, this$0)},
	{"val$status", "Lsun/java2d/d3d/D3DSurfaceData$1Status;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$1, val$status)},
	{}
};

$MethodInfo _D3DSurfaceData$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DSurfaceData;Lsun/java2d/d3d/D3DSurfaceData$1Status;)V", "()V", 0, $method(static_cast<void(D3DSurfaceData$1::*)($D3DSurfaceData*,$D3DSurfaceData$1Status*)>(&D3DSurfaceData$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DSurfaceData$1_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DSurfaceData",
	"initSurface",
	"()V"
};

$InnerClassInfo _D3DSurfaceData$1_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DSurfaceData$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DSurfaceData$1_FieldInfo_,
	_D3DSurfaceData$1_MethodInfo_,
	nullptr,
	&_D3DSurfaceData$1_EnclosingMethodInfo_,
	_D3DSurfaceData$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData"
};

$Object* allocate$D3DSurfaceData$1($Class* clazz) {
	return $of($alloc(D3DSurfaceData$1));
}

void D3DSurfaceData$1::init$($D3DSurfaceData* this$0, $D3DSurfaceData$1Status* val$status) {
	$set(this, this$0, this$0);
	$set(this, val$status, val$status);
}

void D3DSurfaceData$1::run() {
	$nc(this->val$status)->success = this->this$0->initSurfaceNow();
}

D3DSurfaceData$1::D3DSurfaceData$1() {
}

$Class* D3DSurfaceData$1::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData$1, name, initialize, &_D3DSurfaceData$1_ClassInfo_, allocate$D3DSurfaceData$1);
	return class$;
}

$Class* D3DSurfaceData$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun