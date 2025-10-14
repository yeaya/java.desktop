#include <javax/swing/plaf/nimbus/ToolBarWestState.h>

#include <java/awt/BorderLayout.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

#undef WEST

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

$MethodInfo _ToolBarWestState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ToolBarWestState::*)()>(&ToolBarWestState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ToolBarWestState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ToolBarWestState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_ToolBarWestState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$ToolBarWestState($Class* clazz) {
	return $of($alloc(ToolBarWestState));
}

void ToolBarWestState::init$() {
	$State::init$("West"_s);
}

bool ToolBarWestState::isInState($JComponent* c) {
	$init($BorderLayout);
	return ($instanceOf($JToolBar, c)) && $equals($NimbusLookAndFeel::resolveToolbarConstraint($cast($JToolBar, c)), $BorderLayout::WEST);
}

ToolBarWestState::ToolBarWestState() {
}

$Class* ToolBarWestState::load$($String* name, bool initialize) {
	$loadClass(ToolBarWestState, name, initialize, &_ToolBarWestState_ClassInfo_, allocate$ToolBarWestState);
	return class$;
}

$Class* ToolBarWestState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax