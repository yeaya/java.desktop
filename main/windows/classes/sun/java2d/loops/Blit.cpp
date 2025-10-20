#include <sun/java2d/loops/Blit.h>

#include <java/awt/Composite.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit$AnyBlit.h>
#include <sun/java2d/loops/Blit$GeneralMaskBlit.h>
#include <sun/java2d/loops/Blit$GeneralXorBlit.h>
#include <sun/java2d/loops/Blit$TraceBlit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive$GeneralBinaryOp.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit$AnyBlit = ::sun::java2d::loops::Blit$AnyBlit;
using $Blit$GeneralMaskBlit = ::sun::java2d::loops::Blit$GeneralMaskBlit;
using $Blit$GeneralXorBlit = ::sun::java2d::loops::Blit$GeneralXorBlit;
using $Blit$TraceBlit = ::sun::java2d::loops::Blit$TraceBlit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitive$GeneralBinaryOp = ::sun::java2d::loops::GraphicsPrimitive$GeneralBinaryOp;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _Blit_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Blit, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Blit, primTypeID)},
	{"blitcache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(Blit, blitcache)},
	{}
};

$MethodInfo _Blit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(Blit::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&Blit::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(Blit::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&Blit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC | $NATIVE},
	{"getFromCache", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/Blit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Blit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&Blit::getFromCache))},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/Blit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Blit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&Blit::locate))},
	{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_Blit$ 2

$InnerClassInfo _Blit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.Blit$TraceBlit", "sun.java2d.loops.Blit", "TraceBlit", $PRIVATE | $STATIC},
	{"sun.java2d.loops.Blit$GeneralXorBlit", "sun.java2d.loops.Blit", "GeneralXorBlit", $PRIVATE | $STATIC},
	{"sun.java2d.loops.Blit$GeneralMaskBlit", "sun.java2d.loops.Blit", "GeneralMaskBlit", $PRIVATE | $STATIC},
	{"sun.java2d.loops.Blit$AnyBlit", "sun.java2d.loops.Blit", "AnyBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Blit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.Blit",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_Blit_FieldInfo_,
	_Blit_MethodInfo_,
	nullptr,
	nullptr,
	_Blit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.Blit$TraceBlit,sun.java2d.loops.Blit$GeneralXorBlit,sun.java2d.loops.Blit$GeneralMaskBlit,sun.java2d.loops.Blit$AnyBlit"
};

$Object* allocate$Blit($Class* clazz) {
	return $of($alloc(Blit));
}

$String* Blit::methodSignature = nullptr;
int32_t Blit::primTypeID = 0;
$RenderCache* Blit::blitcache = nullptr;

Blit* Blit::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(Blit);
	return $cast(Blit, $GraphicsPrimitiveMgr::locate(Blit::primTypeID, srctype, comptype, dsttype));
}

Blit* Blit::getFromCache($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$init(Blit);
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(Blit::blitcache)->get(src, comp, dst));
	if (o != nullptr) {
		return $cast(Blit, o);
	}
	$var(Blit, blit, locate(src, comp, dst));
	if (blit == nullptr) {
		$init($System);
		$nc($System::out)->println("blit loop not found for:"_s);
		$nc($System::out)->println($$str({"src:  "_s, src}));
		$nc($System::out)->println($$str({"comp: "_s, comp}));
		$nc($System::out)->println($$str({"dst:  "_s, dst}));
	} else {
		$nc(Blit::blitcache)->put(src, comp, dst, blit);
	}
	return blit;
}

void Blit::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(Blit::methodSignature, Blit::primTypeID, srctype, comptype, dsttype);
}

void Blit::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, Blit::methodSignature, Blit::primTypeID, srctype, comptype, dsttype);
}

void Blit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$prepareNative(Blit, Blit$, void, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height);
	$invokeNative(Blit, Blit$, src, dst, comp, clip, srcx, srcy, dstx, dsty, width, height);
	$finishNative();
}

$GraphicsPrimitive* Blit::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init($CompositeType);
	if ($nc(comptype)->isDerivedFrom($CompositeType::Xor)) {
		$var($Blit$GeneralXorBlit, gxb, $new($Blit$GeneralXorBlit, srctype, comptype, dsttype));
		setupGeneralBinaryOp(gxb);
		return gxb;
	} else {
		if (comptype->isDerivedFrom($CompositeType::AnyAlpha)) {
			return $new($Blit$GeneralMaskBlit, srctype, comptype, dsttype);
		} else {
			$init($Blit$AnyBlit);
			return $Blit$AnyBlit::instance;
		}
	}
}

$GraphicsPrimitive* Blit::traceWrap() {
	return $new($Blit$TraceBlit, this);
}

void clinit$Blit($Class* class$) {
	$assignStatic(Blit::methodSignature, "Blit(...)"_s->toString());
	Blit::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	$assignStatic(Blit::blitcache, $new($RenderCache, 20));
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(Blit, nullptr, nullptr, nullptr));
	}
}

Blit::Blit() {
}

$Class* Blit::load$($String* name, bool initialize) {
	$loadClass(Blit, name, initialize, &_Blit_ClassInfo_, clinit$Blit, allocate$Blit);
	return class$;
}

$Class* Blit::class$ = nullptr;

		} // loops
	} // java2d
} // sun