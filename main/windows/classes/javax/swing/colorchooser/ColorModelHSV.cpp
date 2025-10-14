#include <javax/swing/colorchooser/ColorModelHSV.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/colorchooser/ColorModel.h>
#include <javax/swing/colorchooser/ColorModelHSL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorModel = ::javax::swing::colorchooser::ColorModel;
using $ColorModelHSL = ::javax::swing::colorchooser::ColorModelHSL;

namespace javax {
	namespace swing {
		namespace colorchooser {

$MethodInfo _ColorModelHSV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorModelHSV::*)()>(&ColorModelHSV::init$))},
	{"HSVtoRGB", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($floats*,$floats*)>(&ColorModelHSV::HSVtoRGB))},
	{"RGBtoHSV", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($floats*,$floats*)>(&ColorModelHSV::RGBtoHSV))},
	{"getColor", "([F)I", nullptr, 0},
	{"getDefault", "(I)F", nullptr, 0},
	{"getMaximum", "(I)I", nullptr, 0},
	{"setColor", "(I[F)V", nullptr, 0},
	{}
};

$ClassInfo _ColorModelHSV_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.ColorModelHSV",
	"javax.swing.colorchooser.ColorModel",
	nullptr,
	nullptr,
	_ColorModelHSV_MethodInfo_
};

$Object* allocate$ColorModelHSV($Class* clazz) {
	return $of($alloc(ColorModelHSV));
}

void ColorModelHSV::init$() {
	$ColorModel::init$("hsv"_s, $$new($StringArray, {
		"Hue"_s,
		"Saturation"_s,
		"Value"_s,
		"Transparency"_s
	}));
}

void ColorModelHSV::setColor(int32_t color, $floats* space) {
	$ColorModel::setColor(color, space);
	RGBtoHSV(space, space);
	$nc(space)->set(3, 1.0f - space->get(3));
}

int32_t ColorModelHSV::getColor($floats* space) {
	$nc(space)->set(3, 1.0f - space->get(3));
	HSVtoRGB(space, space);
	return $ColorModel::getColor(space);
}

int32_t ColorModelHSV::getMaximum(int32_t index) {
	return (index == 0) ? 360 : 100;
}

float ColorModelHSV::getDefault(int32_t index) {
	return (index == 0) ? -1.0f : 1.0f;
}

$floats* ColorModelHSV::HSVtoRGB($floats* hsv, $floats* rgb$renamed) {
	$init(ColorModelHSV);
	$var($floats, rgb, rgb$renamed);
	if (rgb == nullptr) {
		$assign(rgb, $new($floats, 3));
	}
	float hue = $nc(hsv)->get(0);
	float saturation = hsv->get(1);
	float value = hsv->get(2);
	$nc(rgb)->set(0, value);
	rgb->set(1, value);
	rgb->set(2, value);
	if (saturation > 0.0f) {
		hue = (hue < 1.0f) ? hue * 6.0f : 0.0f;
		int32_t integer = $cast(int32_t, hue);
		float f = hue - (float)integer;
		switch (integer) {
		case 0:
			{
				(*rgb)[1] *= 1.0f - saturation * (1.0f - f);
				(*rgb)[2] *= 1.0f - saturation;
				break;
			}
		case 1:
			{
				(*rgb)[0] *= 1.0f - saturation * f;
				(*rgb)[2] *= 1.0f - saturation;
				break;
			}
		case 2:
			{
				(*rgb)[0] *= 1.0f - saturation;
				(*rgb)[2] *= 1.0f - saturation * (1.0f - f);
				break;
			}
		case 3:
			{
				(*rgb)[0] *= 1.0f - saturation;
				(*rgb)[1] *= 1.0f - saturation * f;
				break;
			}
		case 4:
			{
				(*rgb)[0] *= 1.0f - saturation * (1.0f - f);
				(*rgb)[1] *= 1.0f - saturation;
				break;
			}
		case 5:
			{
				(*rgb)[1] *= 1.0f - saturation;
				(*rgb)[2] *= 1.0f - saturation * f;
				break;
			}
		}
	}
	return rgb;
}

$floats* ColorModelHSV::RGBtoHSV($floats* rgb, $floats* hsv$renamed) {
	$init(ColorModelHSV);
	$var($floats, hsv, hsv$renamed);
	if (hsv == nullptr) {
		$assign(hsv, $new($floats, 3));
	}
	float max = $ColorModelHSL::max($nc(rgb)->get(0), rgb->get(1), rgb->get(2));
	float min = $ColorModelHSL::min($nc(rgb)->get(0), rgb->get(1), rgb->get(2));
	float saturation = max - min;
	if (saturation > 0.0f) {
		saturation /= max;
	}
	$nc(hsv)->set(0, $ColorModelHSL::getHue($nc(rgb)->get(0), rgb->get(1), rgb->get(2), max, min));
	hsv->set(1, saturation);
	hsv->set(2, max);
	return hsv;
}

ColorModelHSV::ColorModelHSV() {
}

$Class* ColorModelHSV::load$($String* name, bool initialize) {
	$loadClass(ColorModelHSV, name, initialize, &_ColorModelHSV_ClassInfo_, allocate$ColorModelHSV);
	return class$;
}

$Class* ColorModelHSV::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax