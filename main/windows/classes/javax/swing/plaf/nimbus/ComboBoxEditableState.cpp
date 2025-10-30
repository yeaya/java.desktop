#include <javax/swing/plaf/nimbus/ComboBoxEditableState.h>

#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _ComboBoxEditableState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ComboBoxEditableState::*)()>(&ComboBoxEditableState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ComboBoxEditableState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ComboBoxEditableState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_ComboBoxEditableState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$ComboBoxEditableState($Class* clazz) {
	return $of($alloc(ComboBoxEditableState));
}

void ComboBoxEditableState::init$() {
	$State::init$("Editable"_s);
}

bool ComboBoxEditableState::isInState($JComponent* c) {
	return $instanceOf($JComboBox, c) && $nc(($cast($JComboBox, c)))->isEditable();
}

ComboBoxEditableState::ComboBoxEditableState() {
}

$Class* ComboBoxEditableState::load$($String* name, bool initialize) {
	$loadClass(ComboBoxEditableState, name, initialize, &_ComboBoxEditableState_ClassInfo_, allocate$ComboBoxEditableState);
	return class$;
}

$Class* ComboBoxEditableState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax