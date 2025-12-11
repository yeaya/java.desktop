#include <com/apple/laf/AquaButtonExtendedTypes$4.h>

#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonExtendedTypes$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(AquaButtonExtendedTypes$4::*)($String*,bool)>(&AquaButtonExtendedTypes$4::init$))},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaButtonExtendedTypes$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonExtendedTypes",
	"getAllTypes",
	"()Ljava/util/Map;"
};

$InnerClassInfo _AquaButtonExtendedTypes$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonExtendedTypes$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaButtonExtendedTypes$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonExtendedTypes$4",
	"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier",
	nullptr,
	nullptr,
	_AquaButtonExtendedTypes$4_MethodInfo_,
	nullptr,
	&_AquaButtonExtendedTypes$4_EnclosingMethodInfo_,
	_AquaButtonExtendedTypes$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonExtendedTypes"
};

$Object* allocate$AquaButtonExtendedTypes$4($Class* clazz) {
	return $of($alloc(AquaButtonExtendedTypes$4));
}

void AquaButtonExtendedTypes$4::init$($String* name, bool setIconFont) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, setIconFont);
}

$Border* AquaButtonExtendedTypes$4::getBorder() {
	return $UIManager::getBorder("Button.border"_s);
}

AquaButtonExtendedTypes$4::AquaButtonExtendedTypes$4() {
}

$Class* AquaButtonExtendedTypes$4::load$($String* name, bool initialize) {
	$loadClass(AquaButtonExtendedTypes$4, name, initialize, &_AquaButtonExtendedTypes$4_ClassInfo_, allocate$AquaButtonExtendedTypes$4);
	return class$;
}

$Class* AquaButtonExtendedTypes$4::class$ = nullptr;

		} // laf
	} // apple
} // com