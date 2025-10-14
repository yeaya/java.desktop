#include <sun/awt/windows/WDesktopProperties.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/windows/ThemeReader.h>
#include <sun/awt/windows/WDesktopProperties$WinPlaySound.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BOLD
#undef DESKTOPFONTHINTS
#undef DIALOG
#undef FILE_PREFIX
#undef FINE
#undef ITALIC
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef MONOSPACED
#undef PREFIX
#undef PROP_NAMES
#undef TRUE
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_GASP
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SunToolkit = ::sun::awt::SunToolkit;
using $ThemeReader = ::sun::awt::windows::ThemeReader;
using $WDesktopProperties$WinPlaySound = ::sun::awt::windows::WDesktopProperties$WinPlaySound;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDesktopProperties_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WDesktopProperties, $assertionsDisabled)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDesktopProperties, log)},
	{"PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDesktopProperties, PREFIX)},
	{"FILE_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDesktopProperties, FILE_PREFIX)},
	{"PROP_NAMES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDesktopProperties, PROP_NAMES)},
	{"pData", "J", nullptr, $PRIVATE, $field(WDesktopProperties, pData)},
	{"wToolkit", "Lsun/awt/windows/WToolkit;", nullptr, $PRIVATE, $field(WDesktopProperties, wToolkit)},
	{"map", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(WDesktopProperties, map)},
	{"fontNameMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $STATIC, $staticField(WDesktopProperties, fontNameMap)},
	{}
};

$MethodInfo _WDesktopProperties_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WToolkit;)V", nullptr, 0, $method(static_cast<void(WDesktopProperties::*)($WToolkit*)>(&WDesktopProperties::init$))},
	{"getDesktopAAHints", "()Ljava/awt/RenderingHints;", nullptr, $SYNCHRONIZED, $method(static_cast<$RenderingHints*(WDesktopProperties::*)()>(&WDesktopProperties::getDesktopAAHints))},
	{"getKeyNames", "()[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(WDesktopProperties::*)()>(&WDesktopProperties::getKeyNames))},
	{"getProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $SYNCHRONIZED, $method(static_cast<$Map*(WDesktopProperties::*)()>(&WDesktopProperties::getProperties))},
	{"getWindowsParameters", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WDesktopProperties::*)()>(&WDesktopProperties::getWindowsParameters))},
	{"init", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WDesktopProperties::*)()>(&WDesktopProperties::init))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WDesktopProperties::initIDs))},
	{"isWindowsProperty", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&WDesktopProperties::isWindowsProperty))},
	{"playWindowsSound", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WDesktopProperties::*)($String*)>(&WDesktopProperties::playWindowsSound))},
	{"setBooleanProperty", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(WDesktopProperties::*)($String*,bool)>(&WDesktopProperties::setBooleanProperty))},
	{"setColorProperty", "(Ljava/lang/String;III)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(WDesktopProperties::*)($String*,int32_t,int32_t,int32_t)>(&WDesktopProperties::setColorProperty))},
	{"setFontProperty", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(WDesktopProperties::*)($String*,$String*,int32_t,int32_t)>(&WDesktopProperties::setFontProperty))},
	{"setIntegerProperty", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(WDesktopProperties::*)($String*,int32_t)>(&WDesktopProperties::setIntegerProperty))},
	{"setSoundProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(WDesktopProperties::*)($String*,$String*)>(&WDesktopProperties::setSoundProperty))},
	{"setStringProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(WDesktopProperties::*)($String*,$String*)>(&WDesktopProperties::setStringProperty))},
	{}
};

#define _METHOD_INDEX_getWindowsParameters 4
#define _METHOD_INDEX_init 5
#define _METHOD_INDEX_initIDs 6
#define _METHOD_INDEX_playWindowsSound 8

$InnerClassInfo _WDesktopProperties_InnerClassesInfo_[] = {
	{"sun.awt.windows.WDesktopProperties$WinPlaySound", "sun.awt.windows.WDesktopProperties", "WinPlaySound", 0},
	{}
};

$ClassInfo _WDesktopProperties_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDesktopProperties",
	"java.lang.Object",
	nullptr,
	_WDesktopProperties_FieldInfo_,
	_WDesktopProperties_MethodInfo_,
	nullptr,
	nullptr,
	_WDesktopProperties_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WDesktopProperties$WinPlaySound"
};

$Object* allocate$WDesktopProperties($Class* clazz) {
	return $of($alloc(WDesktopProperties));
}

bool WDesktopProperties::$assertionsDisabled = false;
$PlatformLogger* WDesktopProperties::log = nullptr;
$String* WDesktopProperties::PREFIX = nullptr;
$String* WDesktopProperties::FILE_PREFIX = nullptr;
$String* WDesktopProperties::PROP_NAMES = nullptr;
$HashMap* WDesktopProperties::fontNameMap = nullptr;

void WDesktopProperties::initIDs() {
	$init(WDesktopProperties);
	$prepareNativeStatic(WDesktopProperties, initIDs, void);
	$invokeNativeStatic(WDesktopProperties, initIDs);
	$finishNativeStatic();
}

bool WDesktopProperties::isWindowsProperty($String* name) {
	$init(WDesktopProperties);
	bool var$1 = $nc(name)->startsWith(WDesktopProperties::PREFIX);
	bool var$0 = var$1 || $nc(name)->startsWith(WDesktopProperties::FILE_PREFIX);
	$init($SunToolkit);
	return var$0 || $nc(name)->equals($SunToolkit::DESKTOPFONTHINTS);
}

void WDesktopProperties::init$($WToolkit* wToolkit) {
	$set(this, map, $new($HashMap));
	$set(this, wToolkit, wToolkit);
	init();
}

void WDesktopProperties::init() {
	$prepareNative(WDesktopProperties, init, void);
	$invokeNative(WDesktopProperties, init);
	$finishNative();
}

$StringArray* WDesktopProperties::getKeyNames() {
	$var($ObjectArray, keys, $nc($($nc(this->map)->keySet()))->toArray());
	$var($StringArray, sortedKeys, $new($StringArray, $nc(keys)->length));
	for (int32_t nkey = 0; nkey < keys->length; ++nkey) {
		sortedKeys->set(nkey, $($nc($of(keys->get(nkey)))->toString()));
	}
	$Arrays::sort(sortedKeys);
	return sortedKeys;
}

void WDesktopProperties::getWindowsParameters() {
	$prepareNative(WDesktopProperties, getWindowsParameters, void);
	$invokeNative(WDesktopProperties, getWindowsParameters);
	$finishNative();
}

void WDesktopProperties::setBooleanProperty($String* key, bool value) {
	$synchronized(this) {
		if (!WDesktopProperties::$assertionsDisabled && !(key != nullptr)) {
			$throwNew($AssertionError);
		}
		$init($PlatformLogger$Level);
		if ($nc(WDesktopProperties::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(WDesktopProperties::log)->fine($$str({key, "="_s, $($String::valueOf(value))}));
		}
		$nc(this->map)->put(key, $($Boolean::valueOf(value)));
	}
}

void WDesktopProperties::setIntegerProperty($String* key, int32_t value) {
	$synchronized(this) {
		if (!WDesktopProperties::$assertionsDisabled && !(key != nullptr)) {
			$throwNew($AssertionError);
		}
		$init($PlatformLogger$Level);
		if ($nc(WDesktopProperties::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(WDesktopProperties::log)->fine($$str({key, "="_s, $($String::valueOf(value))}));
		}
		$nc(this->map)->put(key, $($Integer::valueOf(value)));
	}
}

void WDesktopProperties::setStringProperty($String* key, $String* value) {
	$synchronized(this) {
		if (!WDesktopProperties::$assertionsDisabled && !(key != nullptr)) {
			$throwNew($AssertionError);
		}
		$init($PlatformLogger$Level);
		if ($nc(WDesktopProperties::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(WDesktopProperties::log)->fine($$str({key, "="_s, value}));
		}
		$nc(this->map)->put(key, value);
	}
}

void WDesktopProperties::setColorProperty($String* key, int32_t r, int32_t g, int32_t b) {
	$synchronized(this) {
		if (!WDesktopProperties::$assertionsDisabled && !(key != nullptr && r <= 255 && g <= 255 && b <= 255)) {
			$throwNew($AssertionError);
		}
		$var($Color, color, $new($Color, r, g, b));
		$init($PlatformLogger$Level);
		if ($nc(WDesktopProperties::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(WDesktopProperties::log)->fine($$str({key, "="_s, color}));
		}
		$nc(this->map)->put(key, color);
	}
}

void WDesktopProperties::setFontProperty($String* key, $String* name$renamed, int32_t style, int32_t size) {
	$synchronized(this) {
		$var($String, name, name$renamed);
		if (!WDesktopProperties::$assertionsDisabled && !(key != nullptr && style <= ($Font::BOLD | $Font::ITALIC) && size >= 0)) {
			$throwNew($AssertionError);
		}
		$var($String, mappedName, $cast($String, $nc(WDesktopProperties::fontNameMap)->get(name)));
		if (mappedName != nullptr) {
			$assign(name, mappedName);
		}
		$var($Font, font, $new($Font, name, style, size));
		$init($PlatformLogger$Level);
		if ($nc(WDesktopProperties::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(WDesktopProperties::log)->fine($$str({key, "="_s, font}));
		}
		$nc(this->map)->put(key, font);
		$var($String, sizeKey, $str({key, ".height"_s}));
		$var($Integer, iSize, $Integer::valueOf(size));
		if ($nc(WDesktopProperties::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(WDesktopProperties::log)->fine($$str({sizeKey, "="_s, iSize}));
		}
		$nc(this->map)->put(sizeKey, iSize);
	}
}

void WDesktopProperties::setSoundProperty($String* key, $String* winEventName) {
	$synchronized(this) {
		if (!WDesktopProperties::$assertionsDisabled && !(key != nullptr && winEventName != nullptr)) {
			$throwNew($AssertionError);
		}
		$var($Runnable, soundRunnable, $new($WDesktopProperties$WinPlaySound, this, winEventName));
		$init($PlatformLogger$Level);
		if ($nc(WDesktopProperties::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(WDesktopProperties::log)->fine($$str({key, "="_s, soundRunnable}));
		}
		$nc(this->map)->put(key, soundRunnable);
	}
}

void WDesktopProperties::playWindowsSound($String* winEventName) {
	$prepareNative(WDesktopProperties, playWindowsSound, void, $String* winEventName);
	$invokeNative(WDesktopProperties, playWindowsSound, winEventName);
	$finishNative();
}

$Map* WDesktopProperties::getProperties() {
	$synchronized(this) {
		$ThemeReader::flush();
		$set(this, map, $new($HashMap));
		getWindowsParameters();
		$init($SunToolkit);
		$nc(this->map)->put($SunToolkit::DESKTOPFONTHINTS, $($SunToolkit::getDesktopFontHints()));
		$nc(this->map)->put(WDesktopProperties::PROP_NAMES, $(getKeyNames()));
		$nc(this->map)->put("DnD.Autoscroll.cursorHysteresis"_s, $($nc(this->map)->get("win.drag.x"_s)));
		return $cast($Map, $nc(this->map)->clone());
	}
}

$RenderingHints* WDesktopProperties::getDesktopAAHints() {
	$synchronized(this) {
		$init($RenderingHints);
		$var($Object, fontSmoothingHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT);
		$var($Integer, fontSmoothingContrast, nullptr);
		$var($Boolean, smoothingOn, $cast($Boolean, $nc(this->map)->get("win.text.fontSmoothingOn"_s)));
		$init($Boolean);
		if (smoothingOn != nullptr && smoothingOn->equals($Boolean::TRUE)) {
			$var($Integer, typeID, $cast($Integer, $nc(this->map)->get("win.text.fontSmoothingType"_s)));
			bool var$0 = typeID == nullptr || $nc(typeID)->intValue() <= 1;
			if (var$0 || $nc(typeID)->intValue() > 2) {
				$assign(fontSmoothingHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_GASP);
			} else {
				$var($Integer, orientID, $cast($Integer, $nc(this->map)->get("win.text.fontSmoothingOrientation"_s)));
				if (orientID == nullptr || $nc(orientID)->intValue() != 0) {
					$assign(fontSmoothingHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB);
				} else {
					$assign(fontSmoothingHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR);
				}
				$assign(fontSmoothingContrast, $cast($Integer, $nc(this->map)->get("win.text.fontSmoothingContrast"_s)));
				if (fontSmoothingContrast == nullptr) {
					$assign(fontSmoothingContrast, $Integer::valueOf(140));
				} else {
					$assign(fontSmoothingContrast, $Integer::valueOf($nc(fontSmoothingContrast)->intValue() / 10));
				}
			}
		}
		$var($RenderingHints, hints, $new($RenderingHints, nullptr));
		hints->put($RenderingHints::KEY_TEXT_ANTIALIASING, fontSmoothingHint);
		if (fontSmoothingContrast != nullptr) {
			hints->put($RenderingHints::KEY_TEXT_LCD_CONTRAST, fontSmoothingContrast);
		}
		return hints;
	}
}

void clinit$WDesktopProperties($Class* class$) {
	$assignStatic(WDesktopProperties::PREFIX, "win."_s);
	$assignStatic(WDesktopProperties::FILE_PREFIX, "awt.file."_s);
	$assignStatic(WDesktopProperties::PROP_NAMES, "win.propNames"_s);
	WDesktopProperties::$assertionsDisabled = !WDesktopProperties::class$->desiredAssertionStatus();
	$assignStatic(WDesktopProperties::log, $PlatformLogger::getLogger("sun.awt.windows.WDesktopProperties"_s));
	{
		WDesktopProperties::initIDs();
	}
	{
		$assignStatic(WDesktopProperties::fontNameMap, $new($HashMap));
		$init($Font);
		$nc(WDesktopProperties::fontNameMap)->put("Courier"_s, $Font::MONOSPACED);
		$nc(WDesktopProperties::fontNameMap)->put("MS Serif"_s, "Microsoft Serif"_s);
		$nc(WDesktopProperties::fontNameMap)->put("MS Sans Serif"_s, "Microsoft Sans Serif"_s);
		$nc(WDesktopProperties::fontNameMap)->put("Terminal"_s, $Font::DIALOG);
		$nc(WDesktopProperties::fontNameMap)->put("FixedSys"_s, $Font::MONOSPACED);
		$nc(WDesktopProperties::fontNameMap)->put("System"_s, $Font::DIALOG);
	}
}

WDesktopProperties::WDesktopProperties() {
}

$Class* WDesktopProperties::load$($String* name, bool initialize) {
	$loadClass(WDesktopProperties, name, initialize, &_WDesktopProperties_ClassInfo_, clinit$WDesktopProperties, allocate$WDesktopProperties);
	return class$;
}

$Class* WDesktopProperties::class$ = nullptr;

		} // windows
	} // awt
} // sun