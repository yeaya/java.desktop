#include <javax/swing/UIManager$2.h>

#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JComponent$KeyboardState.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$KeyboardState = ::javax::swing::JComponent$KeyboardState;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

namespace javax {
	namespace swing {

$MethodInfo _UIManager$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UIManager$2::*)()>(&UIManager$2::init$))},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UIManager$2_EnclosingMethodInfo_ = {
	"javax.swing.UIManager",
	"initialize",
	"()V"
};

$InnerClassInfo _UIManager$2_InnerClassesInfo_[] = {
	{"javax.swing.UIManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.UIManager$2",
	"java.lang.Object",
	"java.awt.KeyEventPostProcessor",
	nullptr,
	_UIManager$2_MethodInfo_,
	nullptr,
	&_UIManager$2_EnclosingMethodInfo_,
	_UIManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIManager"
};

$Object* allocate$UIManager$2($Class* clazz) {
	return $of($alloc(UIManager$2));
}

void UIManager$2::init$() {
}

bool UIManager$2::postProcessKeyEvent($KeyEvent* e) {
	$var($Component, c, $nc(e)->getComponent());
	bool var$1 = (!($instanceOf($JComponent, c)) || (c != nullptr && !c->isEnabled()));
	bool var$0 = var$1 && $JComponent$KeyboardState::shouldProcess(e);
	if (var$0 && $SwingUtilities::processKeyBindings(e)) {
		e->consume();
		return true;
	}
	return false;
}

UIManager$2::UIManager$2() {
}

$Class* UIManager$2::load$($String* name, bool initialize) {
	$loadClass(UIManager$2, name, initialize, &_UIManager$2_ClassInfo_, allocate$UIManager$2);
	return class$;
}

$Class* UIManager$2::class$ = nullptr;

	} // swing
} // javax