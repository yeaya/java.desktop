#include <java/awt/image/BufferedImage.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage$1.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/TileObserver.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/BytePackedRaster.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/OffScreenImageSource.h>
#include <sun/awt/image/ShortComponentRaster.h>
#include <jcpp.h>

#undef CS_GRAY
#undef DCM_555_BLU_MASK
#undef DCM_555_GRN_MASK
#undef DCM_555_RED_MASK
#undef DCM_565_BLU_MASK
#undef DCM_565_GRN_MASK
#undef DCM_565_RED_MASK
#undef DCM_ALPHA_MASK
#undef DCM_BGR_BLU_MASK
#undef DCM_BGR_GRN_MASK
#undef DCM_BGR_RED_MASK
#undef DCM_BLUE_MASK
#undef DCM_GREEN_MASK
#undef DCM_RED_MASK
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_3BYTE_BGR
#undef TYPE_4BYTE_ABGR
#undef TYPE_4BYTE_ABGR_PRE
#undef TYPE_BYTE
#undef TYPE_BYTE_BINARY
#undef TYPE_BYTE_GRAY
#undef TYPE_BYTE_INDEXED
#undef TYPE_CUSTOM
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_GRAY
#undef TYPE_INT
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE
#undef TYPE_INT_BGR
#undef TYPE_INT_RGB
#undef TYPE_RGB
#undef TYPE_USHORT
#undef TYPE_USHORT_555_RGB
#undef TYPE_USHORT_565_RGB
#undef TYPE_USHORT_GRAY

using $PointArray = $Array<::java::awt::Point>;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage$1 = ::java::awt::image::BufferedImage$1;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $TileObserver = ::java::awt::image::TileObserver;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $BytePackedRaster = ::sun::awt::image::BytePackedRaster;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $OffScreenImageSource = ::sun::awt::image::OffScreenImageSource;
using $ShortComponentRaster = ::sun::awt::image::ShortComponentRaster;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _BufferedImage_FieldInfo_[] = {
	{"imageType", "I", nullptr, $PRIVATE, $field(BufferedImage, imageType)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(BufferedImage, colorModel)},
	{"raster", "Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE | $FINAL, $field(BufferedImage, raster)},
	{"osis", "Lsun/awt/image/OffScreenImageSource;", nullptr, $PRIVATE, $field(BufferedImage, osis)},
	{"properties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(BufferedImage, properties)},
	{"TYPE_CUSTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_CUSTOM)},
	{"TYPE_INT_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_INT_RGB)},
	{"TYPE_INT_ARGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_INT_ARGB)},
	{"TYPE_INT_ARGB_PRE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_INT_ARGB_PRE)},
	{"TYPE_INT_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_INT_BGR)},
	{"TYPE_3BYTE_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_3BYTE_BGR)},
	{"TYPE_4BYTE_ABGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_4BYTE_ABGR)},
	{"TYPE_4BYTE_ABGR_PRE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_4BYTE_ABGR_PRE)},
	{"TYPE_USHORT_565_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_USHORT_565_RGB)},
	{"TYPE_USHORT_555_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_USHORT_555_RGB)},
	{"TYPE_BYTE_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_BYTE_GRAY)},
	{"TYPE_USHORT_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_USHORT_GRAY)},
	{"TYPE_BYTE_BINARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_BYTE_BINARY)},
	{"TYPE_BYTE_INDEXED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedImage, TYPE_BYTE_INDEXED)},
	{"DCM_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_RED_MASK)},
	{"DCM_GREEN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_GREEN_MASK)},
	{"DCM_BLUE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_BLUE_MASK)},
	{"DCM_ALPHA_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_ALPHA_MASK)},
	{"DCM_565_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_565_RED_MASK)},
	{"DCM_565_GRN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_565_GRN_MASK)},
	{"DCM_565_BLU_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_565_BLU_MASK)},
	{"DCM_555_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_555_RED_MASK)},
	{"DCM_555_GRN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_555_GRN_MASK)},
	{"DCM_555_BLU_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_555_BLU_MASK)},
	{"DCM_BGR_RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_BGR_RED_MASK)},
	{"DCM_BGR_GRN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_BGR_GRN_MASK)},
	{"DCM_BGR_BLU_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferedImage, DCM_BGR_BLU_MASK)},
	{}
};

$MethodInfo _BufferedImage_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedImage::*)(int32_t,int32_t,int32_t)>(&BufferedImage::init$))},
	{"<init>", "(IIILjava/awt/image/IndexColorModel;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedImage::*)(int32_t,int32_t,int32_t,$IndexColorModel*)>(&BufferedImage::init$))},
	{"<init>", "(Ljava/awt/image/ColorModel;Ljava/awt/image/WritableRaster;ZLjava/util/Hashtable;)V", "(Ljava/awt/image/ColorModel;Ljava/awt/image/WritableRaster;ZLjava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(BufferedImage::*)($ColorModel*,$WritableRaster*,bool,$Hashtable*)>(&BufferedImage::init$))},
	{"addTileObserver", "(Ljava/awt/image/TileObserver;)V", nullptr, $PUBLIC},
	{"coerceData", "(Z)V", nullptr, $PUBLIC},
	{"copyData", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createGraphics", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC},
	{"getAlphaRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getData", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getData", "(Ljava/awt/Rectangle;)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"getMinTileX", "()I", nullptr, $PUBLIC},
	{"getMinTileY", "()I", nullptr, $PUBLIC},
	{"getMinX", "()I", nullptr, $PUBLIC},
	{"getMinY", "()I", nullptr, $PUBLIC},
	{"getNumXTiles", "()I", nullptr, $PUBLIC},
	{"getNumYTiles", "()I", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;Ljava/awt/image/ImageObserver;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRGB", "(II)I", nullptr, $PUBLIC},
	{"getRGB", "(IIII[III)[I", nullptr, $PUBLIC},
	{"getRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"getSource", "()Ljava/awt/image/ImageProducer;", nullptr, $PUBLIC},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PUBLIC},
	{"getSubimage", "(IIII)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getTile", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getTileGridXOffset", "()I", nullptr, $PUBLIC},
	{"getTileGridYOffset", "()I", nullptr, $PUBLIC},
	{"getTileHeight", "()I", nullptr, $PUBLIC},
	{"getTileWidth", "()I", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"getWritableTile", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getWritableTileIndices", "()[Ljava/awt/Point;", nullptr, $PUBLIC},
	{"hasTileWriters", "()Z", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&BufferedImage::initIDs))},
	{"isAlphaPremultiplied", "()Z", nullptr, $PUBLIC},
	{"isStandard", "(Ljava/awt/image/ColorModel;Ljava/awt/image/WritableRaster;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ColorModel*,$WritableRaster*)>(&BufferedImage::isStandard))},
	{"isTileWritable", "(II)Z", nullptr, $PUBLIC},
	{"releaseWritableTile", "(II)V", nullptr, $PUBLIC},
	{"removeTileObserver", "(Ljava/awt/image/TileObserver;)V", nullptr, $PUBLIC},
	{"setData", "(Ljava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setRGB", "(III)V", nullptr, $PUBLIC},
	{"setRGB", "(IIII[III)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 46

$InnerClassInfo _BufferedImage_InnerClassesInfo_[] = {
	{"java.awt.image.BufferedImage$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.BufferedImage",
	"java.awt.Image",
	"java.awt.image.WritableRenderedImage,java.awt.Transparency",
	_BufferedImage_FieldInfo_,
	_BufferedImage_MethodInfo_,
	nullptr,
	nullptr,
	_BufferedImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.image.BufferedImage$1"
};

$Object* allocate$BufferedImage($Class* clazz) {
	return $of($alloc(BufferedImage));
}

int32_t BufferedImage::hashCode() {
	 return this->$Image::hashCode();
}

bool BufferedImage::equals(Object$* arg0) {
	 return this->$Image::equals(arg0);
}

$Object* BufferedImage::clone() {
	 return this->$Image::clone();
}

void BufferedImage::finalize() {
	this->$Image::finalize();
}

void BufferedImage::initIDs() {
	$init(BufferedImage);
	$prepareNativeStatic(BufferedImage, initIDs, void);
	$invokeNativeStatic(BufferedImage, initIDs);
	$finishNativeStatic();
}

void BufferedImage::init$(int32_t width, int32_t height, int32_t imageType) {
	$useLocalCurrentObjectStackCache();
	$Image::init$();
	this->imageType = BufferedImage::TYPE_CUSTOM;
	switch (imageType) {
	case BufferedImage::TYPE_INT_RGB:
		{
			{
				$set(this, colorModel, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255, 0));
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	case BufferedImage::TYPE_INT_ARGB:
		{
			{
				$set(this, colorModel, $ColorModel::getRGBdefault());
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	case BufferedImage::TYPE_INT_ARGB_PRE:
		{
			{
				$set(this, colorModel, $new($DirectColorModel, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), 32, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, true, $DataBuffer::TYPE_INT));
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	case BufferedImage::TYPE_INT_BGR:
		{
			{
				$set(this, colorModel, $new($DirectColorModel, 24, 255, 0x0000FF00, 0x00FF0000));
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	case BufferedImage::TYPE_3BYTE_BGR:
		{
			{
				$var($ColorSpace, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
				$var($ints, nBits, $new($ints, {
					8,
					8,
					8
				}));
				$var($ints, bOffs, $new($ints, {
					2,
					1,
					0
				}));
				$set(this, colorModel, $new($ComponentColorModel, cs, nBits, false, false, $Transparency::OPAQUE, $DataBuffer::TYPE_BYTE));
				$set(this, raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, width, height, width * 3, 3, bOffs, ($Point*)nullptr));
			}
			break;
		}
	case BufferedImage::TYPE_4BYTE_ABGR:
		{
			{
				$var($ColorSpace, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
				$var($ints, nBits, $new($ints, {
					8,
					8,
					8,
					8
				}));
				$var($ints, bOffs, $new($ints, {
					3,
					2,
					1,
					0
				}));
				$set(this, colorModel, $new($ComponentColorModel, cs, nBits, true, false, $Transparency::TRANSLUCENT, $DataBuffer::TYPE_BYTE));
				$set(this, raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, width, height, width * 4, 4, bOffs, ($Point*)nullptr));
			}
			break;
		}
	case BufferedImage::TYPE_4BYTE_ABGR_PRE:
		{
			{
				$var($ColorSpace, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
				$var($ints, nBits, $new($ints, {
					8,
					8,
					8,
					8
				}));
				$var($ints, bOffs, $new($ints, {
					3,
					2,
					1,
					0
				}));
				$set(this, colorModel, $new($ComponentColorModel, cs, nBits, true, true, $Transparency::TRANSLUCENT, $DataBuffer::TYPE_BYTE));
				$set(this, raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, width, height, width * 4, 4, bOffs, ($Point*)nullptr));
			}
			break;
		}
	case BufferedImage::TYPE_BYTE_GRAY:
		{
			{
				$var($ColorSpace, cs, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
				$var($ints, nBits, $new($ints, {8}));
				$set(this, colorModel, $new($ComponentColorModel, cs, nBits, false, true, $Transparency::OPAQUE, $DataBuffer::TYPE_BYTE));
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	case BufferedImage::TYPE_USHORT_GRAY:
		{
			{
				$var($ColorSpace, cs, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
				$var($ints, nBits, $new($ints, {16}));
				$set(this, colorModel, $new($ComponentColorModel, cs, nBits, false, true, $Transparency::OPAQUE, $DataBuffer::TYPE_USHORT));
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	case BufferedImage::TYPE_BYTE_BINARY:
		{
			{
				$var($bytes, arr, $new($bytes, {
					(int8_t)0,
					(int8_t)255
				}));
				$set(this, colorModel, $new($IndexColorModel, 1, 2, arr, arr, arr));
				$set(this, raster, $Raster::createPackedRaster($DataBuffer::TYPE_BYTE, width, height, 1, 1, ($Point*)nullptr));
			}
			break;
		}
	case BufferedImage::TYPE_BYTE_INDEXED:
		{
			{
				$var($ints, cmap, $new($ints, 256));
				int32_t i = 0;
				for (int32_t r = 0; r < 256; r += 51) {
					for (int32_t g = 0; g < 256; g += 51) {
						for (int32_t b = 0; b < 256; b += 51) {
							cmap->set(i++, ((r << 16) | (g << 8)) | b);
						}
					}
				}
				int32_t grayIncr = $div(256, (256 - i));
				int32_t gray = grayIncr * 3;
				for (; i < 256; ++i) {
					cmap->set(i, ((gray << 16) | (gray << 8)) | gray);
					gray += grayIncr;
				}
				$set(this, colorModel, $new($IndexColorModel, 8, 256, cmap, 0, false, -1, $DataBuffer::TYPE_BYTE));
				$set(this, raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, width, height, 1, nullptr));
			}
			break;
		}
	case BufferedImage::TYPE_USHORT_565_RGB:
		{
			{
				$set(this, colorModel, $new($DirectColorModel, 16, BufferedImage::DCM_565_RED_MASK, BufferedImage::DCM_565_GRN_MASK, BufferedImage::DCM_565_BLU_MASK));
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	case BufferedImage::TYPE_USHORT_555_RGB:
		{
			{
				$set(this, colorModel, $new($DirectColorModel, 15, BufferedImage::DCM_555_RED_MASK, BufferedImage::DCM_555_GRN_MASK, BufferedImage::DCM_555_BLU_MASK));
				$set(this, raster, $nc(this->colorModel)->createCompatibleWritableRaster(width, height));
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown image type "_s, $$str(imageType)}));
		}
	}
	this->imageType = imageType;
}

void BufferedImage::init$(int32_t width, int32_t height, int32_t imageType, $IndexColorModel* cm) {
	$useLocalCurrentObjectStackCache();
	$Image::init$();
	this->imageType = BufferedImage::TYPE_CUSTOM;
	bool var$0 = $nc(cm)->hasAlpha();
	if (var$0 && cm->isAlphaPremultiplied()) {
		$throwNew($IllegalArgumentException, "This image types do not have premultiplied alpha."_s);
	}
	{
		int32_t bits = 0;
		int32_t mapSize = 0;
		switch (imageType) {
		case BufferedImage::TYPE_BYTE_BINARY:
			{
				mapSize = $nc(cm)->getMapSize();
				if (mapSize <= 2) {
					bits = 1;
				} else if (mapSize <= 4) {
					bits = 2;
				} else if (mapSize <= 16) {
					bits = 4;
				} else {
					$throwNew($IllegalArgumentException, "Color map for TYPE_BYTE_BINARY must have no more than 16 entries"_s);
				}
				$set(this, raster, $Raster::createPackedRaster($DataBuffer::TYPE_BYTE, width, height, 1, bits, ($Point*)nullptr));
				break;
			}
		case BufferedImage::TYPE_BYTE_INDEXED:
			{
				$set(this, raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, width, height, 1, nullptr));
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid image type ("_s, $$str(imageType), ").  Image type must be either TYPE_BYTE_BINARY or  TYPE_BYTE_INDEXED"_s}));
			}
		}
	}
	if (!$nc(cm)->isCompatibleRaster(this->raster)) {
		$throwNew($IllegalArgumentException, "Incompatible image type and IndexColorModel"_s);
	}
	$set(this, colorModel, cm);
	this->imageType = imageType;
}

void BufferedImage::init$($ColorModel* cm, $WritableRaster* raster, bool isRasterPremultiplied, $Hashtable* properties) {
	$useLocalCurrentObjectStackCache();
	$Image::init$();
	this->imageType = BufferedImage::TYPE_CUSTOM;
	if (!$nc(cm)->isCompatibleRaster(raster)) {
		$throwNew($IllegalArgumentException, $$str({"Raster "_s, raster, " is incompatible with ColorModel "_s, cm}));
	}
	if (($nc(raster)->minX != 0) || ($nc(raster)->minY != 0)) {
		$throwNew($IllegalArgumentException, $$str({"Raster "_s, raster, " has minX or minY not equal to zero: "_s, $$str(raster->minX), " "_s, $$str(raster->minY)}));
	}
	$set(this, colorModel, cm);
	$set(this, raster, raster);
	if (properties != nullptr && !properties->isEmpty()) {
		$set(this, properties, $new($Hashtable));
		{
			$var($Iterator, i$, $nc($(properties->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, key, i$->next());
				{
					if ($instanceOf($String, key)) {
						$nc(this->properties)->put($cast($String, key), $(properties->get(key)));
					}
				}
			}
		}
	}
	int32_t numBands = $nc(raster)->getNumBands();
	bool isAlphaPre = $nc(cm)->isAlphaPremultiplied();
	bool isStandard = BufferedImage::isStandard(cm, raster);
	$var($ColorSpace, cs, nullptr);
	coerceData(isRasterPremultiplied);
	$var($SampleModel, sm, raster->getSampleModel());
	$assign(cs, cm->getColorSpace());
	int32_t csType = $nc(cs)->getType();
	if (csType != $ColorSpace::TYPE_RGB) {
		if (csType == $ColorSpace::TYPE_GRAY && isStandard && $instanceOf($ComponentColorModel, cm)) {
			if ($instanceOf($ComponentSampleModel, sm) && $nc(($cast($ComponentSampleModel, sm)))->getPixelStride() != numBands) {
				this->imageType = BufferedImage::TYPE_CUSTOM;
			} else {
				bool var$3 = $instanceOf($ByteComponentRaster, raster) && raster->getNumBands() == 1;
				bool var$2 = var$3 && cm->getComponentSize(0) == 8;
				if (var$2 && $nc(($cast($ByteComponentRaster, raster)))->getPixelStride() == 1) {
					this->imageType = BufferedImage::TYPE_BYTE_GRAY;
				} else {
					bool var$7 = $instanceOf($ShortComponentRaster, raster) && raster->getNumBands() == 1;
					bool var$6 = var$7 && cm->getComponentSize(0) == 16;
					if (var$6 && $nc(($cast($ShortComponentRaster, raster)))->getPixelStride() == 1) {
						this->imageType = BufferedImage::TYPE_USHORT_GRAY;
					}
				}
			}
		} else {
			this->imageType = BufferedImage::TYPE_CUSTOM;
		}
		return;
	}
	if (($instanceOf($IntegerComponentRaster, raster)) && (numBands == 3 || numBands == 4)) {
		$var($IntegerComponentRaster, iraster, $cast($IntegerComponentRaster, raster));
		int32_t pixSize = cm->getPixelSize();
		if (iraster->getPixelStride() == 1 && isStandard && $instanceOf($DirectColorModel, cm) && (pixSize == 32 || pixSize == 24)) {
			$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
			int32_t rmask = dcm->getRedMask();
			int32_t gmask = dcm->getGreenMask();
			int32_t bmask = dcm->getBlueMask();
			if (rmask == BufferedImage::DCM_RED_MASK && gmask == BufferedImage::DCM_GREEN_MASK && bmask == BufferedImage::DCM_BLUE_MASK) {
				if (dcm->getAlphaMask() == BufferedImage::DCM_ALPHA_MASK) {
					this->imageType = (isAlphaPre ? BufferedImage::TYPE_INT_ARGB_PRE : BufferedImage::TYPE_INT_ARGB);
				} else if (!dcm->hasAlpha()) {
					this->imageType = BufferedImage::TYPE_INT_RGB;
				}
			} else if (rmask == BufferedImage::DCM_BGR_RED_MASK && gmask == BufferedImage::DCM_BGR_GRN_MASK && bmask == BufferedImage::DCM_BGR_BLU_MASK) {
				if (!dcm->hasAlpha()) {
					this->imageType = BufferedImage::TYPE_INT_BGR;
				}
			}
		}
	} else if (($instanceOf($IndexColorModel, cm)) && (numBands == 1) && isStandard && (!cm->hasAlpha() || !isAlphaPre)) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, cm));
		int32_t pixSize = icm->getPixelSize();
		if ($instanceOf($BytePackedRaster, raster)) {
			this->imageType = BufferedImage::TYPE_BYTE_BINARY;
		} else if ($instanceOf($ByteComponentRaster, raster)) {
			$var($ByteComponentRaster, braster, $cast($ByteComponentRaster, raster));
			if (braster->getPixelStride() == 1 && pixSize <= 8) {
				this->imageType = BufferedImage::TYPE_BYTE_INDEXED;
			}
		}
	} else if (($instanceOf($ShortComponentRaster, raster)) && ($instanceOf($DirectColorModel, cm)) && isStandard && (numBands == 3) && !cm->hasAlpha()) {
		$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
		if (dcm->getRedMask() == BufferedImage::DCM_565_RED_MASK) {
			bool var$8 = dcm->getGreenMask() == BufferedImage::DCM_565_GRN_MASK;
			if (var$8 && dcm->getBlueMask() == BufferedImage::DCM_565_BLU_MASK) {
				this->imageType = BufferedImage::TYPE_USHORT_565_RGB;
			}
		} else if (dcm->getRedMask() == BufferedImage::DCM_555_RED_MASK) {
			bool var$9 = dcm->getGreenMask() == BufferedImage::DCM_555_GRN_MASK;
			if (var$9 && dcm->getBlueMask() == BufferedImage::DCM_555_BLU_MASK) {
				this->imageType = BufferedImage::TYPE_USHORT_555_RGB;
			}
		}
	} else if (($instanceOf($ByteComponentRaster, raster)) && ($instanceOf($ComponentColorModel, cm)) && isStandard && ($instanceOf($PixelInterleavedSampleModel, $(raster->getSampleModel()))) && (numBands == 3 || numBands == 4)) {
		$var($ComponentColorModel, ccm, $cast($ComponentColorModel, cm));
		$var($PixelInterleavedSampleModel, csm, $cast($PixelInterleavedSampleModel, raster->getSampleModel()));
		$var($ByteComponentRaster, braster, $cast($ByteComponentRaster, raster));
		$var($ints, offs, $nc(csm)->getBandOffsets());
		if (ccm->getNumComponents() != numBands) {
			$throwNew($RasterFormatException, $$str({"Number of components in ColorModel ("_s, $$str(ccm->getNumComponents()), ") does not match # in  Raster ("_s, $$str(numBands), ")"_s}));
		}
		$var($ints, nBits, ccm->getComponentSize());
		bool is8bit = true;
		for (int32_t i = 0; i < numBands; ++i) {
			if ($nc(nBits)->get(i) != 8) {
				is8bit = false;
				break;
			}
		}
		if (is8bit && braster->getPixelStride() == numBands && $nc(offs)->get(0) == numBands - 1 && offs->get(1) == numBands - 2 && offs->get(2) == numBands - 3) {
			if (numBands == 3 && !ccm->hasAlpha()) {
				this->imageType = BufferedImage::TYPE_3BYTE_BGR;
			} else if (offs->get(3) == 0 && ccm->hasAlpha()) {
				this->imageType = (isAlphaPre ? BufferedImage::TYPE_4BYTE_ABGR_PRE : BufferedImage::TYPE_4BYTE_ABGR);
			}
		}
	}
}

bool BufferedImage::isStandard($ColorModel* cm, $WritableRaster* wr) {
	$init(BufferedImage);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* cmClass = $nc($of(cm))->getClass();
	$Class* wrClass = $nc($of(wr))->getClass();
	$Class* smClass = $nc($of($(wr->getSampleModel())))->getClass();
	$var($PrivilegedAction, checkClassLoadersAction, $new($BufferedImage$1, cmClass, smClass, wrClass));
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(checkClassLoadersAction)))))->booleanValue();
}

int32_t BufferedImage::getType() {
	return this->imageType;
}

$ColorModel* BufferedImage::getColorModel() {
	return this->colorModel;
}

$WritableRaster* BufferedImage::getRaster() {
	return this->raster;
}

$WritableRaster* BufferedImage::getAlphaRaster() {
	return $nc(this->colorModel)->getAlphaRaster(this->raster);
}

int32_t BufferedImage::getRGB(int32_t x, int32_t y) {
	return $nc(this->colorModel)->getRGB($($nc(this->raster)->getDataElements(x, y, nullptr)));
}

$ints* BufferedImage::getRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, $ints* rgbArray$renamed, int32_t offset, int32_t scansize) {
	$useLocalCurrentObjectStackCache();
	$var($ints, rgbArray, rgbArray$renamed);
	int32_t yoff = offset;
	int32_t off = 0;
	$var($Object, data, nullptr);
	int32_t nbands = $nc(this->raster)->getNumBands();
	int32_t dataType = $nc($($nc(this->raster)->getDataBuffer()))->getDataType();
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			$assign(data, $new($bytes, nbands));
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			$assign(data, $new($shorts, nbands));
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			$assign(data, $new($ints, nbands));
			break;
		}
	case $DataBuffer::TYPE_FLOAT:
		{
			$assign(data, $new($floats, nbands));
			break;
		}
	case $DataBuffer::TYPE_DOUBLE:
		{
			$assign(data, $new($doubles, nbands));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown data buffer type: "_s, $$str(dataType)}));
		}
	}
	if (rgbArray == nullptr) {
		$assign(rgbArray, $new($ints, offset + h * scansize));
	}
	for (int32_t y = startY; y < startY + h; ++y, yoff += scansize) {
		off = yoff;
		for (int32_t x = startX; x < startX + w; ++x) {
			$nc(rgbArray)->set(off++, $nc(this->colorModel)->getRGB($($nc(this->raster)->getDataElements(x, y, data))));
		}
	}
	return rgbArray;
}

void BufferedImage::setRGB(int32_t x, int32_t y, int32_t rgb) {
	$nc(this->raster)->setDataElements(x, y, $($nc(this->colorModel)->getDataElements(rgb, nullptr)));
}

void BufferedImage::setRGB(int32_t startX, int32_t startY, int32_t w, int32_t h, $ints* rgbArray, int32_t offset, int32_t scansize) {
	int32_t yoff = offset;
	int32_t off = 0;
	$var($Object, pixel, nullptr);
	for (int32_t y = startY; y < startY + h; ++y, yoff += scansize) {
		off = yoff;
		for (int32_t x = startX; x < startX + w; ++x) {
			$assign(pixel, $nc(this->colorModel)->getDataElements($nc(rgbArray)->get(off++), pixel));
			$nc(this->raster)->setDataElements(x, y, pixel);
		}
	}
}

int32_t BufferedImage::getWidth() {
	return $nc(this->raster)->getWidth();
}

int32_t BufferedImage::getHeight() {
	return $nc(this->raster)->getHeight();
}

int32_t BufferedImage::getWidth($ImageObserver* observer) {
	return $nc(this->raster)->getWidth();
}

int32_t BufferedImage::getHeight($ImageObserver* observer) {
	return $nc(this->raster)->getHeight();
}

$ImageProducer* BufferedImage::getSource() {
	if (this->osis == nullptr) {
		if (this->properties == nullptr) {
			$set(this, properties, $new($Hashtable));
		}
		$set(this, osis, $new($OffScreenImageSource, this, this->properties));
	}
	return this->osis;
}

$Object* BufferedImage::getProperty($String* name, $ImageObserver* observer) {
	return $of(getProperty(name));
}

$Object* BufferedImage::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "null property name is not allowed"_s);
	}
	if (this->properties == nullptr) {
		$init($Image);
		return $of($Image::UndefinedProperty);
	}
	$var($Object, o, $nc(this->properties)->get(name));
	if (o == nullptr) {
		$init($Image);
		$assign(o, $Image::UndefinedProperty);
	}
	return $of(o);
}

$Graphics* BufferedImage::getGraphics() {
	return createGraphics();
}

$Graphics2D* BufferedImage::createGraphics() {
	$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	return $nc(env)->createGraphics(this);
}

BufferedImage* BufferedImage::getSubimage(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, var$0, this->colorModel);
	$var($WritableRaster, var$1, $nc(this->raster)->createWritableChild(x, y, w, h, 0, 0, nullptr));
	return $new(BufferedImage, var$0, var$1, $nc(this->colorModel)->isAlphaPremultiplied(), this->properties);
}

bool BufferedImage::isAlphaPremultiplied() {
	return $nc(this->colorModel)->isAlphaPremultiplied();
}

void BufferedImage::coerceData(bool isAlphaPremultiplied) {
	bool var$0 = $nc(this->colorModel)->hasAlpha();
	if (var$0 && $nc(this->colorModel)->isAlphaPremultiplied() != isAlphaPremultiplied) {
		$set(this, colorModel, $nc(this->colorModel)->coerceData(this->raster, isAlphaPremultiplied));
	}
}

$String* BufferedImage::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"BufferedImage@"_s, $($Integer::toHexString(hashCode())), ": type = "_s, $$str(this->imageType), " "_s, this->colorModel, " "_s, this->raster});
}

$Vector* BufferedImage::getSources() {
	return nullptr;
}

$StringArray* BufferedImage::getPropertyNames() {
	$useLocalCurrentObjectStackCache();
	if (this->properties == nullptr || $nc(this->properties)->isEmpty()) {
		return nullptr;
	}
	$var($Set, keys, $nc(this->properties)->keySet());
	return $fcast($StringArray, $nc(keys)->toArray($$new($StringArray, keys->size())));
}

int32_t BufferedImage::getMinX() {
	return $nc(this->raster)->getMinX();
}

int32_t BufferedImage::getMinY() {
	return $nc(this->raster)->getMinY();
}

$SampleModel* BufferedImage::getSampleModel() {
	return $nc(this->raster)->getSampleModel();
}

int32_t BufferedImage::getNumXTiles() {
	return 1;
}

int32_t BufferedImage::getNumYTiles() {
	return 1;
}

int32_t BufferedImage::getMinTileX() {
	return 0;
}

int32_t BufferedImage::getMinTileY() {
	return 0;
}

int32_t BufferedImage::getTileWidth() {
	return $nc(this->raster)->getWidth();
}

int32_t BufferedImage::getTileHeight() {
	return $nc(this->raster)->getHeight();
}

int32_t BufferedImage::getTileGridXOffset() {
	return $nc(this->raster)->getMinX();
}

int32_t BufferedImage::getTileGridYOffset() {
	return $nc(this->raster)->getMinY();
}

$Raster* BufferedImage::getTile(int32_t tileX, int32_t tileY) {
	if (tileX == 0 && tileY == 0) {
		return this->raster;
	}
	$throwNew($ArrayIndexOutOfBoundsException, "BufferedImages only have one tile with index 0,0"_s);
}

$Raster* BufferedImage::getData() {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc(this->raster)->getWidth();
	int32_t height = $nc(this->raster)->getHeight();
	int32_t startX = $nc(this->raster)->getMinX();
	int32_t startY = $nc(this->raster)->getMinY();
	$var($SampleModel, var$0, $nc(this->raster)->getSampleModel());
	int32_t var$1 = $nc(this->raster)->getSampleModelTranslateX();
	$var($WritableRaster, wr, $Raster::createWritableRaster(var$0, $$new($Point, var$1, $nc(this->raster)->getSampleModelTranslateY())));
	$var($Object, tdata, nullptr);
	for (int32_t i = startY; i < startY + height; ++i) {
		$assign(tdata, $nc(this->raster)->getDataElements(startX, i, width, 1, tdata));
		$nc(wr)->setDataElements(startX, i, width, 1, tdata);
	}
	return wr;
}

$Raster* BufferedImage::getData($Rectangle* rect) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, $nc(this->raster)->getSampleModel());
	$var($SampleModel, nsm, $nc(sm)->createCompatibleSampleModel($nc(rect)->width, rect->height));
	$var($WritableRaster, wr, $Raster::createWritableRaster(nsm, $($nc(rect)->getLocation())));
	int32_t width = $nc(rect)->width;
	int32_t height = rect->height;
	int32_t startX = rect->x;
	int32_t startY = rect->y;
	$var($Object, tdata, nullptr);
	for (int32_t i = startY; i < startY + height; ++i) {
		$assign(tdata, $nc(this->raster)->getDataElements(startX, i, width, 1, tdata));
		$nc(wr)->setDataElements(startX, i, width, 1, tdata);
	}
	return wr;
}

$WritableRaster* BufferedImage::copyData($WritableRaster* outRaster) {
	if (outRaster == nullptr) {
		return $cast($WritableRaster, getData());
	}
	int32_t width = $nc(outRaster)->getWidth();
	int32_t height = outRaster->getHeight();
	int32_t startX = outRaster->getMinX();
	int32_t startY = outRaster->getMinY();
	$var($Object, tdata, nullptr);
	for (int32_t i = startY; i < startY + height; ++i) {
		$assign(tdata, $nc(this->raster)->getDataElements(startX, i, width, 1, tdata));
		outRaster->setDataElements(startX, i, width, 1, tdata);
	}
	return outRaster;
}

void BufferedImage::setData($Raster* r) {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc(r)->getWidth();
	int32_t height = r->getHeight();
	int32_t startX = r->getMinX();
	int32_t startY = r->getMinY();
	$var($ints, tdata, nullptr);
	$var($Rectangle, rclip, $new($Rectangle, startX, startY, width, height));
	$var($Rectangle, bclip, $new($Rectangle, 0, 0, $nc(this->raster)->width, $nc(this->raster)->height));
	$var($Rectangle, intersect, rclip->intersection(bclip));
	if ($nc(intersect)->isEmpty()) {
		return;
	}
	width = $nc(intersect)->width;
	height = intersect->height;
	startX = intersect->x;
	startY = intersect->y;
	for (int32_t i = startY; i < startY + height; ++i) {
		$assign(tdata, r->getPixels(startX, i, width, 1, tdata));
		$nc(this->raster)->setPixels(startX, i, width, 1, tdata);
	}
}

void BufferedImage::addTileObserver($TileObserver* to) {
}

void BufferedImage::removeTileObserver($TileObserver* to) {
}

bool BufferedImage::isTileWritable(int32_t tileX, int32_t tileY) {
	if (tileX == 0 && tileY == 0) {
		return true;
	}
	$throwNew($IllegalArgumentException, "Only 1 tile in image"_s);
}

$PointArray* BufferedImage::getWritableTileIndices() {
	$useLocalCurrentObjectStackCache();
	$var($PointArray, p, $new($PointArray, 1));
	p->set(0, $$new($Point, 0, 0));
	return p;
}

bool BufferedImage::hasTileWriters() {
	return true;
}

$WritableRaster* BufferedImage::getWritableTile(int32_t tileX, int32_t tileY) {
	return this->raster;
}

void BufferedImage::releaseWritableTile(int32_t tileX, int32_t tileY) {
}

int32_t BufferedImage::getTransparency() {
	return $nc(this->colorModel)->getTransparency();
}

void clinit$BufferedImage($Class* class$) {
	{
		$ColorModel::loadLibraries();
		BufferedImage::initIDs();
	}
}

BufferedImage::BufferedImage() {
}

$Class* BufferedImage::load$($String* name, bool initialize) {
	$loadClass(BufferedImage, name, initialize, &_BufferedImage_ClassInfo_, clinit$BufferedImage, allocate$BufferedImage);
	return class$;
}

$Class* BufferedImage::class$ = nullptr;

		} // image
	} // awt
} // java