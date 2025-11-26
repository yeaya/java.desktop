#include <javax/swing/plaf/nimbus/TableHeaderRendererSortedState.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _TableHeaderRendererSortedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TableHeaderRendererSortedState::*)()>(&TableHeaderRendererSortedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _TableHeaderRendererSortedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.TableHeaderRendererSortedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_TableHeaderRendererSortedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$TableHeaderRendererSortedState($Class* clazz) {
	return $of($alloc(TableHeaderRendererSortedState));
}

void TableHeaderRendererSortedState::init$() {
	$State::init$("Sorted"_s);
}

bool TableHeaderRendererSortedState::isInState($JComponent* c) {
	$var($String, sortOrder, $cast($String, $nc(c)->getClientProperty("Table.sortOrder"_s)));
	bool var$0 = sortOrder != nullptr;
	if (var$0) {
		bool var$1 = "ASCENDING"_s->equals(sortOrder);
		var$0 = (var$1 || "DESCENDING"_s->equals(sortOrder));
	}
	return var$0;
}

TableHeaderRendererSortedState::TableHeaderRendererSortedState() {
}

$Class* TableHeaderRendererSortedState::load$($String* name, bool initialize) {
	$loadClass(TableHeaderRendererSortedState, name, initialize, &_TableHeaderRendererSortedState_ClassInfo_, allocate$TableHeaderRendererSortedState);
	return class$;
}

$Class* TableHeaderRendererSortedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax