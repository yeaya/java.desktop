#include <sun/font/FontConfigManager$FontConfigInfo.h>

#include <sun/font/FontConfigManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfigManager = ::sun::font::FontConfigManager;

namespace sun {
	namespace font {

$FieldInfo _FontConfigManager$FontConfigInfo_FieldInfo_[] = {
	{"fcVersion", "I", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigInfo, fcVersion)},
	{"cacheDirs", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigInfo, cacheDirs)},
	{}
};

$MethodInfo _FontConfigManager$FontConfigInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontConfigManager$FontConfigInfo::*)()>(&FontConfigManager$FontConfigInfo::init$))},
	{}
};

$InnerClassInfo _FontConfigManager$FontConfigInfo_InnerClassesInfo_[] = {
	{"sun.font.FontConfigManager$FontConfigInfo", "sun.font.FontConfigManager", "FontConfigInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FontConfigManager$FontConfigInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontConfigManager$FontConfigInfo",
	"java.lang.Object",
	nullptr,
	_FontConfigManager$FontConfigInfo_FieldInfo_,
	_FontConfigManager$FontConfigInfo_MethodInfo_,
	nullptr,
	nullptr,
	_FontConfigManager$FontConfigInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontConfigManager"
};

$Object* allocate$FontConfigManager$FontConfigInfo($Class* clazz) {
	return $of($alloc(FontConfigManager$FontConfigInfo));
}

void FontConfigManager$FontConfigInfo::init$() {
	$set(this, cacheDirs, $new($StringArray, 4));
}

FontConfigManager$FontConfigInfo::FontConfigManager$FontConfigInfo() {
}

$Class* FontConfigManager$FontConfigInfo::load$($String* name, bool initialize) {
	$loadClass(FontConfigManager$FontConfigInfo, name, initialize, &_FontConfigManager$FontConfigInfo_ClassInfo_, allocate$FontConfigManager$FontConfigInfo);
	return class$;
}

$Class* FontConfigManager$FontConfigInfo::class$ = nullptr;

	} // font
} // sun