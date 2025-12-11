#include <sun/java2d/xr/XRBackend.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/util/List.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/GrowableEltArray.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/XRColor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRBackend_MethodInfo_[] = {
	{"GCRectangles", "(IJLsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"XRenderAddGlyphs", "(ILsun/font/GlyphList;Ljava/util/List;[B)V", "(ILsun/font/GlyphList;Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;[B)V", $PUBLIC | $ABSTRACT},
	{"XRenderCompositeText", "(BIIIIIIIILsun/java2d/xr/GrowableEltArray;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"XRenderCreateGlyphSet", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"XRenderFreeGlyphs", "(I[I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"copyArea", "(IIJIIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"createGC", "(I)J", nullptr, $PUBLIC | $ABSTRACT},
	{"createLinearGradient", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"createPicture", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"createPixmap", "(IIII)I", nullptr, $PUBLIC | $ABSTRACT},
	{"createRadialGradient", "(FFFF[F[II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"freeGC", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"freePicture", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"freePixmap", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putMaskImage", "(IJ[BIIIIIIIIF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"renderComposite", "(BIIIIIIIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"renderRectangle", "(IBLsun/java2d/xr/XRColor;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"renderRectangles", "(IBLsun/java2d/xr/XRColor;Lsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setClipRectangles", "(ILsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFilter", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGCClipRectangles", "(JLsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGCExposures", "(JZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGCForeground", "(JI)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGCMode", "(JZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPictureRepeat", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPictureTransform", "(ILjava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XRBackend_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.xr.XRBackend",
	nullptr,
	nullptr,
	nullptr,
	_XRBackend_MethodInfo_
};

$Object* allocate$XRBackend($Class* clazz) {
	return $of($alloc(XRBackend));
}

$Class* XRBackend::load$($String* name, bool initialize) {
	$loadClass(XRBackend, name, initialize, &_XRBackend_ClassInfo_, allocate$XRBackend);
	return class$;
}

$Class* XRBackend::class$ = nullptr;

		} // xr
	} // java2d
} // sun