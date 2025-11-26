#include <javax/swing/colorchooser/ColorModelHSL.h>

#include <javax/swing/colorchooser/ColorModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorModel = ::javax::swing::colorchooser::ColorModel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$MethodInfo _ColorModelHSL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorModelHSL::*)()>(&ColorModelHSL::init$))},
	{"HSLtoRGB", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($floats*,$floats*)>(&ColorModelHSL::HSLtoRGB))},
	{"RGBtoHSL", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($floats*,$floats*)>(&ColorModelHSL::RGBtoHSL))},
	{"getColor", "([F)I", nullptr, 0},
	{"getDefault", "(I)F", nullptr, 0},
	{"getHue", "(FFFFF)F", nullptr, $STATIC, $method(static_cast<float(*)(float,float,float,float,float)>(&ColorModelHSL::getHue))},
	{"getMaximum", "(I)I", nullptr, 0},
	{"max", "(FFF)F", nullptr, $STATIC, $method(static_cast<float(*)(float,float,float)>(&ColorModelHSL::max))},
	{"min", "(FFF)F", nullptr, $STATIC, $method(static_cast<float(*)(float,float,float)>(&ColorModelHSL::min))},
	{"normalize", "(FFF)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(float,float,float)>(&ColorModelHSL::normalize))},
	{"setColor", "(I[F)V", nullptr, 0},
	{}
};

$ClassInfo _ColorModelHSL_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.ColorModelHSL",
	"javax.swing.colorchooser.ColorModel",
	nullptr,
	nullptr,
	_ColorModelHSL_MethodInfo_
};

$Object* allocate$ColorModelHSL($Class* clazz) {
	return $of($alloc(ColorModelHSL));
}

void ColorModelHSL::init$() {
	$ColorModel::init$("hsl"_s, $$new($StringArray, {
		"Hue"_s,
		"Saturation"_s,
		"Lightness"_s,
		"Transparency"_s
	}));
}

void ColorModelHSL::setColor(int32_t color, $floats* space) {
	$ColorModel::setColor(color, space);
	RGBtoHSL(space, space);
	$nc(space)->set(3, 1.0f - space->get(3));
}

int32_t ColorModelHSL::getColor($floats* space) {
	$nc(space)->set(3, 1.0f - space->get(3));
	HSLtoRGB(space, space);
	return $ColorModel::getColor(space);
}

int32_t ColorModelHSL::getMaximum(int32_t index) {
	return (index == 0) ? 360 : 100;
}

float ColorModelHSL::getDefault(int32_t index) {
	return (index == 0) ? -1.0f : (index == 2) ? 0.5f : 1.0f;
}

$floats* ColorModelHSL::HSLtoRGB($floats* hsl, $floats* rgb$renamed) {
	$init(ColorModelHSL);
	$var($floats, rgb, rgb$renamed);
	if (rgb == nullptr) {
		$assign(rgb, $new($floats, 3));
	}
	float hue = $nc(hsl)->get(0);
	float saturation = hsl->get(1);
	float lightness = hsl->get(2);
	if (saturation > 0.0f) {
		hue = (hue < 1.0f) ? hue * 6.0f : 0.0f;
		float q = lightness + saturation * ((lightness > 0.5f) ? 1.0f - lightness : lightness);
		float p = 2.0f * lightness - q;
		$nc(rgb)->set(0, normalize(q, p, (hue < 4.0f) ? (hue + 2.0f) : (hue - 4.0f)));
		rgb->set(1, normalize(q, p, hue));
		rgb->set(2, normalize(q, p, (hue < 2.0f) ? (hue + 4.0f) : (hue - 2.0f)));
	} else {
		$nc(rgb)->set(0, lightness);
		rgb->set(1, lightness);
		rgb->set(2, lightness);
	}
	return rgb;
}

$floats* ColorModelHSL::RGBtoHSL($floats* rgb, $floats* hsl$renamed) {
	$init(ColorModelHSL);
	$var($floats, hsl, hsl$renamed);
	if (hsl == nullptr) {
		$assign(hsl, $new($floats, 3));
	}
	float max = ColorModelHSL::max($nc(rgb)->get(0), rgb->get(1), rgb->get(2));
	float min = ColorModelHSL::min($nc(rgb)->get(0), rgb->get(1), rgb->get(2));
	float summa = max + min;
	float saturation = max - min;
	if (saturation > 0.0f) {
		saturation /= (summa > 1.0f) ? 2.0f - summa : summa;
	}
	$nc(hsl)->set(0, getHue($nc(rgb)->get(0), rgb->get(1), rgb->get(2), max, min));
	hsl->set(1, saturation);
	hsl->set(2, summa / 2.0f);
	return hsl;
}

float ColorModelHSL::min(float red, float green, float blue) {
	$init(ColorModelHSL);
	float min = (red < green) ? red : green;
	return (min < blue) ? min : blue;
}

float ColorModelHSL::max(float red, float green, float blue) {
	$init(ColorModelHSL);
	float max = (red > green) ? red : green;
	return (max > blue) ? max : blue;
}

float ColorModelHSL::getHue(float red, float green, float blue, float max, float min) {
	$init(ColorModelHSL);
	float hue = max - min;
	if (hue > 0.0f) {
		if (max == red) {
			hue = (green - blue) / hue;
			if (hue < 0.0f) {
				hue += 6.0f;
			}
		} else if (max == green) {
			hue = 2.0f + (blue - red) / hue;
		} else {
			hue = 4.0f + (red - green) / hue;
		}
		hue /= 6.0f;
	}
	return hue;
}

float ColorModelHSL::normalize(float q, float p, float color) {
	$init(ColorModelHSL);
	if (color < 1.0f) {
		return p + (q - p) * color;
	}
	if (color < 3.0f) {
		return q;
	}
	if (color < 4.0f) {
		return p + (q - p) * (4.0f - color);
	}
	return p;
}

ColorModelHSL::ColorModelHSL() {
}

$Class* ColorModelHSL::load$($String* name, bool initialize) {
	$loadClass(ColorModelHSL, name, initialize, &_ColorModelHSL_ClassInfo_, allocate$ColorModelHSL);
	return class$;
}

$Class* ColorModelHSL::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax