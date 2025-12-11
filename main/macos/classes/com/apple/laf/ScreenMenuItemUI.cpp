#include <com/apple/laf/ScreenMenuItemUI.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _ScreenMenuItemUI_MethodInfo_[] = {
	{"updateListenersForScreenMenuItem", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScreenMenuItemUI_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.laf.ScreenMenuItemUI",
	nullptr,
	nullptr,
	nullptr,
	_ScreenMenuItemUI_MethodInfo_
};

$Object* allocate$ScreenMenuItemUI($Class* clazz) {
	return $of($alloc(ScreenMenuItemUI));
}

$Class* ScreenMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuItemUI, name, initialize, &_ScreenMenuItemUI_ClassInfo_, allocate$ScreenMenuItemUI);
	return class$;
}

$Class* ScreenMenuItemUI::class$ = nullptr;

		} // laf
	} // apple
} // com