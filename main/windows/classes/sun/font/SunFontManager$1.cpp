#include <sun/font/SunFontManager$1.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/FontManagerNativeLibrary.h>
#include <sun/font/StrikeCache.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontManagerNativeLibrary = ::sun::font::FontManagerNativeLibrary;
using $StrikeCache = ::sun::font::StrikeCache;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$MethodInfo _SunFontManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SunFontManager$1::*)()>(&SunFontManager$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$1_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"initStatic",
	"()V"
};

$InnerClassInfo _SunFontManager$1_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SunFontManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunFontManager$1_EnclosingMethodInfo_,
	_SunFontManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$1($Class* clazz) {
	return $of($alloc(SunFontManager$1));
}

void SunFontManager$1::init$() {
}

$Object* SunFontManager$1::run() {
	$FontManagerNativeLibrary::load();
	$SunFontManager::initIDs();
	$init($StrikeCache);
	switch ($StrikeCache::nativeAddressSize) {
	case 8:
		{
			$SunFontManager::longAddresses = true;
			break;
		}
	case 4:
		{
			$SunFontManager::longAddresses = false;
			break;
		}
	default:
		{
			$throwNew($RuntimeException, "Unexpected address size"_s);
		}
	}
	$SunFontManager::noType1Font = "true"_s->equals($($System::getProperty("sun.java2d.noType1Font"_s)));
	$init($File);
	$assignStatic($SunFontManager::jreLibDirName, $str({$($System::getProperty("java.home"_s, ""_s)), $File::separator, "lib"_s}));
	$assignStatic($SunFontManager::jreFontDirName, $str({$SunFontManager::jreLibDirName, $File::separator, "fonts"_s}));
	$SunFontManager::maxSoftRefCnt = $nc($($Integer::getInteger("sun.java2d.font.maxSoftRefs"_s, 10)))->intValue();
	return $of(nullptr);
}

SunFontManager$1::SunFontManager$1() {
}

$Class* SunFontManager$1::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$1, name, initialize, &_SunFontManager$1_ClassInfo_, allocate$SunFontManager$1);
	return class$;
}

$Class* SunFontManager$1::class$ = nullptr;

	} // font
} // sun