#include <sun/java2d/OSXOffScreenSurfaceData.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/BytePackedRaster.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/ShortComponentRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/java2d/IntegerNIORaster.h>
#include <sun/java2d/OSXSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

#undef BITMASK
#undef OPAQUE
#undef TRANSFORM_TRANSLATESCALE
#undef TRANSLUCENT
#undef TYPE_3BYTE_BGR
#undef TYPE_3BYTE_RGB
#undef TYPE_4BYTE_ABGR
#undef TYPE_4BYTE_ABGR_PRE
#undef TYPE_BYTE
#undef TYPE_BYTE_BINARY
#undef TYPE_BYTE_GRAY
#undef TYPE_BYTE_INDEXED
#undef TYPE_CUSTOM
#undef TYPE_INT
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE
#undef TYPE_INT_BGR
#undef TYPE_INT_RGB
#undef TYPE_USHORT
#undef TYPE_USHORT_555_RGB
#undef TYPE_USHORT_565_RGB
#undef TYPE_USHORT_GRAY

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;
using $Hashtable = ::java::util::Hashtable;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $BytePackedRaster = ::sun::awt::image::BytePackedRaster;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $ShortComponentRaster = ::sun::awt::image::ShortComponentRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $IntegerNIORaster = ::sun::java2d::IntegerNIORaster;
using $OSXSurfaceData = ::sun::java2d::OSXSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {

$FieldInfo _OSXOffScreenSurfaceData_FieldInfo_[] = {
	{"bim", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OSXOffScreenSurfaceData, bim)},
	{"bimBackup", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OSXOffScreenSurfaceData, bimBackup)},
	{"dcmBackup", "Ljava/awt/image/DirectColorModel;", nullptr, $STATIC, $staticField(OSXOffScreenSurfaceData, dcmBackup)},
	{"lock", "Ljava/lang/Object;", nullptr, 0, $field(OSXOffScreenSurfaceData, lock)},
	{"bufImgRaster", "Ljava/awt/image/WritableRaster;", nullptr, 0, $field(OSXOffScreenSurfaceData, bufImgRaster)},
	{"bufImgSunRaster", "Lsun/awt/image/SunWritableRaster;", nullptr, 0, $field(OSXOffScreenSurfaceData, bufImgSunRaster)},
	{"TYPE_3BYTE_RGB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OSXOffScreenSurfaceData, TYPE_3BYTE_RGB)},
	{"fImageInfo", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED, $field(OSXOffScreenSurfaceData, fImageInfo)},
	{"fImageInfoInt", "Ljava/nio/IntBuffer;", nullptr, 0, $field(OSXOffScreenSurfaceData, fImageInfoInt)},
	{"kNeedToSyncFromJavaPixelsIndex", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OSXOffScreenSurfaceData, kNeedToSyncFromJavaPixelsIndex)},
	{"kNativePixelsChangedIndex", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OSXOffScreenSurfaceData, kNativePixelsChangedIndex)},
	{"kImageStolenIndex", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OSXOffScreenSurfaceData, kImageStolenIndex)},
	{"kSizeOfParameters", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OSXOffScreenSurfaceData, kSizeOfParameters)},
	{"copyWithBgColor_cache", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OSXOffScreenSurfaceData, copyWithBgColor_cache)},
	{}
};

$MethodInfo _OSXOffScreenSurfaceData_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;)V", nullptr, 0, $method(static_cast<void(OSXOffScreenSurfaceData::*)($BufferedImage*,$SurfaceType*)>(&OSXOffScreenSurfaceData::init$))},
	{"cacheRasters", "(Ljava/awt/image/BufferedImage;)V", nullptr, 0},
	{"clearRect", "(Ljava/awt/image/BufferedImage;II)V", nullptr, $PUBLIC},
	{"clearSurfacePixels", "(II)Z", nullptr, $NATIVE},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIILjava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createData", "(Ljava/awt/image/BufferedImage;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*)>(&OSXOffScreenSurfaceData::createData))},
	{"createData", "(Ljava/awt/image/Raster;Ljava/awt/image/ColorModel;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($Raster*,$ColorModel*)>(&OSXOffScreenSurfaceData::createData))},
	{"createDataBC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;II)Lsun/java2d/SurfaceData;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,int32_t,int32_t)>(&OSXOffScreenSurfaceData::createDataBC))},
	{"createDataBC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;I)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,int32_t)>(&OSXOffScreenSurfaceData::createDataBC))},
	{"createDataBP", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;I)Lsun/java2d/SurfaceData;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,int32_t)>(&OSXOffScreenSurfaceData::createDataBP))},
	{"createDataIC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;I)Lsun/java2d/SurfaceData;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,int32_t)>(&OSXOffScreenSurfaceData::createDataIC))},
	{"createDataIC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*)>(&OSXOffScreenSurfaceData::createDataIC))},
	{"createDataSC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/IndexColorModel;I)Lsun/java2d/SurfaceData;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,$IndexColorModel*,int32_t)>(&OSXOffScreenSurfaceData::createDataSC))},
	{"createDataSC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/IndexColorModel;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,$IndexColorModel*)>(&OSXOffScreenSurfaceData::createDataSC))},
	{"createNewSurface", "(Ljava/awt/image/BufferedImage;)Lsun/java2d/OSXOffScreenSurfaceData;", nullptr, $STATIC, $method(static_cast<OSXOffScreenSurfaceData*(*)($BufferedImage*)>(&OSXOffScreenSurfaceData::createNewSurface))},
	{"getCopyWithBgColor", "(Ljava/awt/Color;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getLockObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSurfaceData", "(Ljava/awt/image/BufferedImage;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<$SurfaceData*(*)($BufferedImage*)>(&OSXOffScreenSurfaceData::getSurfaceData))},
	{"initCustomRaster", "(Ljava/nio/IntBuffer;IILjava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED | $NATIVE},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&OSXOffScreenSurfaceData::initIDs))},
	{"initRaster", "(Ljava/lang/Object;IIIIILjava/awt/image/IndexColorModel;ILjava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED | $NATIVE},
	{"rasterRead", "()V", nullptr, $PUBLIC},
	{"rasterWrite", "()V", nullptr, $PUBLIC},
	{"setSurfaceData", "(Ljava/awt/image/BufferedImage;Lsun/java2d/SurfaceData;)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $method(static_cast<void(*)($BufferedImage*,$SurfaceData*)>(&OSXOffScreenSurfaceData::setSurfaceData))},
	{"syncFromCustom", "()V", nullptr, $PRIVATE, $method(static_cast<void(OSXOffScreenSurfaceData::*)()>(&OSXOffScreenSurfaceData::syncFromCustom))},
	{"syncToCustom", "()V", nullptr, $PRIVATE, $method(static_cast<void(OSXOffScreenSurfaceData::*)()>(&OSXOffScreenSurfaceData::syncToCustom))},
	{"syncToJavaPixels", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(OSXOffScreenSurfaceData::*)()>(&OSXOffScreenSurfaceData::syncToJavaPixels))},
	{"xorSurfacePixels", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;IIIII)Z", nullptr, $PUBLIC},
	{"xorSurfacePixels", "(Lsun/java2d/SurfaceData;IIIII)Z", nullptr, $NATIVE},
	{}
};

#define _METHOD_INDEX_clearSurfacePixels 3
#define _METHOD_INDEX_getSurfaceData 18
#define _METHOD_INDEX_initCustomRaster 19
#define _METHOD_INDEX_initIDs 20
#define _METHOD_INDEX_initRaster 21
#define _METHOD_INDEX_setSurfaceData 24
#define _METHOD_INDEX_syncToJavaPixels 27
#define _METHOD_INDEX_xorSurfacePixels 29

$ClassInfo _OSXOffScreenSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.OSXOffScreenSurfaceData",
	"sun.java2d.OSXSurfaceData",
	nullptr,
	_OSXOffScreenSurfaceData_FieldInfo_,
	_OSXOffScreenSurfaceData_MethodInfo_
};

$Object* allocate$OSXOffScreenSurfaceData($Class* clazz) {
	return $of($alloc(OSXOffScreenSurfaceData));
}

$DirectColorModel* OSXOffScreenSurfaceData::dcmBackup = nullptr;

void OSXOffScreenSurfaceData::initIDs() {
	$init(OSXOffScreenSurfaceData);
	$prepareNativeStatic(OSXOffScreenSurfaceData, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$SurfaceData* OSXOffScreenSurfaceData::getSurfaceData($BufferedImage* bufImg) {
	$init(OSXOffScreenSurfaceData);
	$var($SurfaceData, $ret, nullptr);
	$prepareNativeStatic(OSXOffScreenSurfaceData, getSurfaceData, $SurfaceData*, $BufferedImage* bufImg);
	$assign($ret, $invokeNativeStaticObject(bufImg));
	$finishNativeStatic();
	return $ret;
}

void OSXOffScreenSurfaceData::setSurfaceData($BufferedImage* bufImg, $SurfaceData* sData) {
	$init(OSXOffScreenSurfaceData);
	$prepareNativeStatic(OSXOffScreenSurfaceData, setSurfaceData, void, $BufferedImage* bufImg, $SurfaceData* sData);
	$invokeNativeStatic(bufImg, sData);
	$finishNativeStatic();
}

$SurfaceData* OSXOffScreenSurfaceData::createData($BufferedImage* bufImg) {
	$init(OSXOffScreenSurfaceData);
	$useLocalCurrentObjectStackCache();
	$synchronized(bufImg) {
		$var($SurfaceData, sData, getSurfaceData(bufImg));
		if (sData != nullptr) {
			return sData;
		}
		$var(OSXOffScreenSurfaceData, osData, OSXOffScreenSurfaceData::createNewSurface(bufImg));
		OSXOffScreenSurfaceData::setSurfaceData(bufImg, osData);
		$nc(osData)->cacheRasters(bufImg);
		return osData;
	}
}

$SurfaceData* OSXOffScreenSurfaceData::createData($Raster* ras, $ColorModel* cm) {
	$init(OSXOffScreenSurfaceData);
	$throwNew($InternalError, "SurfaceData not implemented for Raster/CM"_s);
	$shouldNotReachHere();
}

OSXOffScreenSurfaceData* OSXOffScreenSurfaceData::createNewSurface($BufferedImage* bufImg) {
	$init(OSXOffScreenSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, sData, nullptr);
	$var($ColorModel, cm, $nc(bufImg)->getColorModel());
	int32_t type = bufImg->getType();
	switch (type) {
	case $BufferedImage::TYPE_INT_BGR:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntBgr));
			break;
		}
	case $BufferedImage::TYPE_INT_RGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntRgb));
			break;
		}
	case $BufferedImage::TYPE_INT_ARGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntArgb));
			break;
		}
	case $BufferedImage::TYPE_INT_ARGB_PRE:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntArgbPre));
			break;
		}
	case $BufferedImage::TYPE_3BYTE_BGR:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::ThreeByteBgr, 2));
			break;
		}
	case $BufferedImage::TYPE_4BYTE_ABGR:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::FourByteAbgr, 3));
			break;
		}
	case $BufferedImage::TYPE_4BYTE_ABGR_PRE:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::FourByteAbgrPre, 3));
			break;
		}
	case $BufferedImage::TYPE_USHORT_565_RGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataSC(bufImg, $SurfaceType::Ushort565Rgb, nullptr));
			break;
		}
	case $BufferedImage::TYPE_USHORT_555_RGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataSC(bufImg, $SurfaceType::Ushort555Rgb, nullptr));
			break;
		}
	case $BufferedImage::TYPE_BYTE_INDEXED:
		{
			{
				$var($SurfaceType, sType, nullptr);
				switch ($nc(cm)->getTransparency()) {
				case $Transparency::OPAQUE:
					{
						if (isOpaqueGray($cast($IndexColorModel, cm))) {
							$init($SurfaceType);
							$assign(sType, $SurfaceType::Index8Gray);
						} else {
							$init($SurfaceType);
							$assign(sType, $SurfaceType::ByteIndexedOpaque);
						}
						break;
					}
				case $Transparency::BITMASK:
					{
						$init($SurfaceType);
						$assign(sType, $SurfaceType::ByteIndexedBm);
						break;
					}
				case $Transparency::TRANSLUCENT:
					{
						$init($SurfaceType);
						$assign(sType, $SurfaceType::ByteIndexed);
						break;
					}
				default:
					{
						$throwNew($InternalError, "Unrecognized transparency"_s);
					}
				}
				$assign(sData, createDataBC(bufImg, sType, 0));
			}
			break;
		}
	case $BufferedImage::TYPE_BYTE_GRAY:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::ByteGray, 0));
			break;
		}
	case $BufferedImage::TYPE_USHORT_GRAY:
		{
			$init($SurfaceType);
			$assign(sData, createDataSC(bufImg, $SurfaceType::UshortGray, nullptr));
			break;
		}
	case $BufferedImage::TYPE_BYTE_BINARY:
		{}
	case $BufferedImage::TYPE_CUSTOM:
		{}
	default:
		{
			{
				$var($Raster, raster, bufImg->getRaster());
				$var($SampleModel, sm, bufImg->getSampleModel());
				$init($SurfaceType);
				$var($SurfaceType, sType, $SurfaceType::Custom);
				int32_t transferType = $nc(cm)->getTransferType();
				int32_t pixelSize = cm->getPixelSize();
				int32_t numOfComponents = cm->getNumColorComponents();
				if ((numOfComponents == 3) && ($instanceOf($ComponentColorModel, cm)) && ($instanceOf($PixelInterleavedSampleModel, sm))) {
					$var($ints, sizes, cm->getComponentSize());
					bool validsizes = ($nc(sizes)->get(0) == 8) && (sizes->get(1) == 8) && (sizes->get(2) == 8);
					$var($ints, offs, $nc(($cast($ComponentSampleModel, sm)))->getBandOffsets());
					int32_t numBands = $nc(raster)->getNumBands();
					bool bigendian = ($nc(offs)->get(0) == numBands - 3) && (offs->get(1) == numBands - 2) && (offs->get(2) == numBands - 1);
					bool littleendian = (offs->get(0) == numBands - 1) && (offs->get(1) == numBands - 2) && (offs->get(2) == numBands - 3);
					if ((pixelSize == 32) && (transferType == $DataBuffer::TYPE_INT)) {
						bool var$0 = validsizes && bigendian && cm->hasAlpha();
						if (var$0 && cm->isAlphaPremultiplied() && sizes->get(3) == 8) {
							try {
								$assign(sData, createDataIC(bufImg, sType, $BufferedImage::TYPE_INT_ARGB_PRE));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						} else if (validsizes && bigendian && cm->hasAlpha() && sizes->get(3) == 8) {
							try {
								$assign(sData, createDataIC(bufImg, sType, $BufferedImage::TYPE_INT_ARGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						} else {
							bool var$2 = validsizes && littleendian && cm->hasAlpha();
							if (var$2 && cm->isAlphaPremultiplied() && sizes->get(3) == 8) {
								try {
									$assign(sData, createDataIC(bufImg, sType, $BufferedImage::TYPE_4BYTE_ABGR_PRE));
								} catch ($ClassCastException& e) {
									$assign(sData, nullptr);
								}
							} else if (validsizes && littleendian && cm->hasAlpha() && sizes->get(3) == 8) {
								try {
									$assign(sData, createDataIC(bufImg, sType, $BufferedImage::TYPE_4BYTE_ABGR));
								} catch ($ClassCastException& e) {
									$assign(sData, nullptr);
								}
							} else if (validsizes && bigendian) {
								try {
									$assign(sData, createDataIC(bufImg, sType, $BufferedImage::TYPE_INT_RGB));
								} catch ($ClassCastException& e) {
									$assign(sData, nullptr);
								}
							}
						}
					} else if ((pixelSize == 32) && (transferType == $DataBuffer::TYPE_BYTE)) {
						bool var$3 = validsizes && bigendian && cm->hasAlpha();
						if (var$3 && cm->isAlphaPremultiplied() && sizes->get(3) == 8) {
							try {
								$assign(sData, createDataBC(bufImg, sType, 3, $BufferedImage::TYPE_INT_ARGB_PRE));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						}
						if (validsizes && bigendian && cm->hasAlpha() && sizes->get(3) == 8) {
							try {
								$assign(sData, createDataBC(bufImg, sType, 3, $BufferedImage::TYPE_INT_ARGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						} else {
							bool var$5 = validsizes && littleendian && cm->hasAlpha();
							if (var$5 && cm->isAlphaPremultiplied() && sizes->get(3) == 8) {
								try {
									$assign(sData, createDataBC(bufImg, sType, 3, $BufferedImage::TYPE_4BYTE_ABGR_PRE));
								} catch ($ClassCastException& e) {
									$assign(sData, nullptr);
								}
							} else if (validsizes && littleendian && cm->hasAlpha() && sizes->get(3) == 8) {
								try {
									$assign(sData, createDataBC(bufImg, sType, 3, $BufferedImage::TYPE_4BYTE_ABGR));
								} catch ($ClassCastException& e) {
									$assign(sData, nullptr);
								}
							} else if (validsizes && littleendian) {
								try {
									$assign(sData, createDataBC(bufImg, sType, 3, $BufferedImage::TYPE_INT_BGR));
								} catch ($ClassCastException& e) {
									$assign(sData, nullptr);
								}
							} else if (validsizes && bigendian) {
								try {
									$assign(sData, createDataBC(bufImg, sType, 3, $BufferedImage::TYPE_INT_RGB));
								} catch ($ClassCastException& e) {
									$assign(sData, nullptr);
								}
							}
						}
					} else if ((pixelSize == 24) && (transferType == $DataBuffer::TYPE_INT)) {
						if (validsizes && bigendian) {
							try {
								$assign(sData, createDataIC(bufImg, sType, $BufferedImage::TYPE_INT_RGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						} else if (validsizes && littleendian) {
							try {
								$assign(sData, createDataIC(bufImg, sType, $BufferedImage::TYPE_INT_BGR));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						}
					} else if ((pixelSize == 24) && (transferType == $DataBuffer::TYPE_BYTE)) {
						if (validsizes && bigendian) {
							try {
								$assign(sData, createDataBC(bufImg, sType, 0, OSXOffScreenSurfaceData::TYPE_3BYTE_RGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						} else if (validsizes && littleendian) {
							try {
								$assign(sData, createDataBC(bufImg, sType, 0, $BufferedImage::TYPE_3BYTE_BGR));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						}
					} else if ((pixelSize == 16) && (transferType == $DataBuffer::TYPE_USHORT)) {
						validsizes = (sizes->get(0) == 5) && (sizes->get(1) == 6) && (sizes->get(2) == 5);
						if (validsizes && bigendian) {
							try {
								$assign(sData, createDataSC(bufImg, sType, nullptr, $BufferedImage::TYPE_USHORT_565_RGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						}
					} else if ((pixelSize == 16) && (transferType == $DataBuffer::TYPE_BYTE)) {
						validsizes = (sizes->get(0) == 5) && (sizes->get(1) == 6) && (sizes->get(2) == 5);
						if (validsizes && bigendian) {
							try {
								$assign(sData, createDataBC(bufImg, sType, 1, $BufferedImage::TYPE_USHORT_565_RGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						}
					} else if ((pixelSize == 15) && (transferType == $DataBuffer::TYPE_USHORT)) {
						validsizes = (sizes->get(0) == 5) && (sizes->get(1) == 5) && (sizes->get(2) == 5);
						if (validsizes && bigendian) {
							try {
								$assign(sData, createDataSC(bufImg, sType, nullptr, $BufferedImage::TYPE_USHORT_555_RGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						}
					} else if ((pixelSize == 15) && (transferType == $DataBuffer::TYPE_BYTE)) {
						validsizes = (sizes->get(0) == 5) && (sizes->get(1) == 5) && (sizes->get(2) == 5);
						if (validsizes && bigendian) {
							try {
								$assign(sData, createDataBC(bufImg, sType, 1, $BufferedImage::TYPE_USHORT_555_RGB));
							} catch ($ClassCastException& e) {
								$assign(sData, nullptr);
							}
						}
					}
				}
			}
			break;
		}
	}
	if (sData == nullptr) {
		$init($SurfaceType);
		$assign(sData, $new(OSXOffScreenSurfaceData, bufImg, $SurfaceType::Custom));
		$var(OSXOffScreenSurfaceData, offsd, $cast(OSXOffScreenSurfaceData, sData));
		int32_t var$6 = bufImg->getWidth();
		int32_t var$7 = bufImg->getHeight();
		$var($IntegerNIORaster, backupRaster, $cast($IntegerNIORaster, $IntegerNIORaster::createNIORaster(var$6, var$7, $($nc(OSXOffScreenSurfaceData::dcmBackup)->getMasks()), nullptr)));
		$set(offsd, bimBackup, $new($BufferedImage, static_cast<$ColorModel*>(OSXOffScreenSurfaceData::dcmBackup), static_cast<$WritableRaster*>(backupRaster), $nc(OSXOffScreenSurfaceData::dcmBackup)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
		$var($IntBuffer, var$8, $nc(backupRaster)->getBuffer());
		int32_t var$9 = backupRaster->getWidth();
		offsd->initCustomRaster(var$8, var$9, backupRaster->getHeight(), offsd->fGraphicsStates, offsd->fGraphicsStatesObject, offsd->fImageInfo);
		$nc(offsd->fImageInfoInt)->put(OSXOffScreenSurfaceData::kImageStolenIndex, 1);
	}
	return $cast(OSXOffScreenSurfaceData, sData);
}

$SurfaceData* OSXOffScreenSurfaceData::createDataIC($BufferedImage* bImg, $SurfaceType* sType, int32_t iType) {
	$init(OSXOffScreenSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var(OSXOffScreenSurfaceData, offsd, $new(OSXOffScreenSurfaceData, bImg, sType));
	$var($IntegerComponentRaster, icRaster, $cast($IntegerComponentRaster, $nc(bImg)->getRaster()));
	$var($Object, var$0, $of($nc(icRaster)->getDataStorage()));
	int32_t var$1 = icRaster->getDataOffset(0) * 4;
	int32_t var$2 = icRaster->getWidth();
	int32_t var$3 = icRaster->getHeight();
	int32_t var$4 = icRaster->getPixelStride() * 4;
	offsd->initRaster(var$0, var$1, var$2, var$3, var$4, icRaster->getScanlineStride() * 4, nullptr, iType, offsd->fGraphicsStates, offsd->fGraphicsStatesObject, offsd->fImageInfo);
	$nc(offsd->fImageInfoInt)->put(OSXOffScreenSurfaceData::kImageStolenIndex, 1);
	return offsd;
}

$SurfaceData* OSXOffScreenSurfaceData::createDataIC($BufferedImage* bImg, $SurfaceType* sType) {
	$init(OSXOffScreenSurfaceData);
	return createDataIC(bImg, sType, $nc(bImg)->getType());
}

$SurfaceData* OSXOffScreenSurfaceData::createDataSC($BufferedImage* bImg, $SurfaceType* sType, $IndexColorModel* icm, int32_t iType) {
	$init(OSXOffScreenSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var(OSXOffScreenSurfaceData, offsd, $new(OSXOffScreenSurfaceData, bImg, sType));
	$var($ShortComponentRaster, scRaster, $cast($ShortComponentRaster, $nc(bImg)->getRaster()));
	$var($Object, var$0, $of($nc(scRaster)->getDataStorage()));
	int32_t var$1 = scRaster->getDataOffset(0) * 2;
	int32_t var$2 = scRaster->getWidth();
	int32_t var$3 = scRaster->getHeight();
	int32_t var$4 = scRaster->getPixelStride() * 2;
	offsd->initRaster(var$0, var$1, var$2, var$3, var$4, scRaster->getScanlineStride() * 2, icm, iType, offsd->fGraphicsStates, offsd->fGraphicsStatesObject, offsd->fImageInfo);
	$nc(offsd->fImageInfoInt)->put(OSXOffScreenSurfaceData::kImageStolenIndex, 1);
	return offsd;
}

$SurfaceData* OSXOffScreenSurfaceData::createDataSC($BufferedImage* bImg, $SurfaceType* sType, $IndexColorModel* icm) {
	$init(OSXOffScreenSurfaceData);
	return createDataSC(bImg, sType, icm, $nc(bImg)->getType());
}

$SurfaceData* OSXOffScreenSurfaceData::createDataBC($BufferedImage* bImg, $SurfaceType* sType, int32_t primaryBank, int32_t iType) {
	$init(OSXOffScreenSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var(OSXOffScreenSurfaceData, offsd, $new(OSXOffScreenSurfaceData, bImg, sType));
	$var($ByteComponentRaster, bcRaster, $cast($ByteComponentRaster, $nc(bImg)->getRaster()));
	$var($ColorModel, cm, bImg->getColorModel());
	$var($IndexColorModel, icm, ($instanceOf($IndexColorModel, cm)) ? $cast($IndexColorModel, cm) : ($IndexColorModel*)nullptr);
	$var($Object, var$0, $of($nc(bcRaster)->getDataStorage()));
	int32_t var$1 = bcRaster->getDataOffset(primaryBank);
	int32_t var$2 = bcRaster->getWidth();
	int32_t var$3 = bcRaster->getHeight();
	int32_t var$4 = bcRaster->getPixelStride();
	offsd->initRaster(var$0, var$1, var$2, var$3, var$4, bcRaster->getScanlineStride(), icm, iType, offsd->fGraphicsStates, offsd->fGraphicsStatesObject, offsd->fImageInfo);
	$nc(offsd->fImageInfoInt)->put(OSXOffScreenSurfaceData::kImageStolenIndex, 1);
	return offsd;
}

$SurfaceData* OSXOffScreenSurfaceData::createDataBC($BufferedImage* bImg, $SurfaceType* sType, int32_t primaryBank) {
	$init(OSXOffScreenSurfaceData);
	return createDataBC(bImg, sType, primaryBank, $nc(bImg)->getType());
}

$SurfaceData* OSXOffScreenSurfaceData::createDataBP($BufferedImage* bImg, $SurfaceType* sType, int32_t iType) {
	$init(OSXOffScreenSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var(OSXOffScreenSurfaceData, offsd, $new(OSXOffScreenSurfaceData, bImg, sType));
	$var($BytePackedRaster, bpRaster, $cast($BytePackedRaster, $nc(bImg)->getRaster()));
	$var($ColorModel, cm, bImg->getColorModel());
	$var($IndexColorModel, icm, ($instanceOf($IndexColorModel, cm)) ? $cast($IndexColorModel, cm) : ($IndexColorModel*)nullptr);
	$var($Object, var$0, $of($nc(bpRaster)->getDataStorage()));
	int32_t var$1 = bpRaster->getDataBitOffset();
	int32_t var$2 = bpRaster->getWidth();
	int32_t var$3 = bpRaster->getHeight();
	int32_t var$4 = bpRaster->getPixelBitStride();
	offsd->initRaster(var$0, var$1, var$2, var$3, var$4, bpRaster->getScanlineStride() * 8, icm, iType, offsd->fGraphicsStates, offsd->fGraphicsStatesObject, offsd->fImageInfo);
	$nc(offsd->fImageInfoInt)->put(OSXOffScreenSurfaceData::kImageStolenIndex, 1);
	return offsd;
}

void OSXOffScreenSurfaceData::initRaster(Object$* theArray, int32_t offset, int32_t width, int32_t height, int32_t pixStr, int32_t scanStr, $IndexColorModel* icm, int32_t type, $ByteBuffer* graphicsStates, Object$* graphicsStatesObjects, $ByteBuffer* imageInfo) {
	$prepareNative(OSXOffScreenSurfaceData, initRaster, void, Object$* theArray, int32_t offset, int32_t width, int32_t height, int32_t pixStr, int32_t scanStr, $IndexColorModel* icm, int32_t type, $ByteBuffer* graphicsStates, Object$* graphicsStatesObjects, $ByteBuffer* imageInfo);
	$invokeNative(theArray, offset, width, height, pixStr, scanStr, icm, type, graphicsStates, graphicsStatesObjects, imageInfo);
	$finishNative();
}

void OSXOffScreenSurfaceData::initCustomRaster($IntBuffer* buffer, int32_t width, int32_t height, $ByteBuffer* graphicsStates, Object$* graphicsStatesObjects, $ByteBuffer* imageInfo) {
	$prepareNative(OSXOffScreenSurfaceData, initCustomRaster, void, $IntBuffer* buffer, int32_t width, int32_t height, $ByteBuffer* graphicsStates, Object$* graphicsStatesObjects, $ByteBuffer* imageInfo);
	$invokeNative(buffer, width, height, graphicsStates, graphicsStatesObjects, imageInfo);
	$finishNative();
}

$Object* OSXOffScreenSurfaceData::getLockObject() {
	return $of(this->lock);
}

void OSXOffScreenSurfaceData::init$($BufferedImage* bufImg, $SurfaceType* sType) {
	$useLocalCurrentObjectStackCache();
	$OSXSurfaceData::init$(sType, $($nc(bufImg)->getColorModel()));
	$set(this, copyWithBgColor_cache, nullptr);
	int32_t var$0 = $nc(bufImg)->getWidth();
	setBounds(0, 0, var$0, bufImg->getHeight());
	$set(this, bim, bufImg);
	$set(this, fImageInfo, $ByteBuffer::allocateDirect(4 * OSXOffScreenSurfaceData::kSizeOfParameters));
	$nc(this->fImageInfo)->order($($ByteOrder::nativeOrder()));
	$set(this, fImageInfoInt, $nc(this->fImageInfo)->asIntBuffer());
	$nc(this->fImageInfoInt)->put(OSXOffScreenSurfaceData::kNeedToSyncFromJavaPixelsIndex, 1);
	$nc(this->fImageInfoInt)->put(OSXOffScreenSurfaceData::kNativePixelsChangedIndex, 0);
	$nc(this->fImageInfoInt)->put(OSXOffScreenSurfaceData::kImageStolenIndex, 0);
	$set(this, lock, $new($Object));
}

bool OSXOffScreenSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		return false;
	}
	$var($Shape, clip, $nc(sg2d)->getClip());
	sg2d->setClip($(getBounds()));
	$var($Rectangle, clippedCopyAreaRect, clipCopyArea(sg2d, x, y, w, h, dx, dy));
	if (clippedCopyAreaRect == nullptr) {
		return true;
	}
	x = $nc(clippedCopyAreaRect)->x;
	y = clippedCopyAreaRect->y;
	w = clippedCopyAreaRect->width;
	h = clippedCopyAreaRect->height;
	int32_t dstX = x + dx - sg2d->transX;
	int32_t dstY = y + dy - sg2d->transY;
	sg2d->drawImage(this->bim, dstX, dstY, dstX + w, dstY + h, x, y, x + w, y + h, nullptr);
	sg2d->setClip(clip);
	return true;
}

$BufferedImage* OSXOffScreenSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, $BufferedImage* dstImage$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dstImage, dstImage$renamed);
	if (dstImage == nullptr) {
		$assign(dstImage, $nc($(getDeviceConfiguration()))->createCompatibleImage(w, h));
	}
	$var($Graphics, g, $nc(dstImage)->createGraphics());
	$nc(g)->drawImage(this->bim, 0, 0, w, h, x, y, x + w, y + h, nullptr);
	g->dispose();
	return dstImage;
}

bool OSXOffScreenSurfaceData::xorSurfacePixels($SunGraphics2D* sg2d, $BufferedImage* srcPixels, int32_t x, int32_t y, int32_t w, int32_t h, int32_t colorXOR) {
	int32_t type = $nc(this->bim)->getType();
	if ((type == $BufferedImage::TYPE_INT_ARGB_PRE) || (type == $BufferedImage::TYPE_INT_ARGB) || (type == $BufferedImage::TYPE_INT_RGB)) {
		return xorSurfacePixels($(createData(srcPixels)), colorXOR, x, y, w, h);
	}
	return false;
}

bool OSXOffScreenSurfaceData::xorSurfacePixels($SurfaceData* src, int32_t colorXOR, int32_t x, int32_t y, int32_t w, int32_t h) {
	bool $ret = false;
	$prepareNative(OSXOffScreenSurfaceData, xorSurfacePixels, bool, $SurfaceData* src, int32_t colorXOR, int32_t x, int32_t y, int32_t w, int32_t h);
	$ret = $invokeNative(src, colorXOR, x, y, w, h);
	$finishNative();
	return $ret;
}

void OSXOffScreenSurfaceData::clearRect($BufferedImage* bim, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var(OSXOffScreenSurfaceData, offsd, ($cast(OSXOffScreenSurfaceData, OSXOffScreenSurfaceData::createData(bim))));
	if ($nc(offsd)->clearSurfacePixels(w, h) == false) {
		$var($Graphics2D, g, $nc(bim)->createGraphics());
		$init($AlphaComposite);
		$nc(g)->setComposite($AlphaComposite::Clear);
		g->fillRect(0, 0, w, h);
		g->dispose();
	}
}

bool OSXOffScreenSurfaceData::clearSurfacePixels(int32_t w, int32_t h) {
	bool $ret = false;
	$prepareNative(OSXOffScreenSurfaceData, clearSurfacePixels, bool, int32_t w, int32_t h);
	$ret = $invokeNative(w, h);
	$finishNative();
	return $ret;
}

$SurfaceData* OSXOffScreenSurfaceData::getCopyWithBgColor($Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	int32_t bimW = $nc(this->bim)->getWidth();
	int32_t bimH = $nc(this->bim)->getHeight();
	bool var$0 = (this->copyWithBgColor_cache == nullptr) || ($nc(this->copyWithBgColor_cache)->getWidth() < bimW);
	if (var$0 || ($nc(this->copyWithBgColor_cache)->getHeight() < bimH)) {
		$var($GraphicsConfiguration, gc, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
		$set(this, copyWithBgColor_cache, $nc(gc)->createCompatibleImage(bimW, bimH));
	}
	$var($Graphics, g2, $nc(this->copyWithBgColor_cache)->createGraphics());
	$nc(g2)->setColor(bgColor);
	g2->fillRect(0, 0, bimW, bimH);
	g2->drawImage(this->bim, 0, 0, bimW, bimH, nullptr);
	g2->dispose();
	return getSurfaceData(this->copyWithBgColor_cache);
}

void OSXOffScreenSurfaceData::rasterRead() {
	if ($nc(this->fImageInfoInt)->get(OSXOffScreenSurfaceData::kNativePixelsChangedIndex) == 1) {
		syncToJavaPixels();
	}
}

void OSXOffScreenSurfaceData::rasterWrite() {
	if ($nc(this->fImageInfoInt)->get(OSXOffScreenSurfaceData::kNativePixelsChangedIndex) == 1) {
		syncToJavaPixels();
	}
	$nc(this->fImageInfoInt)->put(OSXOffScreenSurfaceData::kNeedToSyncFromJavaPixelsIndex, 1);
}

void OSXOffScreenSurfaceData::syncFromCustom() {
}

void OSXOffScreenSurfaceData::syncToCustom() {
}

void OSXOffScreenSurfaceData::syncToJavaPixels() {
	$prepareNative(OSXOffScreenSurfaceData, syncToJavaPixels, void);
	$invokeNative();
	$finishNative();
}

void OSXOffScreenSurfaceData::cacheRasters($BufferedImage* bim) {
	$set(this, bufImgRaster, $nc(bim)->getRaster());
	if ($instanceOf($SunWritableRaster, this->bufImgRaster)) {
		$set(this, bufImgSunRaster, $cast($SunWritableRaster, this->bufImgRaster));
	}
}

void clinit$OSXOffScreenSurfaceData($Class* class$) {
	{
		OSXOffScreenSurfaceData::initIDs();
	}
	$assignStatic(OSXOffScreenSurfaceData::dcmBackup, $new($DirectColorModel, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), 32, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, true, $DataBuffer::TYPE_INT));
}

OSXOffScreenSurfaceData::OSXOffScreenSurfaceData() {
}

$Class* OSXOffScreenSurfaceData::load$($String* name, bool initialize) {
	$loadClass(OSXOffScreenSurfaceData, name, initialize, &_OSXOffScreenSurfaceData_ClassInfo_, clinit$OSXOffScreenSurfaceData, allocate$OSXOffScreenSurfaceData);
	return class$;
}

$Class* OSXOffScreenSurfaceData::class$ = nullptr;

	} // java2d
} // sun