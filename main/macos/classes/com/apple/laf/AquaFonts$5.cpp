#include <com/apple/laf/AquaFonts$5.h>

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

$MethodInfo _AquaFonts$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaFonts$5::*)()>(&AquaFonts$5::init$))},
	{"getInstance", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaFonts$5_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFonts",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaFonts$5_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFonts$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaFonts$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFonts$5",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaFonts$5_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;",
	&_AquaFonts$5_EnclosingMethodInfo_,
	_AquaFonts$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFonts"
};

$Object* allocate$AquaFonts$5($Class* clazz) {
	return $of($alloc(AquaFonts$5));
}

void AquaFonts$5::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaFonts$5::getInstance() {
	return $of($new($AquaFonts$DerivedUIResourceFont, "Lucida Grande"_s, $Font::PLAIN, 14));
}

AquaFonts$5::AquaFonts$5() {
}

$Class* AquaFonts$5::load$($String* name, bool initialize) {
	$loadClass(AquaFonts$5, name, initialize, &_AquaFonts$5_ClassInfo_, allocate$AquaFonts$5);
	return class$;
}

$Class* AquaFonts$5::class$ = nullptr;

		} // laf
	} // apple
} // com