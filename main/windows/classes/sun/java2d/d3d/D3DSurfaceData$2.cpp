#include <sun/java2d/d3d/D3DSurfaceData$2.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData$2_FieldInfo_[] = {
	{"val$target", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$2, val$target)},
	{"val$y2", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$2, val$y2)},
	{"val$x2", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$2, val$x2)},
	{"val$y1", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$2, val$y1)},
	{"val$x1", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$2, val$x1)},
	{"val$sd", "Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$2, val$sd)},
	{}
};

$MethodInfo _D3DSurfaceData$2_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DSurfaceData;IIIILjava/awt/Component;)V", "()V", 0, $method(static_cast<void(D3DSurfaceData$2::*)($D3DSurfaceData*,int32_t,int32_t,int32_t,int32_t,$Component*)>(&D3DSurfaceData$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DSurfaceData$2_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DSurfaceData",
	"swapBuffers",
	"(Lsun/java2d/d3d/D3DSurfaceData;IIII)V"
};

$InnerClassInfo _D3DSurfaceData$2_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DSurfaceData$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DSurfaceData$2_FieldInfo_,
	_D3DSurfaceData$2_MethodInfo_,
	nullptr,
	&_D3DSurfaceData$2_EnclosingMethodInfo_,
	_D3DSurfaceData$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData"
};

$Object* allocate$D3DSurfaceData$2($Class* clazz) {
	return $of($alloc(D3DSurfaceData$2));
}

void D3DSurfaceData$2::init$($D3DSurfaceData* val$sd, int32_t val$x1, int32_t val$y1, int32_t val$x2, int32_t val$y2, $Component* val$target) {
	$set(this, val$sd, val$sd);
	this->val$x1 = val$x1;
	this->val$y1 = val$y1;
	this->val$x2 = val$x2;
	this->val$y2 = val$y2;
	$set(this, val$target, val$target);
}

void D3DSurfaceData$2::run() {
	double scaleX = $nc(this->val$sd)->getDefaultScaleX();
	double scaleY = $nc(this->val$sd)->getDefaultScaleY();
	if (scaleX > 1 || scaleY > 1) {
		int32_t sx1 = $cast(int32_t, $Math::floor(this->val$x1 / scaleX));
		int32_t sy1 = $cast(int32_t, $Math::floor(this->val$y1 / scaleY));
		int32_t sx2 = $cast(int32_t, $Math::ceil(this->val$x2 / scaleX));
		int32_t sy2 = $cast(int32_t, $Math::ceil(this->val$y2 / scaleY));
		$nc(this->val$target)->repaint(sx1, sy1, sx2 - sx1, sy2 - sy1);
	} else {
		$nc(this->val$target)->repaint(this->val$x1, this->val$y1, this->val$x2 - this->val$x1, this->val$y2 - this->val$y1);
	}
}

D3DSurfaceData$2::D3DSurfaceData$2() {
}

$Class* D3DSurfaceData$2::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData$2, name, initialize, &_D3DSurfaceData$2_ClassInfo_, allocate$D3DSurfaceData$2);
	return class$;
}

$Class* D3DSurfaceData$2::class$ = nullptr;

		} // d3d
	} // java2d
} // sun