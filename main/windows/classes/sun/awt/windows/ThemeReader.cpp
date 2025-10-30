#include <sun/awt/windows/ThemeReader.h>

#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _ThemeReader_FieldInfo_[] = {
	{"widgetToTheme", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Long;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ThemeReader, widgetToTheme)},
	{"readWriteLock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThemeReader, readWriteLock)},
	{"readLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThemeReader, readLock)},
	{"writeLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThemeReader, writeLock)},
	{"valid", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ThemeReader, valid)},
	{"isThemed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ThemeReader, isThemed$)},
	{"xpStyleEnabled", "Z", nullptr, $STATIC | $VOLATILE, $staticField(ThemeReader, xpStyleEnabled)},
	{}
};

$MethodInfo _ThemeReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThemeReader::*)()>(&ThemeReader::init$))},
	{"closeTheme", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&ThemeReader::closeTheme))},
	{"flush", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ThemeReader::flush))},
	{"getBoolean", "(JIII)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int32_t,int32_t,int32_t)>(&ThemeReader::getBoolean))},
	{"getBoolean", "(Ljava/lang/String;III)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*,int32_t,int32_t,int32_t)>(&ThemeReader::getBoolean))},
	{"getColor", "(JIII)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Color*(*)(int64_t,int32_t,int32_t,int32_t)>(&ThemeReader::getColor))},
	{"getColor", "(Ljava/lang/String;III)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)($String*,int32_t,int32_t,int32_t)>(&ThemeReader::getColor))},
	{"getEnum", "(JIII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t,int32_t,int32_t)>(&ThemeReader::getEnum))},
	{"getEnum", "(Ljava/lang/String;III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,int32_t,int32_t)>(&ThemeReader::getEnum))},
	{"getInt", "(JIII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t,int32_t,int32_t)>(&ThemeReader::getInt))},
	{"getInt", "(Ljava/lang/String;III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,int32_t,int32_t)>(&ThemeReader::getInt))},
	{"getPartSize", "(JII)Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Dimension*(*)(int64_t,int32_t,int32_t)>(&ThemeReader::getPartSize))},
	{"getPartSize", "(Ljava/lang/String;II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dimension*(*)($String*,int32_t,int32_t)>(&ThemeReader::getPartSize))},
	{"getPoint", "(JIII)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Point*(*)(int64_t,int32_t,int32_t,int32_t)>(&ThemeReader::getPoint))},
	{"getPoint", "(Ljava/lang/String;III)Ljava/awt/Point;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Point*(*)($String*,int32_t,int32_t,int32_t)>(&ThemeReader::getPoint))},
	{"getPosition", "(JIII)Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Dimension*(*)(int64_t,int32_t,int32_t,int32_t)>(&ThemeReader::getPosition))},
	{"getPosition", "(Ljava/lang/String;III)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dimension*(*)($String*,int32_t,int32_t,int32_t)>(&ThemeReader::getPosition))},
	{"getSysBoolean", "(JI)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int32_t)>(&ThemeReader::getSysBoolean))},
	{"getSysBoolean", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*,int32_t)>(&ThemeReader::getSysBoolean))},
	{"getTheme", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Long*(*)($String*)>(&ThemeReader::getTheme))},
	{"getThemeBackgroundContentMargins", "(JIIII)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Insets*(*)(int64_t,int32_t,int32_t,int32_t,int32_t)>(&ThemeReader::getThemeBackgroundContentMargins))},
	{"getThemeBackgroundContentMargins", "(Ljava/lang/String;IIII)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)($String*,int32_t,int32_t,int32_t,int32_t)>(&ThemeReader::getThemeBackgroundContentMargins))},
	{"getThemeImpl", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Long*(*)($String*)>(&ThemeReader::getThemeImpl))},
	{"getThemeMargins", "(JIII)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Insets*(*)(int64_t,int32_t,int32_t,int32_t)>(&ThemeReader::getThemeMargins))},
	{"getThemeMargins", "(Ljava/lang/String;III)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)($String*,int32_t,int32_t,int32_t)>(&ThemeReader::getThemeMargins))},
	{"getThemeTransitionDuration", "(JIIII)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t,int32_t,int32_t,int32_t)>(&ThemeReader::getThemeTransitionDuration))},
	{"getThemeTransitionDuration", "(Ljava/lang/String;IIII)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($String*,int32_t,int32_t,int32_t,int32_t)>(&ThemeReader::getThemeTransitionDuration))},
	{"initThemes", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&ThemeReader::initThemes))},
	{"isThemePartDefined", "(JII)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int32_t,int32_t)>(&ThemeReader::isThemePartDefined))},
	{"isThemePartDefined", "(Ljava/lang/String;II)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*,int32_t,int32_t)>(&ThemeReader::isThemePartDefined))},
	{"isThemed", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ThemeReader::isThemed))},
	{"isXPStyleEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ThemeReader::isXPStyleEnabled))},
	{"openTheme", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($String*)>(&ThemeReader::openTheme))},
	{"paintBackground", "([IJIIIIIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($ints*,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ThemeReader::paintBackground))},
	{"paintBackground", "([ILjava/lang/String;IIIIIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ThemeReader::paintBackground))},
	{"setWindowTheme", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*)>(&ThemeReader::setWindowTheme))},
	{}
};

#define _METHOD_INDEX_closeTheme 1
#define _METHOD_INDEX_getBoolean 3
#define _METHOD_INDEX_getColor 5
#define _METHOD_INDEX_getEnum 7
#define _METHOD_INDEX_getInt 9
#define _METHOD_INDEX_getPartSize 11
#define _METHOD_INDEX_getPoint 13
#define _METHOD_INDEX_getPosition 15
#define _METHOD_INDEX_getSysBoolean 17
#define _METHOD_INDEX_getThemeBackgroundContentMargins 20
#define _METHOD_INDEX_getThemeMargins 23
#define _METHOD_INDEX_getThemeTransitionDuration 25
#define _METHOD_INDEX_initThemes 27
#define _METHOD_INDEX_isThemePartDefined 28
#define _METHOD_INDEX_openTheme 32
#define _METHOD_INDEX_paintBackground 33
#define _METHOD_INDEX_setWindowTheme 35

$ClassInfo _ThemeReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.ThemeReader",
	"java.lang.Object",
	nullptr,
	_ThemeReader_FieldInfo_,
	_ThemeReader_MethodInfo_
};

$Object* allocate$ThemeReader($Class* clazz) {
	return $of($alloc(ThemeReader));
}

$Map* ThemeReader::widgetToTheme = nullptr;
$ReadWriteLock* ThemeReader::readWriteLock = nullptr;
$Lock* ThemeReader::readLock = nullptr;
$Lock* ThemeReader::writeLock = nullptr;
$volatile(bool) ThemeReader::valid = false;
$volatile(bool) ThemeReader::isThemed$ = false;
$volatile(bool) ThemeReader::xpStyleEnabled = false;

void ThemeReader::init$() {
}

void ThemeReader::flush() {
	$init(ThemeReader);
	ThemeReader::valid = false;
}

bool ThemeReader::initThemes() {
	$init(ThemeReader);
	bool $ret = false;
	$prepareNativeStatic(ThemeReader, initThemes, bool);
	$ret = $invokeNativeStatic(ThemeReader, initThemes);
	$finishNativeStatic();
	return $ret;
}

bool ThemeReader::isThemed() {
	$init(ThemeReader);
	$nc(ThemeReader::writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			ThemeReader::isThemed$ = initThemes();
			var$2 = ThemeReader::isThemed$;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ThemeReader::isXPStyleEnabled() {
	$init(ThemeReader);
	return ThemeReader::xpStyleEnabled;
}

$Long* ThemeReader::getThemeImpl($String* widget) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$var($Long, theme, $cast($Long, $nc(ThemeReader::widgetToTheme)->get(widget)));
	if (theme == nullptr) {
		int32_t i = $nc(widget)->indexOf("::"_s);
		if (i > 0) {
			setWindowTheme($(widget->substring(0, i)));
			$assign(theme, $Long::valueOf(openTheme($(widget->substring(i + 2)))));
			setWindowTheme(nullptr);
		} else {
			$assign(theme, $Long::valueOf(openTheme(widget)));
		}
		$nc(ThemeReader::widgetToTheme)->put(widget, theme);
	}
	return theme;
}

$Long* ThemeReader::getTheme($String* widget) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	if (!ThemeReader::isThemed$) {
		$throwNew($IllegalStateException, "Themes are not loaded"_s);
	}
	if (!ThemeReader::valid) {
		$nc(ThemeReader::readLock)->unlock();
		$nc(ThemeReader::writeLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (!ThemeReader::valid) {
					{
						$var($Iterator, i$, $nc($($nc(ThemeReader::widgetToTheme)->values()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Long, value, $cast($Long, i$->next()));
							{
								closeTheme($nc(value)->longValue());
							}
						}
					}
					$nc(ThemeReader::widgetToTheme)->clear();
					ThemeReader::valid = true;
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(ThemeReader::readLock)->lock();
				$nc(ThemeReader::writeLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($Long, theme, $cast($Long, $nc(ThemeReader::widgetToTheme)->get(widget)));
	if (theme == nullptr) {
		$nc(ThemeReader::readLock)->unlock();
		$nc(ThemeReader::writeLock)->lock();
		{
			$var($Throwable, var$2, nullptr);
			try {
				$assign(theme, getThemeImpl(widget));
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				$nc(ThemeReader::readLock)->lock();
				$nc(ThemeReader::writeLock)->unlock();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	return theme;
}

void ThemeReader::paintBackground($ints* buffer, int64_t theme, int32_t part, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, int32_t stride) {
	$init(ThemeReader);
	$prepareNativeStatic(ThemeReader, paintBackground, void, $ints* buffer, int64_t theme, int32_t part, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, int32_t stride);
	$invokeNativeStatic(ThemeReader, paintBackground, buffer, theme, part, state, x, y, w, h, stride);
	$finishNativeStatic();
}

void ThemeReader::paintBackground($ints* buffer, $String* widget, int32_t part, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, int32_t stride) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			paintBackground(buffer, $nc($(getTheme(widget)))->longValue(), part, state, x, y, w, h, stride);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Insets* ThemeReader::getThemeMargins(int64_t theme, int32_t part, int32_t state, int32_t marginType) {
	$init(ThemeReader);
	$var($Insets, $ret, nullptr);
	$prepareNativeStatic(ThemeReader, getThemeMargins, $Insets*, int64_t theme, int32_t part, int32_t state, int32_t marginType);
	$assign($ret, $invokeNativeStatic(ThemeReader, getThemeMargins, theme, part, state, marginType));
	$finishNativeStatic();
	return $ret;
}

$Insets* ThemeReader::getThemeMargins($String* widget, int32_t part, int32_t state, int32_t marginType) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Insets, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getThemeMargins($nc($(getTheme(widget)))->longValue(), part, state, marginType));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ThemeReader::isThemePartDefined(int64_t theme, int32_t part, int32_t state) {
	$init(ThemeReader);
	bool $ret = false;
	$prepareNativeStatic(ThemeReader, isThemePartDefined, bool, int64_t theme, int32_t part, int32_t state);
	$ret = $invokeNativeStatic(ThemeReader, isThemePartDefined, theme, part, state);
	$finishNativeStatic();
	return $ret;
}

bool ThemeReader::isThemePartDefined($String* widget, int32_t part, int32_t state) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = isThemePartDefined($nc($(getTheme(widget)))->longValue(), part, state);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Color* ThemeReader::getColor(int64_t theme, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$var($Color, $ret, nullptr);
	$prepareNativeStatic(ThemeReader, getColor, $Color*, int64_t theme, int32_t part, int32_t state, int32_t property);
	$assign($ret, $invokeNativeStatic(ThemeReader, getColor, theme, part, state, property));
	$finishNativeStatic();
	return $ret;
}

$Color* ThemeReader::getColor($String* widget, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Color, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getColor($nc($(getTheme(widget)))->longValue(), part, state, property));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ThemeReader::getInt(int64_t theme, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	int32_t $ret = 0;
	$prepareNativeStatic(ThemeReader, getInt, int32_t, int64_t theme, int32_t part, int32_t state, int32_t property);
	$ret = $invokeNativeStatic(ThemeReader, getInt, theme, part, state, property);
	$finishNativeStatic();
	return $ret;
}

int32_t ThemeReader::getInt($String* widget, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getInt($nc($(getTheme(widget)))->longValue(), part, state, property);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ThemeReader::getEnum(int64_t theme, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	int32_t $ret = 0;
	$prepareNativeStatic(ThemeReader, getEnum, int32_t, int64_t theme, int32_t part, int32_t state, int32_t property);
	$ret = $invokeNativeStatic(ThemeReader, getEnum, theme, part, state, property);
	$finishNativeStatic();
	return $ret;
}

int32_t ThemeReader::getEnum($String* widget, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getEnum($nc($(getTheme(widget)))->longValue(), part, state, property);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ThemeReader::getBoolean(int64_t theme, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	bool $ret = false;
	$prepareNativeStatic(ThemeReader, getBoolean, bool, int64_t theme, int32_t part, int32_t state, int32_t property);
	$ret = $invokeNativeStatic(ThemeReader, getBoolean, theme, part, state, property);
	$finishNativeStatic();
	return $ret;
}

bool ThemeReader::getBoolean($String* widget, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = getBoolean($nc($(getTheme(widget)))->longValue(), part, state, property);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ThemeReader::getSysBoolean(int64_t theme, int32_t property) {
	$init(ThemeReader);
	bool $ret = false;
	$prepareNativeStatic(ThemeReader, getSysBoolean, bool, int64_t theme, int32_t property);
	$ret = $invokeNativeStatic(ThemeReader, getSysBoolean, theme, property);
	$finishNativeStatic();
	return $ret;
}

bool ThemeReader::getSysBoolean($String* widget, int32_t property) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = getSysBoolean($nc($(getTheme(widget)))->longValue(), property);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Point* ThemeReader::getPoint(int64_t theme, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$var($Point, $ret, nullptr);
	$prepareNativeStatic(ThemeReader, getPoint, $Point*, int64_t theme, int32_t part, int32_t state, int32_t property);
	$assign($ret, $invokeNativeStatic(ThemeReader, getPoint, theme, part, state, property));
	$finishNativeStatic();
	return $ret;
}

$Point* ThemeReader::getPoint($String* widget, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Point, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getPoint($nc($(getTheme(widget)))->longValue(), part, state, property));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Dimension* ThemeReader::getPosition(int64_t theme, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$var($Dimension, $ret, nullptr);
	$prepareNativeStatic(ThemeReader, getPosition, $Dimension*, int64_t theme, int32_t part, int32_t state, int32_t property);
	$assign($ret, $invokeNativeStatic(ThemeReader, getPosition, theme, part, state, property));
	$finishNativeStatic();
	return $ret;
}

$Dimension* ThemeReader::getPosition($String* widget, int32_t part, int32_t state, int32_t property) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Dimension, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getPosition($nc($(getTheme(widget)))->longValue(), part, state, property));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Dimension* ThemeReader::getPartSize(int64_t theme, int32_t part, int32_t state) {
	$init(ThemeReader);
	$var($Dimension, $ret, nullptr);
	$prepareNativeStatic(ThemeReader, getPartSize, $Dimension*, int64_t theme, int32_t part, int32_t state);
	$assign($ret, $invokeNativeStatic(ThemeReader, getPartSize, theme, part, state));
	$finishNativeStatic();
	return $ret;
}

$Dimension* ThemeReader::getPartSize($String* widget, int32_t part, int32_t state) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Dimension, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getPartSize($nc($(getTheme(widget)))->longValue(), part, state));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ThemeReader::openTheme($String* widget) {
	$init(ThemeReader);
	int64_t $ret = 0;
	$prepareNativeStatic(ThemeReader, openTheme, int64_t, $String* widget);
	$ret = $invokeNativeStatic(ThemeReader, openTheme, widget);
	$finishNativeStatic();
	return $ret;
}

void ThemeReader::closeTheme(int64_t theme) {
	$init(ThemeReader);
	$prepareNativeStatic(ThemeReader, closeTheme, void, int64_t theme);
	$invokeNativeStatic(ThemeReader, closeTheme, theme);
	$finishNativeStatic();
}

void ThemeReader::setWindowTheme($String* subAppName) {
	$init(ThemeReader);
	$prepareNativeStatic(ThemeReader, setWindowTheme, void, $String* subAppName);
	$invokeNativeStatic(ThemeReader, setWindowTheme, subAppName);
	$finishNativeStatic();
}

int64_t ThemeReader::getThemeTransitionDuration(int64_t theme, int32_t part, int32_t stateFrom, int32_t stateTo, int32_t propId) {
	$init(ThemeReader);
	int64_t $ret = 0;
	$prepareNativeStatic(ThemeReader, getThemeTransitionDuration, int64_t, int64_t theme, int32_t part, int32_t stateFrom, int32_t stateTo, int32_t propId);
	$ret = $invokeNativeStatic(ThemeReader, getThemeTransitionDuration, theme, part, stateFrom, stateTo, propId);
	$finishNativeStatic();
	return $ret;
}

int64_t ThemeReader::getThemeTransitionDuration($String* widget, int32_t part, int32_t stateFrom, int32_t stateTo, int32_t propId) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getThemeTransitionDuration($nc($(getTheme(widget)))->longValue(), part, stateFrom, stateTo, propId);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Insets* ThemeReader::getThemeBackgroundContentMargins(int64_t theme, int32_t part, int32_t state, int32_t boundingWidth, int32_t boundingHeight) {
	$init(ThemeReader);
	$var($Insets, $ret, nullptr);
	$prepareNativeStatic(ThemeReader, getThemeBackgroundContentMargins, $Insets*, int64_t theme, int32_t part, int32_t state, int32_t boundingWidth, int32_t boundingHeight);
	$assign($ret, $invokeNativeStatic(ThemeReader, getThemeBackgroundContentMargins, theme, part, state, boundingWidth, boundingHeight));
	$finishNativeStatic();
	return $ret;
}

$Insets* ThemeReader::getThemeBackgroundContentMargins($String* widget, int32_t part, int32_t state, int32_t boundingWidth, int32_t boundingHeight) {
	$init(ThemeReader);
	$useLocalCurrentObjectStackCache();
	$nc(ThemeReader::readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Insets, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getThemeBackgroundContentMargins($nc($(getTheme(widget)))->longValue(), part, state, boundingWidth, boundingHeight));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(ThemeReader::readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void clinit$ThemeReader($Class* class$) {
	$assignStatic(ThemeReader::widgetToTheme, $new($HashMap));
	$assignStatic(ThemeReader::readWriteLock, $new($ReentrantReadWriteLock));
	$assignStatic(ThemeReader::readLock, $nc(ThemeReader::readWriteLock)->readLock());
	$assignStatic(ThemeReader::writeLock, $nc(ThemeReader::readWriteLock)->writeLock());
	ThemeReader::valid = false;
}

ThemeReader::ThemeReader() {
}

$Class* ThemeReader::load$($String* name, bool initialize) {
	$loadClass(ThemeReader, name, initialize, &_ThemeReader_ClassInfo_, clinit$ThemeReader, allocate$ThemeReader);
	return class$;
}

$Class* ThemeReader::class$ = nullptr;

		} // windows
	} // awt
} // sun