#include <sun/awt/image/BufImgSurfaceData.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/BufImgSurfaceData$ICMColorData.h>
#include <sun/awt/image/BufferedImageGraphicsConfig.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/BytePackedRaster.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/ShortComponentRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

#undef BITMASK
#undef CACHE_SIZE
#undef COMP_ISCOPY
#undef DCM_555X_BLUE_MASK
#undef DCM_555X_GREEN_MASK
#undef DCM_555X_RED_MASK
#undef DCM_ARGBBM_ALPHA_MASK
#undef DCM_ARGBBM_BLUE_MASK
#undef DCM_ARGBBM_GREEN_MASK
#undef DCM_ARGBBM_RED_MASK
#undef DCM_RGBX_BLUE_MASK
#undef DCM_RGBX_GREEN_MASK
#undef DCM_RGBX_RED_MASK
#undef ICM
#undef OPAQUE
#undef PAINT_ALPHACOLOR
#undef TRANSLUCENT
#undef TYPE_3BYTE_BGR
#undef TYPE_4BYTE_ABGR
#undef TYPE_4BYTE_ABGR_PRE
#undef TYPE_BYTE_BINARY
#undef TYPE_BYTE_GRAY
#undef TYPE_BYTE_INDEXED
#undef TYPE_CUSTOM
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE
#undef TYPE_INT_BGR
#undef TYPE_INT_RGB
#undef TYPE_USHORT_555_RGB
#undef TYPE_USHORT_565_RGB
#undef TYPE_USHORT_GRAY

using $RenderLoopsArray = $Array<::sun::java2d::loops::RenderLoops>;
using $SurfaceTypeArray = $Array<::sun::java2d::loops::SurfaceType>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BufImgSurfaceData$ICMColorData = ::sun::awt::image::BufImgSurfaceData$ICMColorData;
using $BufferedImageGraphicsConfig = ::sun::awt::image::BufferedImageGraphicsConfig;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $BytePackedRaster = ::sun::awt::image::BytePackedRaster;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $ShortComponentRaster = ::sun::awt::image::ShortComponentRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _BufImgSurfaceData_FieldInfo_[] = {
	{"bufImg", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(BufImgSurfaceData, bufImg)},
	{"graphicsConfig", "Lsun/awt/image/BufferedImageGraphicsConfig;", nullptr, $PRIVATE, $field(BufImgSurfaceData, graphicsConfig)},
	{"solidloops", "Lsun/java2d/loops/RenderLoops;", nullptr, 0, $field(BufImgSurfaceData, solidloops)},
	{"scaleX", "D", nullptr, $PRIVATE | $FINAL, $field(BufImgSurfaceData, scaleX)},
	{"scaleY", "D", nullptr, $PRIVATE | $FINAL, $field(BufImgSurfaceData, scaleY)},
	{"DCM_RGBX_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_RGBX_RED_MASK)},
	{"DCM_RGBX_GREEN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_RGBX_GREEN_MASK)},
	{"DCM_RGBX_BLUE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_RGBX_BLUE_MASK)},
	{"DCM_555X_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_555X_RED_MASK)},
	{"DCM_555X_GREEN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_555X_GREEN_MASK)},
	{"DCM_555X_BLUE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_555X_BLUE_MASK)},
	{"DCM_4444_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_4444_RED_MASK)},
	{"DCM_4444_GREEN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_4444_GREEN_MASK)},
	{"DCM_4444_BLUE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_4444_BLUE_MASK)},
	{"DCM_4444_ALPHA_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_4444_ALPHA_MASK)},
	{"DCM_ARGBBM_ALPHA_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_ARGBBM_ALPHA_MASK)},
	{"DCM_ARGBBM_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_ARGBBM_RED_MASK)},
	{"DCM_ARGBBM_GREEN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_ARGBBM_GREEN_MASK)},
	{"DCM_ARGBBM_BLUE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, DCM_ARGBBM_BLUE_MASK)},
	{"CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufImgSurfaceData, CACHE_SIZE)},
	{"loopcache", "[Lsun/java2d/loops/RenderLoops;", nullptr, $PRIVATE | $STATIC, $staticField(BufImgSurfaceData, loopcache)},
	{"typecache", "[Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE | $STATIC, $staticField(BufImgSurfaceData, typecache)},
	{}
};

$MethodInfo _BufImgSurfaceData_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/DataBuffer;Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;DD)V", nullptr, $PUBLIC, $method(static_cast<void(BufImgSurfaceData::*)($DataBuffer*,$BufferedImage*,$SurfaceType*,double,double)>(&BufImgSurfaceData::init$))},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PROTECTED, $method(static_cast<void(BufImgSurfaceData::*)($SurfaceType*,$ColorModel*)>(&BufImgSurfaceData::init$))},
	{"checkCustomComposite", "()V", nullptr, $PROTECTED},
	{"createData", "(Ljava/awt/image/BufferedImage;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*)>(&BufImgSurfaceData::createData))},
	{"createData", "(Ljava/awt/image/BufferedImage;DD)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,double,double)>(&BufImgSurfaceData::createData))},
	{"createData", "(Ljava/awt/image/Raster;Ljava/awt/image/ColorModel;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($Raster*,$ColorModel*)>(&BufImgSurfaceData::createData))},
	{"createDataBC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;IDD)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,int32_t,double,double)>(&BufImgSurfaceData::createDataBC))},
	{"createDataBP", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;DD)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,double,double)>(&BufImgSurfaceData::createDataBP))},
	{"createDataIC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;DD)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,double,double)>(&BufImgSurfaceData::createDataIC))},
	{"createDataSC", "(Ljava/awt/image/BufferedImage;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/IndexColorModel;DD)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceData*(*)($BufferedImage*,$SurfaceType*,$IndexColorModel*,double,double)>(&BufImgSurfaceData::createDataSC))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getRenderLoops", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getSolidLoops", "(Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$RenderLoops*(*)($SurfaceType*)>(&BufImgSurfaceData::getSolidLoops))},
	{"initIDs", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*,$Class*)>(&BufImgSurfaceData::initIDs))},
	{"initRaster", "(Ljava/lang/Object;IIIIIILjava/awt/image/IndexColorModel;)V", nullptr, $PROTECTED | $NATIVE},
	{"initSolidLoops", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 19
#define _METHOD_INDEX_initRaster 20

$InnerClassInfo _BufImgSurfaceData_InnerClassesInfo_[] = {
	{"sun.awt.image.BufImgSurfaceData$ICMColorData", "sun.awt.image.BufImgSurfaceData", "ICMColorData", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _BufImgSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.BufImgSurfaceData",
	"sun.java2d.SurfaceData",
	nullptr,
	_BufImgSurfaceData_FieldInfo_,
	_BufImgSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_BufImgSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.BufImgSurfaceData$ICMColorData"
};

$Object* allocate$BufImgSurfaceData($Class* clazz) {
	return $of($alloc(BufImgSurfaceData));
}

$RenderLoopsArray* BufImgSurfaceData::loopcache = nullptr;
$SurfaceTypeArray* BufImgSurfaceData::typecache = nullptr;

void BufImgSurfaceData::initIDs($Class* ICM, $Class* ICMColorData) {
	$init(BufImgSurfaceData);
	$prepareNativeStatic(BufImgSurfaceData, initIDs, void, $Class* ICM, $Class* ICMColorData);
	$invokeNativeStatic(BufImgSurfaceData, initIDs, ICM, ICMColorData);
	$finishNativeStatic();
}

$SurfaceData* BufImgSurfaceData::createData($BufferedImage* bufImg) {
	$init(BufImgSurfaceData);
	return createData(bufImg, (double)1, (double)1);
}

$SurfaceData* BufImgSurfaceData::createData($BufferedImage* bufImg, double scaleX, double scaleY) {
	$init(BufImgSurfaceData);
	if (bufImg == nullptr) {
		$throwNew($NullPointerException, "BufferedImage cannot be null"_s);
	}
	$var($SurfaceData, sData, nullptr);
	$var($ColorModel, cm, $nc(bufImg)->getColorModel());
	int32_t type = bufImg->getType();
	switch (type) {
	case $BufferedImage::TYPE_INT_BGR:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntBgr, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_INT_RGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntRgb, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_INT_ARGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntArgb, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_INT_ARGB_PRE:
		{
			$init($SurfaceType);
			$assign(sData, createDataIC(bufImg, $SurfaceType::IntArgbPre, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_3BYTE_BGR:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::ThreeByteBgr, 2, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_4BYTE_ABGR:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::FourByteAbgr, 3, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_4BYTE_ABGR_PRE:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::FourByteAbgrPre, 3, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_USHORT_565_RGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataSC(bufImg, $SurfaceType::Ushort565Rgb, nullptr, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_USHORT_555_RGB:
		{
			$init($SurfaceType);
			$assign(sData, createDataSC(bufImg, $SurfaceType::Ushort555Rgb, nullptr, scaleX, scaleY));
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
				$assign(sData, createDataBC(bufImg, sType, 0, scaleX, scaleY));
			}
			break;
		}
	case $BufferedImage::TYPE_BYTE_GRAY:
		{
			$init($SurfaceType);
			$assign(sData, createDataBC(bufImg, $SurfaceType::ByteGray, 0, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_USHORT_GRAY:
		{
			$init($SurfaceType);
			$assign(sData, createDataSC(bufImg, $SurfaceType::UshortGray, nullptr, scaleX, scaleY));
			break;
		}
	case $BufferedImage::TYPE_BYTE_BINARY:
		{
			{
				$var($SurfaceType, sType, nullptr);
				$var($SampleModel, sm, $nc($(bufImg->getRaster()))->getSampleModel());
				switch ($nc(sm)->getSampleSize(0)) {
				case 1:
					{
						$init($SurfaceType);
						$assign(sType, $SurfaceType::ByteBinary1Bit);
						break;
					}
				case 2:
					{
						$init($SurfaceType);
						$assign(sType, $SurfaceType::ByteBinary2Bit);
						break;
					}
				case 4:
					{
						$init($SurfaceType);
						$assign(sType, $SurfaceType::ByteBinary4Bit);
						break;
					}
				default:
					{
						$throwNew($InternalError, "Unrecognized pixel size"_s);
					}
				}
				$assign(sData, createDataBP(bufImg, sType, scaleX, scaleY));
			}
			break;
		}
	case $BufferedImage::TYPE_CUSTOM:
		{}
	default:
		{
			{
				$var($Raster, raster, bufImg->getRaster());
				int32_t numBands = $nc(raster)->getNumBands();
				bool var$0 = $instanceOf($IntegerComponentRaster, raster) && raster->getNumDataElements() == 1;
				if (var$0 && $nc(($cast($IntegerComponentRaster, raster)))->getPixelStride() == 1) {
					$init($SurfaceType);
					$var($SurfaceType, sType, $SurfaceType::AnyInt);
					if ($instanceOf($DirectColorModel, cm)) {
						$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
						int32_t aMask = $nc(dcm)->getAlphaMask();
						int32_t rMask = dcm->getRedMask();
						int32_t gMask = dcm->getGreenMask();
						int32_t bMask = dcm->getBlueMask();
						if (numBands == 3 && aMask == 0 && rMask == BufImgSurfaceData::DCM_RGBX_RED_MASK && gMask == BufImgSurfaceData::DCM_RGBX_GREEN_MASK && bMask == BufImgSurfaceData::DCM_RGBX_BLUE_MASK) {
							$assign(sType, $SurfaceType::IntRgbx);
						} else if (numBands == 4 && aMask == BufImgSurfaceData::DCM_ARGBBM_ALPHA_MASK && rMask == BufImgSurfaceData::DCM_ARGBBM_RED_MASK && gMask == BufImgSurfaceData::DCM_ARGBBM_GREEN_MASK && bMask == BufImgSurfaceData::DCM_ARGBBM_BLUE_MASK) {
							$assign(sType, $SurfaceType::IntArgbBm);
						} else {
							$assign(sType, $SurfaceType::AnyDcm);
						}
					}
					$assign(sData, createDataIC(bufImg, sType, scaleX, scaleY));
					break;
				} else {
					bool var$2 = $instanceOf($ShortComponentRaster, raster) && raster->getNumDataElements() == 1;
					if (var$2 && $nc(($cast($ShortComponentRaster, raster)))->getPixelStride() == 1) {
						$init($SurfaceType);
						$var($SurfaceType, sType, $SurfaceType::AnyShort);
						$var($IndexColorModel, icm, nullptr);
						if ($instanceOf($DirectColorModel, cm)) {
							$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
							int32_t aMask = $nc(dcm)->getAlphaMask();
							int32_t rMask = dcm->getRedMask();
							int32_t gMask = dcm->getGreenMask();
							int32_t bMask = dcm->getBlueMask();
							if (numBands == 3 && aMask == 0 && rMask == BufImgSurfaceData::DCM_555X_RED_MASK && gMask == BufImgSurfaceData::DCM_555X_GREEN_MASK && bMask == BufImgSurfaceData::DCM_555X_BLUE_MASK) {
								$assign(sType, $SurfaceType::Ushort555Rgbx);
							} else if (numBands == 4 && aMask == BufImgSurfaceData::DCM_4444_ALPHA_MASK && rMask == BufImgSurfaceData::DCM_4444_RED_MASK && gMask == BufImgSurfaceData::DCM_4444_GREEN_MASK && bMask == BufImgSurfaceData::DCM_4444_BLUE_MASK) {
								$assign(sType, $SurfaceType::Ushort4444Argb);
							}
						} else if ($instanceOf($IndexColorModel, cm)) {
							$assign(icm, $cast($IndexColorModel, cm));
							if ($nc(icm)->getPixelSize() == 12) {
								if (isOpaqueGray(icm)) {
									$assign(sType, $SurfaceType::Index12Gray);
								} else {
									$assign(sType, $SurfaceType::UshortIndexed);
								}
							} else {
								$assign(icm, nullptr);
							}
						}
						$assign(sData, createDataSC(bufImg, sType, icm, scaleX, scaleY));
						break;
					}
				}
				$init($SurfaceType);
				$assign(sData, $new(BufImgSurfaceData, $(raster->getDataBuffer()), bufImg, $SurfaceType::Custom, scaleX, scaleY));
			}
			break;
		}
	}
	$nc(($cast(BufImgSurfaceData, sData)))->initSolidLoops();
	return sData;
}

$SurfaceData* BufImgSurfaceData::createData($Raster* ras, $ColorModel* cm) {
	$init(BufImgSurfaceData);
	$throwNew($InternalError, "SurfaceData not implemented for Raster/CM"_s);
	$shouldNotReachHere();
}

$SurfaceData* BufImgSurfaceData::createDataIC($BufferedImage* bImg, $SurfaceType* sType, double scaleX, double scaleY) {
	$init(BufImgSurfaceData);
	$var($IntegerComponentRaster, icRaster, $cast($IntegerComponentRaster, $nc(bImg)->getRaster()));
	$var(BufImgSurfaceData, bisd, $new(BufImgSurfaceData, $($nc(icRaster)->getDataBuffer()), bImg, sType, scaleX, scaleY));
	$var($Object, var$0, $of($nc(icRaster)->getDataStorage()));
	int32_t var$1 = icRaster->getDataOffset(0) * 4;
	int32_t var$2 = icRaster->getWidth();
	int32_t var$3 = icRaster->getHeight();
	int32_t var$4 = icRaster->getPixelStride() * 4;
	bisd->initRaster(var$0, var$1, 0, var$2, var$3, var$4, icRaster->getScanlineStride() * 4, nullptr);
	return bisd;
}

$SurfaceData* BufImgSurfaceData::createDataSC($BufferedImage* bImg, $SurfaceType* sType, $IndexColorModel* icm, double scaleX, double scaleY) {
	$init(BufImgSurfaceData);
	$var($ShortComponentRaster, scRaster, $cast($ShortComponentRaster, $nc(bImg)->getRaster()));
	$var(BufImgSurfaceData, bisd, $new(BufImgSurfaceData, $($nc(scRaster)->getDataBuffer()), bImg, sType, scaleX, scaleY));
	$var($Object, var$0, $of($nc(scRaster)->getDataStorage()));
	int32_t var$1 = scRaster->getDataOffset(0) * 2;
	int32_t var$2 = scRaster->getWidth();
	int32_t var$3 = scRaster->getHeight();
	int32_t var$4 = scRaster->getPixelStride() * 2;
	bisd->initRaster(var$0, var$1, 0, var$2, var$3, var$4, scRaster->getScanlineStride() * 2, icm);
	return bisd;
}

$SurfaceData* BufImgSurfaceData::createDataBC($BufferedImage* bImg, $SurfaceType* sType, int32_t primaryBank, double scaleX, double scaleY) {
	$init(BufImgSurfaceData);
	$var($ByteComponentRaster, bcRaster, $cast($ByteComponentRaster, $nc(bImg)->getRaster()));
	$var(BufImgSurfaceData, bisd, $new(BufImgSurfaceData, $($nc(bcRaster)->getDataBuffer()), bImg, sType, scaleX, scaleY));
	$var($ColorModel, cm, bImg->getColorModel());
	$var($IndexColorModel, icm, ($instanceOf($IndexColorModel, cm)) ? $cast($IndexColorModel, cm) : ($IndexColorModel*)nullptr);
	$var($Object, var$0, $of($nc(bcRaster)->getDataStorage()));
	int32_t var$1 = bcRaster->getDataOffset(primaryBank);
	int32_t var$2 = bcRaster->getWidth();
	int32_t var$3 = bcRaster->getHeight();
	int32_t var$4 = bcRaster->getPixelStride();
	bisd->initRaster(var$0, var$1, 0, var$2, var$3, var$4, bcRaster->getScanlineStride(), icm);
	return bisd;
}

$SurfaceData* BufImgSurfaceData::createDataBP($BufferedImage* bImg, $SurfaceType* sType, double scaleX, double scaleY) {
	$init(BufImgSurfaceData);
	$var($BytePackedRaster, bpRaster, $cast($BytePackedRaster, $nc(bImg)->getRaster()));
	$var(BufImgSurfaceData, bisd, $new(BufImgSurfaceData, $($nc(bpRaster)->getDataBuffer()), bImg, sType, scaleX, scaleY));
	$var($ColorModel, cm, bImg->getColorModel());
	$var($IndexColorModel, icm, ($instanceOf($IndexColorModel, cm)) ? $cast($IndexColorModel, cm) : ($IndexColorModel*)nullptr);
	$var($Object, var$0, $of($nc(bpRaster)->getDataStorage()));
	int32_t var$1 = bpRaster->getDataBitOffset() / 8;
	int32_t var$2 = (int32_t)(bpRaster->getDataBitOffset() & (uint32_t)7);
	int32_t var$3 = bpRaster->getWidth();
	int32_t var$4 = bpRaster->getHeight();
	bisd->initRaster(var$0, var$1, var$2, var$3, var$4, 0, bpRaster->getScanlineStride(), icm);
	return bisd;
}

$RenderLoops* BufImgSurfaceData::getRenderLoops($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY) {
		return this->solidloops;
	}
	return $SurfaceData::getRenderLoops(sg2d);
}

$Raster* BufImgSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	return $nc(this->bufImg)->getRaster();
}

void BufImgSurfaceData::initRaster(Object$* theArray, int32_t offset, int32_t bitoffset, int32_t width, int32_t height, int32_t pixStr, int32_t scanStr, $IndexColorModel* icm) {
	$prepareNative(BufImgSurfaceData, initRaster, void, Object$* theArray, int32_t offset, int32_t bitoffset, int32_t width, int32_t height, int32_t pixStr, int32_t scanStr, $IndexColorModel* icm);
	$invokeNative(BufImgSurfaceData, initRaster, theArray, offset, bitoffset, width, height, pixStr, scanStr, icm);
	$finishNative();
}

void BufImgSurfaceData::init$($DataBuffer* db, $BufferedImage* bufImg, $SurfaceType* sType, double scaleX, double scaleY) {
	$var($StateTrackableDelegate, var$0, $SunWritableRaster::stealTrackable(db));
	$var($SurfaceType, var$1, sType);
	$SurfaceData::init$(var$0, var$1, $($nc(bufImg)->getColorModel()));
	$set(this, bufImg, bufImg);
	this->scaleX = scaleX;
	this->scaleY = scaleY;
}

void BufImgSurfaceData::init$($SurfaceType* surfaceType, $ColorModel* cm) {
	$SurfaceData::init$(surfaceType, cm);
	this->scaleX = (double)1;
	this->scaleY = (double)1;
}

void BufImgSurfaceData::initSolidLoops() {
	$set(this, solidloops, getSolidLoops($(getSurfaceType())));
}

$RenderLoops* BufImgSurfaceData::getSolidLoops($SurfaceType* type) {
	$load(BufImgSurfaceData);
	$synchronized(class$) {
		$init(BufImgSurfaceData);
		for (int32_t i = BufImgSurfaceData::CACHE_SIZE - 1; i >= 0; --i) {
			$var($SurfaceType, t, $nc(BufImgSurfaceData::typecache)->get(i));
			if (t == type) {
				return $nc(BufImgSurfaceData::loopcache)->get(i);
			} else if (t == nullptr) {
				break;
			}
		}
		$init($SurfaceType);
		$init($CompositeType);
		$var($RenderLoops, l, makeRenderLoops($SurfaceType::OpaqueColor, $CompositeType::SrcNoEa, type));
		$System::arraycopy(BufImgSurfaceData::loopcache, 1, BufImgSurfaceData::loopcache, 0, BufImgSurfaceData::CACHE_SIZE - 1);
		$System::arraycopy(BufImgSurfaceData::typecache, 1, BufImgSurfaceData::typecache, 0, BufImgSurfaceData::CACHE_SIZE - 1);
		$nc(BufImgSurfaceData::loopcache)->set(BufImgSurfaceData::CACHE_SIZE - 1, l);
		$nc(BufImgSurfaceData::typecache)->set(BufImgSurfaceData::CACHE_SIZE - 1, type);
		return l;
	}
}

$SurfaceData* BufImgSurfaceData::getReplacement() {
	return restoreContents(this->bufImg);
}

$GraphicsConfiguration* BufImgSurfaceData::getDeviceConfiguration() {
	$synchronized(this) {
		if (this->graphicsConfig == nullptr) {
			$set(this, graphicsConfig, $BufferedImageGraphicsConfig::getConfig(this->bufImg, this->scaleX, this->scaleY));
		}
		return this->graphicsConfig;
	}
}

$Rectangle* BufImgSurfaceData::getBounds() {
	int32_t var$0 = $nc(this->bufImg)->getWidth();
	return $new($Rectangle, var$0, $nc(this->bufImg)->getHeight());
}

void BufImgSurfaceData::checkCustomComposite() {
}

$Object* BufImgSurfaceData::getDestination() {
	return $of(this->bufImg);
}

double BufImgSurfaceData::getDefaultScaleX() {
	return this->scaleX;
}

double BufImgSurfaceData::getDefaultScaleY() {
	return this->scaleY;
}

void clinit$BufImgSurfaceData($Class* class$) {
	{
		$load($IndexColorModel);
		$load($BufImgSurfaceData$ICMColorData);
		BufImgSurfaceData::initIDs($IndexColorModel::class$, $BufImgSurfaceData$ICMColorData::class$);
	}
	$assignStatic(BufImgSurfaceData::loopcache, $new($RenderLoopsArray, BufImgSurfaceData::CACHE_SIZE));
	$assignStatic(BufImgSurfaceData::typecache, $new($SurfaceTypeArray, BufImgSurfaceData::CACHE_SIZE));
}

BufImgSurfaceData::BufImgSurfaceData() {
}

$Class* BufImgSurfaceData::load$($String* name, bool initialize) {
	$loadClass(BufImgSurfaceData, name, initialize, &_BufImgSurfaceData_ClassInfo_, clinit$BufImgSurfaceData, allocate$BufImgSurfaceData);
	return class$;
}

$Class* BufImgSurfaceData::class$ = nullptr;

		} // image
	} // awt
} // sun