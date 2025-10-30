#include <com/sun/imageio/plugins/common/ReaderUtil.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$MethodInfo _ReaderUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReaderUtil::*)()>(&ReaderUtil::init$))},
	{"computeUpdatedPixels", "(IIIIIIIII[II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$ints*,int32_t)>(&ReaderUtil::computeUpdatedPixels))},
	{"computeUpdatedPixels", "(Ljava/awt/Rectangle;Ljava/awt/Point;IIIIIIIIIIII)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($Rectangle*,$Point*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ReaderUtil::computeUpdatedPixels))},
	{"readMultiByteInteger", "(Ljavax/imageio/stream/ImageInputStream;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ImageInputStream*)>(&ReaderUtil::readMultiByteInteger)), "java.io.IOException"},
	{}
};

$ClassInfo _ReaderUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.ReaderUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReaderUtil_MethodInfo_
};

$Object* allocate$ReaderUtil($Class* clazz) {
	return $of($alloc(ReaderUtil));
}

void ReaderUtil::init$() {
}

void ReaderUtil::computeUpdatedPixels(int32_t sourceOffset, int32_t sourceExtent, int32_t destinationOffset, int32_t dstMin, int32_t dstMax, int32_t sourceSubsampling, int32_t passStart, int32_t passExtent, int32_t passPeriod, $ints* vals, int32_t offset) {
	bool gotPixel = false;
	int32_t firstDst = -1;
	int32_t secondDst = -1;
	int32_t lastDst = -1;
	for (int32_t i = 0; i < passExtent; ++i) {
		int32_t src = passStart + i * passPeriod;
		if (src < sourceOffset) {
			continue;
		}
		if ($mod((src - sourceOffset), sourceSubsampling) != 0) {
			continue;
		}
		if (src >= sourceOffset + sourceExtent) {
			break;
		}
		int32_t dst = destinationOffset + $div((src - sourceOffset), sourceSubsampling);
		if (dst < dstMin) {
			continue;
		}
		if (dst > dstMax) {
			break;
		}
		if (!gotPixel) {
			firstDst = dst;
			gotPixel = true;
		} else if (secondDst == -1) {
			secondDst = dst;
		}
		lastDst = dst;
	}
	$nc(vals)->set(offset, firstDst);
	if (!gotPixel) {
		vals->set(offset + 2, 0);
	} else {
		vals->set(offset + 2, lastDst - firstDst + 1);
	}
	vals->set(offset + 4, $Math::max(secondDst - firstDst, 1));
}

$ints* ReaderUtil::computeUpdatedPixels($Rectangle* sourceRegion, $Point* destinationOffset, int32_t dstMinX, int32_t dstMinY, int32_t dstMaxX, int32_t dstMaxY, int32_t sourceXSubsampling, int32_t sourceYSubsampling, int32_t passXStart, int32_t passYStart, int32_t passWidth, int32_t passHeight, int32_t passPeriodX, int32_t passPeriodY) {
	$var($ints, vals, $new($ints, 6));
	computeUpdatedPixels($nc(sourceRegion)->x, sourceRegion->width, $nc(destinationOffset)->x, dstMinX, dstMaxX, sourceXSubsampling, passXStart, passWidth, passPeriodX, vals, 0);
	computeUpdatedPixels($nc(sourceRegion)->y, sourceRegion->height, $nc(destinationOffset)->y, dstMinY, dstMaxY, sourceYSubsampling, passYStart, passHeight, passPeriodY, vals, 1);
	return vals;
}

int32_t ReaderUtil::readMultiByteInteger($ImageInputStream* iis) {
	int32_t value = $nc(iis)->readByte();
	int32_t result = (int32_t)(value & (uint32_t)127);
	while (((int32_t)(value & (uint32_t)128)) == 128) {
		result <<= 7;
		value = iis->readByte();
		result |= ((int32_t)(value & (uint32_t)127));
	}
	return result;
}

ReaderUtil::ReaderUtil() {
}

$Class* ReaderUtil::load$($String* name, bool initialize) {
	$loadClass(ReaderUtil, name, initialize, &_ReaderUtil_ClassInfo_, allocate$ReaderUtil);
	return class$;
}

$Class* ReaderUtil::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com