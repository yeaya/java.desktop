#include <sun/java2d/pipe/BufferedBufImgOps.h>

#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ByteLookupTable.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ConvolveOp.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Kernel.h>
#include <java/awt/image/LookupOp.h>
#include <java/awt/image/LookupTable.h>
#include <java/awt/image/RescaleOp.h>
#include <java/awt/image/ShortLookupTable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

#undef EDGE_ZERO_FILL
#undef TYPE_GRAY
#undef TYPE_RGB

using $byteArray2 = $Array<int8_t, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ByteLookupTable = ::java::awt::image::ByteLookupTable;
using $ColorModel = ::java::awt::image::ColorModel;
using $ConvolveOp = ::java::awt::image::ConvolveOp;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Kernel = ::java::awt::image::Kernel;
using $LookupOp = ::java::awt::image::LookupOp;
using $LookupTable = ::java::awt::image::LookupTable;
using $RescaleOp = ::java::awt::image::RescaleOp;
using $ShortLookupTable = ::java::awt::image::ShortLookupTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _BufferedBufImgOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BufferedBufImgOps::*)()>(&BufferedBufImgOps::init$))},
	{"disableBufImgOp", "(Lsun/java2d/pipe/RenderQueue;Ljava/awt/image/BufferedImageOp;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($RenderQueue*,$BufferedImageOp*)>(&BufferedBufImgOps::disableBufImgOp))},
	{"disableConvolveOp", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*)>(&BufferedBufImgOps::disableConvolveOp))},
	{"disableLookupOp", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*)>(&BufferedBufImgOps::disableLookupOp))},
	{"disableRescaleOp", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*)>(&BufferedBufImgOps::disableRescaleOp))},
	{"enableBufImgOp", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SurfaceData;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SurfaceData*,$BufferedImage*,$BufferedImageOp*)>(&BufferedBufImgOps::enableBufImgOp))},
	{"enableConvolveOp", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SurfaceData;Ljava/awt/image/ConvolveOp;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SurfaceData*,$ConvolveOp*)>(&BufferedBufImgOps::enableConvolveOp))},
	{"enableLookupOp", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SurfaceData;Ljava/awt/image/BufferedImage;Ljava/awt/image/LookupOp;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SurfaceData*,$BufferedImage*,$LookupOp*)>(&BufferedBufImgOps::enableLookupOp))},
	{"enableRescaleOp", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SurfaceData;Ljava/awt/image/BufferedImage;Ljava/awt/image/RescaleOp;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RenderQueue*,$SurfaceData*,$BufferedImage*,$RescaleOp*)>(&BufferedBufImgOps::enableRescaleOp))},
	{"isConvolveOpValid", "(Ljava/awt/image/ConvolveOp;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ConvolveOp*)>(&BufferedBufImgOps::isConvolveOpValid))},
	{"isLookupOpValid", "(Ljava/awt/image/LookupOp;Ljava/awt/image/BufferedImage;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($LookupOp*,$BufferedImage*)>(&BufferedBufImgOps::isLookupOpValid))},
	{"isRescaleOpValid", "(Ljava/awt/image/RescaleOp;Ljava/awt/image/BufferedImage;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($RescaleOp*,$BufferedImage*)>(&BufferedBufImgOps::isRescaleOpValid))},
	{}
};

$ClassInfo _BufferedBufImgOps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.BufferedBufImgOps",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BufferedBufImgOps_MethodInfo_
};

$Object* allocate$BufferedBufImgOps($Class* clazz) {
	return $of($alloc(BufferedBufImgOps));
}

void BufferedBufImgOps::init$() {
}

void BufferedBufImgOps::enableBufImgOp($RenderQueue* rq, $SurfaceData* srcData, $BufferedImage* srcImg, $BufferedImageOp* biop) {
	if ($instanceOf($ConvolveOp, biop)) {
		enableConvolveOp(rq, srcData, $cast($ConvolveOp, biop));
	} else if ($instanceOf($RescaleOp, biop)) {
		enableRescaleOp(rq, srcData, srcImg, $cast($RescaleOp, biop));
	} else if ($instanceOf($LookupOp, biop)) {
		enableLookupOp(rq, srcData, srcImg, $cast($LookupOp, biop));
	} else {
		$throwNew($InternalError, "Unknown BufferedImageOp"_s);
	}
}

void BufferedBufImgOps::disableBufImgOp($RenderQueue* rq, $BufferedImageOp* biop) {
	if ($instanceOf($ConvolveOp, biop)) {
		disableConvolveOp(rq);
	} else if ($instanceOf($RescaleOp, biop)) {
		disableRescaleOp(rq);
	} else if ($instanceOf($LookupOp, biop)) {
		disableLookupOp(rq);
	} else {
		$throwNew($InternalError, "Unknown BufferedImageOp"_s);
	}
}

bool BufferedBufImgOps::isConvolveOpValid($ConvolveOp* cop) {
	$var($Kernel, kernel, $nc(cop)->getKernel());
	int32_t kw = $nc(kernel)->getWidth();
	int32_t kh = kernel->getHeight();
	if (!(kw == 3 && kh == 3) && !(kw == 5 && kh == 5)) {
		return false;
	}
	return true;
}

void BufferedBufImgOps::enableConvolveOp($RenderQueue* rq, $SurfaceData* srcData, $ConvolveOp* cop) {
	$useLocalCurrentObjectStackCache();
	bool edgeZero = $nc(cop)->getEdgeCondition() == $ConvolveOp::EDGE_ZERO_FILL;
	$var($Kernel, kernel, cop->getKernel());
	int32_t kernelWidth = $nc(kernel)->getWidth();
	int32_t kernelHeight = kernel->getHeight();
	int32_t kernelSize = kernelWidth * kernelHeight;
	int32_t sizeofFloat = 4;
	int32_t totalBytesRequired = 4 + 8 + 12 + (kernelSize * sizeofFloat);
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(totalBytesRequired, 4);
	$nc(buf)->putInt(120);
	buf->putLong($nc(srcData)->getNativeOps());
	buf->putInt(edgeZero ? 1 : 0);
	buf->putInt(kernelWidth);
	buf->putInt(kernelHeight);
	buf->put($(kernel->getKernelData(nullptr)));
}

void BufferedBufImgOps::disableConvolveOp($RenderQueue* rq) {
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacity(4);
	$nc(buf)->putInt(121);
}

bool BufferedBufImgOps::isRescaleOpValid($RescaleOp* rop, $BufferedImage* srcImg) {
	$useLocalCurrentObjectStackCache();
	int32_t numFactors = $nc(rop)->getNumFactors();
	$var($ColorModel, srcCM, $nc(srcImg)->getColorModel());
	if ($instanceOf($IndexColorModel, srcCM)) {
		$throwNew($IllegalArgumentException, "Rescaling cannot be performed on an indexed image"_s);
	}
	bool var$0 = numFactors != 1 && numFactors != $nc(srcCM)->getNumColorComponents();
	if (var$0 && numFactors != srcCM->getNumComponents()) {
		$throwNew($IllegalArgumentException, "Number of scaling constants does not equal the number of color or color/alpha components"_s);
	}
	int32_t csType = $nc($($nc(srcCM)->getColorSpace()))->getType();
	if (csType != $ColorSpace::TYPE_RGB && csType != $ColorSpace::TYPE_GRAY) {
		return false;
	}
	if (numFactors == 2 || numFactors > 4) {
		return false;
	}
	return true;
}

void BufferedBufImgOps::enableRescaleOp($RenderQueue* rq, $SurfaceData* srcData, $BufferedImage* srcImg, $RescaleOp* rop) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, srcCM, $nc(srcImg)->getColorModel());
	bool var$0 = $nc(srcCM)->hasAlpha();
	bool nonPremult = var$0 && srcCM->isAlphaPremultiplied();
	int32_t numFactors = $nc(rop)->getNumFactors();
	$var($floats, origScaleFactors, rop->getScaleFactors(nullptr));
	$var($floats, origOffsets, rop->getOffsets(nullptr));
	$var($floats, normScaleFactors, nullptr);
	$var($floats, normOffsets, nullptr);
	if (numFactors == 1) {
		$assign(normScaleFactors, $new($floats, 4));
		$assign(normOffsets, $new($floats, 4));
		for (int32_t i = 0; i < 3; ++i) {
			normScaleFactors->set(i, $nc(origScaleFactors)->get(0));
			normOffsets->set(i, $nc(origOffsets)->get(0));
		}
		normScaleFactors->set(3, 1.0f);
		normOffsets->set(3, 0.0f);
	} else if (numFactors == 3) {
		$assign(normScaleFactors, $new($floats, 4));
		$assign(normOffsets, $new($floats, 4));
		for (int32_t i = 0; i < 3; ++i) {
			normScaleFactors->set(i, $nc(origScaleFactors)->get(i));
			normOffsets->set(i, $nc(origOffsets)->get(i));
		}
		normScaleFactors->set(3, 1.0f);
		normOffsets->set(3, 0.0f);
	} else {
		$assign(normScaleFactors, origScaleFactors);
		$assign(normOffsets, origOffsets);
	}
	if (srcCM->getNumComponents() == 1) {
		int32_t nBits = srcCM->getComponentSize(0);
		int32_t maxValue = ($sl(1, nBits)) - 1;
		for (int32_t i = 0; i < 3; ++i) {
			(*$nc(normOffsets))[i] /= maxValue;
		}
	} else {
		for (int32_t i = 0; i < srcCM->getNumComponents(); ++i) {
			int32_t nBits = srcCM->getComponentSize(i);
			int32_t maxValue = ($sl(1, nBits)) - 1;
			(*$nc(normOffsets))[i] /= maxValue;
		}
	}
	int32_t sizeofFloat = 4;
	int32_t totalBytesRequired = 4 + 8 + 4 + (4 * sizeofFloat * 2);
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(totalBytesRequired, 4);
	$nc(buf)->putInt(122);
	buf->putLong($nc(srcData)->getNativeOps());
	buf->putInt(nonPremult ? 1 : 0);
	buf->put(normScaleFactors);
	buf->put(normOffsets);
}

void BufferedBufImgOps::disableRescaleOp($RenderQueue* rq) {
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacity(4);
	$nc(buf)->putInt(123);
}

bool BufferedBufImgOps::isLookupOpValid($LookupOp* lop, $BufferedImage* srcImg) {
	$useLocalCurrentObjectStackCache();
	$var($LookupTable, table, $nc(lop)->getTable());
	int32_t numComps = $nc(table)->getNumComponents();
	$var($ColorModel, srcCM, $nc(srcImg)->getColorModel());
	if ($instanceOf($IndexColorModel, srcCM)) {
		$throwNew($IllegalArgumentException, "LookupOp cannot be performed on an indexed image"_s);
	}
	bool var$0 = numComps != 1 && numComps != $nc(srcCM)->getNumComponents();
	if (var$0 && numComps != srcCM->getNumColorComponents()) {
		$throwNew($IllegalArgumentException, $$str({"Number of arrays in the  lookup table ("_s, $$str(numComps), ") is not compatible with the src image: "_s, srcImg}));
	}
	int32_t csType = $nc($($nc(srcCM)->getColorSpace()))->getType();
	if (csType != $ColorSpace::TYPE_RGB && csType != $ColorSpace::TYPE_GRAY) {
		return false;
	}
	if (numComps == 2 || numComps > 4) {
		return false;
	}
	if ($instanceOf($ByteLookupTable, table)) {
		$var($byteArray2, data, $nc(($cast($ByteLookupTable, table)))->getTable());
		for (int32_t i = 1; i < $nc(data)->length; ++i) {
			if ($nc(data->get(i))->length > 256 || $nc(data->get(i))->length != $nc(data->get(i - 1))->length) {
				return false;
			}
		}
	} else if ($instanceOf($ShortLookupTable, table)) {
		$var($shortArray2, data, $nc(($cast($ShortLookupTable, table)))->getTable());
		for (int32_t i = 1; i < $nc(data)->length; ++i) {
			if ($nc(data->get(i))->length > 256 || $nc(data->get(i))->length != $nc(data->get(i - 1))->length) {
				return false;
			}
		}
	} else {
		return false;
	}
	return true;
}

void BufferedBufImgOps::enableLookupOp($RenderQueue* rq, $SurfaceData* srcData, $BufferedImage* srcImg, $LookupOp* lop) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($($nc(srcImg)->getColorModel()))->hasAlpha();
	bool nonPremult = var$0 && srcImg->isAlphaPremultiplied();
	$var($LookupTable, table, $nc(lop)->getTable());
	int32_t numBands = $nc(table)->getNumComponents();
	int32_t offset = table->getOffset();
	int32_t bandLength = 0;
	int32_t bytesPerElem = 0;
	bool shortData = false;
	if ($instanceOf($ShortLookupTable, table)) {
		$var($shortArray2, data, $nc(($cast($ShortLookupTable, table)))->getTable());
		bandLength = $nc($nc(data)->get(0))->length;
		bytesPerElem = 2;
		shortData = true;
	} else {
		$var($byteArray2, data, $nc(($cast($ByteLookupTable, table)))->getTable());
		bandLength = $nc($nc(data)->get(0))->length;
		bytesPerElem = 1;
		shortData = false;
	}
	int32_t totalLutBytes = numBands * bandLength * bytesPerElem;
	int32_t paddedLutBytes = (int32_t)((totalLutBytes + 3) & (uint32_t)(~3));
	int32_t padding = paddedLutBytes - totalLutBytes;
	int32_t totalBytesRequired = 4 + 8 + 20 + paddedLutBytes;
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(totalBytesRequired, 4);
	$nc(buf)->putInt(124);
	buf->putLong($nc(srcData)->getNativeOps());
	buf->putInt(nonPremult ? 1 : 0);
	buf->putInt(shortData ? 1 : 0);
	buf->putInt(numBands);
	buf->putInt(bandLength);
	buf->putInt(offset);
	if (shortData) {
		$var($shortArray2, data, $nc(($cast($ShortLookupTable, table)))->getTable());
		for (int32_t i = 0; i < numBands; ++i) {
			buf->put($nc(data)->get(i));
		}
	} else {
		$var($byteArray2, data, $nc(($cast($ByteLookupTable, table)))->getTable());
		for (int32_t i = 0; i < numBands; ++i) {
			buf->put($nc(data)->get(i));
		}
	}
	if (padding != 0) {
		buf->position(buf->position() + padding);
	}
}

void BufferedBufImgOps::disableLookupOp($RenderQueue* rq) {
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacity(4);
	$nc(buf)->putInt(125);
}

BufferedBufImgOps::BufferedBufImgOps() {
}

$Class* BufferedBufImgOps::load$($String* name, bool initialize) {
	$loadClass(BufferedBufImgOps, name, initialize, &_BufferedBufImgOps_ClassInfo_, allocate$BufferedBufImgOps);
	return class$;
}

$Class* BufferedBufImgOps::class$ = nullptr;

		} // pipe
	} // java2d
} // sun