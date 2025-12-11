#include <com/apple/laf/AquaButtonExtendedTypes$2.h>

#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

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

$MethodInfo _AquaButtonExtendedTypes$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$2::*)($String*,bool)>(&AquaButtonExtendedTypes$2::init$))},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaButtonExtendedTypes$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonExtendedTypes",
	"getAllTypes",
	"()Ljava/util/Map;"
};

$InnerClassInfo _AquaButtonExtendedTypes$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$2",
	"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$2_MethodInfo_,
	nullptr,
	&_AquaButtonExtendedTypes$2_EnclosingMethodInfo_,
	_AquaButtonExtendedTypes$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$2($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$2));
}

void AquaButtonExtendedTypes$2::init$($String* name, bool setIconFont) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, setIconFont);
}

$Border* AquaButtonExtendedTypes$2::getBorder() {
	return $AquaButtonBorder::getToolBarButtonBorder();
}

AquaButtonExtendedTypes$2::AquaButtonExtendedTypes$2() {
}

$Class* AquaButtonExtendedTypes$2::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$2, name, initialize, &_AquaButtonExtendedTypes$2_ClassInfo_, allocate$AquaButtonExtendedTypes$2);
	return class$;
}

$Class* AquaButtonExtendedTypes$2::class$ = nullptr;

		} // laf
	} // apple
} // com