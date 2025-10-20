#include <sun/awt/OSInfo.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/OSInfo$1.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <jcpp.h>

#undef AIX
#undef LINUX
#undef MACOSX
#undef OS_NAME
#undef OS_VERSION
#undef UNKNOWN
#undef WINDOWS
#undef WINDOWS_7
#undef WINDOWS_95
#undef WINDOWS_98
#undef WINDOWS_ME
#undef WINDOWS_UNKNOWN
#undef WINDOWS_VISTA
#undef WINDOWS_XP

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $OSInfo$1 = ::sun::awt::OSInfo$1;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $OSInfo$WindowsVersion = ::sun::awt::OSInfo$WindowsVersion;

namespace sun {
	namespace awt {

$FieldInfo _OSInfo_FieldInfo_[] = {
	{"WINDOWS_UNKNOWN", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_UNKNOWN)},
	{"WINDOWS_95", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_95)},
	{"WINDOWS_98", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_98)},
	{"WINDOWS_ME", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_ME)},
	{"WINDOWS_2000", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_2000)},
	{"WINDOWS_XP", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_XP)},
	{"WINDOWS_2003", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_2003)},
	{"WINDOWS_VISTA", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_VISTA)},
	{"WINDOWS_7", "Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OSInfo, WINDOWS_7)},
	{"OS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OSInfo, OS_NAME)},
	{"OS_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OSInfo, OS_VERSION)},
	{"windowsVersionMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/awt/OSInfo$WindowsVersion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(OSInfo, windowsVersionMap)},
	{"osTypeAction", "Ljava/security/PrivilegedAction;", "Ljava/security/PrivilegedAction<Lsun/awt/OSInfo$OSType;>;", $PRIVATE | $STATIC | $FINAL, $staticField(OSInfo, osTypeAction)},
	{}
};

$MethodInfo _OSInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OSInfo::*)()>(&OSInfo::init$))},
	{"getOSType", "()Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OSInfo$OSType*(*)()>(&OSInfo::getOSType)), "java.lang.SecurityException"},
	{"getOSTypeAction", "()Ljava/security/PrivilegedAction;", "()Ljava/security/PrivilegedAction<Lsun/awt/OSInfo$OSType;>;", $PUBLIC | $STATIC, $method(static_cast<$PrivilegedAction*(*)()>(&OSInfo::getOSTypeAction))},
	{"getWindowsVersion", "()Lsun/awt/OSInfo$WindowsVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OSInfo$WindowsVersion*(*)()>(&OSInfo::getWindowsVersion)), "java.lang.SecurityException"},
	{}
};

$InnerClassInfo _OSInfo_InnerClassesInfo_[] = {
	{"sun.awt.OSInfo$WindowsVersion", "sun.awt.OSInfo", "WindowsVersion", $PUBLIC | $STATIC},
	{"sun.awt.OSInfo$OSType", "sun.awt.OSInfo", "OSType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"sun.awt.OSInfo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OSInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.OSInfo",
	"java.lang.Object",
	nullptr,
	_OSInfo_FieldInfo_,
	_OSInfo_MethodInfo_,
	nullptr,
	nullptr,
	_OSInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.OSInfo$WindowsVersion,sun.awt.OSInfo$OSType,sun.awt.OSInfo$1"
};

$Object* allocate$OSInfo($Class* clazz) {
	return $of($alloc(OSInfo));
}

$OSInfo$WindowsVersion* OSInfo::WINDOWS_UNKNOWN = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_95 = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_98 = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_ME = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_2000 = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_XP = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_2003 = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_VISTA = nullptr;
$OSInfo$WindowsVersion* OSInfo::WINDOWS_7 = nullptr;
$String* OSInfo::OS_NAME = nullptr;
$String* OSInfo::OS_VERSION = nullptr;
$Map* OSInfo::windowsVersionMap = nullptr;
$PrivilegedAction* OSInfo::osTypeAction = nullptr;

void OSInfo::init$() {
}

$OSInfo$OSType* OSInfo::getOSType() {
	$init(OSInfo);
	$var($String, osName, $System::getProperty(OSInfo::OS_NAME));
	if (osName != nullptr) {
		if (osName->contains("Windows"_s)) {
			$init($OSInfo$OSType);
			return $OSInfo$OSType::WINDOWS;
		}
		if (osName->contains("Linux"_s)) {
			$init($OSInfo$OSType);
			return $OSInfo$OSType::LINUX;
		}
		if (osName->contains("OS X"_s)) {
			$init($OSInfo$OSType);
			return $OSInfo$OSType::MACOSX;
		}
		if (osName->contains("AIX"_s)) {
			$init($OSInfo$OSType);
			return $OSInfo$OSType::AIX;
		}
	}
	$init($OSInfo$OSType);
	return $OSInfo$OSType::UNKNOWN;
}

$PrivilegedAction* OSInfo::getOSTypeAction() {
	$init(OSInfo);
	return OSInfo::osTypeAction;
}

$OSInfo$WindowsVersion* OSInfo::getWindowsVersion() {
	$init(OSInfo);
	$useLocalCurrentObjectStackCache();
	$var($String, osVersion, $System::getProperty(OSInfo::OS_VERSION));
	if (osVersion == nullptr) {
		return OSInfo::WINDOWS_UNKNOWN;
	}
	$synchronized(OSInfo::windowsVersionMap) {
		$var($OSInfo$WindowsVersion, result, $cast($OSInfo$WindowsVersion, $nc(OSInfo::windowsVersionMap)->get(osVersion)));
		if (result == nullptr) {
			$var($StringArray, arr, $nc(osVersion)->split("\\."_s));
			if (arr->length == 2) {
				try {
					int32_t var$0 = $Integer::parseInt(arr->get(0));
					$assign(result, $new($OSInfo$WindowsVersion, var$0, $Integer::parseInt(arr->get(1))));
				} catch ($NumberFormatException&) {
					$var($NumberFormatException, e, $catch());
					return OSInfo::WINDOWS_UNKNOWN;
				}
			} else {
				return OSInfo::WINDOWS_UNKNOWN;
			}
			$nc(OSInfo::windowsVersionMap)->put(osVersion, result);
		}
		return result;
	}
}

void clinit$OSInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(OSInfo::OS_NAME, "os.name"_s);
	$assignStatic(OSInfo::OS_VERSION, "os.version"_s);
	$assignStatic(OSInfo::WINDOWS_UNKNOWN, $new($OSInfo$WindowsVersion, -1, -1));
	$assignStatic(OSInfo::WINDOWS_95, $new($OSInfo$WindowsVersion, 4, 0));
	$assignStatic(OSInfo::WINDOWS_98, $new($OSInfo$WindowsVersion, 4, 10));
	$assignStatic(OSInfo::WINDOWS_ME, $new($OSInfo$WindowsVersion, 4, 90));
	$assignStatic(OSInfo::WINDOWS_2000, $new($OSInfo$WindowsVersion, 5, 0));
	$assignStatic(OSInfo::WINDOWS_XP, $new($OSInfo$WindowsVersion, 5, 1));
	$assignStatic(OSInfo::WINDOWS_2003, $new($OSInfo$WindowsVersion, 5, 2));
	$assignStatic(OSInfo::WINDOWS_VISTA, $new($OSInfo$WindowsVersion, 6, 0));
	$assignStatic(OSInfo::WINDOWS_7, $new($OSInfo$WindowsVersion, 6, 1));
	$assignStatic(OSInfo::windowsVersionMap, $new($HashMap));
	{
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_95)->toString()), OSInfo::WINDOWS_95);
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_98)->toString()), OSInfo::WINDOWS_98);
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_ME)->toString()), OSInfo::WINDOWS_ME);
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_2000)->toString()), OSInfo::WINDOWS_2000);
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_XP)->toString()), OSInfo::WINDOWS_XP);
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_2003)->toString()), OSInfo::WINDOWS_2003);
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_VISTA)->toString()), OSInfo::WINDOWS_VISTA);
		$nc(OSInfo::windowsVersionMap)->put($($nc(OSInfo::WINDOWS_7)->toString()), OSInfo::WINDOWS_7);
	}
	$assignStatic(OSInfo::osTypeAction, $new($OSInfo$1));
}

OSInfo::OSInfo() {
}

$Class* OSInfo::load$($String* name, bool initialize) {
	$loadClass(OSInfo, name, initialize, &_OSInfo_ClassInfo_, clinit$OSInfo, allocate$OSInfo);
	return class$;
}

$Class* OSInfo::class$ = nullptr;

	} // awt
} // sun