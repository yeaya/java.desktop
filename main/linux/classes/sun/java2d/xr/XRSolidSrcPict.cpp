#include <sun/java2d/xr/XRSolidSrcPict.h>

#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRColor.h>
#include <sun/java2d/xr/XRSurfaceData$XRInternalSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FULL_ALPHA

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRColor = ::sun::java2d::xr::XRColor;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRSurfaceData$XRInternalSurfaceData = ::sun::java2d::xr::XRSurfaceData$XRInternalSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRSolidSrcPict_FieldInfo_[] = {
	{"con", "Lsun/java2d/xr/XRBackend;", nullptr, 0, $field(XRSolidSrcPict, con)},
	{"srcPict", "Lsun/java2d/xr/XRSurfaceData;", nullptr, 0, $field(XRSolidSrcPict, srcPict)},
	{"xrCol", "Lsun/java2d/xr/XRColor;", nullptr, 0, $field(XRSolidSrcPict, xrCol)},
	{"curPixVal", "I", nullptr, 0, $field(XRSolidSrcPict, curPixVal)},
	{}
};

$MethodInfo _XRSolidSrcPict_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRBackend;I)V", nullptr, $PUBLIC, $method(static_cast<void(XRSolidSrcPict::*)($XRBackend*,int32_t)>(&XRSolidSrcPict::init$))},
	{"prepareSrcPict", "(I)Lsun/java2d/xr/XRSurfaceData;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRSolidSrcPict_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRSolidSrcPict",
	"java.lang.Object",
	nullptr,
	_XRSolidSrcPict_FieldInfo_,
	_XRSolidSrcPict_MethodInfo_
};

$Object* allocate$XRSolidSrcPict($Class* clazz) {
	return $of($alloc(XRSolidSrcPict));
}

void XRSolidSrcPict::init$($XRBackend* con, int32_t parentXid) {
	$set(this, con, con);
	$set(this, xrCol, $new($XRColor));
	this->curPixVal = (int32_t)0xFF000000;
	int32_t solidPixmap = $nc(con)->createPixmap(parentXid, 32, 1, 1);
	int32_t solidSrcPictXID = con->createPicture(solidPixmap, $XRUtils::PictStandardARGB32);
	con->setPictureRepeat(solidSrcPictXID, $XRUtils::RepeatNormal);
	$init($XRColor);
	con->renderRectangle(solidSrcPictXID, $XRUtils::PictOpSrc, $XRColor::FULL_ALPHA, 0, 0, 1, 1);
	$set(this, srcPict, $new($XRSurfaceData$XRInternalSurfaceData, con, solidSrcPictXID));
}

$XRSurfaceData* XRSolidSrcPict::prepareSrcPict(int32_t pixelVal) {
	if (pixelVal != this->curPixVal) {
		$nc(this->xrCol)->setColorValues(pixelVal);
		$nc(this->con)->renderRectangle($nc(this->srcPict)->picture, $XRUtils::PictOpSrc, this->xrCol, 0, 0, 1, 1);
		this->curPixVal = pixelVal;
	}
	return this->srcPict;
}

XRSolidSrcPict::XRSolidSrcPict() {
}

$Class* XRSolidSrcPict::load$($String* name, bool initialize) {
	$loadClass(XRSolidSrcPict, name, initialize, &_XRSolidSrcPict_ClassInfo_, allocate$XRSolidSrcPict);
	return class$;
}

$Class* XRSolidSrcPict::class$ = nullptr;

		} // xr
	} // java2d
} // sun