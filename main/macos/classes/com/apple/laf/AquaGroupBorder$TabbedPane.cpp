#include <com/apple/laf/AquaGroupBorder$TabbedPane.h>

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

$MethodInfo _AquaGroupBorder$TabbedPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaGroupBorder$TabbedPane::*)()>(&AquaGroupBorder$TabbedPane::init$))},
	{}
};

$InnerClassInfo _AquaGroupBorder$TabbedPane_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaGroupBorder$TabbedPane", "com.apple.laf.AquaGroupBorder", "TabbedPane", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _AquaGroupBorder$TabbedPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaGroupBorder$TabbedPane",
	"com.apple.laf.AquaGroupBorder",
	nullptr,
	nullptr,
	_AquaGroupBorder$TabbedPane_MethodInfo_,
	nullptr,
	nullptr,
	_AquaGroupBorder$TabbedPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaGroupBorder"
};

$Object* allocate$AquaGroupBorder$TabbedPane($Class* clazz) {
	return $of($alloc(AquaGroupBorder$TabbedPane));
}

void AquaGroupBorder$TabbedPane::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaGroupBorder::init$($($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(8, 12, 8, 12)))->alterInsets(5, 5, 7, 5)));
}

AquaGroupBorder$TabbedPane::AquaGroupBorder$TabbedPane() {
}

$Class* AquaGroupBorder$TabbedPane::load$($String* name, bool initialize) {
	$loadClass(AquaGroupBorder$TabbedPane, name, initialize, &_AquaGroupBorder$TabbedPane_ClassInfo_, allocate$AquaGroupBorder$TabbedPane);
	return class$;
}

$Class* AquaGroupBorder$TabbedPane::class$ = nullptr;

		} // laf
	} // apple
} // com