#include <sun/awt/X11/MotifColorUtilities.h>

#include <java/awt/Color.h>
#include <java/awt/SystemColor.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileReader.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/Math.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ACTIVE_CAPTION
#undef ACTIVE_CAPTION_BORDER
#undef ACTIVE_CAPTION_TEXT
#undef AIX
#undef BLACK
#undef CONTROL
#undef CONTROL_DK_SHADOW
#undef CONTROL_HIGHLIGHT
#undef CONTROL_LT_HIGHLIGHT
#undef CONTROL_SHADOW
#undef CONTROL_TEXT
#undef DEFAULT_COLOR
#undef INACTIVE_CAPTION
#undef INACTIVE_CAPTION_BORDER
#undef INACTIVE_CAPTION_TEXT
#undef INFO
#undef INFO_TEXT
#undef MENU
#undef MENU_TEXT
#undef MOTIF_WINDOW_COLOR
#undef SCROLLBAR
#undef TEXT
#undef TEXT_HIGHLIGHT
#undef TEXT_HIGHLIGHT_TEXT
#undef TEXT_TEXT
#undef WHITE
#undef WINDOW
#undef WINDOW_BORDER
#undef WINDOW_TEXT

using $Color = ::java::awt::Color;
using $SystemColor = ::java::awt::SystemColor;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileReader = ::java::io::FileReader;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $XAtom = ::sun::awt::X11::XAtom;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _MotifColorUtilities_FieldInfo_[] = {
	{"XmRED_LUMINOSITY", "F", nullptr, $STATIC | $FINAL, $staticField(MotifColorUtilities, XmRED_LUMINOSITY)},
	{"XmGREEN_LUMINOSITY", "F", nullptr, $STATIC | $FINAL, $staticField(MotifColorUtilities, XmGREEN_LUMINOSITY)},
	{"XmBLUE_LUMINOSITY", "F", nullptr, $STATIC | $FINAL, $staticField(MotifColorUtilities, XmBLUE_LUMINOSITY)},
	{"XmINTENSITY_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmINTENSITY_FACTOR)},
	{"XmLIGHT_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmLIGHT_FACTOR)},
	{"XmLUMINOSITY_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmLUMINOSITY_FACTOR)},
	{"XmMAX_SHORT", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmMAX_SHORT)},
	{"XmCOLOR_PERCENTILE", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_PERCENTILE)},
	{"XmDEFAULT_DARK_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmDEFAULT_DARK_THRESHOLD)},
	{"XmDEFAULT_LIGHT_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmDEFAULT_LIGHT_THRESHOLD)},
	{"XmDEFAULT_FOREGROUND_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmDEFAULT_FOREGROUND_THRESHOLD)},
	{"BLACK", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, BLACK)},
	{"WHITE", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, WHITE)},
	{"MOTIF_WINDOW_COLOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, MOTIF_WINDOW_COLOR)},
	{"DEFAULT_COLOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, DEFAULT_COLOR)},
	{"XmCOLOR_LITE_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_LITE_THRESHOLD)},
	{"XmCOLOR_DARK_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_DARK_THRESHOLD)},
	{"XmFOREGROUND_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmFOREGROUND_THRESHOLD)},
	{"XmCOLOR_LITE_SEL_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_LITE_SEL_FACTOR)},
	{"XmCOLOR_LITE_BS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_LITE_BS_FACTOR)},
	{"XmCOLOR_LITE_TS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_LITE_TS_FACTOR)},
	{"XmCOLOR_DARK_SEL_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_DARK_SEL_FACTOR)},
	{"XmCOLOR_DARK_BS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_DARK_BS_FACTOR)},
	{"XmCOLOR_DARK_TS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_DARK_TS_FACTOR)},
	{"XmCOLOR_HI_SEL_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_HI_SEL_FACTOR)},
	{"XmCOLOR_HI_BS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_HI_BS_FACTOR)},
	{"XmCOLOR_HI_TS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_HI_TS_FACTOR)},
	{"XmCOLOR_LO_SEL_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_LO_SEL_FACTOR)},
	{"XmCOLOR_LO_BS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_LO_BS_FACTOR)},
	{"XmCOLOR_LO_TS_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(MotifColorUtilities, XmCOLOR_LO_TS_FACTOR)},
	{}
};

$MethodInfo _MotifColorUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MotifColorUtilities::*)()>(&MotifColorUtilities::init$))},
	{"brightness", "(III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&MotifColorUtilities::brightness))},
	{"calculateBottomShadowFromBackground", "(III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&MotifColorUtilities::calculateBottomShadowFromBackground))},
	{"calculateForegroundFromBackground", "(III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&MotifColorUtilities::calculateForegroundFromBackground))},
	{"calculateSelectFromBackground", "(III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&MotifColorUtilities::calculateSelectFromBackground))},
	{"calculateTopShadowFromBackground", "(III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&MotifColorUtilities::calculateTopShadowFromBackground))},
	{"loadMotifDefaultColors", "([I)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*)>(&MotifColorUtilities::loadMotifDefaultColors))},
	{"loadSystemColors", "([I)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*)>(&MotifColorUtilities::loadSystemColors))},
	{"loadSystemColorsForCDE", "([I)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*)>(&MotifColorUtilities::loadSystemColorsForCDE)), "java.lang.Exception"},
	{"loadSystemColorsForCDE4", "([I[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,$ints*)>(&MotifColorUtilities::loadSystemColorsForCDE4)), "java.lang.Exception"},
	{"loadSystemColorsForCDE8", "([I[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,$ints*)>(&MotifColorUtilities::loadSystemColorsForCDE8)), "java.lang.Exception"},
	{}
};

$ClassInfo _MotifColorUtilities_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.MotifColorUtilities",
	"java.lang.Object",
	nullptr,
	_MotifColorUtilities_FieldInfo_,
	_MotifColorUtilities_MethodInfo_
};

$Object* allocate$MotifColorUtilities($Class* clazz) {
	return $of($alloc(MotifColorUtilities));
}

float MotifColorUtilities::XmRED_LUMINOSITY = 0.0;
float MotifColorUtilities::XmGREEN_LUMINOSITY = 0.0;
float MotifColorUtilities::XmBLUE_LUMINOSITY = 0.0;

void MotifColorUtilities::init$() {
}

int32_t MotifColorUtilities::brightness(int32_t red, int32_t green, int32_t blue) {
	$init(MotifColorUtilities);
	float brightness = 0.0;
	float intensity = 0.0;
	float light = 0.0;
	float luminosity = 0.0;
	float maxprimary = 0.0;
	float minprimary = 0.0;
	red = red << 8;
	green = green << 8;
	blue = blue << 8;
	intensity = (float)((red + green + blue) / 3);
	luminosity = (float)$cast(int32_t, ((MotifColorUtilities::XmRED_LUMINOSITY * (float)red) + (MotifColorUtilities::XmGREEN_LUMINOSITY * (float)green) + (MotifColorUtilities::XmBLUE_LUMINOSITY * (float)blue)));
	maxprimary = ((float)((red > green) ? ((red > blue) ? red : blue) : ((green > blue) ? green : blue)));
	minprimary = ((float)((red < green) ? ((red < blue) ? red : blue) : ((green < blue) ? green : blue)));
	light = (minprimary + maxprimary) / 2;
	brightness = ((intensity * MotifColorUtilities::XmINTENSITY_FACTOR) + (light * MotifColorUtilities::XmLIGHT_FACTOR) + (luminosity * MotifColorUtilities::XmLUMINOSITY_FACTOR)) / 100;
	return $Math::round(brightness);
}

int32_t MotifColorUtilities::calculateForegroundFromBackground(int32_t r, int32_t g, int32_t b) {
	$init(MotifColorUtilities);
	int32_t foreground = MotifColorUtilities::WHITE;
	int32_t brightness = MotifColorUtilities::brightness(r, g, b);
	if (brightness > MotifColorUtilities::XmFOREGROUND_THRESHOLD) {
		foreground = MotifColorUtilities::BLACK;
	} else {
		foreground = MotifColorUtilities::WHITE;
	}
	return foreground;
}

int32_t MotifColorUtilities::calculateTopShadowFromBackground(int32_t r, int32_t g, int32_t b) {
	$init(MotifColorUtilities);
	float color_value = 0.0;
	float f = 0.0;
	int32_t br = r << 8;
	int32_t bg = g << 8;
	int32_t bb = b << 8;
	int32_t brightness = MotifColorUtilities::brightness(r, g, b);
	float red = 0.0;
	float green = 0.0;
	float blue = 0.0;
	if (brightness < MotifColorUtilities::XmCOLOR_DARK_THRESHOLD) {
		color_value = (float)br;
		color_value += MotifColorUtilities::XmCOLOR_DARK_TS_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value += MotifColorUtilities::XmCOLOR_DARK_TS_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value += MotifColorUtilities::XmCOLOR_DARK_TS_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		blue = color_value;
	} else if (brightness > MotifColorUtilities::XmCOLOR_LITE_THRESHOLD) {
		color_value = (float)br;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_TS_FACTOR) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_TS_FACTOR) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_TS_FACTOR) / 100;
		blue = color_value;
	} else {
		f = (float)(MotifColorUtilities::XmCOLOR_LO_TS_FACTOR + ($div(brightness * (MotifColorUtilities::XmCOLOR_HI_TS_FACTOR - MotifColorUtilities::XmCOLOR_LO_TS_FACTOR), MotifColorUtilities::XmMAX_SHORT)));
		color_value = (float)br;
		color_value += f * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value += f * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value += f * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		blue = color_value;
	}
	int32_t ired = ($cast(int32_t, red)) >> 8;
	int32_t igreen = ($cast(int32_t, green)) >> 8;
	int32_t iblue = ($cast(int32_t, blue)) >> 8;
	int32_t ret = (((int32_t)0xFF000000 | (ired << 16)) | (igreen << 8)) | iblue;
	return ret;
}

int32_t MotifColorUtilities::calculateBottomShadowFromBackground(int32_t r, int32_t g, int32_t b) {
	$init(MotifColorUtilities);
	float color_value = 0.0;
	float f = 0.0;
	int32_t br = r << 8;
	int32_t bg = g << 8;
	int32_t bb = b << 8;
	int32_t brightness = MotifColorUtilities::brightness(r, g, b);
	float red = 0.0;
	float green = 0.0;
	float blue = 0.0;
	if (brightness < MotifColorUtilities::XmCOLOR_DARK_THRESHOLD) {
		color_value = (float)br;
		color_value += MotifColorUtilities::XmCOLOR_DARK_BS_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value += MotifColorUtilities::XmCOLOR_DARK_BS_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value += MotifColorUtilities::XmCOLOR_DARK_BS_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		blue = color_value;
	} else if (brightness > MotifColorUtilities::XmCOLOR_LITE_THRESHOLD) {
		color_value = (float)br;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_BS_FACTOR) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_BS_FACTOR) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_BS_FACTOR) / 100;
		blue = color_value;
	} else {
		f = (float)(MotifColorUtilities::XmCOLOR_LO_BS_FACTOR + ($div(brightness * (MotifColorUtilities::XmCOLOR_HI_BS_FACTOR - MotifColorUtilities::XmCOLOR_LO_BS_FACTOR), MotifColorUtilities::XmMAX_SHORT)));
		color_value = (float)br;
		color_value -= (color_value * f) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value -= (color_value * f) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value -= (color_value * f) / 100;
		blue = color_value;
	}
	int32_t ired = ($cast(int32_t, red)) >> 8;
	int32_t igreen = ($cast(int32_t, green)) >> 8;
	int32_t iblue = ($cast(int32_t, blue)) >> 8;
	int32_t ret = (((int32_t)0xFF000000 | (ired << 16)) | (igreen << 8)) | iblue;
	return ret;
}

int32_t MotifColorUtilities::calculateSelectFromBackground(int32_t r, int32_t g, int32_t b) {
	$init(MotifColorUtilities);
	float color_value = 0.0;
	float f = 0.0;
	int32_t br = r << 8;
	int32_t bg = g << 8;
	int32_t bb = b << 8;
	int32_t brightness = MotifColorUtilities::brightness(r, g, b);
	float red = 0.0;
	float green = 0.0;
	float blue = 0.0;
	if (brightness < MotifColorUtilities::XmCOLOR_DARK_THRESHOLD) {
		color_value = (float)br;
		color_value += MotifColorUtilities::XmCOLOR_DARK_SEL_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value += MotifColorUtilities::XmCOLOR_DARK_SEL_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value += MotifColorUtilities::XmCOLOR_DARK_SEL_FACTOR * (MotifColorUtilities::XmMAX_SHORT - color_value) / 100;
		blue = color_value;
	} else if (brightness > MotifColorUtilities::XmCOLOR_LITE_THRESHOLD) {
		color_value = (float)br;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_SEL_FACTOR) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_SEL_FACTOR) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value -= (color_value * MotifColorUtilities::XmCOLOR_LITE_SEL_FACTOR) / 100;
		blue = color_value;
	} else {
		f = (float)(MotifColorUtilities::XmCOLOR_LO_SEL_FACTOR + ($div(brightness * (MotifColorUtilities::XmCOLOR_HI_SEL_FACTOR - MotifColorUtilities::XmCOLOR_LO_SEL_FACTOR), MotifColorUtilities::XmMAX_SHORT)));
		color_value = (float)br;
		color_value -= (color_value * f) / 100;
		red = color_value;
		color_value = (float)bg;
		color_value -= (color_value * f) / 100;
		green = color_value;
		color_value = (float)bb;
		color_value -= (color_value * f) / 100;
		blue = color_value;
	}
	int32_t ired = ($cast(int32_t, red)) >> 8;
	int32_t igreen = ($cast(int32_t, green)) >> 8;
	int32_t iblue = ($cast(int32_t, blue)) >> 8;
	int32_t ret = (((int32_t)0xFF000000 | (ired << 16)) | (igreen << 8)) | iblue;
	return ret;
}

void MotifColorUtilities::loadSystemColorsForCDE($ints* systemColors) {
	$init(MotifColorUtilities);
	$useLocalCurrentObjectStackCache();
	$var($XAtom, resourceManager, $XAtom::get("RESOURCE_MANAGER"_s));
	$var($String, resourceString, $nc(resourceManager)->getProperty($XToolkit::getDefaultRootWindow()));
	int32_t index = $nc(resourceString)->indexOf("ColorPalette:"_s);
	int32_t len = resourceString->length();
	while ((index < len) && (resourceString->charAt(index) != u':')) {
		++index;
	}
	++index;
	if (resourceString->charAt(index) == u'\t') {
		++index;
	}
	$var($String, paletteFile, resourceString->substring(index, resourceString->indexOf("\n"_s, index)));
	$var($String, paletteFilePath, $str({$($System::getProperty("user.home"_s)), "/.dt/palettes/"_s, paletteFile}));
	$var($File, pFile, $new($File, paletteFilePath));
	if (!pFile->exists()) {
		$assign(paletteFilePath, $str({"/usr/dt/palettes/"_s, paletteFile}));
		$assign(pFile, $new($File, paletteFilePath));
		if (!pFile->exists()) {
			$throwNew($FileNotFoundException, $$str({"Could not open : "_s, paletteFilePath}));
		}
	}
	$var($BufferedReader, bfr, $new($BufferedReader, $$new($FileReader, pFile)));
	$var($ints, colors, $new($ints, 8));
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	$var($String, temp, nullptr);
	$var($String, color, nullptr);
	for (int32_t i = 0; i < 8; ++i) {
		$assign(temp, bfr->readLine());
		$assign(color, $nc(temp)->substring(1, temp->length()));
		r = $nc($($Integer::valueOf($(color->substring(0, 4)), 16)))->intValue() >> 8;
		g = $nc($($Integer::valueOf($(color->substring(4, 8)), 16)))->intValue() >> 8;
		b = $nc($($Integer::valueOf($(color->substring(8, 12)), 16)))->intValue() >> 8;
		colors->set(i, (((int32_t)0xFF000000 | (r << 16)) | (g << 8)) | b);
	}
	$init($OSInfo$OSType);
	int32_t numOfColor = $OSInfo::getOSType() == $OSInfo$OSType::AIX ? 8 : 4;
	int32_t idx = resourceString->indexOf("ColorUse:"_s);
	if (idx > -1) {
		while ((idx < len) && (resourceString->charAt(idx) != u':')) {
			++idx;
		}
		++idx;
		if (resourceString->charAt(idx) == u'\t') {
			++idx;
		}
		$var($String, colorUse, resourceString->substring(idx, resourceString->indexOf("\n"_s, idx)));
		if ("HIGH_COLOR"_s->equalsIgnoreCase(colorUse)) {
			numOfColor = 8;
		} else if ("MEDIUM_COLOR"_s->equalsIgnoreCase(colorUse)) {
			numOfColor = 4;
		}
	}
	if (4 == numOfColor) {
		loadSystemColorsForCDE4(systemColors, colors);
	} else {
		loadSystemColorsForCDE8(systemColors, colors);
	}
}

void MotifColorUtilities::loadSystemColorsForCDE4($ints* systemColors, $ints* colors) {
	$init(MotifColorUtilities);
	$useLocalCurrentObjectStackCache();
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	$nc(systemColors)->set($SystemColor::ACTIVE_CAPTION, $nc(colors)->get(0));
	systemColors->set($SystemColor::ACTIVE_CAPTION_BORDER, colors->get(0));
	systemColors->set($SystemColor::INACTIVE_CAPTION, colors->get(1));
	systemColors->set($SystemColor::INACTIVE_CAPTION_BORDER, colors->get(1));
	systemColors->set($SystemColor::WINDOW, colors->get(1));
	systemColors->set($SystemColor::WINDOW_BORDER, colors->get(1));
	systemColors->set($SystemColor::MENU, colors->get(1));
	systemColors->set($SystemColor::TEXT, colors->get(3));
	systemColors->set($SystemColor::SCROLLBAR, colors->get(1));
	systemColors->set($SystemColor::CONTROL, colors->get(1));
	int32_t activeFore = 0;
	int32_t inactiveFore = 0;
	int32_t textFore = 0;
	r = ((int32_t)(colors->get(0) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(0) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(0) & (uint32_t)255));
	activeFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	r = ((int32_t)(colors->get(1) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(1) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(1) & (uint32_t)255));
	inactiveFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	int32_t top_shadow = MotifColorUtilities::calculateTopShadowFromBackground(r, g, b);
	int32_t bottom_shadow = MotifColorUtilities::calculateBottomShadowFromBackground(r, g, b);
	r = ((int32_t)(colors->get(3) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(3) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(3) & (uint32_t)255));
	textFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	systemColors->set($SystemColor::ACTIVE_CAPTION_TEXT, activeFore);
	systemColors->set($SystemColor::INACTIVE_CAPTION_TEXT, inactiveFore);
	systemColors->set($SystemColor::WINDOW_TEXT, inactiveFore);
	systemColors->set($SystemColor::MENU_TEXT, inactiveFore);
	systemColors->set($SystemColor::TEXT_TEXT, textFore);
	systemColors->set($SystemColor::TEXT_HIGHLIGHT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::TEXT_HIGHLIGHT_TEXT, MotifColorUtilities::DEFAULT_COLOR);
	systemColors->set($SystemColor::CONTROL_TEXT, inactiveFore);
	$var($Color, tmp, $new($Color, top_shadow));
	systemColors->set($SystemColor::CONTROL_HIGHLIGHT, top_shadow);
	systemColors->set($SystemColor::CONTROL_LT_HIGHLIGHT, $nc($(tmp->brighter()))->getRGB());
	$assign(tmp, $new($Color, bottom_shadow));
	systemColors->set($SystemColor::CONTROL_SHADOW, bottom_shadow);
	systemColors->set($SystemColor::CONTROL_DK_SHADOW, $nc($(tmp->darker()))->getRGB());
}

void MotifColorUtilities::loadSystemColorsForCDE8($ints* systemColors, $ints* colors) {
	$init(MotifColorUtilities);
	$useLocalCurrentObjectStackCache();
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	$nc(systemColors)->set($SystemColor::ACTIVE_CAPTION, $nc(colors)->get(0));
	systemColors->set($SystemColor::ACTIVE_CAPTION_BORDER, colors->get(0));
	systemColors->set($SystemColor::INACTIVE_CAPTION, colors->get(1));
	systemColors->set($SystemColor::INACTIVE_CAPTION_BORDER, colors->get(1));
	systemColors->set($SystemColor::WINDOW, colors->get(4));
	systemColors->set($SystemColor::MENU, colors->get(5));
	systemColors->set($SystemColor::TEXT, colors->get(3));
	systemColors->set($SystemColor::TEXT_HIGHLIGHT_TEXT, colors->get(3));
	systemColors->set($SystemColor::SCROLLBAR, colors->get(4));
	systemColors->set($SystemColor::CONTROL, colors->get(4));
	systemColors->set($SystemColor::INFO, colors->get(4));
	int32_t activeFore = 0;
	int32_t inactiveFore = 0;
	int32_t textFore = 0;
	r = ((int32_t)(colors->get(0) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(0) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(0) & (uint32_t)255));
	activeFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	r = ((int32_t)(colors->get(1) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(1) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(1) & (uint32_t)255));
	inactiveFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	r = ((int32_t)(colors->get(3) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(3) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(3) & (uint32_t)255));
	textFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	r = ((int32_t)(colors->get(4) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(4) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(4) & (uint32_t)255));
	int32_t windowFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	int32_t top_shadow = MotifColorUtilities::calculateTopShadowFromBackground(r, g, b);
	int32_t bottom_shadow = MotifColorUtilities::calculateBottomShadowFromBackground(r, g, b);
	r = ((int32_t)(colors->get(5) & (uint32_t)0x00FF0000)) >> 16;
	g = ((int32_t)(colors->get(5) & (uint32_t)0x0000FF00)) >> 8;
	b = ((int32_t)(colors->get(5) & (uint32_t)255));
	int32_t menuFore = MotifColorUtilities::calculateForegroundFromBackground(r, g, b);
	systemColors->set($SystemColor::ACTIVE_CAPTION_TEXT, activeFore);
	systemColors->set($SystemColor::INACTIVE_CAPTION_TEXT, inactiveFore);
	systemColors->set($SystemColor::WINDOW_BORDER, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::WINDOW_TEXT, windowFore);
	systemColors->set($SystemColor::MENU_TEXT, menuFore);
	systemColors->set($SystemColor::TEXT_TEXT, textFore);
	systemColors->set($SystemColor::TEXT_HIGHLIGHT, textFore);
	systemColors->set($SystemColor::CONTROL_TEXT, windowFore);
	$var($Color, tmp, $new($Color, top_shadow));
	systemColors->set($SystemColor::CONTROL_HIGHLIGHT, top_shadow);
	systemColors->set($SystemColor::CONTROL_LT_HIGHLIGHT, $nc($(tmp->brighter()))->getRGB());
	$assign(tmp, $new($Color, bottom_shadow));
	systemColors->set($SystemColor::CONTROL_SHADOW, bottom_shadow);
	systemColors->set($SystemColor::CONTROL_DK_SHADOW, $nc($(tmp->darker()))->getRGB());
	systemColors->set($SystemColor::INFO_TEXT, windowFore);
}

void MotifColorUtilities::loadMotifDefaultColors($ints* systemColors) {
	$init(MotifColorUtilities);
	$useLocalCurrentObjectStackCache();
	$nc(systemColors)->set($SystemColor::WINDOW, MotifColorUtilities::MOTIF_WINDOW_COLOR);
	systemColors->set($SystemColor::TEXT, MotifColorUtilities::WHITE);
	systemColors->set($SystemColor::WINDOW_TEXT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::MENU_TEXT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::ACTIVE_CAPTION_TEXT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::INACTIVE_CAPTION_TEXT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::TEXT_TEXT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::TEXT_HIGHLIGHT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::TEXT_HIGHLIGHT_TEXT, MotifColorUtilities::DEFAULT_COLOR);
	systemColors->set($SystemColor::CONTROL_TEXT, MotifColorUtilities::BLACK);
	systemColors->set($SystemColor::WINDOW_BORDER, MotifColorUtilities::DEFAULT_COLOR);
	systemColors->set($SystemColor::MENU, MotifColorUtilities::DEFAULT_COLOR);
	systemColors->set($SystemColor::SCROLLBAR, MotifColorUtilities::DEFAULT_COLOR);
	systemColors->set($SystemColor::CONTROL, MotifColorUtilities::MOTIF_WINDOW_COLOR);
	int32_t r = ((int32_t)(MotifColorUtilities::DEFAULT_COLOR & (uint32_t)0x00FF0000)) >> 16;
	int32_t g = ((int32_t)(MotifColorUtilities::DEFAULT_COLOR & (uint32_t)0x0000FF00)) >> 8;
	int32_t b = ((int32_t)(MotifColorUtilities::DEFAULT_COLOR & (uint32_t)255));
	int32_t top_shadow = MotifColorUtilities::calculateTopShadowFromBackground(r, g, b);
	int32_t bottom_shadow = MotifColorUtilities::calculateBottomShadowFromBackground(r, g, b);
	$var($Color, tmp, $new($Color, top_shadow));
	systemColors->set($SystemColor::CONTROL_HIGHLIGHT, top_shadow);
	systemColors->set($SystemColor::CONTROL_LT_HIGHLIGHT, $nc($(tmp->brighter()))->getRGB());
	$assign(tmp, $new($Color, bottom_shadow));
	systemColors->set($SystemColor::CONTROL_SHADOW, bottom_shadow);
	systemColors->set($SystemColor::CONTROL_DK_SHADOW, $nc($(tmp->darker()))->getRGB());
}

void MotifColorUtilities::loadSystemColors($ints* systemColors) {
	$init(MotifColorUtilities);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ("Linux"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "os.name"_s)))))) {
		loadMotifDefaultColors(systemColors);
	} else {
		try {
			loadSystemColorsForCDE(systemColors);
		} catch ($Exception& e) {
			loadMotifDefaultColors(systemColors);
		}
	}
}

MotifColorUtilities::MotifColorUtilities() {
}

void clinit$MotifColorUtilities($Class* class$) {
	MotifColorUtilities::XmRED_LUMINOSITY = 0.3f;
	MotifColorUtilities::XmGREEN_LUMINOSITY = 0.59f;
	MotifColorUtilities::XmBLUE_LUMINOSITY = 0.11f;
}

$Class* MotifColorUtilities::load$($String* name, bool initialize) {
	$loadClass(MotifColorUtilities, name, initialize, &_MotifColorUtilities_ClassInfo_, clinit$MotifColorUtilities, allocate$MotifColorUtilities);
	return class$;
}

$Class* MotifColorUtilities::class$ = nullptr;

		} // X11
	} // awt
} // sun