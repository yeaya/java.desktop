#include <java/awt/image/PixelInterleavedSampleModel.h>

#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _PixelInterleavedSampleModel_MethodInfo_[] = {
	{"<init>", "(IIIII[I)V", nullptr, $PUBLIC, $method(static_cast<void(PixelInterleavedSampleModel::*)(int32_t,int32_t,int32_t,int32_t,int32_t,$ints*)>(&PixelInterleavedSampleModel::init$))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createSubsetSampleModel", "([I)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PixelInterleavedSampleModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.PixelInterleavedSampleModel",
	"java.awt.image.ComponentSampleModel",
	nullptr,
	nullptr,
	_PixelInterleavedSampleModel_MethodInfo_
};

$Object* allocate$PixelInterleavedSampleModel($Class* clazz) {
	return $of($alloc(PixelInterleavedSampleModel));
}

void PixelInterleavedSampleModel::init$(int32_t dataType, int32_t w, int32_t h, int32_t pixelStride, int32_t scanlineStride, $ints* bandOffsets) {
	$ComponentSampleModel::init$(dataType, w, h, pixelStride, scanlineStride, bandOffsets);
	int32_t minBandOff = $nc(this->bandOffsets)->get(0);
	int32_t maxBandOff = $nc(this->bandOffsets)->get(0);
	for (int32_t i = 1; i < $nc(this->bandOffsets)->length; ++i) {
		minBandOff = $Math::min(minBandOff, $nc(this->bandOffsets)->get(i));
		maxBandOff = $Math::max(maxBandOff, $nc(this->bandOffsets)->get(i));
	}
	maxBandOff -= minBandOff;
	if (maxBandOff > scanlineStride) {
		$throwNew($IllegalArgumentException, "Offsets between bands must be less than the scanline  stride"_s);
	}
	if (pixelStride * w > scanlineStride) {
		$throwNew($IllegalArgumentException, "Pixel stride times width must be less than or equal to the scanline stride"_s);
	}
	if (pixelStride < maxBandOff) {
		$throwNew($IllegalArgumentException, "Pixel stride must be greater than or equal to the offsets between bands"_s);
	}
}

$SampleModel* PixelInterleavedSampleModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	int32_t minBandoff = $nc(this->bandOffsets)->get(0);
	int32_t numBands = $nc(this->bandOffsets)->length;
	for (int32_t i = 1; i < numBands; ++i) {
		if ($nc(this->bandOffsets)->get(i) < minBandoff) {
			minBandoff = $nc(this->bandOffsets)->get(i);
		}
	}
	$var($ints, bandOff, nullptr);
	if (minBandoff > 0) {
		$assign(bandOff, $new($ints, numBands));
		for (int32_t i = 0; i < numBands; ++i) {
			bandOff->set(i, $nc(this->bandOffsets)->get(i) - minBandoff);
		}
	} else {
		$assign(bandOff, this->bandOffsets);
	}
	return $new(PixelInterleavedSampleModel, this->dataType, w, h, this->pixelStride, this->pixelStride * w, bandOff);
}

$SampleModel* PixelInterleavedSampleModel::createSubsetSampleModel($ints* bands) {
	$var($ints, newBandOffsets, $new($ints, $nc(bands)->length));
	for (int32_t i = 0; i < bands->length; ++i) {
		newBandOffsets->set(i, $nc(this->bandOffsets)->get(bands->get(i)));
	}
	return $new(PixelInterleavedSampleModel, this->dataType, this->width, this->height, this->pixelStride, this->scanlineStride, newBandOffsets);
}

int32_t PixelInterleavedSampleModel::hashCode() {
	return $ComponentSampleModel::hashCode() ^ 1;
}

PixelInterleavedSampleModel::PixelInterleavedSampleModel() {
}

$Class* PixelInterleavedSampleModel::load$($String* name, bool initialize) {
	$loadClass(PixelInterleavedSampleModel, name, initialize, &_PixelInterleavedSampleModel_ClassInfo_, allocate$PixelInterleavedSampleModel);
	return class$;
}

$Class* PixelInterleavedSampleModel::class$ = nullptr;

		} // image
	} // awt
} // java