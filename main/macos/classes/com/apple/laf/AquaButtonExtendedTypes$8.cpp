#include <com/apple/laf/AquaButtonExtendedTypes$8.h>

#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
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

$MethodInfo _AquaButtonExtendedTypes$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$8::*)($String*,$JRSUIConstants$Widget*,$AquaUtilControlSize$SizeVariant*)>(&AquaButtonExtendedTypes$8::init$))},
	{"patchUp", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaButtonExtendedTypes$8_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonExtendedTypes",
	"getAllTypes",
	"()Ljava/util/Map;"
};

$InnerClassInfo _AquaButtonExtendedTypes$8_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$8", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$8_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$8",
	"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$8_MethodInfo_,
	nullptr,
	&_AquaButtonExtendedTypes$8_EnclosingMethodInfo_,
	_AquaButtonExtendedTypes$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$8($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$8));
}

void AquaButtonExtendedTypes$8::init$($String* name, $JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeVariant* variant) {
	$AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$(name, widget, variant);
}

void AquaButtonExtendedTypes$8::patchUp($AquaUtilControlSize$SizeDescriptor* descriptor) {
	$nc($nc(descriptor)->small)->alterMargins(0, 0, 0, 0);
}

AquaButtonExtendedTypes$8::AquaButtonExtendedTypes$8() {
}

$Class* AquaButtonExtendedTypes$8::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$8, name, initialize, &_AquaButtonExtendedTypes$8_ClassInfo_, allocate$AquaButtonExtendedTypes$8);
	return class$;
}

$Class* AquaButtonExtendedTypes$8::class$ = nullptr;

		} // laf
	} // apple
} // com