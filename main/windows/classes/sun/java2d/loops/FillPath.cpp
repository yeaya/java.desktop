#include <sun/java2d/loops/FillPath.h>

#include <java/awt/geom/Path2D$Float.h>
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
#include <sun/java2d/loops/FillPath$TraceFillPath.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillPath$TraceFillPath = ::sun::java2d::loops::FillPath$TraceFillPath;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillPath_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillPath, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillPath, primTypeID)},
	{}
};

$MethodInfo _FillPath_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(FillPath::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillPath::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(FillPath::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillPath::init$))},
	{"FillPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC | $NATIVE},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/FillPath;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FillPath*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&FillPath::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_FillPath$ 2

$InnerClassInfo _FillPath_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillPath$TraceFillPath", "sun.java2d.loops.FillPath", "TraceFillPath", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FillPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.FillPath",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_FillPath_FieldInfo_,
	_FillPath_MethodInfo_,
	nullptr,
	nullptr,
	_FillPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillPath$TraceFillPath"
};

$Object* allocate$FillPath($Class* clazz) {
	return $of($alloc(FillPath));
}

$String* FillPath::methodSignature = nullptr;
int32_t FillPath::primTypeID = 0;

FillPath* FillPath::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(FillPath);
	return $cast(FillPath, $GraphicsPrimitiveMgr::locate(FillPath::primTypeID, srctype, comptype, dsttype));
}

void FillPath::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(FillPath::methodSignature, FillPath::primTypeID, srctype, comptype, dsttype);
}

void FillPath::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, FillPath::methodSignature, FillPath::primTypeID, srctype, comptype, dsttype);
}

void FillPath::FillPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df) {
	$prepareNative(FillPath, FillPath$, void, $SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df);
	$invokeNative(FillPath, FillPath$, sg2d, sData, transX, transY, p2df);
	$finishNative();
}

$GraphicsPrimitive* FillPath::traceWrap() {
	return $new($FillPath$TraceFillPath, this);
}

void clinit$FillPath($Class* class$) {
	$assignStatic(FillPath::methodSignature, "FillPath(...)"_s->toString());
	FillPath::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

FillPath::FillPath() {
}

$Class* FillPath::load$($String* name, bool initialize) {
	$loadClass(FillPath, name, initialize, &_FillPath_ClassInfo_, clinit$FillPath, allocate$FillPath);
	return class$;
}

$Class* FillPath::class$ = nullptr;

		} // loops
	} // java2d
} // sun