#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMenuButtonWindowNotFocusedState.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _InternalFrameTitlePaneMenuButtonWindowNotFocusedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameTitlePaneMenuButtonWindowNotFocusedState::*)()>(&InternalFrameTitlePaneMenuButtonWindowNotFocusedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InternalFrameTitlePaneMenuButtonWindowNotFocusedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonWindowNotFocusedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_InternalFrameTitlePaneMenuButtonWindowNotFocusedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$InternalFrameTitlePaneMenuButtonWindowNotFocusedState($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneMenuButtonWindowNotFocusedState));
}

void InternalFrameTitlePaneMenuButtonWindowNotFocusedState::init$() {
	$State::init$("WindowNotFocused"_s);
}

bool InternalFrameTitlePaneMenuButtonWindowNotFocusedState::isInState($JComponent* c) {
	$var($Component, parent, c);
	while ($nc(parent)->getParent() != nullptr) {
		if ($instanceOf($JInternalFrame, parent)) {
			break;
		}
		$assign(parent, parent->getParent());
	}
	if ($instanceOf($JInternalFrame, parent)) {
		return !($nc(($cast($JInternalFrame, parent)))->isSelected());
	}
	return false;
}

InternalFrameTitlePaneMenuButtonWindowNotFocusedState::InternalFrameTitlePaneMenuButtonWindowNotFocusedState() {
}

$Class* InternalFrameTitlePaneMenuButtonWindowNotFocusedState::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneMenuButtonWindowNotFocusedState, name, initialize, &_InternalFrameTitlePaneMenuButtonWindowNotFocusedState_ClassInfo_, allocate$InternalFrameTitlePaneMenuButtonWindowNotFocusedState);
	return class$;
}

$Class* InternalFrameTitlePaneMenuButtonWindowNotFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax