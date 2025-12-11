#include <sun/font/FontManagerForSGE.h>

#include <java/awt/Font.h>
#include <java/util/Locale.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$MethodInfo _FontManagerForSGE_MethodInfo_[] = {
	{"getAllInstalledFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCreatedFontFamilyNames", "()Ljava/util/TreeMap;", "()Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getCreatedFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInstalledFontFamilyNames", "(Ljava/util/Locale;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"useAlternateFontforJALocales", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FontManagerForSGE_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.FontManagerForSGE",
	nullptr,
	"sun.font.FontManager",
	nullptr,
	_FontManagerForSGE_MethodInfo_
};

$Object* allocate$FontManagerForSGE($Class* clazz) {
	return $of($alloc(FontManagerForSGE));
}

$Class* FontManagerForSGE::load$($String* name, bool initialize) {
	$loadClass(FontManagerForSGE, name, initialize, &_FontManagerForSGE_ClassInfo_, allocate$FontManagerForSGE);
	return class$;
}

$Class* FontManagerForSGE::class$ = nullptr;

	} // font
} // sun