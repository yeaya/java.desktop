#include <com/apple/laf/AquaFonts$DerivedUIResourceFont.h>

#include <com/apple/laf/AquaFonts.h>
#include <java/awt/Font.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/util/Map.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFonts$DerivedUIResourceFont_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFonts$DerivedUIResourceFont::*)($Font*)>(&AquaFonts$DerivedUIResourceFont::init$))},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFonts$DerivedUIResourceFont::*)($String*,int32_t,int32_t)>(&AquaFonts$DerivedUIResourceFont::init$))},
	{"deriveFont", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(F)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(I)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(ILjava/awt/geom/AffineTransform;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(IF)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(Ljava/util/Map;)Ljava/awt/Font;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/awt/Font;", $PUBLIC},
	{}
};

$InnerClassInfo _AquaFonts$DerivedUIResourceFont_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFonts$DerivedUIResourceFont", "com.apple.laf.AquaFonts", "DerivedUIResourceFont", $STATIC},
	{}
};

$ClassInfo _AquaFonts$DerivedUIResourceFont_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFonts$DerivedUIResourceFont",
	"javax.swing.plaf.FontUIResource",
	nullptr,
	nullptr,
	_AquaFonts$DerivedUIResourceFont_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFonts$DerivedUIResourceFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFonts"
};

$Object* allocate$AquaFonts$DerivedUIResourceFont($Class* clazz) {
	return $of($alloc(AquaFonts$DerivedUIResourceFont));
}

void AquaFonts$DerivedUIResourceFont::init$($Font* font) {
	$FontUIResource::init$(font);
}

void AquaFonts$DerivedUIResourceFont::init$($String* name, int32_t style, int32_t size) {
	$FontUIResource::init$(name, style, size);
}

$Font* AquaFonts$DerivedUIResourceFont::deriveFont($AffineTransform* trans) {
	return $new(AquaFonts$DerivedUIResourceFont, $($FontUIResource::deriveFont(trans)));
}

$Font* AquaFonts$DerivedUIResourceFont::deriveFont(float derivedSize) {
	return $new(AquaFonts$DerivedUIResourceFont, $($FontUIResource::deriveFont(derivedSize)));
}

$Font* AquaFonts$DerivedUIResourceFont::deriveFont(int32_t derivedStyle) {
	return $new(AquaFonts$DerivedUIResourceFont, $($FontUIResource::deriveFont(derivedStyle)));
}

$Font* AquaFonts$DerivedUIResourceFont::deriveFont(int32_t derivedStyle, $AffineTransform* trans) {
	return $new(AquaFonts$DerivedUIResourceFont, $($FontUIResource::deriveFont(derivedStyle, trans)));
}

$Font* AquaFonts$DerivedUIResourceFont::deriveFont(int32_t derivedStyle, float derivedSize) {
	return $new(AquaFonts$DerivedUIResourceFont, $($FontUIResource::deriveFont(derivedStyle, derivedSize)));
}

$Font* AquaFonts$DerivedUIResourceFont::deriveFont($Map* attributes) {
	return $new(AquaFonts$DerivedUIResourceFont, $($FontUIResource::deriveFont(attributes)));
}

AquaFonts$DerivedUIResourceFont::AquaFonts$DerivedUIResourceFont() {
}

$Class* AquaFonts$DerivedUIResourceFont::load$($String* name, bool initialize) {
	$loadClass(AquaFonts$DerivedUIResourceFont, name, initialize, &_AquaFonts$DerivedUIResourceFont_ClassInfo_, allocate$AquaFonts$DerivedUIResourceFont);
	return class$;
}

$Class* AquaFonts$DerivedUIResourceFont::class$ = nullptr;

		} // laf
	} // apple
} // com