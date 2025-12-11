#include <com/apple/laf/AquaGroupBorder$Titleless.h>

#include <com/apple/laf/AquaGroupBorder.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaGroupBorder = ::com::apple::laf::AquaGroupBorder;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaGroupBorder$Titleless_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaGroupBorder$Titleless::*)()>(&AquaGroupBorder$Titleless::init$))},
	{}
};

$InnerClassInfo _AquaGroupBorder$Titleless_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaGroupBorder$Titleless", "com.apple.laf.AquaGroupBorder", "Titleless", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _AquaGroupBorder$Titleless_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaGroupBorder$Titleless",
	"com.apple.laf.AquaGroupBorder",
	nullptr,
	nullptr,
	_AquaGroupBorder$Titleless_MethodInfo_,
	nullptr,
	nullptr,
	_AquaGroupBorder$Titleless_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaGroupBorder"
};

$Object* allocate$AquaGroupBorder$Titleless($Class* clazz) {
	return $of($alloc(AquaGroupBorder$Titleless));
}

void AquaGroupBorder$Titleless::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaGroupBorder::init$($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(8, 12, 8, 12)))->alterInsets(3, 5, 1, 5)));
}

AquaGroupBorder$Titleless::AquaGroupBorder$Titleless() {
}

$Class* AquaGroupBorder$Titleless::load$($String* name, bool initialize) {
	$loadClass(AquaGroupBorder$Titleless, name, initialize, &_AquaGroupBorder$Titleless_ClassInfo_, allocate$AquaGroupBorder$Titleless);
	return class$;
}

$Class* AquaGroupBorder$Titleless::class$ = nullptr;

		} // laf
	} // apple
} // com