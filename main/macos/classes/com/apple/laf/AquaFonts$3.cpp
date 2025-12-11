#include <com/apple/laf/AquaFonts$3.h>

#include <com/apple/laf/AquaFonts$DerivedUIResourceFont.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef PLAIN

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

$MethodInfo _AquaFonts$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaFonts$3::*)()>(&AquaFonts$3::init$))},
	{"getInstance", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaFonts$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFonts",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaFonts$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFonts$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaFonts$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFonts$3",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaFonts$3_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;",
	&_AquaFonts$3_EnclosingMethodInfo_,
	_AquaFonts$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFonts"
};

$Object* allocate$AquaFonts$3($Class* clazz) {
	return $of($alloc(AquaFonts$3));
}

void AquaFonts$3::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaFonts$3::getInstance() {
	return $of($new($AquaFonts$DerivedUIResourceFont, "Lucida Grande"_s, $Font::PLAIN, 12));
}

AquaFonts$3::AquaFonts$3() {
}

$Class* AquaFonts$3::load$($String* name, bool initialize) {
	$loadClass(AquaFonts$3, name, initialize, &_AquaFonts$3_ClassInfo_, allocate$AquaFonts$3);
	return class$;
}

$Class* AquaFonts$3::class$ = nullptr;

		} // laf
	} // apple
} // com