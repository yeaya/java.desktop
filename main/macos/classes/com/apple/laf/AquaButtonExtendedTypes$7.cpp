#include <com/apple/laf/AquaButtonExtendedTypes$7.h>

#include <apple/laf/JRSUIConstants$IndicatorOnly.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

#undef YES

using $JRSUIConstants$IndicatorOnly = ::apple::laf::JRSUIConstants$IndicatorOnly;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonExtendedTypes$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;IIII)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$7::*)($String*,$JRSUIConstants$Widget*,$AquaUtilControlSize$SizeVariant*,int32_t,int32_t,int32_t,int32_t)>(&AquaButtonExtendedTypes$7::init$))},
	{"patchUp", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaButtonExtendedTypes$7_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonExtendedTypes",
	"getAllTypes",
	"()Ljava/util/Map;"
};

$InnerClassInfo _AquaButtonExtendedTypes$7_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$7",
	"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$7_MethodInfo_,
	nullptr,
	&_AquaButtonExtendedTypes$7_EnclosingMethodInfo_,
	_AquaButtonExtendedTypes$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$7($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$7));
}

void AquaButtonExtendedTypes$7::init$($String* name, $JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH) {
	$AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$(name, widget, variant, smallW, smallH, miniW, miniH);
}

void AquaButtonExtendedTypes$7::patchUp($AquaUtilControlSize$SizeDescriptor* descriptor) {
	$init($JRSUIConstants$IndicatorOnly);
	$nc($nc($nc(this->border)->painter)->state)->set($JRSUIConstants$IndicatorOnly::YES);
}

AquaButtonExtendedTypes$7::AquaButtonExtendedTypes$7() {
}

$Class* AquaButtonExtendedTypes$7::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$7, name, initialize, &_AquaButtonExtendedTypes$7_ClassInfo_, allocate$AquaButtonExtendedTypes$7);
	return class$;
}

$Class* AquaButtonExtendedTypes$7::class$ = nullptr;

		} // laf
	} // apple
} // com