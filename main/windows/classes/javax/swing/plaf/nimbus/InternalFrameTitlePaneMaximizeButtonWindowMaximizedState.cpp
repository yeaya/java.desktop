#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMaximizeButtonWindowMaximizedState.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
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

$MethodInfo _InternalFrameTitlePaneMaximizeButtonWindowMaximizedState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::*)()>(&InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _InternalFrameTitlePaneMaximizeButtonWindowMaximizedState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonWindowMaximizedState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_InternalFrameTitlePaneMaximizeButtonWindowMaximizedState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$InternalFrameTitlePaneMaximizeButtonWindowMaximizedState($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneMaximizeButtonWindowMaximizedState));
}

void InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::init$() {
	$State::init$("WindowMaximized"_s);
}

bool InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::isInState($JComponent* c) {
	$var($Component, parent, c);
	while ($nc(parent)->getParent() != nullptr) {
		if ($instanceOf($JInternalFrame, parent)) {
			break;
		}
		$assign(parent, parent->getParent());
	}
	if ($instanceOf($JInternalFrame, parent)) {
		return $nc(($cast($JInternalFrame, parent)))->isMaximum();
	}
	return false;
}

InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::InternalFrameTitlePaneMaximizeButtonWindowMaximizedState() {
}

$Class* InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneMaximizeButtonWindowMaximizedState, name, initialize, &_InternalFrameTitlePaneMaximizeButtonWindowMaximizedState_ClassInfo_, allocate$InternalFrameTitlePaneMaximizeButtonWindowMaximizedState);
	return class$;
}

$Class* InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax