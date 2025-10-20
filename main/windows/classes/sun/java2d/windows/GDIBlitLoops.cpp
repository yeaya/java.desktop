#include <sun/java2d/windows/GDIBlitLoops.h>

#include <java/awt/Composite.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace windows {

$FieldInfo _GDIBlitLoops_FieldInfo_[] = {
	{"rmask", "I", nullptr, 0, $field(GDIBlitLoops, rmask)},
	{"gmask", "I", nullptr, 0, $field(GDIBlitLoops, gmask)},
	{"bmask", "I", nullptr, 0, $field(GDIBlitLoops, bmask)},
	{"indexed", "Z", nullptr, 0, $field(GDIBlitLoops, indexed)},
	{}
};

$MethodInfo _GDIBlitLoops_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(GDIBlitLoops::*)($SurfaceType*,$SurfaceType*)>(&GDIBlitLoops::init$))},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;Z)V", nullptr, $PUBLIC, $method(static_cast<void(GDIBlitLoops::*)($SurfaceType*,$SurfaceType*,bool)>(&GDIBlitLoops::init$))},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;III)V", nullptr, $PUBLIC, $method(static_cast<void(GDIBlitLoops::*)($SurfaceType*,$SurfaceType*,int32_t,int32_t,int32_t)>(&GDIBlitLoops::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{"nativeBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/Region;IIIIIIIIIZ)V", nullptr, $PUBLIC | $NATIVE},
	{"register", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&GDIBlitLoops::register$))},
	{}
};

#define _METHOD_INDEX_nativeBlit 4

$ClassInfo _GDIBlitLoops_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.windows.GDIBlitLoops",
	"sun.java2d.loops.Blit",
	nullptr,
	_GDIBlitLoops_FieldInfo_,
	_GDIBlitLoops_MethodInfo_
};

$Object* allocate$GDIBlitLoops($Class* clazz) {
	return $of($alloc(GDIBlitLoops));
}

void GDIBlitLoops::register$() {
	$init(GDIBlitLoops);
	$useLocalCurrentObjectStackCache();
		$init($SurfaceType);
		$init($GDIWindowSurfaceData);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new(GDIBlitLoops, $SurfaceType::IntRgb, $GDIWindowSurfaceData::AnyGdi)),
		static_cast<$GraphicsPrimitive*>($$new(GDIBlitLoops, $SurfaceType::Ushort555Rgb, $GDIWindowSurfaceData::AnyGdi, 31744, 992, 31)),
		static_cast<$GraphicsPrimitive*>($$new(GDIBlitLoops, $SurfaceType::Ushort565Rgb, $GDIWindowSurfaceData::AnyGdi, 0x0000F800, 2016, 31)),
		static_cast<$GraphicsPrimitive*>($$new(GDIBlitLoops, $SurfaceType::ThreeByteBgr, $GDIWindowSurfaceData::AnyGdi)),
		static_cast<$GraphicsPrimitive*>($$new(GDIBlitLoops, $SurfaceType::ByteIndexedOpaque, $GDIWindowSurfaceData::AnyGdi, true)),
		static_cast<$GraphicsPrimitive*>($$new(GDIBlitLoops, $SurfaceType::Index8Gray, $GDIWindowSurfaceData::AnyGdi, true)),
		static_cast<$GraphicsPrimitive*>($$new(GDIBlitLoops, $SurfaceType::ByteGray, $GDIWindowSurfaceData::AnyGdi))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void GDIBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	GDIBlitLoops::init$(srcType, dstType, 0, 0, 0);
}

void GDIBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType, bool indexed) {
	GDIBlitLoops::init$(srcType, dstType, 0, 0, 0);
	this->indexed = indexed;
}

void GDIBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType, int32_t rmask, int32_t gmask, int32_t bmask) {
	$init($CompositeType);
	$Blit::init$(srcType, $CompositeType::SrcNoEa, dstType);
	this->indexed = false;
	this->rmask = rmask;
	this->gmask = gmask;
	this->bmask = bmask;
}

void GDIBlitLoops::nativeBlit($SurfaceData* src, $SurfaceData* dst, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h, int32_t rmask, int32_t gmask, int32_t bmask, bool needLut) {
	$prepareNative(GDIBlitLoops, nativeBlit, void, $SurfaceData* src, $SurfaceData* dst, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h, int32_t rmask, int32_t gmask, int32_t bmask, bool needLut);
	$invokeNative(GDIBlitLoops, nativeBlit, src, dst, clip, sx, sy, dx, dy, w, h, rmask, gmask, bmask, needLut);
	$finishNative();
}

void GDIBlitLoops::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	nativeBlit(src, dst, clip, sx, sy, dx, dy, w, h, this->rmask, this->gmask, this->bmask, this->indexed);
}

GDIBlitLoops::GDIBlitLoops() {
}

$Class* GDIBlitLoops::load$($String* name, bool initialize) {
	$loadClass(GDIBlitLoops, name, initialize, &_GDIBlitLoops_ClassInfo_, allocate$GDIBlitLoops);
	return class$;
}

$Class* GDIBlitLoops::class$ = nullptr;

		} // windows
	} // java2d
} // sun