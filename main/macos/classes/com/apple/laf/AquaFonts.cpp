#include <com/apple/laf/AquaFonts.h>

#include <com/apple/laf/AquaFonts$1.h>
#include <com/apple/laf/AquaFonts$2.h>
#include <com/apple/laf/AquaFonts$3.h>
#include <com/apple/laf/AquaFonts$4.h>
#include <com/apple/laf/AquaFonts$5.h>
#include <com/apple/laf/AquaFonts$6.h>
#include <com/apple/laf/AquaFonts$7.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Font.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <jcpp.h>

#undef MAC_DEFAULT_FONT_NAME

using $AquaFonts$1 = ::com::apple::laf::AquaFonts$1;
using $AquaFonts$2 = ::com::apple::laf::AquaFonts$2;
using $AquaFonts$3 = ::com::apple::laf::AquaFonts$3;
using $AquaFonts$4 = ::com::apple::laf::AquaFonts$4;
using $AquaFonts$5 = ::com::apple::laf::AquaFonts$5;
using $AquaFonts$6 = ::com::apple::laf::AquaFonts$6;
using $AquaFonts$7 = ::com::apple::laf::AquaFonts$7;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFonts_FieldInfo_[] = {
	{"MAC_DEFAULT_FONT_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, MAC_DEFAULT_FONT_NAME)},
	{"lucida9Pt", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, lucida9Pt)},
	{"lucida11Pt", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, lucida11Pt)},
	{"lucida12Pt", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, lucida12Pt)},
	{"lucida13Pt", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, lucida13Pt)},
	{"lucida14Pt", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, lucida14Pt)},
	{"lucida13PtBold", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, lucida13PtBold)},
	{"lucida14PtBold", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaFonts, lucida14PtBold)},
	{}
};

$MethodInfo _AquaFonts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaFonts::*)()>(&AquaFonts::init$))},
	{"getAlertHeaderFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getAlertHeaderFont))},
	{"getAlertMessageFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getAlertMessageFont))},
	{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getControlTextFont))},
	{"getControlTextSmallFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getControlTextSmallFont))},
	{"getDockIconFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Font*(*)()>(&AquaFonts::getDockIconFont))},
	{"getMenuFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getMenuFont))},
	{"getMiniControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getMiniControlTextFont))},
	{"getSmallControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getSmallControlTextFont))},
	{"getViewFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)()>(&AquaFonts::getViewFont))},
	{}
};

$InnerClassInfo _AquaFonts_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFonts$DerivedUIResourceFont", "com.apple.laf.AquaFonts", "DerivedUIResourceFont", $STATIC},
	{"com.apple.laf.AquaFonts$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFonts$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFonts$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFonts$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFonts$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFonts$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFonts$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFonts_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFonts",
	"java.lang.Object",
	nullptr,
	_AquaFonts_FieldInfo_,
	_AquaFonts_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFonts_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFonts$DerivedUIResourceFont,com.apple.laf.AquaFonts$7,com.apple.laf.AquaFonts$6,com.apple.laf.AquaFonts$5,com.apple.laf.AquaFonts$4,com.apple.laf.AquaFonts$3,com.apple.laf.AquaFonts$2,com.apple.laf.AquaFonts$1"
};

$Object* allocate$AquaFonts($Class* clazz) {
	return $of($alloc(AquaFonts));
}

$String* AquaFonts::MAC_DEFAULT_FONT_NAME = nullptr;
$AquaUtils$RecyclableSingleton* AquaFonts::lucida9Pt = nullptr;
$AquaUtils$RecyclableSingleton* AquaFonts::lucida11Pt = nullptr;
$AquaUtils$RecyclableSingleton* AquaFonts::lucida12Pt = nullptr;
$AquaUtils$RecyclableSingleton* AquaFonts::lucida13Pt = nullptr;
$AquaUtils$RecyclableSingleton* AquaFonts::lucida14Pt = nullptr;
$AquaUtils$RecyclableSingleton* AquaFonts::lucida13PtBold = nullptr;
$AquaUtils$RecyclableSingleton* AquaFonts::lucida14PtBold = nullptr;

void AquaFonts::init$() {
}

$FontUIResource* AquaFonts::getMiniControlTextFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida9Pt)->get());
}

$FontUIResource* AquaFonts::getSmallControlTextFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida11Pt)->get());
}

$FontUIResource* AquaFonts::getControlTextFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida13Pt)->get());
}

$FontUIResource* AquaFonts::getControlTextSmallFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida11Pt)->get());
}

$FontUIResource* AquaFonts::getMenuFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida14Pt)->get());
}

$Font* AquaFonts::getDockIconFont() {
	$init(AquaFonts);
	return $cast($Font, $nc(AquaFonts::lucida14PtBold)->get());
}

$FontUIResource* AquaFonts::getAlertHeaderFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida13PtBold)->get());
}

$FontUIResource* AquaFonts::getAlertMessageFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida11Pt)->get());
}

$FontUIResource* AquaFonts::getViewFont() {
	$init(AquaFonts);
	return $cast($FontUIResource, $nc(AquaFonts::lucida12Pt)->get());
}

void clinit$AquaFonts($Class* class$) {
	$assignStatic(AquaFonts::MAC_DEFAULT_FONT_NAME, "Lucida Grande"_s);
	$assignStatic(AquaFonts::lucida9Pt, $new($AquaFonts$1));
	$assignStatic(AquaFonts::lucida11Pt, $new($AquaFonts$2));
	$assignStatic(AquaFonts::lucida12Pt, $new($AquaFonts$3));
	$assignStatic(AquaFonts::lucida13Pt, $new($AquaFonts$4));
	$assignStatic(AquaFonts::lucida14Pt, $new($AquaFonts$5));
	$assignStatic(AquaFonts::lucida13PtBold, $new($AquaFonts$6));
	$assignStatic(AquaFonts::lucida14PtBold, $new($AquaFonts$7));
}

AquaFonts::AquaFonts() {
}

$Class* AquaFonts::load$($String* name, bool initialize) {
	$loadClass(AquaFonts, name, initialize, &_AquaFonts_ClassInfo_, clinit$AquaFonts, allocate$AquaFonts);
	return class$;
}

$Class* AquaFonts::class$ = nullptr;

		} // laf
	} // apple
} // com