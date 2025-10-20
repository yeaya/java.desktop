#include <java/awt/image/PackedColorModel.h>

#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef BITMASK
#undef TYPE_RGB

using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _PackedColorModel_FieldInfo_[] = {
	{"maskArray", "[I", nullptr, 0, $field(PackedColorModel, maskArray)},
	{"maskOffsets", "[I", nullptr, 0, $field(PackedColorModel, maskOffsets)},
	{"scaleFactors", "[F", nullptr, 0, $field(PackedColorModel, scaleFactors)},
	{"hashCode", "I", nullptr, $PRIVATE | $VOLATILE, $field(PackedColorModel, hashCode$)},
	{}
};

$MethodInfo _PackedColorModel_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/color/ColorSpace;I[IIZII)V", nullptr, $PUBLIC, $method(static_cast<void(PackedColorModel::*)($ColorSpace*,int32_t,$ints*,int32_t,bool,int32_t,int32_t)>(&PackedColorModel::init$))},
	{"<init>", "(Ljava/awt/color/ColorSpace;IIIIIZII)V", nullptr, $PUBLIC, $method(static_cast<void(PackedColorModel::*)($ColorSpace*,int32_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t,int32_t)>(&PackedColorModel::init$))},
	{"DecomposeMask", "(IILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PackedColorModel::*)(int32_t,int32_t,$String*)>(&PackedColorModel::DecomposeMask))},
	{"countBits", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&PackedColorModel::countBits))},
	{"createBitsArray", "([II)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ints*(*)($ints*,int32_t)>(&PackedColorModel::createBitsArray))},
	{"createBitsArray", "(IIII)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ints*(*)(int32_t,int32_t,int32_t,int32_t)>(&PackedColorModel::createBitsArray))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlphaRaster", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getMask", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(PackedColorModel::*)(int32_t)>(&PackedColorModel::getMask))},
	{"getMasks", "()[I", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ints*(PackedColorModel::*)()>(&PackedColorModel::getMasks))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isCompatibleSampleModel", "(Ljava/awt/image/SampleModel;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PackedColorModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.PackedColorModel",
	"java.awt.image.ColorModel",
	nullptr,
	_PackedColorModel_FieldInfo_,
	_PackedColorModel_MethodInfo_
};

$Object* allocate$PackedColorModel($Class* clazz) {
	return $of($alloc(PackedColorModel));
}

void PackedColorModel::init$($ColorSpace* space, int32_t bits, $ints* colorMaskArray, int32_t alphaMask, bool isAlphaPremultiplied, int32_t trans, int32_t transferType) {
	$useLocalCurrentObjectStackCache();
	$ColorModel::init$(bits, $(PackedColorModel::createBitsArray(colorMaskArray, alphaMask)), space, (alphaMask == 0 ? false : true), isAlphaPremultiplied, trans, transferType);
	if (bits < 1 || bits > 32) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 32."_s);
	}
	$set(this, maskArray, $new($ints, this->numComponents));
	$set(this, maskOffsets, $new($ints, this->numComponents));
	$set(this, scaleFactors, $new($floats, this->numComponents));
	for (int32_t i = 0; i < this->numColorComponents; ++i) {
		DecomposeMask($nc(colorMaskArray)->get(i), i, $($nc(space)->getName(i)));
	}
	if (alphaMask != 0) {
		DecomposeMask(alphaMask, this->numColorComponents, "alpha"_s);
		if ($nc(this->nBits)->get(this->numComponents - 1) == 1) {
			this->transparency = $Transparency::BITMASK;
		}
	}
}

void PackedColorModel::init$($ColorSpace* space, int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask, bool isAlphaPremultiplied, int32_t trans, int32_t transferType) {
	$ColorModel::init$(bits, $(PackedColorModel::createBitsArray(rmask, gmask, bmask, amask)), space, (amask == 0 ? false : true), isAlphaPremultiplied, trans, transferType);
	if ($nc(space)->getType() != $ColorSpace::TYPE_RGB) {
		$throwNew($IllegalArgumentException, "ColorSpace must be TYPE_RGB."_s);
	}
	$set(this, maskArray, $new($ints, this->numComponents));
	$set(this, maskOffsets, $new($ints, this->numComponents));
	$set(this, scaleFactors, $new($floats, this->numComponents));
	DecomposeMask(rmask, 0, "red"_s);
	DecomposeMask(gmask, 1, "green"_s);
	DecomposeMask(bmask, 2, "blue"_s);
	if (amask != 0) {
		DecomposeMask(amask, 3, "alpha"_s);
		if ($nc(this->nBits)->get(3) == 1) {
			this->transparency = $Transparency::BITMASK;
		}
	}
}

int32_t PackedColorModel::getMask(int32_t index) {
	return $nc(this->maskArray)->get(index);
}

$ints* PackedColorModel::getMasks() {
	return $cast($ints, $nc(this->maskArray)->clone());
}

void PackedColorModel::DecomposeMask(int32_t mask, int32_t idx, $String* componentName) {
	$useLocalCurrentObjectStackCache();
	int32_t off = 0;
	int32_t count = $nc(this->nBits)->get(idx);
	$nc(this->maskArray)->set(idx, mask);
	if (mask != 0) {
		while (((int32_t)(mask & (uint32_t)1)) == 0) {
			$usrAssign(mask, 1);
			++off;
		}
	}
	if (off + count > this->pixel_bits) {
		$throwNew($IllegalArgumentException, $$str({componentName, " mask "_s, $($Integer::toHexString($nc(this->maskArray)->get(idx))), " overflows pixel (expecting "_s, $$str(this->pixel_bits), " bits"_s}));
	}
	$nc(this->maskOffsets)->set(idx, off);
	if (count == 0) {
		$nc(this->scaleFactors)->set(idx, 256.0f);
	} else {
		$nc(this->scaleFactors)->set(idx, 255.0f / (($sl(1, count)) - 1));
	}
}

$SampleModel* PackedColorModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	return $new($SinglePixelPackedSampleModel, this->transferType, w, h, this->maskArray);
}

bool PackedColorModel::isCompatibleSampleModel($SampleModel* sm) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($SinglePixelPackedSampleModel, sm))) {
		return false;
	}
	if (this->numComponents != $nc(sm)->getNumBands()) {
		return false;
	}
	if ($nc(sm)->getTransferType() != this->transferType) {
		return false;
	}
	$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sm));
	$var($ints, bitMasks, $nc(sppsm)->getBitMasks());
	if ($nc(bitMasks)->length != $nc(this->maskArray)->length) {
		return false;
	}
	int32_t maxMask = (int32_t)(($sl((int64_t)1, $DataBuffer::getDataTypeSize(this->transferType))) - 1);
	for (int32_t i = 0; i < $nc(bitMasks)->length; ++i) {
		if (((int32_t)(maxMask & (uint32_t)bitMasks->get(i))) != ((int32_t)(maxMask & (uint32_t)$nc(this->maskArray)->get(i)))) {
			return false;
		}
	}
	return true;
}

$WritableRaster* PackedColorModel::getAlphaRaster($WritableRaster* raster) {
	if (hasAlpha() == false) {
		return nullptr;
	}
	int32_t x = $nc(raster)->getMinX();
	int32_t y = raster->getMinY();
	$var($ints, band, $new($ints, 1));
	band->set(0, raster->getNumBands() - 1);
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = raster->getWidth();
	return raster->createWritableChild(var$0, var$1, var$2, raster->getHeight(), x, y, band);
}

bool PackedColorModel::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(PackedColorModel, obj))) {
		return false;
	}
	$var(PackedColorModel, cm, $cast(PackedColorModel, obj));
	bool var$4 = this->supportsAlpha != $nc(cm)->hasAlpha();
	bool var$3 = var$4 || this->isAlphaPremultiplied$ != $nc(cm)->isAlphaPremultiplied();
	bool var$2 = var$3 || this->pixel_bits != $nc(cm)->getPixelSize();
	bool var$1 = var$2 || this->transparency != $nc(cm)->getTransparency();
	bool var$0 = var$1 || this->numComponents != $nc(cm)->getNumComponents();
	if (var$0 || (!($nc($of(this->colorSpace))->equals($nc(cm)->colorSpace))) || this->transferType != $nc(cm)->transferType) {
		return false;
	}
	int32_t numC = $nc(cm)->getNumComponents();
	for (int32_t i = 0; i < numC; ++i) {
		if ($nc(this->maskArray)->get(i) != cm->getMask(i)) {
			return false;
		}
	}
	if (!($Arrays::equals(this->nBits, $(cm->getComponentSize())))) {
		return false;
	}
	return true;
}

int32_t PackedColorModel::hashCode() {
	int32_t result = this->hashCode$;
	if (result == 0) {
		result = 7;
		result = 89 * result + this->pixel_bits;
		result = 89 * result + $Arrays::hashCode(this->nBits);
		result = 89 * result + this->transparency;
		result = 89 * result + (this->supportsAlpha ? 1 : 0);
		result = 89 * result + (this->isAlphaPremultiplied$ ? 1 : 0);
		result = 89 * result + this->numComponents;
		result = 89 * result + $nc($of(this->colorSpace))->hashCode();
		result = 89 * result + this->transferType;
		result = 89 * result + $Arrays::hashCode(this->maskArray);
		this->hashCode$ = result;
	}
	return result;
}

$ints* PackedColorModel::createBitsArray($ints* colorMaskArray, int32_t alphaMask) {
	$init(PackedColorModel);
	$useLocalCurrentObjectStackCache();
	int32_t numColors = $nc(colorMaskArray)->length;
	int32_t numAlpha = (alphaMask == 0 ? 0 : 1);
	$var($ints, arr, $new($ints, numColors + numAlpha));
	for (int32_t i = 0; i < numColors; ++i) {
		arr->set(i, countBits(colorMaskArray->get(i)));
		if (arr->get(i) < 0) {
			$throwNew($IllegalArgumentException, $$str({"Noncontiguous color mask ("_s, $($Integer::toHexString(colorMaskArray->get(i))), "at index "_s, $$str(i)}));
		}
	}
	if (alphaMask != 0) {
		arr->set(numColors, countBits(alphaMask));
		if (arr->get(numColors) < 0) {
			$throwNew($IllegalArgumentException, $$str({"Noncontiguous alpha mask ("_s, $($Integer::toHexString(alphaMask))}));
		}
	}
	return arr;
}

$ints* PackedColorModel::createBitsArray(int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask) {
	$init(PackedColorModel);
	$useLocalCurrentObjectStackCache();
	$var($ints, arr, $new($ints, 3 + (amask == 0 ? 0 : 1)));
	arr->set(0, countBits(rmask));
	arr->set(1, countBits(gmask));
	arr->set(2, countBits(bmask));
	if (arr->get(0) < 0) {
		$throwNew($IllegalArgumentException, $$str({"Noncontiguous red mask ("_s, $($Integer::toHexString(rmask))}));
	} else if (arr->get(1) < 0) {
		$throwNew($IllegalArgumentException, $$str({"Noncontiguous green mask ("_s, $($Integer::toHexString(gmask))}));
	} else if (arr->get(2) < 0) {
		$throwNew($IllegalArgumentException, $$str({"Noncontiguous blue mask ("_s, $($Integer::toHexString(bmask))}));
	}
	if (amask != 0) {
		arr->set(3, countBits(amask));
		if (arr->get(3) < 0) {
			$throwNew($IllegalArgumentException, $$str({"Noncontiguous alpha mask ("_s, $($Integer::toHexString(amask))}));
		}
	}
	return arr;
}

int32_t PackedColorModel::countBits(int32_t mask) {
	$init(PackedColorModel);
	int32_t count = 0;
	if (mask != 0) {
		while (((int32_t)(mask & (uint32_t)1)) == 0) {
			$usrAssign(mask, 1);
		}
		while (((int32_t)(mask & (uint32_t)1)) == 1) {
			$usrAssign(mask, 1);
			++count;
		}
	}
	if (mask != 0) {
		return -1;
	}
	return count;
}

PackedColorModel::PackedColorModel() {
}

$Class* PackedColorModel::load$($String* name, bool initialize) {
	$loadClass(PackedColorModel, name, initialize, &_PackedColorModel_ClassInfo_, allocate$PackedColorModel);
	return class$;
}

$Class* PackedColorModel::class$ = nullptr;

		} // image
	} // awt
} // java