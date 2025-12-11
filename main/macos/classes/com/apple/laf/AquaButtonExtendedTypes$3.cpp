#include <com/apple/laf/AquaButtonExtendedTypes$3.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonExtendedTypes$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$3::*)($String*,bool)>(&AquaButtonExtendedTypes$3::init$))},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaButtonExtendedTypes$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonExtendedTypes",
	"getAllTypes",
	"()Ljava/util/Map;"
};

$InnerClassInfo _AquaButtonExtendedTypes$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$3",
	"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$3_MethodInfo_,
	nullptr,
	&_AquaButtonExtendedTypes$3_EnclosingMethodInfo_,
	_AquaButtonExtendedTypes$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$3($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$3));
}

void AquaButtonExtendedTypes$3::init$($String* name, bool setIconFont) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, setIconFont);
}

$Border* AquaButtonExtendedTypes$3::getBorder() {
	return $AquaButtonBorder::getToggleButtonBorder();
}

AquaButtonExtendedTypes$3::AquaButtonExtendedTypes$3() {
}

$Class* AquaButtonExtendedTypes$3::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$3, name, initialize, &_AquaButtonExtendedTypes$3_ClassInfo_, allocate$AquaButtonExtendedTypes$3);
	return class$;
}

$Class* AquaButtonExtendedTypes$3::class$ = nullptr;

		} // laf
	} // apple
} // com