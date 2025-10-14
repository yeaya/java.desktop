#include <javax/swing/plaf/nimbus/SplitPaneVerticalState.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _SplitPaneVerticalState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SplitPaneVerticalState::*)()>(&SplitPaneVerticalState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SplitPaneVerticalState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.SplitPaneVerticalState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_SplitPaneVerticalState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$SplitPaneVerticalState($Class* clazz) {
	return $of($alloc(SplitPaneVerticalState));
}

void SplitPaneVerticalState::init$() {
	$State::init$("Vertical"_s);
}

bool SplitPaneVerticalState::isInState($JComponent* c) {
	return $instanceOf($JSplitPane, c) && ($nc(($cast($JSplitPane, c)))->getOrientation() == 1);
}

SplitPaneVerticalState::SplitPaneVerticalState() {
}

$Class* SplitPaneVerticalState::load$($String* name, bool initialize) {
	$loadClass(SplitPaneVerticalState, name, initialize, &_SplitPaneVerticalState_ClassInfo_, allocate$SplitPaneVerticalState);
	return class$;
}

$Class* SplitPaneVerticalState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax