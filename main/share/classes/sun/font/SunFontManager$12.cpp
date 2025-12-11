#include <sun/font/SunFontManager$12.h>

#include <java/util/Locale.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef ROOT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace font {

$MethodInfo _SunFontManager$12_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SunFontManager$12::*)()>(&SunFontManager$12::init$))},
	{"run", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunFontManager$12_EnclosingMethodInfo_ = {
	"sun.font.SunFontManager",
	"getSystemStartupLocale",
	"()Ljava/util/Locale;"
};

$InnerClassInfo _SunFontManager$12_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager$12_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$12",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SunFontManager$12_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Locale;>;",
	&_SunFontManager$12_EnclosingMethodInfo_,
	_SunFontManager$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$12($Class* clazz) {
	return $of($alloc(SunFontManager$12));
}

void SunFontManager$12::init$() {
}

$Object* SunFontManager$12::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, fileEncoding, $System::getProperty("file.encoding"_s, ""_s));
	$var($String, sysEncoding, $System::getProperty("sun.jnu.encoding"_s));
	if (sysEncoding != nullptr && !sysEncoding->equals(fileEncoding)) {
		$init($Locale);
		return $of($Locale::ROOT);
	}
	$var($String, language, $System::getProperty("user.language"_s, "en"_s));
	$var($String, country, $System::getProperty("user.country"_s, ""_s));
	$var($String, variant, $System::getProperty("user.variant"_s, ""_s));
	return $of($new($Locale, language, country, variant));
}

SunFontManager$12::SunFontManager$12() {
}

$Class* SunFontManager$12::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$12, name, initialize, &_SunFontManager$12_ClassInfo_, allocate$SunFontManager$12);
	return class$;
}

$Class* SunFontManager$12::class$ = nullptr;

	} // font
} // sun