#include <sun/java2d/d3d/D3DSurfaceData$1Status.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData$1Status_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$1Status, this$0)},
	{"success", "Z", nullptr, 0, $field(D3DSurfaceData$1Status, success)},
	{}
};

$MethodInfo _D3DSurfaceData$1Status_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DSurfaceData;)V", nullptr, 0, $method(static_cast<void(D3DSurfaceData$1Status::*)($D3DSurfaceData*)>(&D3DSurfaceData$1Status::init$))},
	{}
};

$EnclosingMethodInfo _D3DSurfaceData$1Status_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DSurfaceData",
	"initSurface",
	"()V"
};

$InnerClassInfo _D3DSurfaceData$1Status_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$1Status", nullptr, "Status", 0},
	{}
};

$ClassInfo _D3DSurfaceData$1Status_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData$1Status",
	"java.lang.Object",
	nullptr,
	_D3DSurfaceData$1Status_FieldInfo_,
	_D3DSurfaceData$1Status_MethodInfo_,
	nullptr,
	&_D3DSurfaceData$1Status_EnclosingMethodInfo_,
	_D3DSurfaceData$1Status_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData"
};

$Object* allocate$D3DSurfaceData$1Status($Class* clazz) {
	return $of($alloc(D3DSurfaceData$1Status));
}

void D3DSurfaceData$1Status::init$($D3DSurfaceData* this$0) {
	$set(this, this$0, this$0);
	this->success = false;
}

D3DSurfaceData$1Status::D3DSurfaceData$1Status() {
}

$Class* D3DSurfaceData$1Status::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData$1Status, name, initialize, &_D3DSurfaceData$1Status_ClassInfo_, allocate$D3DSurfaceData$1Status);
	return class$;
}

$Class* D3DSurfaceData$1Status::class$ = nullptr;

		} // d3d
	} // java2d
} // sun