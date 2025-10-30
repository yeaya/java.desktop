#include <javax/swing/plaf/basic/BasicTreeUI$KeyHandler.h>

#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$KeyHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$KeyHandler, this$0)},
	{"repeatKeyAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicTreeUI$KeyHandler, repeatKeyAction)},
	{"isKeyDown", "Z", nullptr, $PROTECTED, $field(BasicTreeUI$KeyHandler, isKeyDown)},
	{}
};

$MethodInfo _BasicTreeUI$KeyHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$KeyHandler::*)($BasicTreeUI*)>(&BasicTreeUI$KeyHandler::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$KeyHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$KeyHandler", "javax.swing.plaf.basic.BasicTreeUI", "KeyHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$KeyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$KeyHandler",
	"java.awt.event.KeyAdapter",
	nullptr,
	_BasicTreeUI$KeyHandler_FieldInfo_,
	_BasicTreeUI$KeyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$KeyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$KeyHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$KeyHandler));
}

void BasicTreeUI$KeyHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void BasicTreeUI$KeyHandler::keyTyped($KeyEvent* e) {
	$nc($(this->this$0->getHandler()))->keyTyped(e);
}

void BasicTreeUI$KeyHandler::keyPressed($KeyEvent* e) {
	$nc($(this->this$0->getHandler()))->keyPressed(e);
}

void BasicTreeUI$KeyHandler::keyReleased($KeyEvent* e) {
	$nc($(this->this$0->getHandler()))->keyReleased(e);
}

BasicTreeUI$KeyHandler::BasicTreeUI$KeyHandler() {
}

$Class* BasicTreeUI$KeyHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$KeyHandler, name, initialize, &_BasicTreeUI$KeyHandler_ClassInfo_, allocate$BasicTreeUI$KeyHandler);
	return class$;
}

$Class* BasicTreeUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax