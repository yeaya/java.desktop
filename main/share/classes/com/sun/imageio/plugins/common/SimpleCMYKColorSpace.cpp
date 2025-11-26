#include <com/sun/imageio/plugins/common/SimpleCMYKColorSpace.h>

#include <java/awt/color/ColorSpace.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef C
#undef CS_LINEAR_RGB
#undef K
#undef M
#undef TYPE_CMYK
#undef Y

using $ColorSpace = ::java::awt::color::ColorSpace;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _SimpleCMYKColorSpace_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleCMYKColorSpace, serialVersionUID)},
	{"theInstance", "Ljava/awt/color/ColorSpace;", nullptr, $PRIVATE | $STATIC, $staticField(SimpleCMYKColorSpace, theInstance)},
	{"csRGB", "Ljava/awt/color/ColorSpace;", nullptr, $PRIVATE, $field(SimpleCMYKColorSpace, csRGB)},
	{"power1", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleCMYKColorSpace, power1)},
	{}
};

$MethodInfo _SimpleCMYKColorSpace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SimpleCMYKColorSpace::*)()>(&SimpleCMYKColorSpace::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fromCIEXYZ", "([F)[F", nullptr, $PUBLIC},
	{"fromRGB", "([F)[F", nullptr, $PUBLIC},
	{"getInstance", "()Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $STATIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$ColorSpace*(*)()>(&SimpleCMYKColorSpace::getInstance))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toCIEXYZ", "([F)[F", nullptr, $PUBLIC},
	{"toRGB", "([F)[F", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleCMYKColorSpace_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.imageio.plugins.common.SimpleCMYKColorSpace",
	"java.awt.color.ColorSpace",
	nullptr,
	_SimpleCMYKColorSpace_FieldInfo_,
	_SimpleCMYKColorSpace_MethodInfo_
};

$Object* allocate$SimpleCMYKColorSpace($Class* clazz) {
	return $of($alloc(SimpleCMYKColorSpace));
}

$ColorSpace* SimpleCMYKColorSpace::theInstance = nullptr;
double SimpleCMYKColorSpace::power1 = 0.0;

$ColorSpace* SimpleCMYKColorSpace::getInstance() {
	$load(SimpleCMYKColorSpace);
	$synchronized(class$) {
		$init(SimpleCMYKColorSpace);
		if (SimpleCMYKColorSpace::theInstance == nullptr) {
			$assignStatic(SimpleCMYKColorSpace::theInstance, $new(SimpleCMYKColorSpace));
		}
		return SimpleCMYKColorSpace::theInstance;
	}
}

void SimpleCMYKColorSpace::init$() {
	$ColorSpace::init$($ColorSpace::TYPE_CMYK, 4);
	$set(this, csRGB, $ColorSpace::getInstance($ColorSpace::CS_LINEAR_RGB));
}

bool SimpleCMYKColorSpace::equals(Object$* o) {
	return o != nullptr && $instanceOf(SimpleCMYKColorSpace, o);
}

int32_t SimpleCMYKColorSpace::hashCode() {
	return $nc($of(SimpleCMYKColorSpace::theInstance))->hashCode();
}

$floats* SimpleCMYKColorSpace::toRGB($floats* colorvalue) {
	float C = $nc(colorvalue)->get(0);
	float M = colorvalue->get(1);
	float Y = colorvalue->get(2);
	float K = colorvalue->get(3);
	float K1 = 1.0f - K;
	$var($floats, rgbvalue, $new($floats, {
		K1 * (1.0f - C),
		K1 * (1.0f - M),
		K1 * (1.0f - Y)
	}));
	for (int32_t i = 0; i < 3; ++i) {
		float v = rgbvalue->get(i);
		if (v < 0.0f) {
			v = 0.0f;
		}
		if (v < 0.0031308f) {
			rgbvalue->set(i, 12.92f * v);
		} else {
			if (v > 1.0f) {
				v = 1.0f;
			}
			rgbvalue->set(i, (float)(1.055 * $Math::pow(v, SimpleCMYKColorSpace::power1) - 0.055));
		}
	}
	return rgbvalue;
}

$floats* SimpleCMYKColorSpace::fromRGB($floats* rgbvalue) {
	for (int32_t i = 0; i < 3; ++i) {
		if ($nc(rgbvalue)->get(i) < 0.040449936f) {
			(*rgbvalue)[i] /= 12.92f;
		} else {
			rgbvalue->set(i, (float)($Math::pow((rgbvalue->get(i) + 0.055) / 1.055, 2.4)));
		}
	}
	float C = 1.0f - $nc(rgbvalue)->get(0);
	float M = 1.0f - rgbvalue->get(1);
	float Y = 1.0f - rgbvalue->get(2);
	float K = $Math::min(C, $Math::min(M, Y));
	if (K != 1.0f) {
		float K1 = 1.0f - K;
		C = (C - K) / K1;
		M = (M - K) / K1;
		Y = (Y - K) / K1;
	} else {
		C = (M = (Y = 0.0f));
	}
	return $new($floats, {
		C,
		M,
		Y,
		K
	});
}

$floats* SimpleCMYKColorSpace::toCIEXYZ($floats* colorvalue) {
	return $nc(this->csRGB)->toCIEXYZ($(toRGB(colorvalue)));
}

$floats* SimpleCMYKColorSpace::fromCIEXYZ($floats* xyzvalue) {
	return fromRGB($($nc(this->csRGB)->fromCIEXYZ(xyzvalue)));
}

void clinit$SimpleCMYKColorSpace($Class* class$) {
	SimpleCMYKColorSpace::power1 = 1.0 / 2.4;
	$assignStatic(SimpleCMYKColorSpace::theInstance, nullptr);
}

SimpleCMYKColorSpace::SimpleCMYKColorSpace() {
}

$Class* SimpleCMYKColorSpace::load$($String* name, bool initialize) {
	$loadClass(SimpleCMYKColorSpace, name, initialize, &_SimpleCMYKColorSpace_ClassInfo_, clinit$SimpleCMYKColorSpace, allocate$SimpleCMYKColorSpace);
	return class$;
}

$Class* SimpleCMYKColorSpace::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com