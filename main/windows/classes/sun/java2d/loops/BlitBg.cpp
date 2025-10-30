#include <sun/java2d/loops/BlitBg.h>

#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/BlitBg$General.h>
#include <sun/java2d/loops/BlitBg$TraceBlitBg.h>
#include <sun/java2d/loops/CompositeType.h>
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
using $BlitBg$General = ::sun::java2d::loops::BlitBg$General;
using $BlitBg$TraceBlitBg = ::sun::java2d::loops::BlitBg$TraceBlitBg;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _BlitBg_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BlitBg, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BlitBg, primTypeID)},
	{"blitcache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(BlitBg, blitcache)},
	{}
};

$MethodInfo _BlitBg_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(BlitBg::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&BlitBg::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(BlitBg::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&BlitBg::init$))},
	{"BlitBg", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIIII)V", nullptr, $PUBLIC | $NATIVE},
	{"getFromCache", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/BlitBg;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BlitBg*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&BlitBg::getFromCache))},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/BlitBg;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BlitBg*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&BlitBg::locate))},
	{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_BlitBg$ 2

$InnerClassInfo _BlitBg_InnerClassesInfo_[] = {
	{"sun.java2d.loops.BlitBg$TraceBlitBg", "sun.java2d.loops.BlitBg", "TraceBlitBg", $PRIVATE | $STATIC},
	{"sun.java2d.loops.BlitBg$General", "sun.java2d.loops.BlitBg", "General", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BlitBg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.BlitBg",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_BlitBg_FieldInfo_,
	_BlitBg_MethodInfo_,
	nullptr,
	nullptr,
	_BlitBg_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.BlitBg$TraceBlitBg,sun.java2d.loops.BlitBg$General"
};

$Object* allocate$BlitBg($Class* clazz) {
	return $of($alloc(BlitBg));
}

$String* BlitBg::methodSignature = nullptr;
int32_t BlitBg::primTypeID = 0;
$RenderCache* BlitBg::blitcache = nullptr;

BlitBg* BlitBg::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(BlitBg);
	return $cast(BlitBg, $GraphicsPrimitiveMgr::locate(BlitBg::primTypeID, srctype, comptype, dsttype));
}

BlitBg* BlitBg::getFromCache($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$init(BlitBg);
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(BlitBg::blitcache)->get(src, comp, dst));
	if (o != nullptr) {
		return $cast(BlitBg, o);
	}
	$var(BlitBg, blit, locate(src, comp, dst));
	if (blit == nullptr) {
		$nc($System::out)->println("blitbg loop not found for:"_s);
		$nc($System::out)->println($$str({"src:  "_s, src}));
		$nc($System::out)->println($$str({"comp: "_s, comp}));
		$nc($System::out)->println($$str({"dst:  "_s, dst}));
	} else {
		$nc(BlitBg::blitcache)->put(src, comp, dst, blit);
	}
	return blit;
}

void BlitBg::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(BlitBg::methodSignature, BlitBg::primTypeID, srctype, comptype, dsttype);
}

void BlitBg::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, BlitBg::methodSignature, BlitBg::primTypeID, srctype, comptype, dsttype);
}

void BlitBg::BlitBg$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t bgColor, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$prepareNative(BlitBg, BlitBg$, void, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t bgColor, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height);
	$invokeNative(BlitBg, BlitBg$, src, dst, comp, clip, bgColor, srcx, srcy, dstx, dsty, width, height);
	$finishNative();
}

$GraphicsPrimitive* BlitBg::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	return $new($BlitBg$General, srctype, comptype, dsttype);
}

$GraphicsPrimitive* BlitBg::traceWrap() {
	return $new($BlitBg$TraceBlitBg, this);
}

void clinit$BlitBg($Class* class$) {
	$assignStatic(BlitBg::methodSignature, "BlitBg(...)"_s->toString());
	BlitBg::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	$assignStatic(BlitBg::blitcache, $new($RenderCache, 20));
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(BlitBg, nullptr, nullptr, nullptr));
	}
}

BlitBg::BlitBg() {
}

$Class* BlitBg::load$($String* name, bool initialize) {
	$loadClass(BlitBg, name, initialize, &_BlitBg_ClassInfo_, clinit$BlitBg, allocate$BlitBg);
	return class$;
}

$Class* BlitBg::class$ = nullptr;

		} // loops
	} // java2d
} // sun