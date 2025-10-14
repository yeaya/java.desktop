#include <javax/swing/colorchooser/ColorModelCMYK.h>

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

$MethodInfo _ColorModelCMYK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorModelCMYK::*)()>(&ColorModelCMYK::init$))},
	{"CMYKtoRGB", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($floats*,$floats*)>(&ColorModelCMYK::CMYKtoRGB))},
	{"RGBtoCMYK", "([F[F)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($floats*,$floats*)>(&ColorModelCMYK::RGBtoCMYK))},
	{"getColor", "([F)I", nullptr, 0},
	{"setColor", "(I[F)V", nullptr, 0},
	{}
};

$ClassInfo _ColorModelCMYK_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.ColorModelCMYK",
	"javax.swing.colorchooser.ColorModel",
	nullptr,
	nullptr,
	_ColorModelCMYK_MethodInfo_
};

$Object* allocate$ColorModelCMYK($Class* clazz) {
	return $of($alloc(ColorModelCMYK));
}

void ColorModelCMYK::init$() {
	$ColorModel::init$("cmyk"_s, $$new($StringArray, {
		"Cyan"_s,
		"Magenta"_s,
		"Yellow"_s,
		"Black"_s,
		"Alpha"_s
	}));
}

void ColorModelCMYK::setColor(int32_t color, $floats* space) {
	$ColorModel::setColor(color, space);
	$nc(space)->set(4, space->get(3));
	RGBtoCMYK(space, space);
}

int32_t ColorModelCMYK::getColor($floats* space) {
	CMYKtoRGB(space, space);
	$nc(space)->set(3, space->get(4));
	return $ColorModel::getColor(space);
}

$floats* ColorModelCMYK::CMYKtoRGB($floats* cmyk, $floats* rgb$renamed) {
	$init(ColorModelCMYK);
	$var($floats, rgb, rgb$renamed);
	if (rgb == nullptr) {
		$assign(rgb, $new($floats, 3));
	}
	$nc(rgb)->set(0, 1.0f + $nc(cmyk)->get(0) * cmyk->get(3) - cmyk->get(3) - cmyk->get(0));
	rgb->set(1, 1.0f + cmyk->get(1) * cmyk->get(3) - cmyk->get(3) - cmyk->get(1));
	rgb->set(2, 1.0f + cmyk->get(2) * cmyk->get(3) - cmyk->get(3) - cmyk->get(2));
	return rgb;
}

$floats* ColorModelCMYK::RGBtoCMYK($floats* rgb, $floats* cmyk$renamed) {
	$init(ColorModelCMYK);
	$var($floats, cmyk, cmyk$renamed);
	if (cmyk == nullptr) {
		$assign(cmyk, $new($floats, 4));
	}
	float max = $ColorModelHSL::max($nc(rgb)->get(0), rgb->get(1), rgb->get(2));
	if (max > 0.0f) {
		$nc(cmyk)->set(0, 1.0f - $nc(rgb)->get(0) / max);
		cmyk->set(1, 1.0f - rgb->get(1) / max);
		cmyk->set(2, 1.0f - rgb->get(2) / max);
	} else {
		$nc(cmyk)->set(0, 0.0f);
		cmyk->set(1, 0.0f);
		cmyk->set(2, 0.0f);
	}
	$nc(cmyk)->set(3, 1.0f - max);
	return cmyk;
}

ColorModelCMYK::ColorModelCMYK() {
}

$Class* ColorModelCMYK::load$($String* name, bool initialize) {
	$loadClass(ColorModelCMYK, name, initialize, &_ColorModelCMYK_ClassInfo_, allocate$ColorModelCMYK);
	return class$;
}

$Class* ColorModelCMYK::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax