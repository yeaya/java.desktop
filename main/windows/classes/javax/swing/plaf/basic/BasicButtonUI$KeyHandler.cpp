#include <javax/swing/plaf/basic/BasicButtonUI$KeyHandler.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <java/util/Set.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/basic/BasicButtonUI$ButtonGroupInfo.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef FORWARD_TRAVERSAL_KEYS

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Set = ::java::util::Set;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicButtonUI$ButtonGroupInfo = ::javax::swing::plaf::basic::BasicButtonUI$ButtonGroupInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicButtonUI$KeyHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicButtonUI$KeyHandler, this$0)},
	{}
};

$MethodInfo _BasicButtonUI$KeyHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicButtonUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicButtonUI$KeyHandler::*)($BasicButtonUI*)>(&BasicButtonUI$KeyHandler::init$))},
	{"isFocusTraversalKey", "(Ljavax/swing/JComponent;ILjava/awt/AWTKeyStroke;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicButtonUI$KeyHandler::*)($JComponent*,int32_t,$AWTKeyStroke*)>(&BasicButtonUI$KeyHandler::isFocusTraversalKey))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicButtonUI$KeyHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicButtonUI$KeyHandler", "javax.swing.plaf.basic.BasicButtonUI", "KeyHandler", $PRIVATE},
	{}
};

$ClassInfo _BasicButtonUI$KeyHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicButtonUI$KeyHandler",
	"java.lang.Object",
	"java.awt.event.KeyListener",
	_BasicButtonUI$KeyHandler_FieldInfo_,
	_BasicButtonUI$KeyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicButtonUI$KeyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicButtonUI"
};

$Object* allocate$BasicButtonUI$KeyHandler($Class* clazz) {
	return $of($alloc(BasicButtonUI$KeyHandler));
}

void BasicButtonUI$KeyHandler::init$($BasicButtonUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicButtonUI$KeyHandler::keyPressed($KeyEvent* e) {
	$var($AWTKeyStroke, stroke, $AWTKeyStroke::getAWTKeyStrokeForEvent(e));
	if (stroke != nullptr && $instanceOf($JToggleButton, $($nc(e)->getSource()))) {
		$var($JToggleButton, source, $cast($JToggleButton, e->getSource()));
		bool next = isFocusTraversalKey(source, $KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, stroke);
		if (next || isFocusTraversalKey(source, $KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, stroke)) {
			e->consume();
			$var($BasicButtonUI$ButtonGroupInfo, btnGroupInfo, $new($BasicButtonUI$ButtonGroupInfo, this->this$0, source));
			btnGroupInfo->jumpToNextComponent(next);
		}
	}
}

bool BasicButtonUI$KeyHandler::isFocusTraversalKey($JComponent* c, int32_t id, $AWTKeyStroke* stroke) {
	$var($Set, keys, $nc(c)->getFocusTraversalKeys(id));
	return keys != nullptr && keys->contains(stroke);
}

void BasicButtonUI$KeyHandler::keyReleased($KeyEvent* e) {
}

void BasicButtonUI$KeyHandler::keyTyped($KeyEvent* e) {
}

BasicButtonUI$KeyHandler::BasicButtonUI$KeyHandler() {
}

$Class* BasicButtonUI$KeyHandler::load$($String* name, bool initialize) {
	$loadClass(BasicButtonUI$KeyHandler, name, initialize, &_BasicButtonUI$KeyHandler_ClassInfo_, allocate$BasicButtonUI$KeyHandler);
	return class$;
}

$Class* BasicButtonUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax