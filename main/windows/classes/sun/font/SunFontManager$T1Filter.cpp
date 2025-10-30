#include <sun/font/SunFontManager$T1Filter.h>

#include <java/io/File.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$MethodInfo _SunFontManager$T1Filter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager$T1Filter::*)()>(&SunFontManager$T1Filter::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunFontManager$T1Filter_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$T1Filter", "sun.font.SunFontManager", "T1Filter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SunFontManager$T1Filter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$T1Filter",
	"java.lang.Object",
	"java.io.FilenameFilter",
	nullptr,
	_SunFontManager$T1Filter_MethodInfo_,
	nullptr,
	nullptr,
	_SunFontManager$T1Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$T1Filter($Class* clazz) {
	return $of($alloc(SunFontManager$T1Filter));
}

void SunFontManager$T1Filter::init$() {
}

bool SunFontManager$T1Filter::accept($File* dir, $String* name) {
	$init($SunFontManager);
	if ($SunFontManager::noType1Font) {
		return false;
	}
	int32_t offset = $nc(name)->length() - 4;
	if (offset <= 0) {
		return false;
	} else {
		bool var$2 = name->startsWith(".pfa"_s, offset);
		bool var$1 = var$2 || name->startsWith(".pfb"_s, offset);
		bool var$0 = var$1 || name->startsWith(".PFA"_s, offset);
		return (var$0 || name->startsWith(".PFB"_s, offset));
	}
}

SunFontManager$T1Filter::SunFontManager$T1Filter() {
}

$Class* SunFontManager$T1Filter::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$T1Filter, name, initialize, &_SunFontManager$T1Filter_ClassInfo_, allocate$SunFontManager$T1Filter);
	return class$;
}

$Class* SunFontManager$T1Filter::class$ = nullptr;

	} // font
} // sun