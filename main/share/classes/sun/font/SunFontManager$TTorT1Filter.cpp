#include <sun/font/SunFontManager$TTorT1Filter.h>

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

$MethodInfo _SunFontManager$TTorT1Filter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager$TTorT1Filter::*)()>(&SunFontManager$TTorT1Filter::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunFontManager$TTorT1Filter_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$TTorT1Filter", "sun.font.SunFontManager", "TTorT1Filter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SunFontManager$TTorT1Filter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunFontManager$TTorT1Filter",
	"java.lang.Object",
	"java.io.FilenameFilter",
	nullptr,
	_SunFontManager$TTorT1Filter_MethodInfo_,
	nullptr,
	nullptr,
	_SunFontManager$TTorT1Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunFontManager"
};

$Object* allocate$SunFontManager$TTorT1Filter($Class* clazz) {
	return $of($alloc(SunFontManager$TTorT1Filter));
}

void SunFontManager$TTorT1Filter::init$() {
}

bool SunFontManager$TTorT1Filter::accept($File* dir, $String* name) {
	int32_t offset = $nc(name)->length() - 4;
	if (offset <= 0) {
		return false;
	} else {
		bool var$4 = name->startsWith(".ttf"_s, offset);
		bool var$3 = var$4 || name->startsWith(".TTF"_s, offset);
		bool var$2 = var$3 || name->startsWith(".ttc"_s, offset);
		bool var$1 = var$2 || name->startsWith(".TTC"_s, offset);
		bool var$0 = var$1 || name->startsWith(".otf"_s, offset);
		bool isTT = var$0 || name->startsWith(".OTF"_s, offset);
		if (isTT) {
			return true;
		} else {
			$init($SunFontManager);
			if ($SunFontManager::noType1Font) {
				return false;
			} else {
				bool var$7 = name->startsWith(".pfa"_s, offset);
				bool var$6 = var$7 || name->startsWith(".pfb"_s, offset);
				bool var$5 = var$6 || name->startsWith(".PFA"_s, offset);
				return (var$5 || name->startsWith(".PFB"_s, offset));
			}
		}
	}
}

SunFontManager$TTorT1Filter::SunFontManager$TTorT1Filter() {
}

$Class* SunFontManager$TTorT1Filter::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$TTorT1Filter, name, initialize, &_SunFontManager$TTorT1Filter_ClassInfo_, allocate$SunFontManager$TTorT1Filter);
	return class$;
}

$Class* SunFontManager$TTorT1Filter::class$ = nullptr;

	} // font
} // sun