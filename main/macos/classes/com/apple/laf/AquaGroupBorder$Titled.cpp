#include <com/apple/laf/AquaGroupBorder$Titled.h>

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

$MethodInfo _AquaGroupBorder$Titled_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaGroupBorder$Titled::*)()>(&AquaGroupBorder$Titled::init$))},
	{}
};

$InnerClassInfo _AquaGroupBorder$Titled_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaGroupBorder$Titled", "com.apple.laf.AquaGroupBorder", "Titled", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _AquaGroupBorder$Titled_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaGroupBorder$Titled",
	"com.apple.laf.AquaGroupBorder",
	nullptr,
	nullptr,
	_AquaGroupBorder$Titled_MethodInfo_,
	nullptr,
	nullptr,
	_AquaGroupBorder$Titled_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaGroupBorder"
};

$Object* allocate$AquaGroupBorder$Titled($Class* clazz) {
	return $of($alloc(AquaGroupBorder$Titled));
}

void AquaGroupBorder$Titled::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaGroupBorder::init$($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(16, 20, 16, 20)))->alterInsets(16, 5, 4, 5)));
}

AquaGroupBorder$Titled::AquaGroupBorder$Titled() {
}

$Class* AquaGroupBorder$Titled::load$($String* name, bool initialize) {
	$loadClass(AquaGroupBorder$Titled, name, initialize, &_AquaGroupBorder$Titled_ClassInfo_, allocate$AquaGroupBorder$Titled);
	return class$;
}

$Class* AquaGroupBorder$Titled::class$ = nullptr;

		} // laf
	} // apple
} // com