#include <javax/swing/plaf/TableUI.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _TableUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TableUI::*)()>(&TableUI::init$))},
	{}
};

$ClassInfo _TableUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.TableUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_TableUI_MethodInfo_
};

$Object* allocate$TableUI($Class* clazz) {
	return $of($alloc(TableUI));
}

void TableUI::init$() {
	$ComponentUI::init$();
}

TableUI::TableUI() {
}

$Class* TableUI::load$($String* name, bool initialize) {
	$loadClass(TableUI, name, initialize, &_TableUI_ClassInfo_, allocate$TableUI);
	return class$;
}

$Class* TableUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax