#include <javax/swing/plaf/TableHeaderUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _TableHeaderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TableHeaderUI::*)()>(&TableHeaderUI::init$))},
	{}
};

$ClassInfo _TableHeaderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.TableHeaderUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_TableHeaderUI_MethodInfo_
};

$Object* allocate$TableHeaderUI($Class* clazz) {
	return $of($alloc(TableHeaderUI));
}

void TableHeaderUI::init$() {
	$ComponentUI::init$();
}

TableHeaderUI::TableHeaderUI() {
}

$Class* TableHeaderUI::load$($String* name, bool initialize) {
	$loadClass(TableHeaderUI, name, initialize, &_TableHeaderUI_ClassInfo_, allocate$TableHeaderUI);
	return class$;
}

$Class* TableHeaderUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax