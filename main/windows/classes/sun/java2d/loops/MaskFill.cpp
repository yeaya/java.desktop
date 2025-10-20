#include <sun/java2d/loops/MaskFill.h>

#include <java/awt/Composite.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskFill$General.h>
#include <sun/java2d/loops/MaskFill$TraceMaskFill.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskFill$General = ::sun::java2d::loops::MaskFill$General;
using $MaskFill$TraceMaskFill = ::sun::java2d::loops::MaskFill$TraceMaskFill;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _MaskFill_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MaskFill, methodSignature)},
	{"fillPgramSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MaskFill, fillPgramSignature)},
	{"drawPgramSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MaskFill, drawPgramSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MaskFill, primTypeID)},
	{"fillcache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(MaskFill, fillcache)},
	{}
};

$MethodInfo _MaskFill_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(MaskFill::*)($String*,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskFill::init$))},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(MaskFill::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskFill::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(MaskFill::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskFill::init$))},
	{"DrawAAPgram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;DDDDDDDD)V", nullptr, $PUBLIC | $NATIVE},
	{"FillAAPgram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;DDDDDD)V", nullptr, $PUBLIC | $NATIVE},
	{"MaskFill", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;IIII[BII)V", nullptr, $PUBLIC | $NATIVE},
	{"canDoParallelograms", "()Z", nullptr, $PUBLIC},
	{"getFromCache", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/MaskFill;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MaskFill*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskFill::getFromCache))},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/MaskFill;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MaskFill*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskFill::locate))},
	{"locatePrim", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/MaskFill;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MaskFill*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskFill::locatePrim))},
	{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_DrawAAPgram 3
#define _METHOD_INDEX_FillAAPgram 4
#define _METHOD_INDEX_MaskFill$ 5

$InnerClassInfo _MaskFill_InnerClassesInfo_[] = {
	{"sun.java2d.loops.MaskFill$TraceMaskFill", "sun.java2d.loops.MaskFill", "TraceMaskFill", $PRIVATE | $STATIC},
	{"sun.java2d.loops.MaskFill$General", "sun.java2d.loops.MaskFill", "General", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MaskFill_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.MaskFill",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_MaskFill_FieldInfo_,
	_MaskFill_MethodInfo_,
	nullptr,
	nullptr,
	_MaskFill_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.MaskFill$TraceMaskFill,sun.java2d.loops.MaskFill$General"
};

$Object* allocate$MaskFill($Class* clazz) {
	return $of($alloc(MaskFill));
}

$String* MaskFill::methodSignature = nullptr;
$String* MaskFill::fillPgramSignature = nullptr;
$String* MaskFill::drawPgramSignature = nullptr;
int32_t MaskFill::primTypeID = 0;
$RenderCache* MaskFill::fillcache = nullptr;

MaskFill* MaskFill::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(MaskFill);
	return $cast(MaskFill, $GraphicsPrimitiveMgr::locate(MaskFill::primTypeID, srctype, comptype, dsttype));
}

MaskFill* MaskFill::locatePrim($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(MaskFill);
	return $cast(MaskFill, $GraphicsPrimitiveMgr::locatePrim(MaskFill::primTypeID, srctype, comptype, dsttype));
}

MaskFill* MaskFill::getFromCache($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$init(MaskFill);
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(MaskFill::fillcache)->get(src, comp, dst));
	if (o != nullptr) {
		return $cast(MaskFill, o);
	}
	$var(MaskFill, fill, locatePrim(src, comp, dst));
	if (fill != nullptr) {
		$nc(MaskFill::fillcache)->put(src, comp, dst, fill);
	}
	return fill;
}

void MaskFill::init$($String* alternateSignature, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(alternateSignature, MaskFill::primTypeID, srctype, comptype, dsttype);
}

void MaskFill::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(MaskFill::methodSignature, MaskFill::primTypeID, srctype, comptype, dsttype);
}

void MaskFill::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, MaskFill::methodSignature, MaskFill::primTypeID, srctype, comptype, dsttype);
}

void MaskFill::MaskFill$($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	$prepareNative(MaskFill, MaskFill$, void, $SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan);
	$invokeNative(MaskFill, MaskFill$, sg2d, sData, comp, x, y, w, h, mask, maskoff, maskscan);
	$finishNative();
}

void MaskFill::FillAAPgram($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$prepareNative(MaskFill, FillAAPgram, void, $SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2);
	$invokeNative(MaskFill, FillAAPgram, sg2d, sData, comp, x, y, dx1, dy1, dx2, dy2);
	$finishNative();
}

void MaskFill::DrawAAPgram($SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$prepareNative(MaskFill, DrawAAPgram, void, $SunGraphics2D* sg2d, $SurfaceData* sData, $Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2);
	$invokeNative(MaskFill, DrawAAPgram, sg2d, sData, comp, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
	$finishNative();
}

bool MaskFill::canDoParallelograms() {
	return (getNativePrim() != 0);
}

$GraphicsPrimitive* MaskFill::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init($SurfaceType);
	bool var$0 = $nc($SurfaceType::OpaqueColor)->equals(srctype);
	if (var$0 || $nc($SurfaceType::AnyColor)->equals(srctype)) {
		$init($CompositeType);
		if ($nc($CompositeType::Xor)->equals(comptype)) {
			$throwNew($InternalError, "Cannot construct MaskFill for XOR mode"_s);
		} else {
			return $new($MaskFill$General, srctype, comptype, dsttype);
		}
	} else {
		$throwNew($InternalError, "MaskFill can only fill with colors"_s);
	}
}

$GraphicsPrimitive* MaskFill::traceWrap() {
	return $new($MaskFill$TraceMaskFill, this);
}

void clinit$MaskFill($Class* class$) {
	$assignStatic(MaskFill::methodSignature, "MaskFill(...)"_s->toString());
	$assignStatic(MaskFill::fillPgramSignature, "FillAAPgram(...)"_s->toString());
	$assignStatic(MaskFill::drawPgramSignature, "DrawAAPgram(...)"_s->toString());
	MaskFill::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	$assignStatic(MaskFill::fillcache, $new($RenderCache, 10));
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(MaskFill, nullptr, nullptr, nullptr));
	}
}

MaskFill::MaskFill() {
}

$Class* MaskFill::load$($String* name, bool initialize) {
	$loadClass(MaskFill, name, initialize, &_MaskFill_ClassInfo_, clinit$MaskFill, allocate$MaskFill);
	return class$;
}

$Class* MaskFill::class$ = nullptr;

		} // loops
	} // java2d
} // sun