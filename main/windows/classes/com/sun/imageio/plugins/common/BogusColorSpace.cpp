#include <com/sun/imageio/plugins/common/BogusColorSpace.h>

#include <java/awt/color/ColorSpace.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef TYPE_GRAY

using $ColorSpace = ::java::awt::color::ColorSpace;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$MethodInfo _BogusColorSpace_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BogusColorSpace::*)(int32_t)>(&BogusColorSpace::init$))},
	{"fromCIEXYZ", "([F)[F", nullptr, $PUBLIC},
	{"fromRGB", "([F)[F", nullptr, $PUBLIC},
	{"getType", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BogusColorSpace::getType))},
	{"toCIEXYZ", "([F)[F", nullptr, $PUBLIC},
	{"toRGB", "([F)[F", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BogusColorSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.BogusColorSpace",
	"java.awt.color.ColorSpace",
	nullptr,
	nullptr,
	_BogusColorSpace_MethodInfo_
};

$Object* allocate$BogusColorSpace($Class* clazz) {
	return $of($alloc(BogusColorSpace));
}

int32_t BogusColorSpace::getType(int32_t numComponents) {
	$init(BogusColorSpace);
	if (numComponents < 1) {
		$throwNew($IllegalArgumentException, "numComponents < 1!"_s);
	}
	int32_t type = 0;
	switch (numComponents) {
	case 1:
		{
			type = $ColorSpace::TYPE_GRAY;
			break;
		}
	default:
		{
			type = numComponents + 10;
		}
	}
	return type;
}

void BogusColorSpace::init$(int32_t numComponents) {
	$ColorSpace::init$(getType(numComponents), numComponents);
}

$floats* BogusColorSpace::toRGB($floats* colorvalue) {
	if ($nc(colorvalue)->length < getNumComponents()) {
		$throwNew($ArrayIndexOutOfBoundsException, "colorvalue.length < getNumComponents()"_s);
	}
	$var($floats, rgbvalue, $new($floats, 3));
	$System::arraycopy(colorvalue, 0, rgbvalue, 0, $Math::min(3, getNumComponents()));
	return colorvalue;
}

$floats* BogusColorSpace::fromRGB($floats* rgbvalue) {
	if ($nc(rgbvalue)->length < 3) {
		$throwNew($ArrayIndexOutOfBoundsException, "rgbvalue.length < 3"_s);
	}
	$var($floats, colorvalue, $new($floats, getNumComponents()));
	$System::arraycopy(rgbvalue, 0, colorvalue, 0, $Math::min(3, colorvalue->length));
	return rgbvalue;
}

$floats* BogusColorSpace::toCIEXYZ($floats* colorvalue) {
	if ($nc(colorvalue)->length < getNumComponents()) {
		$throwNew($ArrayIndexOutOfBoundsException, "colorvalue.length < getNumComponents()"_s);
	}
	$var($floats, xyzvalue, $new($floats, 3));
	$System::arraycopy(colorvalue, 0, xyzvalue, 0, $Math::min(3, getNumComponents()));
	return colorvalue;
}

$floats* BogusColorSpace::fromCIEXYZ($floats* xyzvalue) {
	if ($nc(xyzvalue)->length < 3) {
		$throwNew($ArrayIndexOutOfBoundsException, "xyzvalue.length < 3"_s);
	}
	$var($floats, colorvalue, $new($floats, getNumComponents()));
	$System::arraycopy(xyzvalue, 0, colorvalue, 0, $Math::min(3, colorvalue->length));
	return xyzvalue;
}

BogusColorSpace::BogusColorSpace() {
}

$Class* BogusColorSpace::load$($String* name, bool initialize) {
	$loadClass(BogusColorSpace, name, initialize, &_BogusColorSpace_ClassInfo_, allocate$BogusColorSpace);
	return class$;
}

$Class* BogusColorSpace::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com