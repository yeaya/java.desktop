#include <com/apple/laf/ScreenMenuBarProvider.h>

#include <com/apple/laf/ScreenMenuBar.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _ScreenMenuBarProvider_MethodInfo_[] = {
	{"getScreenMenuBar", "()Lcom/apple/laf/ScreenMenuBar;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScreenMenuBarProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.apple.laf.ScreenMenuBarProvider",
	nullptr,
	nullptr,
	nullptr,
	_ScreenMenuBarProvider_MethodInfo_
};

$Object* allocate$ScreenMenuBarProvider($Class* clazz) {
	return $of($alloc(ScreenMenuBarProvider));
}

$Class* ScreenMenuBarProvider::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuBarProvider, name, initialize, &_ScreenMenuBarProvider_ClassInfo_, allocate$ScreenMenuBarProvider);
	return class$;
}

$Class* ScreenMenuBarProvider::class$ = nullptr;

		} // laf
	} // apple
} // com