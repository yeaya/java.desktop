#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>

#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder$Named.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonBorder$Named = ::com::apple::laf::AquaButtonBorder$Named;
using $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1 = ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1;
using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_FieldInfo_[] = {
	{"border", "Lcom/apple/laf/AquaBorder;", nullptr, $FINAL, $field(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, border)},
	{}
};

$MethodInfo _AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::*)($String*,$JRSUIConstants$Widget*,$AquaUtilControlSize$SizeVariant*)>(&AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$))},
	{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;IIII)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::*)($String*,$JRSUIConstants$Widget*,$AquaUtilControlSize$SizeVariant*,int32_t,int32_t,int32_t,int32_t)>(&AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$))},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{"initBorder", "(Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)Lcom/apple/laf/AquaBorder;", nullptr, 0},
	{"patchUp", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
	{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier",
	"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier",
	nullptr,
	_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_FieldInfo_,
	_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$BorderDefinedTypeSpecifier($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier));
}

void AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$($String* name, $JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeVariant* variant) {
	AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$(name, widget, variant, 0, 0, 0, 0);
}

void AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$($String* name, $JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, false);
	$set(this, border, initBorder(widget, $$new($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, this, variant, smallW, smallH, miniW, miniH)));
	patchUp($nc(this->border)->sizeDescriptor);
}

$Border* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::getBorder() {
	return this->border;
}

void AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::patchUp($AquaUtilControlSize$SizeDescriptor* descriptor) {
}

$AquaBorder* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::initBorder($JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeDescriptor* desc) {
	return $new($AquaButtonBorder$Named, widget, desc);
}

AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier() {
}

$Class* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier, name, initialize, &_AquaButtonExtendedTypes$BorderDefinedTypeSpecifier_ClassInfo_, allocate$AquaButtonExtendedTypes$BorderDefinedTypeSpecifier);
	return class$;
}

$Class* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::class$ = nullptr;

		} // laf
	} // apple
} // com