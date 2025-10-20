#include <sun/awt/image/ImageRepresentation.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/ImageWatched.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/NativeLibLoader.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR
#undef FRAMEBITS
#undef HEIGHT
#undef IMAGEABORTED
#undef IMAGEERROR
#undef OPAQUE
#undef PROPERTIES
#undef SINGLEFRAMEDONE
#undef SOMEBITS
#undef STATICIMAGEDONE
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE
#undef TYPE_INT_RGB
#undef TYPE_USHORT
#undef WIDTH

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $ImageWatched = ::sun::awt::image::ImageWatched;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $NativeLibLoader = ::sun::awt::image::NativeLibLoader;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageRepresentation_FieldInfo_[] = {
	{"src", "Lsun/awt/image/InputStreamImageSource;", nullptr, 0, $field(ImageRepresentation, src)},
	{"image", "Lsun/awt/image/ToolkitImage;", nullptr, 0, $field(ImageRepresentation, image)},
	{"tag", "I", nullptr, 0, $field(ImageRepresentation, tag)},
	{"pData", "J", nullptr, 0, $field(ImageRepresentation, pData)},
	{"width", "I", nullptr, 0, $field(ImageRepresentation, width)},
	{"height", "I", nullptr, 0, $field(ImageRepresentation, height)},
	{"hints", "I", nullptr, 0, $field(ImageRepresentation, hints)},
	{"availinfo", "I", nullptr, 0, $field(ImageRepresentation, availinfo)},
	{"newbits", "Ljava/awt/Rectangle;", nullptr, 0, $field(ImageRepresentation, newbits)},
	{"bimage", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(ImageRepresentation, bimage)},
	{"biRaster", "Ljava/awt/image/WritableRaster;", nullptr, 0, $field(ImageRepresentation, biRaster)},
	{"cmodel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(ImageRepresentation, cmodel)},
	{"srcModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(ImageRepresentation, srcModel)},
	{"srcLUT", "[I", nullptr, 0, $field(ImageRepresentation, srcLUT)},
	{"srcLUTtransIndex", "I", nullptr, 0, $field(ImageRepresentation, srcLUTtransIndex)},
	{"numSrcLUT", "I", nullptr, 0, $field(ImageRepresentation, numSrcLUT)},
	{"forceCMhint", "Z", nullptr, 0, $field(ImageRepresentation, forceCMhint)},
	{"sstride", "I", nullptr, 0, $field(ImageRepresentation, sstride)},
	{"isDefaultBI", "Z", nullptr, 0, $field(ImageRepresentation, isDefaultBI)},
	{"isSameCM", "Z", nullptr, 0, $field(ImageRepresentation, isSameCM)},
	{"s_useNative", "Z", nullptr, $STATIC, $staticField(ImageRepresentation, s_useNative)},
	{"consuming", "Z", nullptr, $PRIVATE, $field(ImageRepresentation, consuming)},
	{"numWaiters", "I", nullptr, $PRIVATE, $field(ImageRepresentation, numWaiters)},
	{}
};

$MethodInfo _ImageRepresentation_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/image/ToolkitImage;Ljava/awt/image/ColorModel;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ImageRepresentation::*)($ToolkitImage*,$ColorModel*,bool)>(&ImageRepresentation::init$))},
	{"abort", "()V", nullptr, $SYNCHRONIZED},
	{"check", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"checkConsumption", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ImageRepresentation::*)()>(&ImageRepresentation::checkConsumption))},
	{"convertToRGB", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageRepresentation::*)()>(&ImageRepresentation::convertToRGB))},
	{"createBufferedImage", "()V", nullptr, 0},
	{"createImage", "(Ljava/awt/image/ColorModel;Ljava/awt/image/WritableRaster;ZLjava/util/Hashtable;)Ljava/awt/image/BufferedImage;", "(Ljava/awt/image/ColorModel;Ljava/awt/image/WritableRaster;ZLjava/util/Hashtable<**>;)Ljava/awt/image/BufferedImage;", $PROTECTED},
	{"decrementWaiters", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ImageRepresentation::*)()>(&ImageRepresentation::decrementWaiters))},
	{"dispose", "()V", nullptr, $SYNCHRONIZED},
	{"drawToBufImage", "(Ljava/awt/Graphics;Lsun/awt/image/ToolkitImage;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawToBufImage", "(Ljava/awt/Graphics;Lsun/awt/image/ToolkitImage;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawToBufImage", "(Ljava/awt/Graphics;Lsun/awt/image/ToolkitImage;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawToBufImage", "(Ljava/awt/Graphics;Lsun/awt/image/ToolkitImage;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"getBufferedImage", "()Ljava/awt/image/BufferedImage;", nullptr, 0},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, 0},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getOpaqueRGBImage", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"imageComplete", "(I)V", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ImageRepresentation::initIDs))},
	{"notifyWatcherListEmpty", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"prepare", "(Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"reconstruct", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setAccelerationPriority", "(F)V", nullptr, $PUBLIC},
	{"setColorModel", "(Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC},
	{"setDiffICM", "(IIII[IIILjava/awt/image/IndexColorModel;[BIILsun/awt/image/ByteComponentRaster;I)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(ImageRepresentation::*)(int32_t,int32_t,int32_t,int32_t,$ints*,int32_t,int32_t,$IndexColorModel*,$bytes*,int32_t,int32_t,$ByteComponentRaster*,int32_t)>(&ImageRepresentation::setDiffICM))},
	{"setDimensions", "(II)V", nullptr, $PUBLIC},
	{"setHints", "(I)V", nullptr, $PUBLIC},
	{"setICMpixels", "(IIII[I[BIILsun/awt/image/IntegerComponentRaster;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(ImageRepresentation::*)(int32_t,int32_t,int32_t,int32_t,$ints*,$bytes*,int32_t,int32_t,$IntegerComponentRaster*)>(&ImageRepresentation::setICMpixels))},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)V", nullptr, $PUBLIC},
	{"setProperties", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC},
	{"startProduction", "()V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 23
#define _METHOD_INDEX_setDiffICM 29
#define _METHOD_INDEX_setICMpixels 32

$ClassInfo _ImageRepresentation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ImageRepresentation",
	"sun.awt.image.ImageWatched",
	"java.awt.image.ImageConsumer",
	_ImageRepresentation_FieldInfo_,
	_ImageRepresentation_MethodInfo_
};

$Object* allocate$ImageRepresentation($Class* clazz) {
	return $of($alloc(ImageRepresentation));
}

int32_t ImageRepresentation::hashCode() {
	 return this->$ImageWatched::hashCode();
}

bool ImageRepresentation::equals(Object$* arg0) {
	 return this->$ImageWatched::equals(arg0);
}

$Object* ImageRepresentation::clone() {
	 return this->$ImageWatched::clone();
}

$String* ImageRepresentation::toString() {
	 return this->$ImageWatched::toString();
}

void ImageRepresentation::finalize() {
	this->$ImageWatched::finalize();
}

bool ImageRepresentation::s_useNative = false;

void ImageRepresentation::initIDs() {
	$init(ImageRepresentation);
	$prepareNativeStatic(ImageRepresentation, initIDs, void);
	$invokeNativeStatic(ImageRepresentation, initIDs);
	$finishNativeStatic();
}

void ImageRepresentation::init$($ToolkitImage* im, $ColorModel* cmodel, bool forceCMhint) {
	$ImageWatched::init$();
	this->width = -1;
	this->height = -1;
	$set(this, srcModel, nullptr);
	$set(this, srcLUT, nullptr);
	this->srcLUTtransIndex = -1;
	this->numSrcLUT = 0;
	this->isDefaultBI = false;
	this->isSameCM = false;
	this->consuming = false;
	$set(this, image, im);
	if ($instanceOf($InputStreamImageSource, $($nc(this->image)->getSource()))) {
		$set(this, src, $cast($InputStreamImageSource, $nc(this->image)->getSource()));
	}
	setColorModel(cmodel);
	this->forceCMhint = forceCMhint;
}

void ImageRepresentation::reconstruct(int32_t flags) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->src != nullptr) {
			$nc(this->src)->checkSecurity(nullptr, false);
		}
		int32_t missinginfo = (int32_t)(flags & (uint32_t)~this->availinfo);
		if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) == 0 && missinginfo != 0) {
			++this->numWaiters;
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				try {
					startProduction();
					missinginfo = (int32_t)(flags & (uint32_t)~this->availinfo);
					while (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) == 0 && missinginfo != 0) {
						try {
							$of(this)->wait();
						} catch ($InterruptedException&) {
							$var($InterruptedException, e, $catch());
							$($Thread::currentThread())->interrupt();
							return;
						}
						missinginfo = (int32_t)(flags & (uint32_t)~this->availinfo);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					decrementWaiters();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return;
				}
			}
		}
	}
}

void ImageRepresentation::setDimensions(int32_t w, int32_t h) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	$nc(this->image)->setDimensions(w, h);
	newInfo(this->image, ($ImageObserver::WIDTH | $ImageObserver::HEIGHT), 0, 0, w, h);
	if (w <= 0 || h <= 0) {
		imageComplete($ImageConsumer::IMAGEERROR);
		return;
	}
	if (this->width != w || this->height != h) {
		$set(this, bimage, nullptr);
	}
	this->width = w;
	this->height = h;
	this->availinfo |= $ImageObserver::WIDTH | $ImageObserver::HEIGHT;
}

int32_t ImageRepresentation::getWidth() {
	return this->width;
}

int32_t ImageRepresentation::getHeight() {
	return this->height;
}

$ColorModel* ImageRepresentation::getColorModel() {
	return this->cmodel;
}

$BufferedImage* ImageRepresentation::getBufferedImage() {
	return this->bimage;
}

$BufferedImage* ImageRepresentation::createImage($ColorModel* cm, $WritableRaster* raster, bool isRasterPremultiplied, $Hashtable* properties) {
	$var($BufferedImage, bi, $new($BufferedImage, cm, raster, isRasterPremultiplied, ($Hashtable*)nullptr));
	bi->setAccelerationPriority($nc(this->image)->getAccelerationPriority());
	return bi;
}

void ImageRepresentation::setProperties($Hashtable* props) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	$nc(this->image)->setProperties(props);
	newInfo(this->image, $ImageObserver::PROPERTIES, 0, 0, 0, 0);
}

void ImageRepresentation::setColorModel($ColorModel* model) {
	$useLocalCurrentObjectStackCache();
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	$set(this, srcModel, model);
	if ($instanceOf($IndexColorModel, model)) {
		if ($nc(model)->getTransparency() == $Transparency::TRANSLUCENT) {
			$set(this, cmodel, $ColorModel::getRGBdefault());
			$set(this, srcLUT, nullptr);
		} else {
			$var($IndexColorModel, icm, $cast($IndexColorModel, model));
			this->numSrcLUT = icm->getMapSize();
			$set(this, srcLUT, $new($ints, $Math::max(this->numSrcLUT, 256)));
			icm->getRGBs(this->srcLUT);
			this->srcLUTtransIndex = icm->getTransparentPixel();
			$set(this, cmodel, model);
		}
	} else if (this->cmodel == nullptr) {
		$set(this, cmodel, model);
		$set(this, srcLUT, nullptr);
	} else if ($instanceOf($DirectColorModel, model)) {
		$var($DirectColorModel, dcm, $cast($DirectColorModel, model));
		bool var$1 = ($nc(dcm)->getRedMask() == 0x00FF0000);
		bool var$0 = var$1 && (dcm->getGreenMask() == 0x0000FF00);
		if (var$0 && (dcm->getBlueMask() == 255)) {
			$set(this, cmodel, model);
			$set(this, srcLUT, nullptr);
		}
	}
	this->isSameCM = (this->cmodel == model);
}

void ImageRepresentation::createBufferedImage() {
	$useLocalCurrentObjectStackCache();
	this->isDefaultBI = false;
	try {
		$set(this, biRaster, $nc(this->cmodel)->createCompatibleWritableRaster(this->width, this->height));
		$set(this, bimage, createImage(this->cmodel, this->biRaster, $nc(this->cmodel)->isAlphaPremultiplied(), nullptr));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$set(this, cmodel, $ColorModel::getRGBdefault());
		$set(this, biRaster, $nc(this->cmodel)->createCompatibleWritableRaster(this->width, this->height));
		$set(this, bimage, createImage(this->cmodel, this->biRaster, false, nullptr));
	}
	int32_t type = $nc(this->bimage)->getType();
	if ((this->cmodel == $ColorModel::getRGBdefault()) || (type == $BufferedImage::TYPE_INT_RGB) || (type == $BufferedImage::TYPE_INT_ARGB_PRE)) {
		this->isDefaultBI = true;
	} else if ($instanceOf($DirectColorModel, this->cmodel)) {
		$var($DirectColorModel, dcm, $cast($DirectColorModel, this->cmodel));
		bool var$1 = $nc(dcm)->getRedMask() == 0x00FF0000;
		bool var$0 = var$1 && dcm->getGreenMask() == 0x0000FF00;
		if (var$0 && dcm->getBlueMask() == 255) {
			this->isDefaultBI = true;
		}
	}
}

void ImageRepresentation::convertToRGB() {
	$useLocalCurrentObjectStackCache();
	int32_t w = $nc(this->bimage)->getWidth();
	int32_t h = $nc(this->bimage)->getHeight();
	int32_t size = w * h;
	$var($DataBufferInt, dbi, $new($DataBufferInt, size));
	$var($ints, newpixels, $SunWritableRaster::stealData(dbi, 0));
	if ($instanceOf($IndexColorModel, this->cmodel) && $instanceOf($ByteComponentRaster, this->biRaster) && $nc(this->biRaster)->getNumDataElements() == 1) {
		$var($ByteComponentRaster, bct, $cast($ByteComponentRaster, this->biRaster));
		$var($bytes, data, $nc(bct)->getDataStorage());
		int32_t coff = bct->getDataOffset(0);
		for (int32_t i = 0; i < size; ++i) {
			$nc(newpixels)->set(i, $nc(this->srcLUT)->get((int32_t)($nc(data)->get(coff + i) & (uint32_t)255)));
		}
	} else {
		$var($Object, srcpixels, nullptr);
		int32_t off = 0;
		for (int32_t y = 0; y < h; ++y) {
			for (int32_t x = 0; x < w; ++x) {
				$assign(srcpixels, $nc(this->biRaster)->getDataElements(x, y, srcpixels));
				$nc(newpixels)->set(off++, $nc(this->cmodel)->getRGB(srcpixels));
			}
		}
	}
	$SunWritableRaster::markDirty(static_cast<$DataBuffer*>(dbi));
	this->isSameCM = false;
	$set(this, cmodel, $ColorModel::getRGBdefault());
	$var($ints, bandMasks, $new($ints, {
		0x00FF0000,
		0x0000FF00,
		255,
		(int32_t)0xFF000000
	}));
	$set(this, biRaster, $Raster::createPackedRaster(static_cast<$DataBuffer*>(dbi), w, h, w, bandMasks, ($Point*)nullptr));
	$set(this, bimage, createImage(this->cmodel, this->biRaster, $nc(this->cmodel)->isAlphaPremultiplied(), nullptr));
	$set(this, srcLUT, nullptr);
	this->isDefaultBI = true;
}

void ImageRepresentation::setHints(int32_t h) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	this->hints = h;
}

bool ImageRepresentation::setICMpixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* lut, $bytes* pix, int32_t off, int32_t scansize, $IntegerComponentRaster* ict) {
	bool $ret = false;
	$prepareNative(ImageRepresentation, setICMpixels, bool, int32_t x, int32_t y, int32_t w, int32_t h, $ints* lut, $bytes* pix, int32_t off, int32_t scansize, $IntegerComponentRaster* ict);
	$ret = $invokeNative(ImageRepresentation, setICMpixels, x, y, w, h, lut, pix, off, scansize, ict);
	$finishNative();
	return $ret;
}

bool ImageRepresentation::setDiffICM(int32_t x, int32_t y, int32_t w, int32_t h, $ints* lut, int32_t transPix, int32_t numLut, $IndexColorModel* icm, $bytes* pix, int32_t off, int32_t scansize, $ByteComponentRaster* bct, int32_t chanOff) {
	bool $ret = false;
	$prepareNative(ImageRepresentation, setDiffICM, bool, int32_t x, int32_t y, int32_t w, int32_t h, $ints* lut, int32_t transPix, int32_t numLut, $IndexColorModel* icm, $bytes* pix, int32_t off, int32_t scansize, $ByteComponentRaster* bct, int32_t chanOff);
	$ret = $invokeNative(ImageRepresentation, setDiffICM, x, y, w, h, lut, transPix, numLut, icm, pix, off, scansize, bct, chanOff);
	$finishNative();
	return $ret;
}

void ImageRepresentation::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pix, int32_t off, int32_t scansize) {
	$useLocalCurrentObjectStackCache();
	int32_t lineOff = off;
	int32_t poff = 0;
	$var($ints, newLUT, nullptr);
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	$synchronized(this) {
		if (this->bimage == nullptr) {
			if (this->cmodel == nullptr) {
				$set(this, cmodel, model);
			}
			createBufferedImage();
		}
		if (w <= 0 || h <= 0) {
			return;
		}
		int32_t biWidth = $nc(this->biRaster)->getWidth();
		int32_t biHeight = $nc(this->biRaster)->getHeight();
		int32_t x1 = x + w;
		int32_t y1 = y + h;
		if (x < 0) {
			off -= x;
			x = 0;
		} else if (x1 < 0) {
			x1 = biWidth;
		}
		if (y < 0) {
			off -= y * scansize;
			y = 0;
		} else if (y1 < 0) {
			y1 = biHeight;
		}
		if (x1 > biWidth) {
			x1 = biWidth;
		}
		if (y1 > biHeight) {
			y1 = biHeight;
		}
		if (x >= x1 || y >= y1) {
			return;
		}
		w = x1 - x;
		h = y1 - y;
		if (off < 0 || off >= $nc(pix)->length) {
			$throwNew($ArrayIndexOutOfBoundsException, "Data offset out of bounds."_s);
		}
		int32_t remainder = $nc(pix)->length - off;
		if (remainder < w) {
			$throwNew($ArrayIndexOutOfBoundsException, "Data array is too short."_s);
		}
		int32_t num = 0;
		if (scansize < 0) {
			num = ($div(off, -scansize)) + 1;
		} else if (scansize > 0) {
			num = ($div((remainder - w), scansize)) + 1;
		} else {
			num = h;
		}
		if (h > num) {
			$throwNew($ArrayIndexOutOfBoundsException, "Data array is too short."_s);
		}
		if (this->isSameCM && (this->cmodel != model) && (this->srcLUT != nullptr) && ($instanceOf($IndexColorModel, model)) && ($instanceOf($ByteComponentRaster, this->biRaster))) {
			$var($IndexColorModel, icm, $cast($IndexColorModel, model));
			$var($ByteComponentRaster, bct, $cast($ByteComponentRaster, this->biRaster));
			int32_t numlut = this->numSrcLUT;
			if (!setDiffICM(x, y, w, h, this->srcLUT, this->srcLUTtransIndex, this->numSrcLUT, icm, pix, off, scansize, bct, $nc(bct)->getDataOffset(0))) {
				convertToRGB();
			} else {
				$nc(bct)->markDirty();
				if (numlut != this->numSrcLUT) {
					bool hasAlpha = $nc(icm)->hasAlpha();
					if (this->srcLUTtransIndex != -1) {
						hasAlpha = true;
					}
					int32_t nbits = icm->getPixelSize();
					$assign(icm, $new($IndexColorModel, nbits, this->numSrcLUT, this->srcLUT, 0, hasAlpha, this->srcLUTtransIndex, (nbits > 8 ? $DataBuffer::TYPE_USHORT : $DataBuffer::TYPE_BYTE)));
					$set(this, cmodel, icm);
					$set(this, bimage, createImage(icm, bct, false, nullptr));
				}
				return;
			}
		}
		if (this->isDefaultBI) {
			int32_t pixel = 0;
			$var($IntegerComponentRaster, iraster, $cast($IntegerComponentRaster, this->biRaster));
			if (this->srcLUT != nullptr && $instanceOf($IndexColorModel, model)) {
				if (model != this->srcModel) {
					$nc(($cast($IndexColorModel, model)))->getRGBs(this->srcLUT);
					$set(this, srcModel, model);
				}
				if (ImageRepresentation::s_useNative) {
					if (setICMpixels(x, y, w, h, this->srcLUT, pix, off, scansize, iraster)) {
						$nc(iraster)->markDirty();
					} else {
						abort();
						return;
					}
				} else {
					$var($ints, storage, $new($ints, w * h));
					int32_t soff = 0;
					for (int32_t yoff = 0; yoff < h; ++yoff, lineOff += scansize) {
						poff = lineOff;
						for (int32_t i = 0; i < w; ++i) {
							storage->set(soff++, $nc(this->srcLUT)->get((int32_t)(pix->get(poff++) & (uint32_t)255)));
						}
					}
					$nc(iraster)->setDataElements(x, y, w, h, $of(storage));
				}
			} else {
				$var($ints, storage, $new($ints, w));
				for (int32_t yoff = y; yoff < y + h; ++yoff, lineOff += scansize) {
					poff = lineOff;
					for (int32_t i = 0; i < w; ++i) {
						storage->set(i, $nc(model)->getRGB((int32_t)(pix->get(poff++) & (uint32_t)255)));
					}
					$nc(iraster)->setDataElements(x, yoff, w, 1, $of(storage));
				}
				this->availinfo |= $ImageObserver::SOMEBITS;
			}
		} else if ((this->cmodel == model) && ($instanceOf($ByteComponentRaster, this->biRaster)) && ($nc(this->biRaster)->getNumDataElements() == 1)) {
			$var($ByteComponentRaster, bt, $cast($ByteComponentRaster, this->biRaster));
			if (off == 0 && scansize == w) {
				$nc(bt)->putByteData(x, y, w, h, pix);
			} else {
				$var($bytes, bpix, $new($bytes, w));
				poff = off;
				for (int32_t yoff = y; yoff < y + h; ++yoff) {
					$System::arraycopy(pix, poff, bpix, 0, w);
					$nc(bt)->putByteData(x, yoff, w, 1, bpix);
					poff += scansize;
				}
			}
		} else {
			for (int32_t yoff = y; yoff < y + h; ++yoff, lineOff += scansize) {
				poff = lineOff;
				for (int32_t xoff = x; xoff < x + w; ++xoff) {
					$nc(this->bimage)->setRGB(xoff, yoff, $nc(model)->getRGB((int32_t)(pix->get(poff++) & (uint32_t)255)));
				}
			}
			this->availinfo |= $ImageObserver::SOMEBITS;
		}
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::FRAMEBITS)) == 0) {
		newInfo(this->image, $ImageObserver::SOMEBITS, x, y, w, h);
	}
}

void ImageRepresentation::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pix, int32_t off, int32_t scansize) {
	$useLocalCurrentObjectStackCache();
	int32_t lineOff = off;
	int32_t poff = 0;
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	$synchronized(this) {
		if (this->bimage == nullptr) {
			if (this->cmodel == nullptr) {
				$set(this, cmodel, model);
			}
			createBufferedImage();
		}
		$var($ints, storage, $new($ints, w));
		int32_t yoff = 0;
		int32_t pixel = 0;
		if ($instanceOf($IndexColorModel, this->cmodel)) {
			convertToRGB();
		}
		if ((model == this->cmodel) && ($instanceOf($IntegerComponentRaster, this->biRaster))) {
			$var($IntegerComponentRaster, iraster, $cast($IntegerComponentRaster, this->biRaster));
			if (off == 0 && scansize == w) {
				$nc(iraster)->setDataElements(x, y, w, h, $of(pix));
			} else {
				for (yoff = y; yoff < y + h; ++yoff, lineOff += scansize) {
					$System::arraycopy(pix, lineOff, storage, 0, w);
					$nc(iraster)->setDataElements(x, yoff, w, 1, $of(storage));
				}
			}
		} else {
			bool var$0 = $nc(model)->getTransparency() != $Transparency::OPAQUE;
			if (var$0 && $nc(this->cmodel)->getTransparency() == $Transparency::OPAQUE) {
				convertToRGB();
			}
			if (this->isDefaultBI) {
				$var($IntegerComponentRaster, iraster, $cast($IntegerComponentRaster, this->biRaster));
				$var($ints, data, $nc(iraster)->getDataStorage());
				if ($nc(this->cmodel)->equals(model)) {
					int32_t sstride = iraster->getScanlineStride();
					int32_t doff = y * sstride + x;
					for (yoff = 0; yoff < h; ++yoff, lineOff += scansize) {
						$System::arraycopy(pix, lineOff, data, doff, w);
						doff += sstride;
					}
					iraster->markDirty();
				} else {
					for (yoff = y; yoff < y + h; ++yoff, lineOff += scansize) {
						poff = lineOff;
						for (int32_t i = 0; i < w; ++i) {
							storage->set(i, $nc(model)->getRGB($nc(pix)->get(poff++)));
						}
						iraster->setDataElements(x, yoff, w, 1, $of(storage));
					}
				}
				this->availinfo |= $ImageObserver::SOMEBITS;
			} else {
				$var($Object, tmp, nullptr);
				for (yoff = y; yoff < y + h; ++yoff, lineOff += scansize) {
					poff = lineOff;
					for (int32_t xoff = x; xoff < x + w; ++xoff) {
						pixel = $nc(model)->getRGB($nc(pix)->get(poff++));
						$assign(tmp, $nc(this->cmodel)->getDataElements(pixel, tmp));
						$nc(this->biRaster)->setDataElements(xoff, yoff, tmp);
					}
				}
				this->availinfo |= $ImageObserver::SOMEBITS;
			}
		}
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::FRAMEBITS)) == 0) {
		newInfo(this->image, $ImageObserver::SOMEBITS, x, y, w, h);
	}
}

$BufferedImage* ImageRepresentation::getOpaqueRGBImage() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->bimage)->getType() == $BufferedImage::TYPE_INT_ARGB) {
		int32_t w = $nc(this->bimage)->getWidth();
		int32_t h = $nc(this->bimage)->getHeight();
		int32_t size = w * h;
		$var($DataBufferInt, db, $cast($DataBufferInt, $nc(this->biRaster)->getDataBuffer()));
		$var($ints, pixels, $SunWritableRaster::stealData(db, 0));
		for (int32_t i = 0; i < size; ++i) {
			if (((int32_t)((uint32_t)$nc(pixels)->get(i) >> 24)) != 255) {
				return this->bimage;
			}
		}
		$var($ColorModel, opModel, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
		$var($ints, bandmasks, $new($ints, {
			0x00FF0000,
			0x0000FF00,
			255
		}));
		$var($WritableRaster, opRaster, $Raster::createPackedRaster(static_cast<$DataBuffer*>(db), w, h, w, bandmasks, ($Point*)nullptr));
		try {
			$var($BufferedImage, opImage, createImage(opModel, opRaster, false, nullptr));
			return opImage;
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			return this->bimage;
		}
	}
	return this->bimage;
}

void ImageRepresentation::imageComplete(int32_t status) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	bool done = false;
	int32_t info = 0;
	switch (status) {
	default:
		{}
	case $ImageConsumer::IMAGEABORTED:
		{
			done = true;
			info = $ImageObserver::ABORT;
			break;
		}
	case $ImageConsumer::IMAGEERROR:
		{
			$nc(this->image)->addInfo($ImageObserver::ERROR);
			done = true;
			info = $ImageObserver::ERROR;
			dispose();
			break;
		}
	case $ImageConsumer::STATICIMAGEDONE:
		{
			done = true;
			info = $ImageObserver::ALLBITS;
			break;
		}
	case $ImageConsumer::SINGLEFRAMEDONE:
		{
			done = false;
			info = $ImageObserver::FRAMEBITS;
			break;
		}
	}
	$synchronized(this) {
		if (done) {
			$nc($($nc(this->image)->getSource()))->removeConsumer(this);
			this->consuming = false;
			$set(this, newbits, nullptr);
			if (this->bimage != nullptr) {
				$set(this, bimage, getOpaqueRGBImage());
			}
		}
		this->availinfo |= info;
		$of(this)->notifyAll();
	}
	newInfo(this->image, info, 0, 0, this->width, this->height);
	$nc(this->image)->infoDone(status);
}

void ImageRepresentation::startProduction() {
	if (!this->consuming) {
		this->consuming = true;
		$nc($($nc(this->image)->getSource()))->startProduction(this);
	}
}

void ImageRepresentation::checkConsumption() {
	$synchronized(this) {
		if (isWatcherListEmpty() && this->numWaiters == 0 && (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) == 0)) {
			dispose();
		}
	}
}

void ImageRepresentation::notifyWatcherListEmpty() {
	$synchronized(this) {
		checkConsumption();
	}
}

void ImageRepresentation::decrementWaiters() {
	$synchronized(this) {
		--this->numWaiters;
		checkConsumption();
	}
}

bool ImageRepresentation::prepare($ImageObserver* iw) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
		if (iw != nullptr) {
			iw->imageUpdate(this->image, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	bool done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	if (!done) {
		addWatcher(iw);
		startProduction();
		done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	}
	return done;
}

int32_t ImageRepresentation::check($ImageObserver* iw) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)($ImageObserver::ERROR | $ImageObserver::ALLBITS))) == 0) {
		addWatcher(iw);
	}
	return this->availinfo;
}

bool ImageRepresentation::drawToBufImage($Graphics* g, $ToolkitImage* img, int32_t x, int32_t y, $Color* bg, $ImageObserver* iw) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
		if (iw != nullptr) {
			iw->imageUpdate(this->image, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	bool done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	bool abort = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ABORT)) != 0);
	if (!done && !abort) {
		addWatcher(iw);
		startProduction();
		done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	}
	if (done || (0 != ((int32_t)(this->availinfo & (uint32_t)$ImageObserver::FRAMEBITS)))) {
		$nc(g)->drawImage(this->bimage, x, y, bg, nullptr);
	}
	return done;
}

bool ImageRepresentation::drawToBufImage($Graphics* g, $ToolkitImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $Color* bg, $ImageObserver* iw) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
		if (iw != nullptr) {
			iw->imageUpdate(this->image, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	bool done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	bool abort = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ABORT)) != 0);
	if (!done && !abort) {
		addWatcher(iw);
		startProduction();
		done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	}
	if (done || (0 != ((int32_t)(this->availinfo & (uint32_t)$ImageObserver::FRAMEBITS)))) {
		$nc(g)->drawImage(this->bimage, x, y, w, h, bg, nullptr);
	}
	return done;
}

bool ImageRepresentation::drawToBufImage($Graphics* g, $ToolkitImage* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bg, $ImageObserver* iw) {
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
		if (iw != nullptr) {
			iw->imageUpdate(this->image, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	bool done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	bool abort = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ABORT)) != 0);
	if (!done && !abort) {
		addWatcher(iw);
		startProduction();
		done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	}
	if (done || (0 != ((int32_t)(this->availinfo & (uint32_t)$ImageObserver::FRAMEBITS)))) {
		$nc(g)->drawImage(this->bimage, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bg, nullptr);
	}
	return done;
}

bool ImageRepresentation::drawToBufImage($Graphics* g, $ToolkitImage* img, $AffineTransform* xform, $ImageObserver* iw) {
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	if (this->src != nullptr) {
		$nc(this->src)->checkSecurity(nullptr, false);
	}
	if (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ERROR)) != 0) {
		if (iw != nullptr) {
			iw->imageUpdate(this->image, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	bool done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	bool abort = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ABORT)) != 0);
	if (!done && !abort) {
		addWatcher(iw);
		startProduction();
		done = (((int32_t)(this->availinfo & (uint32_t)$ImageObserver::ALLBITS)) != 0);
	}
	if (done || (0 != ((int32_t)(this->availinfo & (uint32_t)$ImageObserver::FRAMEBITS)))) {
		$nc(g2)->drawImage(this->bimage, xform, nullptr);
	}
	return done;
}

void ImageRepresentation::abort() {
	$synchronized(this) {
		$nc($($nc(this->image)->getSource()))->removeConsumer(this);
		this->consuming = false;
		$set(this, newbits, nullptr);
		$set(this, bimage, nullptr);
		$set(this, biRaster, nullptr);
		$set(this, cmodel, nullptr);
		$set(this, srcLUT, nullptr);
		this->isDefaultBI = false;
		this->isSameCM = false;
		newInfo(this->image, $ImageObserver::ABORT, -1, -1, -1, -1);
		this->availinfo &= (uint32_t)~((($ImageObserver::SOMEBITS | $ImageObserver::FRAMEBITS) | $ImageObserver::ALLBITS) | $ImageObserver::ERROR);
	}
}

void ImageRepresentation::dispose() {
	$synchronized(this) {
		$nc($($nc(this->image)->getSource()))->removeConsumer(this);
		this->consuming = false;
		$set(this, newbits, nullptr);
		this->availinfo &= (uint32_t)~(($ImageObserver::SOMEBITS | $ImageObserver::FRAMEBITS) | $ImageObserver::ALLBITS);
	}
}

void ImageRepresentation::setAccelerationPriority(float priority) {
	if (this->bimage != nullptr) {
		$nc(this->bimage)->setAccelerationPriority(priority);
	}
}

void clinit$ImageRepresentation($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
		ImageRepresentation::initIDs();
	}
	ImageRepresentation::s_useNative = true;
}

ImageRepresentation::ImageRepresentation() {
}

$Class* ImageRepresentation::load$($String* name, bool initialize) {
	$loadClass(ImageRepresentation, name, initialize, &_ImageRepresentation_ClassInfo_, clinit$ImageRepresentation, allocate$ImageRepresentation);
	return class$;
}

$Class* ImageRepresentation::class$ = nullptr;

		} // image
	} // awt
} // sun