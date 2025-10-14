#include <sun/java2d/loops/MaskFill$TraceMaskFill.h>

#include <java/awt/Composite.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _MaskFill$TraceMaskFill_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/MaskFill;", nullptr, 0, $field(MaskFill$TraceMaskFill, target)},
	{"fillPgramTarget", "Lsun/java2d/loops/MaskFill;", nullptr, 0, $field(MaskFill$TraceMaskFill, fillPgramTarget)},
	{"drawPgramTarget", "Lsun/java2d/loops/MaskFill;", nullptr, 0, $field(MaskFill$TraceMaskFill, drawPgramTarget)},
	{}
};

$MethodInfo _MaskFill$TraceMaskFill_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/MaskFill;)V", nullptr, $PUBLIC, $method(static_cast<void(MaskFill$TraceMaskFill::*)($MaskFill*)>(&MaskFill$TraceMaskFill::init$))},
	{"DrawAAPgram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;DDDDDDDD)V", nullptr, $PUBLIC},
	{"FillAAPgram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;DDDDDD)V", nullptr, $PUBLIC},
	{"MaskFill", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;IIII[BII)V", nullptr, $PUBLIC},
	{"canDoParallelograms", "()Z", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskFill$TraceMaskFill_InnerClassesInfo_[] = {
	{"sun.java2d.loops.MaskFill$TraceMaskFill", "sun.java2d.loops.MaskFill", "TraceMaskFill", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MaskFill$TraceMaskFill_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.MaskFill$TraceMaskFill",
	"sun.java2d.loops.MaskFill",
	nullptr,
	_MaskFill$TraceMaskFill_FieldInfo_,
	_MaskFill$TraceMaskFill_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFill$TraceMaskFill_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.MaskFill"
};

$Object* allocate$MaskFill$TraceMaskFill($Class* clazz) {
	return $of($alloc(MaskFill$TraceMaskFill));
}

void MaskFill$TraceMaskFill::init$($MaskFill* target) {
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$MaskFill::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
	$var($String, var$2, $MaskFill::fillPgramSignature);
	$var($SurfaceType, var$3, $nc(target)->getSourceType());
	$var($CompositeType, var$4, target->getCompositeType());
	$set(this, fillPgramTarget, $new($MaskFill, var$2, var$3, var$4, $(target->getDestType())));
	$var($String, var$5, $MaskFill::drawPgramSignature);
	$var($SurfaceType, var$6, $nc(target)->getSourceType());
	$var($CompositeType, var$7, target->getCompositeType());
	$set(this, drawPgramTarget, $new($MaskFill, var$5, var$6, var$7, $(target->getDestType())));
}

$GraphicsPrimitive* MaskFill$TraceMaskFill::traceWrap() {
	return this;
}

void MaskFill$TraceMaskFill::MaskFill$($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	tracePrimitive(this->target);
	$nc(this->target)->MaskFill$(sg2d, sData, comp, x, y, w, h, mask, maskoff, maskscan);
}

void MaskFill$TraceMaskFill::FillAAPgram($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	tracePrimitive(this->fillPgramTarget);
	$nc(this->target)->FillAAPgram(sg2d, sData, comp, x, y, dx1, dy1, dx2, dy2);
}

void MaskFill$TraceMaskFill::DrawAAPgram($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	tracePrimitive(this->drawPgramTarget);
	$nc(this->target)->DrawAAPgram(sg2d, sData, comp, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

bool MaskFill$TraceMaskFill::canDoParallelograms() {
	return $nc(this->target)->canDoParallelograms();
}

MaskFill$TraceMaskFill::MaskFill$TraceMaskFill() {
}

$Class* MaskFill$TraceMaskFill::load$($String* name, bool initialize) {
	$loadClass(MaskFill$TraceMaskFill, name, initialize, &_MaskFill$TraceMaskFill_ClassInfo_, allocate$MaskFill$TraceMaskFill);
	return class$;
}

$Class* MaskFill$TraceMaskFill::class$ = nullptr;

		} // loops
	} // java2d
} // sun