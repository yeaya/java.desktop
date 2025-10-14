#include <sun/awt/SunDisplayChanger.h>

#include <java/awt/IllegalComponentStateException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef FINER
#undef FINEST

using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$FieldInfo _SunDisplayChanger_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunDisplayChanger, log)},
	{"listeners", "Ljava/util/Map;", "Ljava/util/Map<Lsun/awt/DisplayChangedListener;Ljava/lang/Void;>;", $PRIVATE, $field(SunDisplayChanger, listeners)},
	{}
};

$MethodInfo _SunDisplayChanger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunDisplayChanger::*)()>(&SunDisplayChanger::init$))},
	{"add", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC},
	{"notifyListeners", "()V", nullptr, $PUBLIC},
	{"notifyPaletteChanged", "()V", nullptr, $PUBLIC},
	{"remove", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunDisplayChanger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.SunDisplayChanger",
	"java.lang.Object",
	nullptr,
	_SunDisplayChanger_FieldInfo_,
	_SunDisplayChanger_MethodInfo_
};

$Object* allocate$SunDisplayChanger($Class* clazz) {
	return $of($alloc(SunDisplayChanger));
}

$PlatformLogger* SunDisplayChanger::log = nullptr;

void SunDisplayChanger::init$() {
	$set(this, listeners, $Collections::synchronizedMap($$new($WeakHashMap, 1)));
}

void SunDisplayChanger::add($DisplayChangedListener* theListener) {
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (theListener == nullptr) {
			$nc(SunDisplayChanger::log)->fine("Assertion (theListener != null) failed"_s);
		}
	}
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(SunDisplayChanger::log)->finer($$str({"Adding listener: "_s, theListener}));
	}
	$nc(this->listeners)->put(theListener, nullptr);
}

void SunDisplayChanger::remove($DisplayChangedListener* theListener) {
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (theListener == nullptr) {
			$nc(SunDisplayChanger::log)->fine("Assertion (theListener != null) failed"_s);
		}
	}
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(SunDisplayChanger::log)->finer($$str({"Removing listener: "_s, theListener}));
	}
	$nc(this->listeners)->remove(theListener);
}

void SunDisplayChanger::notifyListeners() {
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(SunDisplayChanger::log)->finest("notifyListeners"_s);
	}
	$var($Set, cloneSet, nullptr);
	$synchronized(this->listeners) {
		$assign(cloneSet, $new($HashSet, $(static_cast<$Collection*>($nc(this->listeners)->keySet()))));
	}
	{
		$var($Iterator, i$, $nc(cloneSet)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DisplayChangedListener, current, $cast($DisplayChangedListener, i$->next()));
			{
				try {
					if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(SunDisplayChanger::log)->finest($$str({"displayChanged for listener: "_s, current}));
					}
					$nc(current)->displayChanged();
				} catch ($IllegalComponentStateException&) {
					$var($IllegalComponentStateException, e, $catch());
					$nc(this->listeners)->remove(current);
				}
			}
		}
	}
}

void SunDisplayChanger::notifyPaletteChanged() {
	$init($PlatformLogger$Level);
	if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(SunDisplayChanger::log)->finest("notifyPaletteChanged"_s);
	}
	$var($Set, cloneSet, nullptr);
	$synchronized(this->listeners) {
		$assign(cloneSet, $new($HashSet, $(static_cast<$Collection*>($nc(this->listeners)->keySet()))));
	}
	{
		$var($Iterator, i$, $nc(cloneSet)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DisplayChangedListener, current, $cast($DisplayChangedListener, i$->next()));
			{
				try {
					if ($nc(SunDisplayChanger::log)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(SunDisplayChanger::log)->finest($$str({"paletteChanged for listener: "_s, current}));
					}
					$nc(current)->paletteChanged();
				} catch ($IllegalComponentStateException&) {
					$var($IllegalComponentStateException, e, $catch());
					$nc(this->listeners)->remove(current);
				}
			}
		}
	}
}

void clinit$SunDisplayChanger($Class* class$) {
	$assignStatic(SunDisplayChanger::log, $PlatformLogger::getLogger("sun.awt.multiscreen.SunDisplayChanger"_s));
}

SunDisplayChanger::SunDisplayChanger() {
}

$Class* SunDisplayChanger::load$($String* name, bool initialize) {
	$loadClass(SunDisplayChanger, name, initialize, &_SunDisplayChanger_ClassInfo_, clinit$SunDisplayChanger, allocate$SunDisplayChanger);
	return class$;
}

$Class* SunDisplayChanger::class$ = nullptr;

	} // awt
} // sun