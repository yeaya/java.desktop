#include <javax/swing/plaf/nimbus/ToolBarEastState.h>

#include <java/awt/BorderLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

#undef EAST

using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _ToolBarEastState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ToolBarEastState::*)()>(&ToolBarEastState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ToolBarEastState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ToolBarEastState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_ToolBarEastState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$ToolBarEastState($Class* clazz) {
	return $of($alloc(ToolBarEastState));
}

void ToolBarEastState::init$() {
	$State::init$("East"_s);
}

bool ToolBarEastState::isInState($JComponent* c) {
	$init($BorderLayout);
	return ($instanceOf($JToolBar, c)) && $equals($NimbusLookAndFeel::resolveToolbarConstraint($cast($JToolBar, c)), $BorderLayout::EAST);
}

ToolBarEastState::ToolBarEastState() {
}

$Class* ToolBarEastState::load$($String* name, bool initialize) {
	$loadClass(ToolBarEastState, name, initialize, &_ToolBarEastState_ClassInfo_, allocate$ToolBarEastState);
	return class$;
}

$Class* ToolBarEastState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax