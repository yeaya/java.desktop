#include <sun/lwawt/macosx/CPrinterSurfaceData.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/print/PageFormat.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/OSXSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/lwawt/macosx/CPrinterGraphicsConfig.h>
#include <jcpp.h>

#undef DESC_INT_RGB_PQ
#undef TYPE_INT_ARGB_PRE

using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $OSXSurfaceData = ::sun::java2d::OSXSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $CPrinterGraphicsConfig = ::sun::lwawt::macosx::CPrinterGraphicsConfig;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterSurfaceData_FieldInfo_[] = {
	{"DESC_INT_RGB_PQ", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPrinterSurfaceData, DESC_INT_RGB_PQ)},
	{"IntRgbPQ", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPrinterSurfaceData, IntRgbPQ)},
	{}
};

$MethodInfo _CPrinterSurfaceData_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/GraphicsConfiguration;J)V", nullptr, $PRIVATE, $method(static_cast<void(CPrinterSurfaceData::*)($GraphicsConfiguration*,int64_t)>(&CPrinterSurfaceData::init$))},
	{"_flush", "()V", nullptr, $NATIVE},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIILjava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createData", "(Ljava/awt/print/PageFormat;J)Lsun/java2d/SurfaceData;", nullptr, $STATIC, $method(static_cast<$SurfaceData*(*)($PageFormat*,int64_t)>(&CPrinterSurfaceData::createData))},
	{"enableFlushing", "()V", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"initOps", "(JLjava/nio/ByteBuffer;[Ljava/lang/Object;II)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CPrinterSurfaceData::*)(int64_t,$ByteBuffer*,$ObjectArray*,int32_t,int32_t)>(&CPrinterSurfaceData::initOps))},
	{"xorSurfacePixels", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;IIIII)Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX__flush 1
#define _METHOD_INDEX_initOps 8

$ClassInfo _CPrinterSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPrinterSurfaceData",
	"sun.java2d.OSXSurfaceData",
	nullptr,
	_CPrinterSurfaceData_FieldInfo_,
	_CPrinterSurfaceData_MethodInfo_
};

$Object* allocate$CPrinterSurfaceData($Class* clazz) {
	return $of($alloc(CPrinterSurfaceData));
}

$String* CPrinterSurfaceData::DESC_INT_RGB_PQ = nullptr;
$SurfaceType* CPrinterSurfaceData::IntRgbPQ = nullptr;

$SurfaceData* CPrinterSurfaceData::createData($PageFormat* pf, int64_t context) {
	$init(CPrinterSurfaceData);
	return $new(CPrinterSurfaceData, $($CPrinterGraphicsConfig::getConfig(pf)), context);
}

void CPrinterSurfaceData::init$($GraphicsConfiguration* gc, int64_t context) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, CPrinterSurfaceData::IntRgbPQ);
	$var($ColorModel, var$1, $nc(gc)->getColorModel());
	$var($GraphicsConfiguration, var$2, gc);
	$OSXSurfaceData::init$(var$0, var$1, var$2, $(gc->getBounds()));
	int64_t var$3 = context;
	$var($ByteBuffer, var$4, this->fGraphicsStates);
	$var($ObjectArray, var$5, this->fGraphicsStatesObject);
	int32_t var$6 = $nc($($nc(gc)->getBounds()))->width;
	initOps(var$3, var$4, var$5, var$6, $nc($(gc->getBounds()))->height);
}

$SurfaceData* CPrinterSurfaceData::getReplacement() {
	return this;
}

void CPrinterSurfaceData::initOps(int64_t context, $ByteBuffer* byteParameters, $ObjectArray* objectParameters, int32_t width, int32_t height) {
	$prepareNative(CPrinterSurfaceData, initOps, void, int64_t context, $ByteBuffer* byteParameters, $ObjectArray* objectParameters, int32_t width, int32_t height);
	$invokeNative(context, byteParameters, objectParameters, width, height);
	$finishNative();
}

void CPrinterSurfaceData::enableFlushing() {
	_flush();
}

void CPrinterSurfaceData::_flush() {
	$prepareNative(CPrinterSurfaceData, _flush, void);
	$invokeNative();
	$finishNative();
}

$Object* CPrinterSurfaceData::getDestination() {
	return $of(nullptr);
}

$Raster* CPrinterSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($BufferedImage, dstImage, $new($BufferedImage, x + w, y + h, $BufferedImage::TYPE_INT_ARGB_PRE));
	return dstImage->getRaster();
}

$BufferedImage* CPrinterSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, $BufferedImage* dstImage$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dstImage, dstImage$renamed);
	if (dstImage == nullptr) {
		$assign(dstImage, $nc($(getDeviceConfiguration()))->createCompatibleImage(w, h));
	}
	$var($Graphics, g, $nc(dstImage)->createGraphics());
	$var($BufferedImage, thisImage, getCompositingImage(w, h));
	$nc(g)->drawImage(thisImage, 0, 0, w, h, x, y, x + w, y + h, nullptr);
	g->dispose();
	return dstImage;
}

bool CPrinterSurfaceData::xorSurfacePixels($SunGraphics2D* sg2d, $BufferedImage* srcPixels, int32_t x, int32_t y, int32_t w, int32_t h, int32_t colorXOR) {
	$throwNew($InternalError, "not implemented yet"_s);
	$shouldNotReachHere();
}

void clinit$CPrinterSurfaceData($Class* class$) {
	$assignStatic(CPrinterSurfaceData::DESC_INT_RGB_PQ, "Integer RGB Printer Quartz"_s);
	$init($SurfaceType);
	$assignStatic(CPrinterSurfaceData::IntRgbPQ, $nc($SurfaceType::IntRgb)->deriveSubType(CPrinterSurfaceData::DESC_INT_RGB_PQ));
}

CPrinterSurfaceData::CPrinterSurfaceData() {
}

$Class* CPrinterSurfaceData::load$($String* name, bool initialize) {
	$loadClass(CPrinterSurfaceData, name, initialize, &_CPrinterSurfaceData_ClassInfo_, clinit$CPrinterSurfaceData, allocate$CPrinterSurfaceData);
	return class$;
}

$Class* CPrinterSurfaceData::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun