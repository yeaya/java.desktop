#include <com/sun/java/swing/plaf/gtk/GTKColorType.h>

#include <java/awt/Color.h>
#include <java/lang/Math.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <jcpp.h>

#undef BLACK
#undef DARK
#undef HLS_COLORS
#undef HLS_COLOR_LOCK
#undef LIGHT
#undef MAX_COUNT
#undef MID
#undef WHITE

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ColorType = ::javax::swing::plaf::synth::ColorType;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKColorType_FieldInfo_[] = {
	{"LIGHT", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKColorType, LIGHT)},
	{"DARK", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKColorType, DARK)},
	{"MID", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKColorType, MID)},
	{"BLACK", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKColorType, BLACK)},
	{"WHITE", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKColorType, WHITE)},
	{"MAX_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKColorType, MAX_COUNT)},
	{"HLS_COLORS", "[F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKColorType, HLS_COLORS)},
	{"HLS_COLOR_LOCK", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKColorType, HLS_COLOR_LOCK)},
	{}
};

$MethodInfo _GTKColorType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(GTKColorType::*)($String*)>(&GTKColorType::init$))},
	{"adjustColor", "(Ljava/awt/Color;FFF)Ljava/awt/Color;", nullptr, $STATIC, $method(static_cast<$Color*(*)($Color*,float,float,float)>(&GTKColorType::adjustColor))},
	{"hlsToRGB", "(FFF)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(float,float,float)>(&GTKColorType::hlsToRGB))},
	{"hlsValue", "(FFF)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(float,float,float)>(&GTKColorType::hlsValue))},
	{"rgbToHLS", "(I[F)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)(int32_t,$floats*)>(&GTKColorType::rgbToHLS))},
	{}
};

$ClassInfo _GTKColorType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKColorType",
	"javax.swing.plaf.synth.ColorType",
	nullptr,
	_GTKColorType_FieldInfo_,
	_GTKColorType_MethodInfo_
};

$Object* allocate$GTKColorType($Class* clazz) {
	return $of($alloc(GTKColorType));
}

$ColorType* GTKColorType::LIGHT = nullptr;
$ColorType* GTKColorType::DARK = nullptr;
$ColorType* GTKColorType::MID = nullptr;
$ColorType* GTKColorType::BLACK = nullptr;
$ColorType* GTKColorType::WHITE = nullptr;
int32_t GTKColorType::MAX_COUNT = 0;
$floats* GTKColorType::HLS_COLORS = nullptr;
$Object* GTKColorType::HLS_COLOR_LOCK = nullptr;

int32_t GTKColorType::hlsToRGB(float h, float l, float s) {
	$init(GTKColorType);
	float m2 = (l <= 0.5f) ? (l * (1 + s)) : (l + s - l * s);
	float m1 = 2.0f * l - m2;
	float r = 0.0;
	float g = 0.0;
	float b = 0.0;
	if (s == 0.0) {
		if (h == 0.0) {
			r = (g = (b = l));
		} else {
			r = (g = (b = (float)0));
		}
	} else {
		r = hlsValue(m1, m2, h + 120);
		g = hlsValue(m1, m2, h);
		b = hlsValue(m1, m2, h - 120);
	}
	return ((($cast(int32_t, (r * 255))) << 16) | (($cast(int32_t, (g * 255.0))) << 8)) | ($cast(int32_t, (b * 255)));
}

float GTKColorType::hlsValue(float n1, float n2, float h) {
	$init(GTKColorType);
	if (h > 360) {
		h -= 360;
	} else if (h < 0) {
		h += 360;
	}
	if (h < 60) {
		return n1 + (n2 - n1) * h / 60.0f;
	} else if (h < 180) {
		return n2;
	} else if (h < 240) {
		return n1 + (n2 - n1) * (240.0f - h) / 60.0f;
	}
	return n1;
}

$floats* GTKColorType::rgbToHLS(int32_t rgb, $floats* hls$renamed) {
	$init(GTKColorType);
	$var($floats, hls, hls$renamed);
	float r = (((int32_t)(rgb & (uint32_t)0x00FF0000)) >> 16) / 255.0f;
	float g = (((int32_t)(rgb & (uint32_t)0x0000FF00)) >> 8) / 255.0f;
	float b = ((int32_t)(rgb & (uint32_t)255)) / 255.0f;
	float max = $Math::max($Math::max(r, g), b);
	float min = $Math::min($Math::min(r, g), b);
	float l = (max + min) / 2.0f;
	float s = (float)0;
	float h = (float)0;
	if (max != min) {
		float delta = max - min;
		s = (l <= 0.5f) ? (delta / (max + min)) : (delta / (2.0f - max - min));
		if (r == max) {
			h = (g - b) / delta;
		} else if (g == max) {
			h = 2.0f + (b - r) / delta;
		} else {
			h = 4.0f + (r - g) / delta;
		}
		h *= 60.0f;
		if (h < 0) {
			h += 360.0f;
		}
	}
	if (hls == nullptr) {
		$assign(hls, $new($floats, 3));
	}
	$nc(hls)->set(0, h);
	hls->set(1, l);
	hls->set(2, s);
	return hls;
}

$Color* GTKColorType::adjustColor($Color* color, float hFactor, float lFactor, float sFactor) {
	$init(GTKColorType);
	float h = 0.0;
	float l = 0.0;
	float s = 0.0;
	$synchronized(GTKColorType::HLS_COLOR_LOCK) {
		$var($floats, hls, rgbToHLS($nc(color)->getRGB(), GTKColorType::HLS_COLORS));
		h = $nc(hls)->get(0);
		l = hls->get(1);
		s = hls->get(2);
	}
	h = $Math::min((float)360, hFactor * h);
	l = $Math::min((float)1, lFactor * l);
	s = $Math::min((float)1, sFactor * s);
	return $new($ColorUIResource, hlsToRGB(h, l, s));
}

void GTKColorType::init$($String* name) {
	$ColorType::init$(name);
}

void clinit$GTKColorType($Class* class$) {
	$assignStatic(GTKColorType::LIGHT, $new(GTKColorType, "Light"_s));
	$assignStatic(GTKColorType::DARK, $new(GTKColorType, "Dark"_s));
	$assignStatic(GTKColorType::MID, $new(GTKColorType, "Mid"_s));
	$assignStatic(GTKColorType::BLACK, $new(GTKColorType, "Black"_s));
	$assignStatic(GTKColorType::WHITE, $new(GTKColorType, "White"_s));
	$assignStatic(GTKColorType::HLS_COLORS, $new($floats, 3));
	$assignStatic(GTKColorType::HLS_COLOR_LOCK, $new($Object));
	{
		GTKColorType::MAX_COUNT = $nc(GTKColorType::WHITE)->getID() + 1;
	}
}

GTKColorType::GTKColorType() {
}

$Class* GTKColorType::load$($String* name, bool initialize) {
	$loadClass(GTKColorType, name, initialize, &_GTKColorType_ClassInfo_, clinit$GTKColorType, allocate$GTKColorType);
	return class$;
}

$Class* GTKColorType::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com