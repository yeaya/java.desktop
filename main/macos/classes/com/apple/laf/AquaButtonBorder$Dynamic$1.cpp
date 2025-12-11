#include <com/apple/laf/AquaButtonBorder$Dynamic$1.h>

#include <com/apple/laf/AquaButtonBorder$Dynamic.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaButtonBorder$Dynamic$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(static_cast<void(AquaButtonBorder$Dynamic$1::*)($AquaUtilControlSize$SizeVariant*)>(&AquaButtonBorder$Dynamic$1::init$))},
	{"deriveMini", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaButtonBorder$Dynamic$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaButtonBorder$Dynamic",
	"<init>",
	"()V"
};

$InnerClassInfo _AquaButtonBorder$Dynamic$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaButtonBorder$Dynamic", "com.apple.laf.AquaButtonBorder", "Dynamic", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaButtonBorder$Dynamic$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaButtonBorder$Dynamic$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaButtonBorder$Dynamic$1",
	"com.apple.laf.AquaUtilControlSize$SizeDescriptor",
	nullptr,
	nullptr,
	_AquaButtonBorder$Dynamic$1_MethodInfo_,
	nullptr,
	&_AquaButtonBorder$Dynamic$1_EnclosingMethodInfo_,
	_AquaButtonBorder$Dynamic$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaButtonBorder"
};

$Object* allocate$AquaButtonBorder$Dynamic$1($Class* clazz) {
	return $of($alloc(AquaButtonBorder$Dynamic$1));
}

void AquaButtonBorder$Dynamic$1::init$($AquaUtilControlSize$SizeVariant* variant) {
	$AquaUtilControlSize$SizeDescriptor::init$(variant);
}

$AquaUtilControlSize$SizeVariant* AquaButtonBorder$Dynamic$1::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	$useLocalCurrentObjectStackCache();
	return $AquaUtilControlSize$SizeDescriptor::deriveSmall($($nc($($nc($($nc(v)->alterMinSize(0, -2)))->alterMargins(0, -3, 0, -3)))->alterInsets(-3, -3, -4, -3)));
}

$AquaUtilControlSize$SizeVariant* AquaButtonBorder$Dynamic$1::deriveMini($AquaUtilControlSize$SizeVariant* v) {
	$useLocalCurrentObjectStackCache();
	return $AquaUtilControlSize$SizeDescriptor::deriveMini($($nc($($nc($($nc(v)->alterMinSize(0, -2)))->alterMargins(0, -3, 0, -3)))->alterInsets(-3, -3, -1, -3)));
}

AquaButtonBorder$Dynamic$1::AquaButtonBorder$Dynamic$1() {
}

$Class* AquaButtonBorder$Dynamic$1::load$($String* name, bool initialize) {
	$loadClass(AquaButtonBorder$Dynamic$1, name, initialize, &_AquaButtonBorder$Dynamic$1_ClassInfo_, allocate$AquaButtonBorder$Dynamic$1);
	return class$;
}

$Class* AquaButtonBorder$Dynamic$1::class$ = nullptr;

		} // laf
	} // apple
} // com