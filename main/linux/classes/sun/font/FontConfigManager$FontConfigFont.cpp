#include <sun/font/FontConfigManager$FontConfigFont.h>

#include <sun/font/FontConfigManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _FontConfigManager$FontConfigFont_FieldInfo_[] = {
	{"familyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, familyName)},
	{"styleStr", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, styleStr)},
	{"fullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, fullName)},
	{"fontFile", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, fontFile)},
	{}
};

$MethodInfo _FontConfigManager$FontConfigFont_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontConfigManager$FontConfigFont::*)()>(&FontConfigManager$FontConfigFont::init$))},
	{}
};

$InnerClassInfo _FontConfigManager$FontConfigFont_InnerClassesInfo_[] = {
	{"sun.font.FontConfigManager$FontConfigFont", "sun.font.FontConfigManager", "FontConfigFont", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FontConfigManager$FontConfigFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontConfigManager$FontConfigFont",
	"java.lang.Object",
	nullptr,
	_FontConfigManager$FontConfigFont_FieldInfo_,
	_FontConfigManager$FontConfigFont_MethodInfo_,
	nullptr,
	nullptr,
	_FontConfigManager$FontConfigFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontConfigManager"
};

$Object* allocate$FontConfigManager$FontConfigFont($Class* clazz) {
	return $of($alloc(FontConfigManager$FontConfigFont));
}

void FontConfigManager$FontConfigFont::init$() {
}

FontConfigManager$FontConfigFont::FontConfigManager$FontConfigFont() {
}

$Class* FontConfigManager$FontConfigFont::load$($String* name, bool initialize) {
	$loadClass(FontConfigManager$FontConfigFont, name, initialize, &_FontConfigManager$FontConfigFont_ClassInfo_, allocate$FontConfigManager$FontConfigFont);
	return class$;
}

$Class* FontConfigManager$FontConfigFont::class$ = nullptr;

	} // font
} // sun