#include <javax/swing/plaf/basic/BasicTableUI$KeyHandler.h>

#include <java/awt/event/KeyEvent.h>
#include <javax/swing/plaf/basic/BasicTableUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $BasicTableUI$Handler = ::javax::swing::plaf::basic::BasicTableUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableUI$KeyHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTableUI$KeyHandler, this$0)},
	{}
};

$MethodInfo _BasicTableUI$KeyHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTableUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTableUI$KeyHandler::*)($BasicTableUI*)>(&BasicTableUI$KeyHandler::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTableUI$KeyHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableUI$KeyHandler", "javax.swing.plaf.basic.BasicTableUI", "KeyHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTableUI$KeyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableUI$KeyHandler",
	"java.lang.Object",
	"java.awt.event.KeyListener",
	_BasicTableUI$KeyHandler_FieldInfo_,
	_BasicTableUI$KeyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableUI$KeyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableUI"
};

$Object* allocate$BasicTableUI$KeyHandler($Class* clazz) {
	return $of($alloc(BasicTableUI$KeyHandler));
}

void BasicTableUI$KeyHandler::init$($BasicTableUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTableUI$KeyHandler::keyPressed($KeyEvent* e) {
	$nc($(this->this$0->getHandler()))->keyPressed(e);
}

void BasicTableUI$KeyHandler::keyReleased($KeyEvent* e) {
	$nc($(this->this$0->getHandler()))->keyReleased(e);
}

void BasicTableUI$KeyHandler::keyTyped($KeyEvent* e) {
	$nc($(this->this$0->getHandler()))->keyTyped(e);
}

BasicTableUI$KeyHandler::BasicTableUI$KeyHandler() {
}

$Class* BasicTableUI$KeyHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTableUI$KeyHandler, name, initialize, &_BasicTableUI$KeyHandler_ClassInfo_, allocate$BasicTableUI$KeyHandler);
	return class$;
}

$Class* BasicTableUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax