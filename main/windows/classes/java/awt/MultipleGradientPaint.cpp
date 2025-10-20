#include <java/awt/MultipleGradientPaint.h>

#include <java/awt/Color.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef OPAQUE
#undef TRANSLUCENT

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $Paint = ::java::awt::Paint;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace awt {

$FieldInfo _MultipleGradientPaint_FieldInfo_[] = {
	{"transparency", "I", nullptr, $FINAL, $field(MultipleGradientPaint, transparency)},
	{"fractions", "[F", nullptr, $FINAL, $field(MultipleGradientPaint, fractions)},
	{"colors", "[Ljava/awt/Color;", nullptr, $FINAL, $field(MultipleGradientPaint, colors)},
	{"gradientTransform", "Ljava/awt/geom/AffineTransform;", nullptr, $FINAL, $field(MultipleGradientPaint, gradientTransform)},
	{"cycleMethod", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $FINAL, $field(MultipleGradientPaint, cycleMethod)},
	{"colorSpace", "Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $FINAL, $field(MultipleGradientPaint, colorSpace)},
	{"model", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(MultipleGradientPaint, model)},
	{"normalizedIntervals", "[F", nullptr, 0, $field(MultipleGradientPaint, normalizedIntervals)},
	{"isSimpleLookup", "Z", nullptr, 0, $field(MultipleGradientPaint, isSimpleLookup)},
	{"gradients", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[[I>;", 0, $field(MultipleGradientPaint, gradients)},
	{"gradient", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[I>;", 0, $field(MultipleGradientPaint, gradient)},
	{"fastGradientArraySize", "I", nullptr, 0, $field(MultipleGradientPaint, fastGradientArraySize)},
	{}
};

$MethodInfo _MultipleGradientPaint_MethodInfo_[] = {
	{"<init>", "([F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;Ljava/awt/MultipleGradientPaint$ColorSpaceType;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(MultipleGradientPaint::*)($floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*,$MultipleGradientPaint$ColorSpaceType*,$AffineTransform*)>(&MultipleGradientPaint::init$))},
	{"getColorSpace", "()Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$MultipleGradientPaint$ColorSpaceType*(MultipleGradientPaint::*)()>(&MultipleGradientPaint::getColorSpace))},
	{"getColors", "()[Ljava/awt/Color;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ColorArray*(MultipleGradientPaint::*)()>(&MultipleGradientPaint::getColors))},
	{"getCycleMethod", "()Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$MultipleGradientPaint$CycleMethod*(MultipleGradientPaint::*)()>(&MultipleGradientPaint::getCycleMethod))},
	{"getFractions", "()[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(MultipleGradientPaint::*)()>(&MultipleGradientPaint::getFractions))},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$AffineTransform*(MultipleGradientPaint::*)()>(&MultipleGradientPaint::getTransform))},
	{"getTransparency", "()I", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MultipleGradientPaint_InnerClassesInfo_[] = {
	{"java.awt.MultipleGradientPaint$ColorSpaceType", "java.awt.MultipleGradientPaint", "ColorSpaceType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.awt.MultipleGradientPaint$CycleMethod", "java.awt.MultipleGradientPaint", "CycleMethod", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MultipleGradientPaint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.MultipleGradientPaint",
	"java.lang.Object",
	"java.awt.Paint",
	_MultipleGradientPaint_FieldInfo_,
	_MultipleGradientPaint_MethodInfo_,
	nullptr,
	nullptr,
	_MultipleGradientPaint_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.MultipleGradientPaint$ColorSpaceType,java.awt.MultipleGradientPaint$CycleMethod"
};

$Object* allocate$MultipleGradientPaint($Class* clazz) {
	return $of($alloc(MultipleGradientPaint));
}

void MultipleGradientPaint::init$($floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod, $MultipleGradientPaint$ColorSpaceType* colorSpace, $AffineTransform* gradientTransform) {
	$useLocalCurrentObjectStackCache();
	if (fractions == nullptr) {
		$throwNew($NullPointerException, "Fractions array cannot be null"_s);
	}
	if (colors == nullptr) {
		$throwNew($NullPointerException, "Colors array cannot be null"_s);
	}
	if (cycleMethod == nullptr) {
		$throwNew($NullPointerException, "Cycle method cannot be null"_s);
	}
	if (colorSpace == nullptr) {
		$throwNew($NullPointerException, "Color space cannot be null"_s);
	}
	if (gradientTransform == nullptr) {
		$throwNew($NullPointerException, "Gradient transform cannot be null"_s);
	}
	if ($nc(fractions)->length != $nc(colors)->length) {
		$throwNew($IllegalArgumentException, "Colors and fractions must have equal size"_s);
	}
	if ($nc(colors)->length < 2) {
		$throwNew($IllegalArgumentException, "User must specify at least 2 colors"_s);
	}
	float previousFraction = -1.0f;
	{
		$var($floats, arr$, fractions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			float currentFraction = arr$->get(i$);
			{
				if (currentFraction < 0.0f || currentFraction > 1.0f) {
					$throwNew($IllegalArgumentException, $$str({"Fraction values must be in the range 0 to 1: "_s, $$str(currentFraction)}));
				}
				if (currentFraction <= previousFraction) {
					$throwNew($IllegalArgumentException, $$str({"Keyframe fractions must be increasing: "_s, $$str(currentFraction)}));
				}
				previousFraction = currentFraction;
			}
		}
	}
	bool fixFirst = false;
	bool fixLast = false;
	int32_t len = $nc(fractions)->length;
	int32_t off = 0;
	if (fractions->get(0) != 0.0f) {
		fixFirst = true;
		++len;
		++off;
	}
	if (fractions->get(fractions->length - 1) != 1.0f) {
		fixLast = true;
		++len;
	}
	$set(this, fractions, $new($floats, len));
	$System::arraycopy(fractions, 0, this->fractions, off, fractions->length);
	$set(this, colors, $new($ColorArray, len));
	$System::arraycopy(colors, 0, this->colors, off, $nc(colors)->length);
	if (fixFirst) {
		$nc(this->fractions)->set(0, 0.0f);
		$nc(this->colors)->set(0, $nc(colors)->get(0));
	}
	if (fixLast) {
		$nc(this->fractions)->set(len - 1, 1.0f);
		$nc(this->colors)->set(len - 1, $nc(colors)->get(colors->length - 1));
	}
	$set(this, colorSpace, colorSpace);
	$set(this, cycleMethod, cycleMethod);
	$set(this, gradientTransform, $new($AffineTransform, gradientTransform));
	bool opaque = true;
	for (int32_t i = 0; i < $nc(colors)->length; ++i) {
		opaque = opaque && ($nc(colors->get(i))->getAlpha() == 255);
	}
	this->transparency = opaque ? $Transparency::OPAQUE : $Transparency::TRANSLUCENT;
}

$floats* MultipleGradientPaint::getFractions() {
	return $Arrays::copyOf(this->fractions, $nc(this->fractions)->length);
}

$ColorArray* MultipleGradientPaint::getColors() {
	return $fcast($ColorArray, $Arrays::copyOf(this->colors, $nc(this->colors)->length));
}

$MultipleGradientPaint$CycleMethod* MultipleGradientPaint::getCycleMethod() {
	return this->cycleMethod;
}

$MultipleGradientPaint$ColorSpaceType* MultipleGradientPaint::getColorSpace() {
	return this->colorSpace;
}

$AffineTransform* MultipleGradientPaint::getTransform() {
	return $new($AffineTransform, this->gradientTransform);
}

int32_t MultipleGradientPaint::getTransparency() {
	return this->transparency;
}

MultipleGradientPaint::MultipleGradientPaint() {
}

$Class* MultipleGradientPaint::load$($String* name, bool initialize) {
	$loadClass(MultipleGradientPaint, name, initialize, &_MultipleGradientPaint_ClassInfo_, allocate$MultipleGradientPaint);
	return class$;
}

$Class* MultipleGradientPaint::class$ = nullptr;

	} // awt
} // java