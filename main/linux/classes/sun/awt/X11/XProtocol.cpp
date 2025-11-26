#include <sun/awt/X11/XProtocol.h>

#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XAtom = ::sun::awt::X11::XAtom;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XProtocol_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XProtocol, log)},
	{"atomToList", "Ljava/util/Map;", "Ljava/util/Map<Lsun/awt/X11/XAtom;Lsun/awt/X11/XAtomList;>;", $PRIVATE, $field(XProtocol, atomToList)},
	{"atomToAnchor", "Ljava/util/Map;", "Ljava/util/Map<Lsun/awt/X11/XAtom;Ljava/lang/Long;>;", $PRIVATE, $field(XProtocol, atomToAnchor)},
	{"firstCheck", "Z", nullptr, $VOLATILE, $field(XProtocol, firstCheck)},
	{}
};

$MethodInfo _XProtocol_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XProtocol::*)()>(&XProtocol::init$))},
	{"checkAnchor", "(Lsun/awt/X11/XAtom;J)J", nullptr, $PUBLIC},
	{"checkAnchor", "(Lsun/awt/X11/XAtom;Lsun/awt/X11/XAtom;)J", nullptr, $PUBLIC},
	{"checkAnchorImpl", "(Lsun/awt/X11/XAtom;J)J", nullptr, 0},
	{"checkProtocol", "(Lsun/awt/X11/XAtom;Lsun/awt/X11/XAtom;)Z", nullptr, 0},
	{}
};

$ClassInfo _XProtocol_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XProtocol",
	"java.lang.Object",
	nullptr,
	_XProtocol_FieldInfo_,
	_XProtocol_MethodInfo_
};

$Object* allocate$XProtocol($Class* clazz) {
	return $of($alloc(XProtocol));
}

$PlatformLogger* XProtocol::log = nullptr;

void XProtocol::init$() {
	$set(this, atomToList, $new($HashMap));
	$set(this, atomToAnchor, $new($HashMap));
	this->firstCheck = true;
}

bool XProtocol::checkProtocol($XAtom* listName, $XAtom* protocol) {
	$useLocalCurrentObjectStackCache();
	$var($XAtomList, protocols, $cast($XAtomList, $nc(this->atomToList)->get(listName)));
	if (protocols != nullptr) {
		return protocols->contains(protocol);
	}
	$assign(protocols, $nc(listName)->getAtomListPropertyList($XToolkit::getDefaultRootWindow()));
	$nc(this->atomToList)->put(listName, protocols);
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc(protocols)->contains(protocol);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (this->firstCheck) {
				this->firstCheck = false;
				$init($PlatformLogger$Level);
				if ($nc(XProtocol::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(XProtocol::log)->fine("{0}:{1} supports {2}"_s, $$new($ObjectArray, {
						$of(this),
						$of(listName),
						$of(protocols)
					}));
				}
			}
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

int64_t XProtocol::checkAnchorImpl($XAtom* anchorProp, int64_t anchorType) {
	int64_t root_xref = 0;
	int64_t self_xref = 0;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			root_xref = $nc(anchorProp)->get32Property($XToolkit::getDefaultRootWindow(), anchorType);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (root_xref == 0) {
		return 0;
	}
	self_xref = $nc(anchorProp)->get32Property(root_xref, anchorType);
	if (self_xref != root_xref) {
		return 0;
	}
	return self_xref;
}

int64_t XProtocol::checkAnchor($XAtom* anchorProp, int64_t anchorType) {
	$useLocalCurrentObjectStackCache();
	$var($Long, val, $cast($Long, $nc(this->atomToAnchor)->get(anchorProp)));
	if (val != nullptr) {
		return val->longValue();
	}
	int64_t res = checkAnchorImpl(anchorProp, anchorType);
	$nc(this->atomToAnchor)->put(anchorProp, $($Long::valueOf(res)));
	return res;
}

int64_t XProtocol::checkAnchor($XAtom* anchorProp, $XAtom* anchorType) {
	return checkAnchor(anchorProp, $nc(anchorType)->getAtom());
}

void clinit$XProtocol($Class* class$) {
	$assignStatic(XProtocol::log, $PlatformLogger::getLogger("sun.awt.X11.XProtocol"_s));
}

XProtocol::XProtocol() {
}

$Class* XProtocol::load$($String* name, bool initialize) {
	$loadClass(XProtocol, name, initialize, &_XProtocol_ClassInfo_, clinit$XProtocol, allocate$XProtocol);
	return class$;
}

$Class* XProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun