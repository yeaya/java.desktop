#include <sun/java2d/loops/MaskBlit.h>

#include <java/awt/Composite.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive$GeneralBinaryOp.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskBlit$General.h>
#include <sun/java2d/loops/MaskBlit$TraceMaskBlit.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitive$GeneralBinaryOp = ::sun::java2d::loops::GraphicsPrimitive$GeneralBinaryOp;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $MaskBlit$General = ::sun::java2d::loops::MaskBlit$General;
using $MaskBlit$TraceMaskBlit = ::sun::java2d::loops::MaskBlit$TraceMaskBlit;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _MaskBlit_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MaskBlit, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MaskBlit, primTypeID)},
	{"blitcache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(MaskBlit, blitcache)},
	{}
};

$MethodInfo _MaskBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(MaskBlit::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskBlit::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(MaskBlit::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskBlit::init$))},
	{"MaskBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII[BII)V", nullptr, $PUBLIC | $NATIVE},
	{"getFromCache", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/MaskBlit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MaskBlit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskBlit::getFromCache))},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/MaskBlit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MaskBlit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&MaskBlit::locate))},
	{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_MaskBlit$ 2

$InnerClassInfo _MaskBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.MaskBlit$TraceMaskBlit", "sun.java2d.loops.MaskBlit", "TraceMaskBlit", $PRIVATE | $STATIC},
	{"sun.java2d.loops.MaskBlit$General", "sun.java2d.loops.MaskBlit", "General", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MaskBlit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.MaskBlit",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_MaskBlit_FieldInfo_,
	_MaskBlit_MethodInfo_,
	nullptr,
	nullptr,
	_MaskBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.MaskBlit$TraceMaskBlit,sun.java2d.loops.MaskBlit$General"
};

$Object* allocate$MaskBlit($Class* clazz) {
	return $of($alloc(MaskBlit));
}

$String* MaskBlit::methodSignature = nullptr;
int32_t MaskBlit::primTypeID = 0;
$RenderCache* MaskBlit::blitcache = nullptr;

MaskBlit* MaskBlit::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(MaskBlit);
	return $cast(MaskBlit, $GraphicsPrimitiveMgr::locate(MaskBlit::primTypeID, srctype, comptype, dsttype));
}

MaskBlit* MaskBlit::getFromCache($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$init(MaskBlit);
	$var($Object, o, $nc(MaskBlit::blitcache)->get(src, comp, dst));
	if (o != nullptr) {
		return $cast(MaskBlit, o);
	}
	$var(MaskBlit, blit, locate(src, comp, dst));
	if (blit == nullptr) {
		$init($System);
		$nc($System::out)->println("mask blit loop not found for:"_s);
		$nc($System::out)->println($$str({"src:  "_s, src}));
		$nc($System::out)->println($$str({"comp: "_s, comp}));
		$nc($System::out)->println($$str({"dst:  "_s, dst}));
	} else {
		$nc(MaskBlit::blitcache)->put(src, comp, dst, blit);
	}
	return blit;
}

void MaskBlit::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(MaskBlit::methodSignature, MaskBlit::primTypeID, srctype, comptype, dsttype);
}

void MaskBlit::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, MaskBlit::methodSignature, MaskBlit::primTypeID, srctype, comptype, dsttype);
}

void MaskBlit::MaskBlit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	$prepareNative(MaskBlit, MaskBlit$, void, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan);
	$invokeNative(MaskBlit, MaskBlit$, src, dst, comp, clip, srcx, srcy, dstx, dsty, width, height, mask, maskoff, maskscan);
	$finishNative();
}

$GraphicsPrimitive* MaskBlit::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init($CompositeType);
	if ($nc($CompositeType::Xor)->equals(comptype)) {
		$throwNew($InternalError, "Cannot construct MaskBlit for XOR mode"_s);
	}
	$var($MaskBlit$General, ob, $new($MaskBlit$General, srctype, comptype, dsttype));
	setupGeneralBinaryOp(ob);
	return ob;
}

$GraphicsPrimitive* MaskBlit::traceWrap() {
	return $new($MaskBlit$TraceMaskBlit, this);
}

void clinit$MaskBlit($Class* class$) {
	$assignStatic(MaskBlit::methodSignature, "MaskBlit(...)"_s->toString());
	MaskBlit::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	$assignStatic(MaskBlit::blitcache, $new($RenderCache, 20));
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(MaskBlit, nullptr, nullptr, nullptr));
	}
}

MaskBlit::MaskBlit() {
}

$Class* MaskBlit::load$($String* name, bool initialize) {
	$loadClass(MaskBlit, name, initialize, &_MaskBlit_ClassInfo_, clinit$MaskBlit, allocate$MaskBlit);
	return class$;
}

$Class* MaskBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun