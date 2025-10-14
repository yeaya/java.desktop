#include <sun/awt/SunHints.h>

#include <java/awt/RenderingHints$Key.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints$Key.h>
#include <sun/awt/SunHints$LCDContrastKey.h>
#include <sun/awt/SunHints$Value.h>
#include <jcpp.h>

#undef INTKEY_AATEXT_LCD_CONTRAST
#undef INTKEY_ALPHA_INTERPOLATION
#undef INTKEY_ANTIALIASING
#undef INTKEY_COLOR_RENDERING
#undef INTKEY_DITHERING
#undef INTKEY_FRACTIONALMETRICS
#undef INTKEY_INTERPOLATION
#undef INTKEY_RENDERING
#undef INTKEY_RESOLUTION_VARIANT
#undef INTKEY_STROKE_CONTROL
#undef INTKEY_TEXT_ANTIALIASING
#undef INTVAL_ALPHA_INTERPOLATION_DEFAULT
#undef INTVAL_ALPHA_INTERPOLATION_QUALITY
#undef INTVAL_ALPHA_INTERPOLATION_SPEED
#undef INTVAL_ANTIALIAS_DEFAULT
#undef INTVAL_ANTIALIAS_OFF
#undef INTVAL_ANTIALIAS_ON
#undef INTVAL_COLOR_RENDER_DEFAULT
#undef INTVAL_COLOR_RENDER_QUALITY
#undef INTVAL_COLOR_RENDER_SPEED
#undef INTVAL_DITHER_DEFAULT
#undef INTVAL_DITHER_DISABLE
#undef INTVAL_DITHER_ENABLE
#undef INTVAL_FRACTIONALMETRICS_DEFAULT
#undef INTVAL_FRACTIONALMETRICS_OFF
#undef INTVAL_FRACTIONALMETRICS_ON
#undef INTVAL_INTERPOLATION_BICUBIC
#undef INTVAL_INTERPOLATION_BILINEAR
#undef INTVAL_INTERPOLATION_NEAREST_NEIGHBOR
#undef INTVAL_RENDER_DEFAULT
#undef INTVAL_RENDER_QUALITY
#undef INTVAL_RENDER_SPEED
#undef INTVAL_RESOLUTION_VARIANT_BASE
#undef INTVAL_RESOLUTION_VARIANT_DEFAULT
#undef INTVAL_RESOLUTION_VARIANT_DPI_FIT
#undef INTVAL_RESOLUTION_VARIANT_SIZE_FIT
#undef INTVAL_STROKE_DEFAULT
#undef INTVAL_STROKE_NORMALIZE
#undef INTVAL_STROKE_PURE
#undef INTVAL_TEXT_ANTIALIAS_DEFAULT
#undef INTVAL_TEXT_ANTIALIAS_GASP
#undef INTVAL_TEXT_ANTIALIAS_LCD_HBGR
#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB
#undef INTVAL_TEXT_ANTIALIAS_LCD_VBGR
#undef INTVAL_TEXT_ANTIALIAS_LCD_VRGB
#undef INTVAL_TEXT_ANTIALIAS_OFF
#undef INTVAL_TEXT_ANTIALIAS_ON
#undef KEY_ALPHA_INTERPOLATION
#undef KEY_ANTIALIASING
#undef KEY_COLOR_RENDERING
#undef KEY_DITHERING
#undef KEY_FRACTIONALMETRICS
#undef KEY_INTERPOLATION
#undef KEY_RENDERING
#undef KEY_RESOLUTION_VARIANT
#undef KEY_STROKE_CONTROL
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_ANTIALIAS_LCD_CONTRAST
#undef NUM_KEYS
#undef VALS_PER_KEY
#undef VALUE_ALPHA_INTERPOLATION_DEFAULT
#undef VALUE_ALPHA_INTERPOLATION_QUALITY
#undef VALUE_ALPHA_INTERPOLATION_SPEED
#undef VALUE_ANTIALIAS_DEFAULT
#undef VALUE_ANTIALIAS_OFF
#undef VALUE_ANTIALIAS_ON
#undef VALUE_COLOR_RENDER_DEFAULT
#undef VALUE_COLOR_RENDER_QUALITY
#undef VALUE_COLOR_RENDER_SPEED
#undef VALUE_DITHER_DEFAULT
#undef VALUE_DITHER_DISABLE
#undef VALUE_DITHER_ENABLE
#undef VALUE_FRACTIONALMETRICS_DEFAULT
#undef VALUE_FRACTIONALMETRICS_OFF
#undef VALUE_FRACTIONALMETRICS_ON
#undef VALUE_INTERPOLATION_BICUBIC
#undef VALUE_INTERPOLATION_BILINEAR
#undef VALUE_INTERPOLATION_NEAREST_NEIGHBOR
#undef VALUE_RENDER_DEFAULT
#undef VALUE_RENDER_QUALITY
#undef VALUE_RENDER_SPEED
#undef VALUE_RESOLUTION_VARIANT_BASE
#undef VALUE_RESOLUTION_VARIANT_DEFAULT
#undef VALUE_RESOLUTION_VARIANT_DPI_FIT
#undef VALUE_RESOLUTION_VARIANT_SIZE_FIT
#undef VALUE_STROKE_DEFAULT
#undef VALUE_STROKE_NORMALIZE
#undef VALUE_STROKE_PURE
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_GASP
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#undef VALUE_TEXT_ANTIALIAS_LCD_VBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_VRGB
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef VALUE_TEXT_ANTIALIAS_ON

using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints$Key = ::sun::awt::SunHints$Key;
using $SunHints$LCDContrastKey = ::sun::awt::SunHints$LCDContrastKey;
using $SunHints$Value = ::sun::awt::SunHints$Value;

namespace sun {
	namespace awt {

$FieldInfo _SunHints_FieldInfo_[] = {
	{"NUM_KEYS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunHints, NUM_KEYS)},
	{"VALS_PER_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunHints, VALS_PER_KEY)},
	{"INTKEY_RENDERING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_RENDERING)},
	{"INTVAL_RENDER_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_RENDER_DEFAULT)},
	{"INTVAL_RENDER_SPEED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_RENDER_SPEED)},
	{"INTVAL_RENDER_QUALITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_RENDER_QUALITY)},
	{"INTKEY_ANTIALIASING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_ANTIALIASING)},
	{"INTVAL_ANTIALIAS_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_ANTIALIAS_DEFAULT)},
	{"INTVAL_ANTIALIAS_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_ANTIALIAS_OFF)},
	{"INTVAL_ANTIALIAS_ON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_ANTIALIAS_ON)},
	{"INTKEY_TEXT_ANTIALIASING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_TEXT_ANTIALIASING)},
	{"INTVAL_TEXT_ANTIALIAS_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_DEFAULT)},
	{"INTVAL_TEXT_ANTIALIAS_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_OFF)},
	{"INTVAL_TEXT_ANTIALIAS_ON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_ON)},
	{"INTVAL_TEXT_ANTIALIAS_GASP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_GASP)},
	{"INTVAL_TEXT_ANTIALIAS_LCD_HRGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_LCD_HRGB)},
	{"INTVAL_TEXT_ANTIALIAS_LCD_HBGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_LCD_HBGR)},
	{"INTVAL_TEXT_ANTIALIAS_LCD_VRGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_LCD_VRGB)},
	{"INTVAL_TEXT_ANTIALIAS_LCD_VBGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_TEXT_ANTIALIAS_LCD_VBGR)},
	{"INTKEY_FRACTIONALMETRICS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_FRACTIONALMETRICS)},
	{"INTVAL_FRACTIONALMETRICS_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_FRACTIONALMETRICS_DEFAULT)},
	{"INTVAL_FRACTIONALMETRICS_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_FRACTIONALMETRICS_OFF)},
	{"INTVAL_FRACTIONALMETRICS_ON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_FRACTIONALMETRICS_ON)},
	{"INTKEY_DITHERING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_DITHERING)},
	{"INTVAL_DITHER_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_DITHER_DEFAULT)},
	{"INTVAL_DITHER_DISABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_DITHER_DISABLE)},
	{"INTVAL_DITHER_ENABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_DITHER_ENABLE)},
	{"INTKEY_INTERPOLATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_INTERPOLATION)},
	{"INTVAL_INTERPOLATION_NEAREST_NEIGHBOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_INTERPOLATION_NEAREST_NEIGHBOR)},
	{"INTVAL_INTERPOLATION_BILINEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_INTERPOLATION_BILINEAR)},
	{"INTVAL_INTERPOLATION_BICUBIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_INTERPOLATION_BICUBIC)},
	{"INTKEY_ALPHA_INTERPOLATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_ALPHA_INTERPOLATION)},
	{"INTVAL_ALPHA_INTERPOLATION_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_ALPHA_INTERPOLATION_DEFAULT)},
	{"INTVAL_ALPHA_INTERPOLATION_SPEED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_ALPHA_INTERPOLATION_SPEED)},
	{"INTVAL_ALPHA_INTERPOLATION_QUALITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_ALPHA_INTERPOLATION_QUALITY)},
	{"INTKEY_COLOR_RENDERING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_COLOR_RENDERING)},
	{"INTVAL_COLOR_RENDER_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_COLOR_RENDER_DEFAULT)},
	{"INTVAL_COLOR_RENDER_SPEED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_COLOR_RENDER_SPEED)},
	{"INTVAL_COLOR_RENDER_QUALITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_COLOR_RENDER_QUALITY)},
	{"INTKEY_STROKE_CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_STROKE_CONTROL)},
	{"INTVAL_STROKE_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_STROKE_DEFAULT)},
	{"INTVAL_STROKE_NORMALIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_STROKE_NORMALIZE)},
	{"INTVAL_STROKE_PURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_STROKE_PURE)},
	{"INTKEY_RESOLUTION_VARIANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_RESOLUTION_VARIANT)},
	{"INTVAL_RESOLUTION_VARIANT_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_RESOLUTION_VARIANT_DEFAULT)},
	{"INTVAL_RESOLUTION_VARIANT_BASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_RESOLUTION_VARIANT_BASE)},
	{"INTVAL_RESOLUTION_VARIANT_SIZE_FIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_RESOLUTION_VARIANT_SIZE_FIT)},
	{"INTVAL_RESOLUTION_VARIANT_DPI_FIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTVAL_RESOLUTION_VARIANT_DPI_FIT)},
	{"INTKEY_AATEXT_LCD_CONTRAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunHints, INTKEY_AATEXT_LCD_CONTRAST)},
	{"KEY_RENDERING", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_RENDERING)},
	{"VALUE_RENDER_SPEED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_RENDER_SPEED)},
	{"VALUE_RENDER_QUALITY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_RENDER_QUALITY)},
	{"VALUE_RENDER_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_RENDER_DEFAULT)},
	{"KEY_ANTIALIASING", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_ANTIALIASING)},
	{"VALUE_ANTIALIAS_ON", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_ANTIALIAS_ON)},
	{"VALUE_ANTIALIAS_OFF", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_ANTIALIAS_OFF)},
	{"VALUE_ANTIALIAS_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_ANTIALIAS_DEFAULT)},
	{"KEY_TEXT_ANTIALIASING", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_TEXT_ANTIALIASING)},
	{"VALUE_TEXT_ANTIALIAS_ON", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_ON)},
	{"VALUE_TEXT_ANTIALIAS_OFF", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_OFF)},
	{"VALUE_TEXT_ANTIALIAS_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_DEFAULT)},
	{"VALUE_TEXT_ANTIALIAS_GASP", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_GASP)},
	{"VALUE_TEXT_ANTIALIAS_LCD_HRGB", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_LCD_HRGB)},
	{"VALUE_TEXT_ANTIALIAS_LCD_HBGR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_LCD_HBGR)},
	{"VALUE_TEXT_ANTIALIAS_LCD_VRGB", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_LCD_VRGB)},
	{"VALUE_TEXT_ANTIALIAS_LCD_VBGR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_TEXT_ANTIALIAS_LCD_VBGR)},
	{"KEY_FRACTIONALMETRICS", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_FRACTIONALMETRICS)},
	{"VALUE_FRACTIONALMETRICS_ON", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_FRACTIONALMETRICS_ON)},
	{"VALUE_FRACTIONALMETRICS_OFF", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_FRACTIONALMETRICS_OFF)},
	{"VALUE_FRACTIONALMETRICS_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_FRACTIONALMETRICS_DEFAULT)},
	{"KEY_DITHERING", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_DITHERING)},
	{"VALUE_DITHER_ENABLE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_DITHER_ENABLE)},
	{"VALUE_DITHER_DISABLE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_DITHER_DISABLE)},
	{"VALUE_DITHER_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_DITHER_DEFAULT)},
	{"KEY_INTERPOLATION", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_INTERPOLATION)},
	{"VALUE_INTERPOLATION_NEAREST_NEIGHBOR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_INTERPOLATION_NEAREST_NEIGHBOR)},
	{"VALUE_INTERPOLATION_BILINEAR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_INTERPOLATION_BILINEAR)},
	{"VALUE_INTERPOLATION_BICUBIC", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_INTERPOLATION_BICUBIC)},
	{"KEY_ALPHA_INTERPOLATION", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_ALPHA_INTERPOLATION)},
	{"VALUE_ALPHA_INTERPOLATION_SPEED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_ALPHA_INTERPOLATION_SPEED)},
	{"VALUE_ALPHA_INTERPOLATION_QUALITY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_ALPHA_INTERPOLATION_QUALITY)},
	{"VALUE_ALPHA_INTERPOLATION_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_ALPHA_INTERPOLATION_DEFAULT)},
	{"KEY_COLOR_RENDERING", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_COLOR_RENDERING)},
	{"VALUE_COLOR_RENDER_SPEED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_COLOR_RENDER_SPEED)},
	{"VALUE_COLOR_RENDER_QUALITY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_COLOR_RENDER_QUALITY)},
	{"VALUE_COLOR_RENDER_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_COLOR_RENDER_DEFAULT)},
	{"KEY_STROKE_CONTROL", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_STROKE_CONTROL)},
	{"VALUE_STROKE_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_STROKE_DEFAULT)},
	{"VALUE_STROKE_NORMALIZE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_STROKE_NORMALIZE)},
	{"VALUE_STROKE_PURE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_STROKE_PURE)},
	{"KEY_RESOLUTION_VARIANT", "Lsun/awt/SunHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_RESOLUTION_VARIANT)},
	{"VALUE_RESOLUTION_VARIANT_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_RESOLUTION_VARIANT_DEFAULT)},
	{"VALUE_RESOLUTION_VARIANT_BASE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_RESOLUTION_VARIANT_BASE)},
	{"VALUE_RESOLUTION_VARIANT_SIZE_FIT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_RESOLUTION_VARIANT_SIZE_FIT)},
	{"VALUE_RESOLUTION_VARIANT_DPI_FIT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, VALUE_RESOLUTION_VARIANT_DPI_FIT)},
	{"KEY_TEXT_ANTIALIAS_LCD_CONTRAST", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunHints, KEY_TEXT_ANTIALIAS_LCD_CONTRAST)},
	{}
};

$MethodInfo _SunHints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunHints::*)()>(&SunHints::init$))},
	{}
};

$InnerClassInfo _SunHints_InnerClassesInfo_[] = {
	{"sun.awt.SunHints$LCDContrastKey", "sun.awt.SunHints", "LCDContrastKey", $PUBLIC | $STATIC},
	{"sun.awt.SunHints$Value", "sun.awt.SunHints", "Value", $PUBLIC | $STATIC},
	{"sun.awt.SunHints$Key", "sun.awt.SunHints", "Key", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SunHints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.SunHints",
	"java.lang.Object",
	nullptr,
	_SunHints_FieldInfo_,
	_SunHints_MethodInfo_,
	nullptr,
	nullptr,
	_SunHints_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.SunHints$LCDContrastKey,sun.awt.SunHints$Value,sun.awt.SunHints$Key"
};

$Object* allocate$SunHints($Class* clazz) {
	return $of($alloc(SunHints));
}


$SunHints$Key* SunHints::KEY_RENDERING = nullptr;
$Object* SunHints::VALUE_RENDER_SPEED = nullptr;
$Object* SunHints::VALUE_RENDER_QUALITY = nullptr;
$Object* SunHints::VALUE_RENDER_DEFAULT = nullptr;

$SunHints$Key* SunHints::KEY_ANTIALIASING = nullptr;
$Object* SunHints::VALUE_ANTIALIAS_ON = nullptr;
$Object* SunHints::VALUE_ANTIALIAS_OFF = nullptr;
$Object* SunHints::VALUE_ANTIALIAS_DEFAULT = nullptr;

$SunHints$Key* SunHints::KEY_TEXT_ANTIALIASING = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_ON = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_OFF = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_DEFAULT = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_GASP = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB = nullptr;
$Object* SunHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR = nullptr;

$SunHints$Key* SunHints::KEY_FRACTIONALMETRICS = nullptr;
$Object* SunHints::VALUE_FRACTIONALMETRICS_ON = nullptr;
$Object* SunHints::VALUE_FRACTIONALMETRICS_OFF = nullptr;
$Object* SunHints::VALUE_FRACTIONALMETRICS_DEFAULT = nullptr;

$SunHints$Key* SunHints::KEY_DITHERING = nullptr;
$Object* SunHints::VALUE_DITHER_ENABLE = nullptr;
$Object* SunHints::VALUE_DITHER_DISABLE = nullptr;
$Object* SunHints::VALUE_DITHER_DEFAULT = nullptr;

$SunHints$Key* SunHints::KEY_INTERPOLATION = nullptr;
$Object* SunHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR = nullptr;
$Object* SunHints::VALUE_INTERPOLATION_BILINEAR = nullptr;
$Object* SunHints::VALUE_INTERPOLATION_BICUBIC = nullptr;

$SunHints$Key* SunHints::KEY_ALPHA_INTERPOLATION = nullptr;
$Object* SunHints::VALUE_ALPHA_INTERPOLATION_SPEED = nullptr;
$Object* SunHints::VALUE_ALPHA_INTERPOLATION_QUALITY = nullptr;
$Object* SunHints::VALUE_ALPHA_INTERPOLATION_DEFAULT = nullptr;

$SunHints$Key* SunHints::KEY_COLOR_RENDERING = nullptr;
$Object* SunHints::VALUE_COLOR_RENDER_SPEED = nullptr;
$Object* SunHints::VALUE_COLOR_RENDER_QUALITY = nullptr;
$Object* SunHints::VALUE_COLOR_RENDER_DEFAULT = nullptr;

$SunHints$Key* SunHints::KEY_STROKE_CONTROL = nullptr;
$Object* SunHints::VALUE_STROKE_DEFAULT = nullptr;
$Object* SunHints::VALUE_STROKE_NORMALIZE = nullptr;
$Object* SunHints::VALUE_STROKE_PURE = nullptr;

$SunHints$Key* SunHints::KEY_RESOLUTION_VARIANT = nullptr;
$Object* SunHints::VALUE_RESOLUTION_VARIANT_DEFAULT = nullptr;
$Object* SunHints::VALUE_RESOLUTION_VARIANT_BASE = nullptr;
$Object* SunHints::VALUE_RESOLUTION_VARIANT_SIZE_FIT = nullptr;
$Object* SunHints::VALUE_RESOLUTION_VARIANT_DPI_FIT = nullptr;

$RenderingHints$Key* SunHints::KEY_TEXT_ANTIALIAS_LCD_CONTRAST = nullptr;

void SunHints::init$() {
}

void clinit$SunHints($Class* class$) {
	$assignStatic(SunHints::KEY_RENDERING, $new($SunHints$Key, SunHints::INTKEY_RENDERING, "Global rendering quality key"_s));
	$assignStatic(SunHints::VALUE_RENDER_SPEED, $new($SunHints$Value, SunHints::KEY_RENDERING, SunHints::INTVAL_RENDER_SPEED, "Fastest rendering methods"_s));
	$assignStatic(SunHints::VALUE_RENDER_QUALITY, $new($SunHints$Value, SunHints::KEY_RENDERING, SunHints::INTVAL_RENDER_QUALITY, "Highest quality rendering methods"_s));
	$assignStatic(SunHints::VALUE_RENDER_DEFAULT, $new($SunHints$Value, SunHints::KEY_RENDERING, SunHints::INTVAL_RENDER_DEFAULT, "Default rendering methods"_s));
	$assignStatic(SunHints::KEY_ANTIALIASING, $new($SunHints$Key, SunHints::INTKEY_ANTIALIASING, "Global antialiasing enable key"_s));
	$assignStatic(SunHints::VALUE_ANTIALIAS_ON, $new($SunHints$Value, SunHints::KEY_ANTIALIASING, SunHints::INTVAL_ANTIALIAS_ON, "Antialiased rendering mode"_s));
	$assignStatic(SunHints::VALUE_ANTIALIAS_OFF, $new($SunHints$Value, SunHints::KEY_ANTIALIASING, SunHints::INTVAL_ANTIALIAS_OFF, "Nonantialiased rendering mode"_s));
	$assignStatic(SunHints::VALUE_ANTIALIAS_DEFAULT, $new($SunHints$Value, SunHints::KEY_ANTIALIASING, SunHints::INTVAL_ANTIALIAS_DEFAULT, "Default antialiasing rendering mode"_s));
	$assignStatic(SunHints::KEY_TEXT_ANTIALIASING, $new($SunHints$Key, SunHints::INTKEY_TEXT_ANTIALIASING, "Text-specific antialiasing enable key"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_ON, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_ON, "Antialiased text mode"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_OFF, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_OFF, "Nonantialiased text mode"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_DEFAULT, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT, "Default antialiasing text mode"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_GASP, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_GASP, "gasp antialiasing text mode"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB, "LCD HRGB antialiasing text mode"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HBGR, "LCD HBGR antialiasing text mode"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VRGB, "LCD VRGB antialiasing text mode"_s));
	$assignStatic(SunHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR, $new($SunHints$Value, SunHints::KEY_TEXT_ANTIALIASING, SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VBGR, "LCD VBGR antialiasing text mode"_s));
	$assignStatic(SunHints::KEY_FRACTIONALMETRICS, $new($SunHints$Key, SunHints::INTKEY_FRACTIONALMETRICS, "Fractional metrics enable key"_s));
	$assignStatic(SunHints::VALUE_FRACTIONALMETRICS_ON, $new($SunHints$Value, SunHints::KEY_FRACTIONALMETRICS, SunHints::INTVAL_FRACTIONALMETRICS_ON, "Fractional text metrics mode"_s));
	$assignStatic(SunHints::VALUE_FRACTIONALMETRICS_OFF, $new($SunHints$Value, SunHints::KEY_FRACTIONALMETRICS, SunHints::INTVAL_FRACTIONALMETRICS_OFF, "Integer text metrics mode"_s));
	$assignStatic(SunHints::VALUE_FRACTIONALMETRICS_DEFAULT, $new($SunHints$Value, SunHints::KEY_FRACTIONALMETRICS, SunHints::INTVAL_FRACTIONALMETRICS_DEFAULT, "Default fractional text metrics mode"_s));
	$assignStatic(SunHints::KEY_DITHERING, $new($SunHints$Key, SunHints::INTKEY_DITHERING, "Dithering quality key"_s));
	$assignStatic(SunHints::VALUE_DITHER_ENABLE, $new($SunHints$Value, SunHints::KEY_DITHERING, SunHints::INTVAL_DITHER_ENABLE, "Dithered rendering mode"_s));
	$assignStatic(SunHints::VALUE_DITHER_DISABLE, $new($SunHints$Value, SunHints::KEY_DITHERING, SunHints::INTVAL_DITHER_DISABLE, "Nondithered rendering mode"_s));
	$assignStatic(SunHints::VALUE_DITHER_DEFAULT, $new($SunHints$Value, SunHints::KEY_DITHERING, SunHints::INTVAL_DITHER_DEFAULT, "Default dithering mode"_s));
	$assignStatic(SunHints::KEY_INTERPOLATION, $new($SunHints$Key, SunHints::INTKEY_INTERPOLATION, "Image interpolation method key"_s));
	$assignStatic(SunHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR, $new($SunHints$Value, SunHints::KEY_INTERPOLATION, SunHints::INTVAL_INTERPOLATION_NEAREST_NEIGHBOR, "Nearest Neighbor image interpolation mode"_s));
	$assignStatic(SunHints::VALUE_INTERPOLATION_BILINEAR, $new($SunHints$Value, SunHints::KEY_INTERPOLATION, SunHints::INTVAL_INTERPOLATION_BILINEAR, "Bilinear image interpolation mode"_s));
	$assignStatic(SunHints::VALUE_INTERPOLATION_BICUBIC, $new($SunHints$Value, SunHints::KEY_INTERPOLATION, SunHints::INTVAL_INTERPOLATION_BICUBIC, "Bicubic image interpolation mode"_s));
	$assignStatic(SunHints::KEY_ALPHA_INTERPOLATION, $new($SunHints$Key, SunHints::INTKEY_ALPHA_INTERPOLATION, "Alpha blending interpolation method key"_s));
	$assignStatic(SunHints::VALUE_ALPHA_INTERPOLATION_SPEED, $new($SunHints$Value, SunHints::KEY_ALPHA_INTERPOLATION, SunHints::INTVAL_ALPHA_INTERPOLATION_SPEED, "Fastest alpha blending methods"_s));
	$assignStatic(SunHints::VALUE_ALPHA_INTERPOLATION_QUALITY, $new($SunHints$Value, SunHints::KEY_ALPHA_INTERPOLATION, SunHints::INTVAL_ALPHA_INTERPOLATION_QUALITY, "Highest quality alpha blending methods"_s));
	$assignStatic(SunHints::VALUE_ALPHA_INTERPOLATION_DEFAULT, $new($SunHints$Value, SunHints::KEY_ALPHA_INTERPOLATION, SunHints::INTVAL_ALPHA_INTERPOLATION_DEFAULT, "Default alpha blending methods"_s));
	$assignStatic(SunHints::KEY_COLOR_RENDERING, $new($SunHints$Key, SunHints::INTKEY_COLOR_RENDERING, "Color rendering quality key"_s));
	$assignStatic(SunHints::VALUE_COLOR_RENDER_SPEED, $new($SunHints$Value, SunHints::KEY_COLOR_RENDERING, SunHints::INTVAL_COLOR_RENDER_SPEED, "Fastest color rendering mode"_s));
	$assignStatic(SunHints::VALUE_COLOR_RENDER_QUALITY, $new($SunHints$Value, SunHints::KEY_COLOR_RENDERING, SunHints::INTVAL_COLOR_RENDER_QUALITY, "Highest quality color rendering mode"_s));
	$assignStatic(SunHints::VALUE_COLOR_RENDER_DEFAULT, $new($SunHints$Value, SunHints::KEY_COLOR_RENDERING, SunHints::INTVAL_COLOR_RENDER_DEFAULT, "Default color rendering mode"_s));
	$assignStatic(SunHints::KEY_STROKE_CONTROL, $new($SunHints$Key, SunHints::INTKEY_STROKE_CONTROL, "Stroke normalization control key"_s));
	$assignStatic(SunHints::VALUE_STROKE_DEFAULT, $new($SunHints$Value, SunHints::KEY_STROKE_CONTROL, SunHints::INTVAL_STROKE_DEFAULT, "Default stroke normalization"_s));
	$assignStatic(SunHints::VALUE_STROKE_NORMALIZE, $new($SunHints$Value, SunHints::KEY_STROKE_CONTROL, SunHints::INTVAL_STROKE_NORMALIZE, "Normalize strokes for consistent rendering"_s));
	$assignStatic(SunHints::VALUE_STROKE_PURE, $new($SunHints$Value, SunHints::KEY_STROKE_CONTROL, SunHints::INTVAL_STROKE_PURE, "Pure stroke conversion for accurate paths"_s));
	$assignStatic(SunHints::KEY_RESOLUTION_VARIANT, $new($SunHints$Key, SunHints::INTKEY_RESOLUTION_VARIANT, "Global image resolution variant key"_s));
	$assignStatic(SunHints::VALUE_RESOLUTION_VARIANT_DEFAULT, $new($SunHints$Value, SunHints::KEY_RESOLUTION_VARIANT, SunHints::INTVAL_RESOLUTION_VARIANT_DEFAULT, "Choose image resolutions based on a defaultheuristic"_s));
	$assignStatic(SunHints::VALUE_RESOLUTION_VARIANT_BASE, $new($SunHints$Value, SunHints::KEY_RESOLUTION_VARIANT, SunHints::INTVAL_RESOLUTION_VARIANT_BASE, "Use only the standard resolution of an image"_s));
	$assignStatic(SunHints::VALUE_RESOLUTION_VARIANT_SIZE_FIT, $new($SunHints$Value, SunHints::KEY_RESOLUTION_VARIANT, SunHints::INTVAL_RESOLUTION_VARIANT_SIZE_FIT, "Choose image resolutions based on the DPIof the screen and transformin the Graphics2D context"_s));
	$assignStatic(SunHints::VALUE_RESOLUTION_VARIANT_DPI_FIT, $new($SunHints$Value, SunHints::KEY_RESOLUTION_VARIANT, SunHints::INTVAL_RESOLUTION_VARIANT_DPI_FIT, "Choose image resolutions based only on the DPI of the screen"_s));
	$assignStatic(SunHints::KEY_TEXT_ANTIALIAS_LCD_CONTRAST, $new($SunHints$LCDContrastKey, SunHints::INTKEY_AATEXT_LCD_CONTRAST, "Text-specific LCD contrast key"_s));
}

SunHints::SunHints() {
}

$Class* SunHints::load$($String* name, bool initialize) {
	$loadClass(SunHints, name, initialize, &_SunHints_ClassInfo_, clinit$SunHints, allocate$SunHints);
	return class$;
}

$Class* SunHints::class$ = nullptr;

	} // awt
} // sun