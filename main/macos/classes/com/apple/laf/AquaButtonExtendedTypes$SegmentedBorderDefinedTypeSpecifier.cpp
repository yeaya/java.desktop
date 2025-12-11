#include <com/apple/laf/AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$SegmentPosition.h>
#include <apple/laf/JRSUIConstants$SegmentTrailingSeparator.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder$Named.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes$SegmentedNamedBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

#undef YES

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$SegmentPosition = ::apple::laf::JRSUIConstants$SegmentPosition;
using $JRSUIConstants$SegmentTrailingSeparator = ::apple::laf::JRSUIConstants$SegmentTrailingSeparator;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonBorder$Named = ::com::apple::laf::AquaButtonBorder$Named;
using $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;
using $AquaButtonExtendedTypes$SegmentedNamedBorder = ::com::apple::laf::AquaButtonExtendedTypes$SegmentedNamedBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lapple/laf/JRSUIConstants$SegmentPosition;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::*)($String*,$JRSUIConstants$Widget*,$JRSUIConstants$SegmentPosition*,$AquaUtilControlSize$SizeVariant*)>(&AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$))},
	{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lapple/laf/JRSUIConstants$SegmentPosition;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::*)($String*,$JRSUIConstants$Widget*,$JRSUIConstants$SegmentPosition*,$AquaUtilControlSize$SizeVariant*,int32_t,int32_t,int32_t,int32_t)>(&AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$))},
	{"initBorder", "(Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)Lcom/apple/laf/AquaBorder;", nullptr, 0},
	{}
};

$InnerClassInfo _AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "SegmentedBorderDefinedTypeSpecifier", $STATIC},
	{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier",
	"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_MethodInfo_,
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier));
}

void AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$($String* name, $JRSUIConstants$Widget* widget, $JRSUIConstants$SegmentPosition* position, $AquaUtilControlSize$SizeVariant* variant) {
	AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$(name, widget, position, variant, 0, 0, 0, 0);
}

void AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$($String* name, $JRSUIConstants$Widget* widget, $JRSUIConstants$SegmentPosition* position, $AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH) {
	$AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$(name, widget, variant, smallW, smallH, miniW, miniH);
	$init($JRSUIConstants$SegmentTrailingSeparator);
	$nc($nc($nc(this->border)->painter)->state)->set($JRSUIConstants$SegmentTrailingSeparator::YES);
	$nc($nc($nc(this->border)->painter)->state)->set(position);
}

$AquaBorder* AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::initBorder($JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeDescriptor* desc) {
	return $new($AquaButtonExtendedTypes$SegmentedNamedBorder, widget, desc);
}

AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier() {
}

$Class* AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, name, initialize, &_AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier_ClassInfo_, allocate$AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier);
	return class$;
}

$Class* AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::class$ = nullptr;

		} // laf
	} // apple
} // com