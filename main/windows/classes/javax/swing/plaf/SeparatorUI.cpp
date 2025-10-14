#include <javax/swing/plaf/SeparatorUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _SeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SeparatorUI::*)()>(&SeparatorUI::init$))},
	{}
};

$ClassInfo _SeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.SeparatorUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_SeparatorUI_MethodInfo_
};

$Object* allocate$SeparatorUI($Class* clazz) {
	return $of($alloc(SeparatorUI));
}

void SeparatorUI::init$() {
	$ComponentUI::init$();
}

SeparatorUI::SeparatorUI() {
}

$Class* SeparatorUI::load$($String* name, bool initialize) {
	$loadClass(SeparatorUI, name, initialize, &_SeparatorUI_ClassInfo_, allocate$SeparatorUI);
	return class$;
}

$Class* SeparatorUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax