#include <com/apple/laf/AquaFonts$7.h>

#include <com/apple/laf/AquaFonts$DerivedUIResourceFont.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef BOLD

using $AquaFonts$DerivedUIResourceFont = ::com::apple::laf::AquaFonts$DerivedUIResourceFont;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFonts$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaFonts$7::*)()>(&AquaFonts$7::init$))},
	{"getInstance", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaFonts$7_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFonts",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaFonts$7_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFonts$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaFonts$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFonts$7",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaFonts$7_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;",
	&_AquaFonts$7_EnclosingMethodInfo_,
	_AquaFonts$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFonts"
};

$Object* allocate$AquaFonts$7($Class* clazz) {
	return $of($alloc(AquaFonts$7));
}

void AquaFonts$7::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaFonts$7::getInstance() {
	return $of($new($AquaFonts$DerivedUIResourceFont, "Lucida Grande"_s, $Font::BOLD, 14));
}

AquaFonts$7::AquaFonts$7() {
}

$Class* AquaFonts$7::load$($String* name, bool initialize) {
	$loadClass(AquaFonts$7, name, initialize, &_AquaFonts$7_ClassInfo_, allocate$AquaFonts$7);
	return class$;
}

$Class* AquaFonts$7::class$ = nullptr;

		} // laf
	} // apple
} // com