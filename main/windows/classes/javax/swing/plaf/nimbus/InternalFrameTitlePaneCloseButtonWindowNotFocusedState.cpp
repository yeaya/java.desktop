#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneCloseButtonWindowNotFocusedState.h>

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

$MethodInfo _InternalFrameTitlePaneCloseButtonWindowNotFocusedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameTitlePaneCloseButtonWindowNotFocusedState::*)()>(&InternalFrameTitlePaneCloseButtonWindowNotFocusedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InternalFrameTitlePaneCloseButtonWindowNotFocusedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonWindowNotFocusedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_InternalFrameTitlePaneCloseButtonWindowNotFocusedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$InternalFrameTitlePaneCloseButtonWindowNotFocusedState($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneCloseButtonWindowNotFocusedState));
}

void InternalFrameTitlePaneCloseButtonWindowNotFocusedState::init$() {
	$State::init$("WindowNotFocused"_s);
}

bool InternalFrameTitlePaneCloseButtonWindowNotFocusedState::isInState($JComponent* c) {
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

InternalFrameTitlePaneCloseButtonWindowNotFocusedState::InternalFrameTitlePaneCloseButtonWindowNotFocusedState() {
}

$Class* InternalFrameTitlePaneCloseButtonWindowNotFocusedState::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneCloseButtonWindowNotFocusedState, name, initialize, &_InternalFrameTitlePaneCloseButtonWindowNotFocusedState_ClassInfo_, allocate$InternalFrameTitlePaneCloseButtonWindowNotFocusedState);
	return class$;
}

$Class* InternalFrameTitlePaneCloseButtonWindowNotFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax