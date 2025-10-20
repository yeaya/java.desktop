#include <java/awt/MultipleGradientPaintContext.h>

#include <java/awt/Color.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef GRADIENT_SIZE
#undef GRADIENT_SIZE_INDEX
#undef LINEAR_RGB
#undef MAX_GRADIENT_ARRAY_SIZE
#undef NO_CYCLE
#undef REPEAT

using $ColorArray = $Array<::java::awt::Color>;
using $intArray2 = $Array<int32_t, 2>;
using $Color = ::java::awt::Color;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace awt {

$FieldInfo _MultipleGradientPaintContext_FieldInfo_[] = {
	{"model", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, model)},
	{"xrgbmodel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC, $staticField(MultipleGradientPaintContext, xrgbmodel)},
	{"cachedModel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED | $STATIC, $staticField(MultipleGradientPaintContext, cachedModel)},
	{"cached", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/Raster;>;", $PROTECTED | $STATIC, $staticField(MultipleGradientPaintContext, cached)},
	{"saved", "Ljava/awt/image/Raster;", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, saved)},
	{"cycleMethod", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, cycleMethod)},
	{"colorSpace", "Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, colorSpace)},
	{"a00", "F", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, a00)},
	{"a01", "F", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, a01)},
	{"a10", "F", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, a10)},
	{"a11", "F", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, a11)},
	{"a02", "F", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, a02)},
	{"a12", "F", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, a12)},
	{"isSimpleLookup", "Z", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, isSimpleLookup)},
	{"fastGradientArraySize", "I", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, fastGradientArraySize)},
	{"gradient", "[I", nullptr, $PROTECTED, $field(MultipleGradientPaintContext, gradient)},
	{"gradients", "[[I", nullptr, $PRIVATE, $field(MultipleGradientPaintContext, gradients)},
	{"normalizedIntervals", "[F", nullptr, $PRIVATE, $field(MultipleGradientPaintContext, normalizedIntervals)},
	{"fractions", "[F", nullptr, $PRIVATE, $field(MultipleGradientPaintContext, fractions)},
	{"transparencyTest", "I", nullptr, $PRIVATE, $field(MultipleGradientPaintContext, transparencyTest)},
	{"SRGBtoLinearRGB", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MultipleGradientPaintContext, SRGBtoLinearRGB)},
	{"LinearRGBtoSRGB", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MultipleGradientPaintContext, LinearRGBtoSRGB)},
	{"GRADIENT_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MultipleGradientPaintContext, GRADIENT_SIZE)},
	{"GRADIENT_SIZE_INDEX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MultipleGradientPaintContext, GRADIENT_SIZE_INDEX)},
	{"MAX_GRADIENT_ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MultipleGradientPaintContext, MAX_GRADIENT_ARRAY_SIZE)},
	{}
};

$MethodInfo _MultipleGradientPaintContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/MultipleGradientPaint;Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;Ljava/awt/MultipleGradientPaint$ColorSpaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(MultipleGradientPaintContext::*)($MultipleGradientPaint*,$ColorModel*,$Rectangle*,$Rectangle2D*,$AffineTransform*,$RenderingHints*,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*,$MultipleGradientPaint$ColorSpaceType*)>(&MultipleGradientPaintContext::init$))},
	{"calculateLookupData", "([Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(MultipleGradientPaintContext::*)($ColorArray*)>(&MultipleGradientPaintContext::calculateLookupData))},
	{"calculateMultipleArrayGradient", "([Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(MultipleGradientPaintContext::*)($ColorArray*)>(&MultipleGradientPaintContext::calculateMultipleArrayGradient))},
	{"calculateSingleArrayGradient", "([Ljava/awt/Color;F)V", nullptr, $PRIVATE, $method(static_cast<void(MultipleGradientPaintContext::*)($ColorArray*,float)>(&MultipleGradientPaintContext::calculateSingleArrayGradient))},
	{"convertEntireColorLinearRGBtoSRGB", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MultipleGradientPaintContext::*)(int32_t)>(&MultipleGradientPaintContext::convertEntireColorLinearRGBtoSRGB))},
	{"convertLinearRGBtoSRGB", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MultipleGradientPaintContext::convertLinearRGBtoSRGB))},
	{"convertSRGBtoLinearRGB", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MultipleGradientPaintContext::convertSRGBtoLinearRGB))},
	{"dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"fillRaster", "([IIIIIII)V", nullptr, $PROTECTED | $ABSTRACT},
	{"getCachedRaster", "(Ljava/awt/image/ColorModel;II)Ljava/awt/image/Raster;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$Raster*(*)($ColorModel*,int32_t,int32_t)>(&MultipleGradientPaintContext::getCachedRaster))},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $FINAL},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $FINAL},
	{"indexIntoGradientsArrays", "(F)I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(MultipleGradientPaintContext::*)(float)>(&MultipleGradientPaintContext::indexIntoGradientsArrays))},
	{"interpolate", "(II[I)V", nullptr, $PRIVATE, $method(static_cast<void(MultipleGradientPaintContext::*)(int32_t,int32_t,$ints*)>(&MultipleGradientPaintContext::interpolate))},
	{"putCachedRaster", "(Ljava/awt/image/ColorModel;Ljava/awt/image/Raster;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ColorModel*,$Raster*)>(&MultipleGradientPaintContext::putCachedRaster))},
	{}
};

$ClassInfo _MultipleGradientPaintContext_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.MultipleGradientPaintContext",
	"java.lang.Object",
	"java.awt.PaintContext",
	_MultipleGradientPaintContext_FieldInfo_,
	_MultipleGradientPaintContext_MethodInfo_
};

$Object* allocate$MultipleGradientPaintContext($Class* clazz) {
	return $of($alloc(MultipleGradientPaintContext));
}


$ColorModel* MultipleGradientPaintContext::xrgbmodel = nullptr;

$ColorModel* MultipleGradientPaintContext::cachedModel = nullptr;

$WeakReference* MultipleGradientPaintContext::cached = nullptr;

$ints* MultipleGradientPaintContext::SRGBtoLinearRGB = nullptr;
$ints* MultipleGradientPaintContext::LinearRGBtoSRGB = nullptr;

void MultipleGradientPaintContext::init$($MultipleGradientPaint* mgp, $ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* t, $RenderingHints* hints, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod, $MultipleGradientPaint$ColorSpaceType* colorSpace) {
	$useLocalCurrentObjectStackCache();
	if (deviceBounds == nullptr) {
		$throwNew($NullPointerException, "Device bounds cannot be null"_s);
	}
	if (userBounds == nullptr) {
		$throwNew($NullPointerException, "User bounds cannot be null"_s);
	}
	if (t == nullptr) {
		$throwNew($NullPointerException, "Transform cannot be null"_s);
	}
	if (hints == nullptr) {
		$throwNew($NullPointerException, "RenderingHints cannot be null"_s);
	}
	$var($AffineTransform, tInv, nullptr);
	try {
		$nc(t)->invert();
		$assign(tInv, t);
	} catch ($NoninvertibleTransformException&) {
		$var($NoninvertibleTransformException, e, $catch());
		$assign(tInv, $new($AffineTransform));
	}
	$var($doubles, m, $new($doubles, 6));
	$nc(tInv)->getMatrix(m);
	this->a00 = (float)m->get(0);
	this->a10 = (float)m->get(1);
	this->a01 = (float)m->get(2);
	this->a11 = (float)m->get(3);
	this->a02 = (float)m->get(4);
	this->a12 = (float)m->get(5);
	$set(this, cycleMethod, cycleMethod);
	$set(this, colorSpace, colorSpace);
	$set(this, fractions, fractions);
	$var($ints, gradient, ($nc(mgp)->gradient != nullptr) ? $cast($ints, $nc($nc(mgp)->gradient)->get()) : ($ints*)nullptr);
	$var($intArray2, gradients, (mgp->gradients != nullptr) ? $cast($intArray2, $nc(mgp->gradients)->get()) : ($intArray2*)nullptr);
	if (gradient == nullptr && gradients == nullptr) {
		calculateLookupData(colors);
		$set(mgp, model, this->model);
		$set(mgp, normalizedIntervals, this->normalizedIntervals);
		mgp->isSimpleLookup = this->isSimpleLookup;
		if (this->isSimpleLookup) {
			mgp->fastGradientArraySize = this->fastGradientArraySize;
			$set(mgp, gradient, $new($SoftReference, this->gradient));
		} else {
			$set(mgp, gradients, $new($SoftReference, this->gradients));
		}
	} else {
		$set(this, model, mgp->model);
		$set(this, normalizedIntervals, mgp->normalizedIntervals);
		this->isSimpleLookup = mgp->isSimpleLookup;
		$set(this, gradient, gradient);
		this->fastGradientArraySize = mgp->fastGradientArraySize;
		$set(this, gradients, gradients);
	}
}

void MultipleGradientPaintContext::calculateLookupData($ColorArray* colors) {
	$useLocalCurrentObjectStackCache();
	$var($ColorArray, normalizedColors, nullptr);
	$init($MultipleGradientPaint$ColorSpaceType);
	if (this->colorSpace == $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB) {
		$assign(normalizedColors, $new($ColorArray, $nc(colors)->length));
		for (int32_t i = 0; i < colors->length; ++i) {
			int32_t argb = $nc(colors->get(i))->getRGB();
			int32_t a = (int32_t)((uint32_t)argb >> 24);
			int32_t r = $nc(MultipleGradientPaintContext::SRGBtoLinearRGB)->get((int32_t)((argb >> 16) & (uint32_t)255));
			int32_t g = $nc(MultipleGradientPaintContext::SRGBtoLinearRGB)->get((int32_t)((argb >> 8) & (uint32_t)255));
			int32_t b = $nc(MultipleGradientPaintContext::SRGBtoLinearRGB)->get((int32_t)((argb) & (uint32_t)255));
			normalizedColors->set(i, $$new($Color, r, g, b, a));
		}
	} else {
		$assign(normalizedColors, colors);
	}
	$set(this, normalizedIntervals, $new($floats, $nc(this->fractions)->length - 1));
	for (int32_t i = 0; i < $nc(this->normalizedIntervals)->length; ++i) {
		$nc(this->normalizedIntervals)->set(i, $nc(this->fractions)->get(i + 1) - $nc(this->fractions)->get(i));
	}
	this->transparencyTest = (int32_t)0xFF000000;
	$set(this, gradients, $new($intArray2, $nc(this->normalizedIntervals)->length));
	float Imin = (float)1;
	for (int32_t i = 0; i < $nc(this->normalizedIntervals)->length; ++i) {
		Imin = (Imin > $nc(this->normalizedIntervals)->get(i)) ? $nc(this->normalizedIntervals)->get(i) : Imin;
	}
	int32_t estimatedSize = 0;
	for (int32_t i = 0; i < $nc(this->normalizedIntervals)->length; ++i) {
		estimatedSize += ($nc(this->normalizedIntervals)->get(i) / Imin) * MultipleGradientPaintContext::GRADIENT_SIZE;
	}
	if (estimatedSize > MultipleGradientPaintContext::MAX_GRADIENT_ARRAY_SIZE) {
		calculateMultipleArrayGradient(normalizedColors);
	} else {
		calculateSingleArrayGradient(normalizedColors, Imin);
	}
	if (((int32_t)((uint32_t)this->transparencyTest >> 24)) == 255) {
		$set(this, model, MultipleGradientPaintContext::xrgbmodel);
	} else {
		$set(this, model, $ColorModel::getRGBdefault());
	}
}

void MultipleGradientPaintContext::calculateSingleArrayGradient($ColorArray* colors, float Imin) {
	$useLocalCurrentObjectStackCache();
	this->isSimpleLookup = true;
	int32_t rgb1 = 0;
	int32_t rgb2 = 0;
	int32_t gradientsTot = 1;
	for (int32_t i = 0; i < $nc(this->gradients)->length; ++i) {
		int32_t nGradients = $cast(int32_t, (($nc(this->normalizedIntervals)->get(i) / Imin) * 255.0f));
		gradientsTot += nGradients;
		$nc(this->gradients)->set(i, $$new($ints, nGradients));
		rgb1 = $nc($nc(colors)->get(i))->getRGB();
		rgb2 = $nc(colors->get(i + 1))->getRGB();
		interpolate(rgb1, rgb2, $nc(this->gradients)->get(i));
		this->transparencyTest &= (uint32_t)rgb1;
		this->transparencyTest &= (uint32_t)rgb2;
	}
	$set(this, gradient, $new($ints, gradientsTot));
	int32_t curOffset = 0;
	for (int32_t i = 0; i < $nc(this->gradients)->length; ++i) {
		$System::arraycopy($nc(this->gradients)->get(i), 0, this->gradient, curOffset, $nc($nc(this->gradients)->get(i))->length);
		curOffset += $nc($nc(this->gradients)->get(i))->length;
	}
	$nc(this->gradient)->set($nc(this->gradient)->length - 1, $nc($nc(colors)->get(colors->length - 1))->getRGB());
	$init($MultipleGradientPaint$ColorSpaceType);
	if (this->colorSpace == $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB) {
		for (int32_t i = 0; i < $nc(this->gradient)->length; ++i) {
			$nc(this->gradient)->set(i, convertEntireColorLinearRGBtoSRGB($nc(this->gradient)->get(i)));
		}
	}
	this->fastGradientArraySize = $nc(this->gradient)->length - 1;
}

void MultipleGradientPaintContext::calculateMultipleArrayGradient($ColorArray* colors) {
	$useLocalCurrentObjectStackCache();
	this->isSimpleLookup = false;
	int32_t rgb1 = 0;
	int32_t rgb2 = 0;
	for (int32_t i = 0; i < $nc(this->gradients)->length; ++i) {
		$nc(this->gradients)->set(i, $$new($ints, MultipleGradientPaintContext::GRADIENT_SIZE));
		rgb1 = $nc($nc(colors)->get(i))->getRGB();
		rgb2 = $nc(colors->get(i + 1))->getRGB();
		interpolate(rgb1, rgb2, $nc(this->gradients)->get(i));
		this->transparencyTest &= (uint32_t)rgb1;
		this->transparencyTest &= (uint32_t)rgb2;
	}
	$init($MultipleGradientPaint$ColorSpaceType);
	if (this->colorSpace == $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB) {
		for (int32_t j = 0; j < $nc(this->gradients)->length; ++j) {
			for (int32_t i = 0; i < $nc($nc(this->gradients)->get(j))->length; ++i) {
				$nc($nc(this->gradients)->get(j))->set(i, convertEntireColorLinearRGBtoSRGB($nc($nc(this->gradients)->get(j))->get(i)));
			}
		}
	}
}

void MultipleGradientPaintContext::interpolate(int32_t rgb1, int32_t rgb2, $ints* output) {
	int32_t a1 = 0;
	int32_t r1 = 0;
	int32_t g1 = 0;
	int32_t b1 = 0;
	int32_t da = 0;
	int32_t dr = 0;
	int32_t dg = 0;
	int32_t db = 0;
	float stepSize = 1.0f / $nc(output)->length;
	a1 = (int32_t)((rgb1 >> 24) & (uint32_t)255);
	r1 = (int32_t)((rgb1 >> 16) & (uint32_t)255);
	g1 = (int32_t)((rgb1 >> 8) & (uint32_t)255);
	b1 = (int32_t)((rgb1) & (uint32_t)255);
	da = ((int32_t)((rgb2 >> 24) & (uint32_t)255)) - a1;
	dr = ((int32_t)((rgb2 >> 16) & (uint32_t)255)) - r1;
	dg = ((int32_t)((rgb2 >> 8) & (uint32_t)255)) - g1;
	db = ((int32_t)((rgb2) & (uint32_t)255)) - b1;
	for (int32_t i = 0; i < output->length; ++i) {
		output->set(i, ((($cast(int32_t, ((a1 + i * da * stepSize) + 0.5)) << 24) | ($cast(int32_t, ((r1 + i * dr * stepSize) + 0.5)) << 16)) | ($cast(int32_t, ((g1 + i * dg * stepSize) + 0.5)) << 8)) | ($cast(int32_t, ((b1 + i * db * stepSize) + 0.5))));
	}
}

int32_t MultipleGradientPaintContext::convertEntireColorLinearRGBtoSRGB(int32_t rgb) {
	int32_t a1 = 0;
	int32_t r1 = 0;
	int32_t g1 = 0;
	int32_t b1 = 0;
	a1 = (int32_t)((rgb >> 24) & (uint32_t)255);
	r1 = (int32_t)((rgb >> 16) & (uint32_t)255);
	g1 = (int32_t)((rgb >> 8) & (uint32_t)255);
	b1 = (int32_t)((rgb) & (uint32_t)255);
	r1 = $nc(MultipleGradientPaintContext::LinearRGBtoSRGB)->get(r1);
	g1 = $nc(MultipleGradientPaintContext::LinearRGBtoSRGB)->get(g1);
	b1 = $nc(MultipleGradientPaintContext::LinearRGBtoSRGB)->get(b1);
	return ((((a1 << 24) | (r1 << 16)) | (g1 << 8)) | (b1));
}

int32_t MultipleGradientPaintContext::indexIntoGradientsArrays(float position) {
	$init($MultipleGradientPaint$CycleMethod);
	if (this->cycleMethod == $MultipleGradientPaint$CycleMethod::NO_CYCLE) {
		if (position > 1) {
			position = (float)1;
		} else if (position < 0) {
			position = (float)0;
		}
	} else {
		if (this->cycleMethod == $MultipleGradientPaint$CycleMethod::REPEAT) {
			position = position - $cast(int32_t, position);
			if (position < 0) {
				position = position + 1;
			}
		} else {
			if (position < 0) {
				position = -position;
			}
			int32_t part = $cast(int32_t, position);
			position = position - part;
			if (((int32_t)(part & (uint32_t)1)) == 1) {
				position = 1 - position;
			}
		}
	}
	if (this->isSimpleLookup) {
		return $nc(this->gradient)->get($cast(int32_t, (position * this->fastGradientArraySize)));
	} else {
		for (int32_t i = 0; i < $nc(this->gradients)->length; ++i) {
			if (position < $nc(this->fractions)->get(i + 1)) {
				float delta = position - $nc(this->fractions)->get(i);
				int32_t index = $cast(int32_t, ((delta / $nc(this->normalizedIntervals)->get(i)) * (MultipleGradientPaintContext::GRADIENT_SIZE_INDEX)));
				return $nc($nc(this->gradients)->get(i))->get(index);
			}
		}
	}
	return $nc($nc(this->gradients)->get($nc(this->gradients)->length - 1))->get(MultipleGradientPaintContext::GRADIENT_SIZE_INDEX);
}

int32_t MultipleGradientPaintContext::convertSRGBtoLinearRGB(int32_t color) {
	$init(MultipleGradientPaintContext);
	float input = 0.0;
	float output = 0.0;
	input = color / 255.0f;
	if (input <= 0.04045f) {
		output = input / 12.92f;
	} else {
		output = (float)$Math::pow((input + 0.055) / 1.055, 2.4);
	}
	return $Math::round(output * 255.0f);
}

int32_t MultipleGradientPaintContext::convertLinearRGBtoSRGB(int32_t color) {
	$init(MultipleGradientPaintContext);
	float input = 0.0;
	float output = 0.0;
	input = color / 255.0f;
	if (input <= 0.0031308) {
		output = input * 12.92f;
	} else {
		output = (1.055f * ((float)$Math::pow(input, (1.0 / 2.4)))) - 0.055f;
	}
	return $Math::round(output * 255.0f);
}

$Raster* MultipleGradientPaintContext::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Raster, raster, this->saved);
	bool var$0 = raster == nullptr || $nc(raster)->getWidth() < w;
	if (var$0 || $nc(raster)->getHeight() < h) {
		$assign(raster, getCachedRaster(this->model, w, h));
		$set(this, saved, raster);
	}
	$var($DataBufferInt, rasterDB, $cast($DataBufferInt, $nc(raster)->getDataBuffer()));
	$var($ints, pixels, $nc(rasterDB)->getData(0));
	int32_t off = rasterDB->getOffset();
	int32_t scanlineStride = $nc(($cast($SinglePixelPackedSampleModel, $(raster->getSampleModel()))))->getScanlineStride();
	int32_t adjust = scanlineStride - w;
	fillRaster(pixels, off, adjust, x, y, w, h);
	return raster;
}

$Raster* MultipleGradientPaintContext::getCachedRaster($ColorModel* cm, int32_t w, int32_t h) {
	$load(MultipleGradientPaintContext);
	$synchronized(class$) {
		$init(MultipleGradientPaintContext);
		if (cm == MultipleGradientPaintContext::cachedModel) {
			if (MultipleGradientPaintContext::cached != nullptr) {
				$var($Raster, ras, $cast($Raster, $nc(MultipleGradientPaintContext::cached)->get()));
				bool var$0 = ras != nullptr && ras->getWidth() >= w;
				if (var$0 && ras->getHeight() >= h) {
					$assignStatic(MultipleGradientPaintContext::cached, nullptr);
					return ras;
				}
			}
		}
		return $nc(cm)->createCompatibleWritableRaster(w, h);
	}
}

void MultipleGradientPaintContext::putCachedRaster($ColorModel* cm, $Raster* ras) {
	$load(MultipleGradientPaintContext);
	$synchronized(class$) {
		$init(MultipleGradientPaintContext);
		if (MultipleGradientPaintContext::cached != nullptr) {
			$var($Raster, cras, $cast($Raster, $nc(MultipleGradientPaintContext::cached)->get()));
			if (cras != nullptr) {
				int32_t cw = cras->getWidth();
				int32_t ch = cras->getHeight();
				int32_t iw = $nc(ras)->getWidth();
				int32_t ih = ras->getHeight();
				if (cw >= iw && ch >= ih) {
					return;
				}
				if (cw * ch >= iw * ih) {
					return;
				}
			}
		}
		$assignStatic(MultipleGradientPaintContext::cachedModel, cm);
		$assignStatic(MultipleGradientPaintContext::cached, $new($WeakReference, ras));
	}
}

void MultipleGradientPaintContext::dispose() {
	if (this->saved != nullptr) {
		putCachedRaster(this->model, this->saved);
		$set(this, saved, nullptr);
	}
}

$ColorModel* MultipleGradientPaintContext::getColorModel() {
	return this->model;
}

void clinit$MultipleGradientPaintContext($Class* class$) {
	$assignStatic(MultipleGradientPaintContext::xrgbmodel, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	$assignStatic(MultipleGradientPaintContext::SRGBtoLinearRGB, $new($ints, 256));
	$assignStatic(MultipleGradientPaintContext::LinearRGBtoSRGB, $new($ints, 256));
	{
		for (int32_t k = 0; k < 256; ++k) {
			$nc(MultipleGradientPaintContext::SRGBtoLinearRGB)->set(k, MultipleGradientPaintContext::convertSRGBtoLinearRGB(k));
			$nc(MultipleGradientPaintContext::LinearRGBtoSRGB)->set(k, MultipleGradientPaintContext::convertLinearRGBtoSRGB(k));
		}
	}
}

MultipleGradientPaintContext::MultipleGradientPaintContext() {
}

$Class* MultipleGradientPaintContext::load$($String* name, bool initialize) {
	$loadClass(MultipleGradientPaintContext, name, initialize, &_MultipleGradientPaintContext_ClassInfo_, clinit$MultipleGradientPaintContext, allocate$MultipleGradientPaintContext);
	return class$;
}

$Class* MultipleGradientPaintContext::class$ = nullptr;

	} // awt
} // java