#include <com/sun/imageio/plugins/tiff/TIFFCIELabColorConverter.h>

#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef B
#undef G
#undef R
#undef THRESHOLD
#undef X
#undef Y
#undef Z

using $TIFFColorConverter = ::com::sun::imageio::plugins::tiff::TIFFColorConverter;
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
				namespace tiff {

$FieldInfo _TIFFCIELabColorConverter_FieldInfo_[] = {
	{"Xn", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFCIELabColorConverter, Xn)},
	{"Yn", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFCIELabColorConverter, Yn)},
	{"Zn", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFCIELabColorConverter, Zn)},
	{"THRESHOLD", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFCIELabColorConverter, THRESHOLD)},
	{}
};

$MethodInfo _TIFFCIELabColorConverter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFCIELabColorConverter::*)()>(&TIFFCIELabColorConverter::init$))},
	{"clamp", "(F)F", nullptr, $PRIVATE, $method(static_cast<float(TIFFCIELabColorConverter::*)(float)>(&TIFFCIELabColorConverter::clamp))},
	{"clamp2", "(F)F", nullptr, $PRIVATE, $method(static_cast<float(TIFFCIELabColorConverter::*)(float)>(&TIFFCIELabColorConverter::clamp2))},
	{"fromRGB", "(FFF[F)V", nullptr, $PUBLIC},
	{"toRGB", "(FFF[F)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFCIELabColorConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFCIELabColorConverter",
	"com.sun.imageio.plugins.tiff.TIFFColorConverter",
	nullptr,
	_TIFFCIELabColorConverter_FieldInfo_,
	_TIFFCIELabColorConverter_MethodInfo_
};

$Object* allocate$TIFFCIELabColorConverter($Class* clazz) {
	return $of($alloc(TIFFCIELabColorConverter));
}

float TIFFCIELabColorConverter::Xn = 0.0;
float TIFFCIELabColorConverter::Yn = 0.0;
float TIFFCIELabColorConverter::Zn = 0.0;
float TIFFCIELabColorConverter::THRESHOLD = 0.0;

void TIFFCIELabColorConverter::init$() {
	$TIFFColorConverter::init$();
}

float TIFFCIELabColorConverter::clamp(float x) {
	if (x < 0.0f) {
		return 0.0f;
	} else if (x > 100.0f) {
		return 255.0f;
	} else {
		return x * (255.0f / 100.0f);
	}
}

float TIFFCIELabColorConverter::clamp2(float x) {
	if (x < 0.0f) {
		return 0.0f;
	} else if (x > 255.0f) {
		return 255.0f;
	} else {
		return x;
	}
}

void TIFFCIELabColorConverter::fromRGB(float r, float g, float b, $floats* result) {
	float X = 0.412453f * r + 0.35758f * g + 0.180423f * b;
	float Y = 0.212671f * r + 0.71516f * g + 0.072169f * b;
	float Z = 0.019334f * r + 0.119193f * g + 0.950227f * b;
	float YYn = $div(Y, TIFFCIELabColorConverter::Yn);
	float XXn = $div(X, TIFFCIELabColorConverter::Xn);
	float ZZn = $div(Z, TIFFCIELabColorConverter::Zn);
	if (YYn < 0.008856f) {
		YYn = 7.787f * YYn + 16.0f / 116.0f;
	} else {
		YYn = (float)$Math::pow(YYn, 1.0 / 3.0);
	}
	if (XXn < 0.008856f) {
		XXn = 7.787f * XXn + 16.0f / 116.0f;
	} else {
		XXn = (float)$Math::pow(XXn, 1.0 / 3.0);
	}
	if (ZZn < 0.008856f) {
		ZZn = 7.787f * ZZn + 16.0f / 116.0f;
	} else {
		ZZn = (float)$Math::pow(ZZn, 1.0 / 3.0);
	}
	float LStar = 116.0f * YYn - 16.0f;
	float aStar = 500.0f * (XXn - YYn);
	float bStar = 200.0f * (YYn - ZZn);
	LStar *= 255.0f / 100.0f;
	if (aStar < 0.0f) {
		aStar += 256.0f;
	}
	if (bStar < 0.0f) {
		bStar += 256.0f;
	}
	$nc(result)->set(0, clamp2(LStar));
	result->set(1, clamp2(aStar));
	result->set(2, clamp2(bStar));
}

void TIFFCIELabColorConverter::toRGB(float x0, float x1, float x2, $floats* rgb) {
	float LStar = x0 * 100.0f / 255.0f;
	float aStar = (x1 > 128.0f) ? (x1 - 256.0f) : x1;
	float bStar = (x2 > 128.0f) ? (x2 - 256.0f) : x2;
	float YYn = 0.0;
	float fY = 0.0;
	if (LStar < 8.0f) {
		YYn = LStar / 903.3f;
		fY = 7.787f * YYn + 16.0f / 116.0f;
	} else {
		float YYn_cubeRoot = (LStar + 16.0f) / 116.0f;
		YYn = YYn_cubeRoot * YYn_cubeRoot * YYn_cubeRoot;
		fY = (float)$Math::pow(YYn, 1.0 / 3.0);
	}
	float Y = YYn * TIFFCIELabColorConverter::Yn;
	float fX = fY + (aStar / 500.0f);
	float X = 0.0;
	if (fX <= TIFFCIELabColorConverter::THRESHOLD) {
		X = TIFFCIELabColorConverter::Xn * (fX - 16.0f / 116.0f) / 7.787f;
	} else {
		X = TIFFCIELabColorConverter::Xn * fX * fX * fX;
	}
	float fZ = fY - bStar / 200.0f;
	float Z = 0.0;
	if (fZ <= TIFFCIELabColorConverter::THRESHOLD) {
		Z = TIFFCIELabColorConverter::Zn * (fZ - 16.0f / 116.0f) / 7.787f;
	} else {
		Z = TIFFCIELabColorConverter::Zn * fZ * fZ * fZ;
	}
	float R = 3.240479f * X - 1.53715f * Y - 0.498535f * Z;
	float G = -0.969256f * X + 1.875992f * Y + 0.041556f * Z;
	float B = 0.055648f * X - 0.204043f * Y + 1.057311f * Z;
	$nc(rgb)->set(0, clamp(R));
	rgb->set(1, clamp(G));
	rgb->set(2, clamp(B));
}

void clinit$TIFFCIELabColorConverter($Class* class$) {
	TIFFCIELabColorConverter::Xn = 95.047f;
	TIFFCIELabColorConverter::Yn = 100.0f;
	TIFFCIELabColorConverter::Zn = 108.883f;
	TIFFCIELabColorConverter::THRESHOLD = (float)$Math::pow(0.008856, 1.0 / 3.0);
}

TIFFCIELabColorConverter::TIFFCIELabColorConverter() {
}

$Class* TIFFCIELabColorConverter::load$($String* name, bool initialize) {
	$loadClass(TIFFCIELabColorConverter, name, initialize, &_TIFFCIELabColorConverter_ClassInfo_, clinit$TIFFCIELabColorConverter, allocate$TIFFCIELabColorConverter);
	return class$;
}

$Class* TIFFCIELabColorConverter::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com