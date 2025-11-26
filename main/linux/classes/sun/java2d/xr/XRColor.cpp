#include <sun/java2d/xr/XRColor.h>

#include <java/awt/Color.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FULL_ALPHA
#undef NO_ALPHA

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRColor_FieldInfo_[] = {
	{"FULL_ALPHA", "Lsun/java2d/xr/XRColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRColor, FULL_ALPHA)},
	{"NO_ALPHA", "Lsun/java2d/xr/XRColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRColor, NO_ALPHA)},
	{"red", "I", nullptr, 0, $field(XRColor, red)},
	{"green", "I", nullptr, 0, $field(XRColor, green)},
	{"blue", "I", nullptr, 0, $field(XRColor, blue)},
	{"alpha", "I", nullptr, 0, $field(XRColor, alpha)},
	{}
};

$MethodInfo _XRColor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XRColor::*)()>(&XRColor::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(XRColor::*)(int32_t,int32_t,int32_t,int32_t)>(&XRColor::init$))},
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(XRColor::*)($Color*)>(&XRColor::init$))},
	{"ARGBPrePixelToXRColors", "([I)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($ints*)>(&XRColor::ARGBPrePixelToXRColors))},
	{"byteToXRColorValue", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XRColor::byteToXRColorValue))},
	{"getAlpha", "()I", nullptr, $PUBLIC},
	{"getBlue", "()I", nullptr, $PUBLIC},
	{"getGreen", "()I", nullptr, $PUBLIC},
	{"getRed", "()I", nullptr, $PUBLIC},
	{"setAlpha", "(I)V", nullptr, $PUBLIC},
	{"setColorValues", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setColorValues", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRColor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRColor",
	"java.lang.Object",
	nullptr,
	_XRColor_FieldInfo_,
	_XRColor_MethodInfo_
};

$Object* allocate$XRColor($Class* clazz) {
	return $of($alloc(XRColor));
}

XRColor* XRColor::FULL_ALPHA = nullptr;
XRColor* XRColor::NO_ALPHA = nullptr;

void XRColor::init$() {
	this->red = 0;
	this->green = 0;
	this->blue = 0;
	this->alpha = 0;
}

void XRColor::init$(int32_t alpha, int32_t red, int32_t green, int32_t blue) {
	this->alpha = alpha;
	this->red = red;
	this->green = green;
	this->blue = blue;
}

void XRColor::init$($Color* color) {
	setColorValues(color);
}

void XRColor::setColorValues($Color* color) {
	this->alpha = byteToXRColorValue($nc(color)->getAlpha());
	int32_t var$0 = $nc(color)->getRed();
	this->red = byteToXRColorValue($cast(int32_t, (var$0 * color->getAlpha() / 255.0)));
	int32_t var$1 = $nc(color)->getGreen();
	this->green = byteToXRColorValue($cast(int32_t, (var$1 * color->getAlpha() / 255.0)));
	int32_t var$2 = $nc(color)->getBlue();
	this->blue = byteToXRColorValue($cast(int32_t, (var$2 * color->getAlpha() / 255.0)));
}

$ints* XRColor::ARGBPrePixelToXRColors($ints* pixels) {
	$init(XRColor);
	$useLocalCurrentObjectStackCache();
	$var($ints, colorValues, $new($ints, $nc(pixels)->length * 4));
	$var(XRColor, c, $new(XRColor));
	for (int32_t i = 0; i < pixels->length; ++i) {
		c->setColorValues(pixels->get(i));
		colorValues->set(i * 4 + 0, c->alpha);
		colorValues->set(i * 4 + 1, c->red);
		colorValues->set(i * 4 + 2, c->green);
		colorValues->set(i * 4 + 3, c->blue);
	}
	return colorValues;
}

void XRColor::setColorValues(int32_t pixel) {
	int64_t pix = $XRUtils::intToULong(pixel);
	this->alpha = (int32_t)((((int64_t)(pix & (uint64_t)(int64_t)(int32_t)0xFF000000)) >> 16) + 255);
	this->red = (int32_t)((((int64_t)(pix & (uint64_t)(int64_t)0x00FF0000)) >> 8) + 255);
	this->green = (int32_t)((((int64_t)(pix & (uint64_t)(int64_t)0x0000FF00)) >> 0) + 255);
	this->blue = (int32_t)((((int64_t)(pix & (uint64_t)(int64_t)255)) << 8) + 255);
	if (this->alpha == 255) {
		this->alpha = 0;
	}
}

int32_t XRColor::byteToXRColorValue(int32_t byteValue) {
	$init(XRColor);
	int32_t xrValue = 0;
	if (byteValue != 0) {
		if (byteValue == 255) {
			xrValue = 0x0000FFFF;
		} else {
			xrValue = ((byteValue << 8) + 255);
		}
	}
	return xrValue;
}

$String* XRColor::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"A:"_s, $$str(this->alpha), "  R:"_s, $$str(this->red), "  G:"_s, $$str(this->green), " B:"_s, $$str(this->blue)});
}

void XRColor::setAlpha(int32_t alpha) {
	this->alpha = alpha;
}

int32_t XRColor::getAlpha() {
	return this->alpha;
}

int32_t XRColor::getRed() {
	return this->red;
}

int32_t XRColor::getGreen() {
	return this->green;
}

int32_t XRColor::getBlue() {
	return this->blue;
}

void clinit$XRColor($Class* class$) {
	$assignStatic(XRColor::FULL_ALPHA, $new(XRColor, 0x0000FFFF, 0, 0, 0));
	$assignStatic(XRColor::NO_ALPHA, $new(XRColor, 0, 0, 0, 0));
}

XRColor::XRColor() {
}

$Class* XRColor::load$($String* name, bool initialize) {
	$loadClass(XRColor, name, initialize, &_XRColor_ClassInfo_, clinit$XRColor, allocate$XRColor);
	return class$;
}

$Class* XRColor::class$ = nullptr;

		} // xr
	} // java2d
} // sun