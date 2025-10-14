#include <sun/font/FontUtilities$1.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/FontUtilities.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef SEVERE
#undef WARNING

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontUtilities = ::sun::font::FontUtilities;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace font {

$MethodInfo _FontUtilities$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontUtilities$1::*)()>(&FontUtilities$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FontUtilities$1_EnclosingMethodInfo_ = {
	"sun.font.FontUtilities",
	nullptr,
	nullptr
};

$InnerClassInfo _FontUtilities$1_InnerClassesInfo_[] = {
	{"sun.font.FontUtilities$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontUtilities$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FontUtilities$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FontUtilities$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_FontUtilities$1_EnclosingMethodInfo_,
	_FontUtilities$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontUtilities"
};

$Object* allocate$FontUtilities$1($Class* clazz) {
	return $of($alloc(FontUtilities$1));
}

void FontUtilities$1::init$() {
}

$Object* FontUtilities$1::run() {
	$var($String, osName, $System::getProperty("os.name"_s, "unknownOS"_s));
	$init($FontUtilities);
	$FontUtilities::isLinux = $nc(osName)->startsWith("Linux"_s);
	$FontUtilities::isMacOSX = osName->contains("OS X"_s);
	if ($FontUtilities::isMacOSX) {
		$FontUtilities::isMacOSX14 = true;
		$var($String, version, $System::getProperty("os.version"_s, ""_s));
		if ($nc(version)->startsWith("10."_s)) {
			$assign(version, version->substring(3));
			int32_t periodIndex = version->indexOf((int32_t)u'.');
			if (periodIndex != -1) {
				$assign(version, version->substring(0, periodIndex));
			}
			try {
				int32_t v = $Integer::parseInt(version);
				$FontUtilities::isMacOSX14 = (v >= 14);
			} catch ($NumberFormatException&) {
				$catch();
			}
		}
	}
	$var($String, scalerStr, $System::getProperty("sun.java2d.font.scaler"_s));
	if (scalerStr != nullptr) {
		$FontUtilities::useJDKScaler = "jdk"_s->equals(scalerStr);
	} else {
		$FontUtilities::useJDKScaler = false;
	}
	$FontUtilities::isWindows = osName->startsWith("Windows"_s);
	$var($String, debugLevel, $System::getProperty("sun.java2d.debugfonts"_s));
	if (debugLevel != nullptr && !debugLevel->equals("false"_s)) {
		$FontUtilities::debugFonts$ = true;
		$assignStatic($FontUtilities::logger, $PlatformLogger::getLogger("sun.java2d"_s));
		if (debugLevel->equals("warning"_s)) {
			$init($PlatformLogger$Level);
			$nc($FontUtilities::logger)->setLevel($PlatformLogger$Level::WARNING);
		} else if (debugLevel->equals("severe"_s)) {
			$init($PlatformLogger$Level);
			$nc($FontUtilities::logger)->setLevel($PlatformLogger$Level::SEVERE);
		}
		$FontUtilities::logging = $nc($FontUtilities::logger)->isEnabled();
	}
	return $of(nullptr);
}

FontUtilities$1::FontUtilities$1() {
}

$Class* FontUtilities$1::load$($String* name, bool initialize) {
	$loadClass(FontUtilities$1, name, initialize, &_FontUtilities$1_ClassInfo_, allocate$FontUtilities$1);
	return class$;
}

$Class* FontUtilities$1::class$ = nullptr;

	} // font
} // sun