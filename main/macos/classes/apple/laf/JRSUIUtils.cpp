#include <apple/laf/JRSUIUtils.h>

#include <java/lang/NumberFormatException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIUtils_FieldInfo_[] = {
	{"isLeopard", "Z", nullptr, $STATIC, $staticField(JRSUIUtils, isLeopard)},
	{"isSnowLeopardOrBelow", "Z", nullptr, $STATIC, $staticField(JRSUIUtils, isSnowLeopardOrBelow)},
	{}
};

$MethodInfo _JRSUIUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIUtils::*)()>(&JRSUIUtils::init$))},
	{"currentMacOSXVersionMatchesGivenVersionRange", "(IZZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,bool,bool,bool)>(&JRSUIUtils::currentMacOSXVersionMatchesGivenVersionRange))},
	{"currentMacOSXVersionMatchesGivenVersionRange", "(IIZZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,int32_t,bool,bool,bool)>(&JRSUIUtils::currentMacOSXVersionMatchesGivenVersionRange))},
	{"isCurrentMacOSXVersion", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&JRSUIUtils::isCurrentMacOSXVersion))},
	{"isCurrentMacOSXVersion", "(II)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&JRSUIUtils::isCurrentMacOSXVersion))},
	{"isMacOSXBigSurOrAbove", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils::isMacOSXBigSurOrAbove))},
	{"isMacOSXLeopard", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils::isMacOSXLeopard))},
	{"isMacOSXSnowLeopardOrBelow", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&JRSUIUtils::isMacOSXSnowLeopardOrBelow))},
	{}
};

$InnerClassInfo _JRSUIUtils_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$NineSliceMetricsProvider", "apple.laf.JRSUIUtils", "NineSliceMetricsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"apple.laf.JRSUIUtils$HitDetection", "apple.laf.JRSUIUtils", "HitDetection", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIUtils$Images", "apple.laf.JRSUIUtils", "Images", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIUtils$ScrollBar", "apple.laf.JRSUIUtils", "ScrollBar", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIUtils$Tree", "apple.laf.JRSUIUtils", "Tree", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIUtils$InternalFrame", "apple.laf.JRSUIUtils", "InternalFrame", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIUtils$TabbedPane", "apple.laf.JRSUIUtils", "TabbedPane", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"apple.laf.JRSUIUtils",
	"java.lang.Object",
	nullptr,
	_JRSUIUtils_FieldInfo_,
	_JRSUIUtils_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils$NineSliceMetricsProvider,apple.laf.JRSUIUtils$HitDetection,apple.laf.JRSUIUtils$Images,apple.laf.JRSUIUtils$ScrollBar,apple.laf.JRSUIUtils$Tree,apple.laf.JRSUIUtils$InternalFrame,apple.laf.JRSUIUtils$TabbedPane"
};

$Object* allocate$JRSUIUtils($Class* clazz) {
	return $of($alloc(JRSUIUtils));
}

bool JRSUIUtils::isLeopard = false;
bool JRSUIUtils::isSnowLeopardOrBelow = false;

void JRSUIUtils::init$() {
}

bool JRSUIUtils::isMacOSXBigSurOrAbove() {
	$init(JRSUIUtils);
	return currentMacOSXVersionMatchesGivenVersionRange(10, 16, true, false, true);
}

bool JRSUIUtils::isMacOSXLeopard() {
	$init(JRSUIUtils);
	return isCurrentMacOSXVersion(5);
}

bool JRSUIUtils::isMacOSXSnowLeopardOrBelow() {
	$init(JRSUIUtils);
	return currentMacOSXVersionMatchesGivenVersionRange(10, 6, true, true, false);
}

bool JRSUIUtils::isCurrentMacOSXVersion(int32_t version) {
	$init(JRSUIUtils);
	return isCurrentMacOSXVersion(10, version);
}

bool JRSUIUtils::isCurrentMacOSXVersion(int32_t major, int32_t minor) {
	$init(JRSUIUtils);
	return currentMacOSXVersionMatchesGivenVersionRange(major, minor, true, false, false);
}

bool JRSUIUtils::currentMacOSXVersionMatchesGivenVersionRange(int32_t version, bool inclusive, bool matchBelow, bool matchAbove) {
	$init(JRSUIUtils);
	return currentMacOSXVersionMatchesGivenVersionRange(10, version, inclusive, matchBelow, matchAbove);
}

bool JRSUIUtils::currentMacOSXVersionMatchesGivenVersionRange(int32_t majorVersion, int32_t minorVersion, bool inclusive, bool matchBelow, bool matchAbove) {
	$init(JRSUIUtils);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, osVersion, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "os.version"_s)))));
	$var($StringArray, fragments, $nc(osVersion)->split("\\."_s));
	if (fragments->length < 2) {
		return false;
	}
	try {
		int32_t majorVers = $Integer::parseInt(fragments->get(0));
		int32_t minorVers = $Integer::parseInt(fragments->get(1));
		if (inclusive && majorVers == majorVersion && minorVers == minorVersion) {
			return true;
		}
		if (matchBelow && (majorVers < majorVersion || (majorVers == majorVersion && minorVers < minorVersion))) {
			return true;
		}
		if (matchAbove && (majorVers > majorVersion || (majorVers == majorVersion && minorVers > minorVersion))) {
			return true;
		}
	} catch ($NumberFormatException& e) {
	}
	return false;
}

void clinit$JRSUIUtils($Class* class$) {
	JRSUIUtils::isLeopard = JRSUIUtils::isMacOSXLeopard();
	JRSUIUtils::isSnowLeopardOrBelow = JRSUIUtils::isMacOSXSnowLeopardOrBelow();
}

JRSUIUtils::JRSUIUtils() {
}

$Class* JRSUIUtils::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils, name, initialize, &_JRSUIUtils_ClassInfo_, clinit$JRSUIUtils, allocate$JRSUIUtils);
	return class$;
}

$Class* JRSUIUtils::class$ = nullptr;

	} // laf
} // apple