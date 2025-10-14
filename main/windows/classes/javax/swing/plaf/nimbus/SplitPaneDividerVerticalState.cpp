#include <javax/swing/plaf/nimbus/SplitPaneDividerVerticalState.h>

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

$MethodInfo _SplitPaneDividerVerticalState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SplitPaneDividerVerticalState::*)()>(&SplitPaneDividerVerticalState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SplitPaneDividerVerticalState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.SplitPaneDividerVerticalState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_SplitPaneDividerVerticalState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$SplitPaneDividerVerticalState($Class* clazz) {
	return $of($alloc(SplitPaneDividerVerticalState));
}

void SplitPaneDividerVerticalState::init$() {
	$State::init$("Vertical"_s);
}

bool SplitPaneDividerVerticalState::isInState($JComponent* c) {
	return $instanceOf($JSplitPane, c) && ($nc(($cast($JSplitPane, c)))->getOrientation() == 1);
}

SplitPaneDividerVerticalState::SplitPaneDividerVerticalState() {
}

$Class* SplitPaneDividerVerticalState::load$($String* name, bool initialize) {
	$loadClass(SplitPaneDividerVerticalState, name, initialize, &_SplitPaneDividerVerticalState_ClassInfo_, allocate$SplitPaneDividerVerticalState);
	return class$;
}

$Class* SplitPaneDividerVerticalState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax