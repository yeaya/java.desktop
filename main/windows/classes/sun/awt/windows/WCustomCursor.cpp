#include <sun/awt/windows/WCustomCursor.h>

#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/awt/CustomCursor.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

#undef ALLBITS
#undef TYPE_INT_RGB

using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CustomCursor = ::sun::awt::CustomCursor;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WCustomCursor_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WCustomCursor::*)($Image*,$Point*,$String*)>(&WCustomCursor::init$)), "java.lang.IndexOutOfBoundsException"},
	{"createCursorIndirect", "([I[BIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WCustomCursor::*)($ints*,$bytes*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&WCustomCursor::createCursorIndirect))},
	{"createNativeCursor", "(Ljava/awt/Image;[IIIII)V", nullptr, $PROTECTED},
	{"getCursorHeight", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WCustomCursor::getCursorHeight))},
	{"getCursorWidth", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WCustomCursor::getCursorWidth))},
	{}
};

#define _METHOD_INDEX_createCursorIndirect 1
#define _METHOD_INDEX_getCursorHeight 3
#define _METHOD_INDEX_getCursorWidth 4

$ClassInfo _WCustomCursor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WCustomCursor",
	"sun.awt.CustomCursor",
	nullptr,
	nullptr,
	_WCustomCursor_MethodInfo_
};

$Object* allocate$WCustomCursor($Class* clazz) {
	return $of($alloc(WCustomCursor));
}

void WCustomCursor::init$($Image* cursor, $Point* hotSpot, $String* name) {
	$CustomCursor::init$(cursor, hotSpot, name);
}

void WCustomCursor::createNativeCursor($Image* im, $ints* pixels, int32_t w, int32_t h, int32_t xHotSpot, int32_t yHotSpot) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bimage, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics, g, bimage->getGraphics());
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($instanceOf($ToolkitImage, im)) {
				$var($ImageRepresentation, ir, $nc(($cast($ToolkitImage, im)))->getImageRep());
				$nc(ir)->reconstruct($ImageObserver::ALLBITS);
			}
			$nc(g)->drawImage(im, 0, 0, w, h, nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(g)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($Raster, raster, bimage->getRaster());
	$var($DataBuffer, buffer, $nc(raster)->getDataBuffer());
	$var($ints, data, $nc(($cast($DataBufferInt, buffer)))->getData());
	$var($bytes, andMask, $new($bytes, w * h / 8));
	int32_t npixels = $nc(pixels)->length;
	for (int32_t i = 0; i < npixels; ++i) {
		int32_t ibyte = i / 8;
		int32_t omask = $sl(1, 7 - (i % 8));
		if (((int32_t)(pixels->get(i) & (uint32_t)(int32_t)0xFF000000)) == 0) {
			(*andMask)[ibyte] |= omask;
		}
	}
	{
		int32_t ficW = raster->getWidth();
		if ($instanceOf($IntegerComponentRaster, raster)) {
			ficW = $nc(($cast($IntegerComponentRaster, raster)))->getScanlineStride();
		}
		$var($ints, var$2, $nc(($cast($DataBufferInt, $($nc($(bimage->getRaster()))->getDataBuffer()))))->getData());
		$var($bytes, var$3, andMask);
		int32_t var$4 = ficW;
		int32_t var$5 = raster->getWidth();
		createCursorIndirect(var$2, var$3, var$4, var$5, raster->getHeight(), xHotSpot, yHotSpot);
	}
}

void WCustomCursor::createCursorIndirect($ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height, int32_t xHotSpot, int32_t yHotSpot) {
	$prepareNative(WCustomCursor, createCursorIndirect, void, $ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height, int32_t xHotSpot, int32_t yHotSpot);
	$invokeNative(rData, andMask, nScanStride, width, height, xHotSpot, yHotSpot);
	$finishNative();
}

int32_t WCustomCursor::getCursorWidth() {
	$init(WCustomCursor);
	int32_t $ret = 0;
	$prepareNativeStatic(WCustomCursor, getCursorWidth, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t WCustomCursor::getCursorHeight() {
	$init(WCustomCursor);
	int32_t $ret = 0;
	$prepareNativeStatic(WCustomCursor, getCursorHeight, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

WCustomCursor::WCustomCursor() {
}

$Class* WCustomCursor::load$($String* name, bool initialize) {
	$loadClass(WCustomCursor, name, initialize, &_WCustomCursor_ClassInfo_, allocate$WCustomCursor);
	return class$;
}

$Class* WCustomCursor::class$ = nullptr;

		} // windows
	} // awt
} // sun