#include <javax/swing/plaf/nimbus/ComboBoxArrowButtonEditableState.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _ComboBoxArrowButtonEditableState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ComboBoxArrowButtonEditableState::*)()>(&ComboBoxArrowButtonEditableState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ComboBoxArrowButtonEditableState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ComboBoxArrowButtonEditableState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_ComboBoxArrowButtonEditableState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$ComboBoxArrowButtonEditableState($Class* clazz) {
	return $of($alloc(ComboBoxArrowButtonEditableState));
}

void ComboBoxArrowButtonEditableState::init$() {
	$State::init$("Editable"_s);
}

bool ComboBoxArrowButtonEditableState::isInState($JComponent* c) {
	$var($Component, parent, $nc(c)->getParent());
	return $instanceOf($JComboBox, parent) && $nc(($cast($JComboBox, parent)))->isEditable();
}

ComboBoxArrowButtonEditableState::ComboBoxArrowButtonEditableState() {
}

$Class* ComboBoxArrowButtonEditableState::load$($String* name, bool initialize) {
	$loadClass(ComboBoxArrowButtonEditableState, name, initialize, &_ComboBoxArrowButtonEditableState_ClassInfo_, allocate$ComboBoxArrowButtonEditableState);
	return class$;
}

$Class* ComboBoxArrowButtonEditableState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax