#include <sun/font/FontConfigManager$FcCompFont.h>

#include <sun/font/CompositeFont.h>
#include <sun/font/FontConfigManager$FontConfigFont.h>
#include <sun/font/FontConfigManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _FontConfigManager$FcCompFont_FieldInfo_[] = {
	{"fcName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, fcName)},
	{"fcFamily", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, fcFamily)},
	{"jdkName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, jdkName)},
	{"style", "I", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, style)},
	{"firstFont", "Lsun/font/FontConfigManager$FontConfigFont;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, firstFont)},
	{"allFonts", "[Lsun/font/FontConfigManager$FontConfigFont;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, allFonts)},
	{"compFont", "Lsun/font/CompositeFont;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, compFont)},
	{}
};

$MethodInfo _FontConfigManager$FcCompFont_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontConfigManager$FcCompFont::*)()>(&FontConfigManager$FcCompFont::init$))},
	{}
};

$InnerClassInfo _FontConfigManager$FcCompFont_InnerClassesInfo_[] = {
	{"sun.font.FontConfigManager$FcCompFont", "sun.font.FontConfigManager", "FcCompFont", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FontConfigManager$FcCompFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontConfigManager$FcCompFont",
	"java.lang.Object",
	nullptr,
	_FontConfigManager$FcCompFont_FieldInfo_,
	_FontConfigManager$FcCompFont_MethodInfo_,
	nullptr,
	nullptr,
	_FontConfigManager$FcCompFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontConfigManager"
};

$Object* allocate$FontConfigManager$FcCompFont($Class* clazz) {
	return $of($alloc(FontConfigManager$FcCompFont));
}

void FontConfigManager$FcCompFont::init$() {
}

FontConfigManager$FcCompFont::FontConfigManager$FcCompFont() {
}

$Class* FontConfigManager$FcCompFont::load$($String* name, bool initialize) {
	$loadClass(FontConfigManager$FcCompFont, name, initialize, &_FontConfigManager$FcCompFont_ClassInfo_, allocate$FontConfigManager$FcCompFont);
	return class$;
}

$Class* FontConfigManager$FcCompFont::class$ = nullptr;

	} // font
} // sun