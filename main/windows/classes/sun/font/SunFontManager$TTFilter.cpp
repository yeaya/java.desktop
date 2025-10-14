#include <sun/font/SunFontManager$TTFilter.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _SunFontManager$TTFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager$TTFilter::*)()>(&SunFontManager$TTFilter::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunFontManager$TTFilter_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$TTFilter", "sun.font.SunFontManager", "TTFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SunFontManager$TTFilter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$TTFilter",
	"java.lang.Object",
	"java.io.FilenameFilter",
	nullptr,
	_SunFontManager$TTFilter_MethodInfo_,
	nullptr,
	nullptr,
	_SunFontManager$TTFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$TTFilter($Class* clazz) {
	return $of($alloc(SunFontManager$TTFilter));
}

void SunFontManager$TTFilter::init$() {
}

bool SunFontManager$TTFilter::accept($File* dir, $String* name) {
	int32_t offset = $nc(name)->length() - 4;
	if (offset <= 0) {
		return false;
	} else {
		bool var$4 = name->startsWith(".ttf"_s, offset);
		bool var$3 = var$4 || name->startsWith(".TTF"_s, offset);
		bool var$2 = var$3 || name->startsWith(".ttc"_s, offset);
		bool var$1 = var$2 || name->startsWith(".TTC"_s, offset);
		bool var$0 = var$1 || name->startsWith(".otf"_s, offset);
		return (var$0 || name->startsWith(".OTF"_s, offset));
	}
}

SunFontManager$TTFilter::SunFontManager$TTFilter() {
}

$Class* SunFontManager$TTFilter::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$TTFilter, name, initialize, &_SunFontManager$TTFilter_ClassInfo_, allocate$SunFontManager$TTFilter);
	return class$;
}

$Class* SunFontManager$TTFilter::class$ = nullptr;

	} // font
} // sun