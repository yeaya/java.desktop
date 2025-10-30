#include <javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler.h>

#include <java/awt/event/MouseWheelEvent.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $BasicScrollPaneUI$Handler = ::javax::swing::plaf::basic::BasicScrollPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollPaneUI$MouseWheelHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollPaneUI$MouseWheelHandler, this$0)},
	{}
};

$MethodInfo _BasicScrollPaneUI$MouseWheelHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicScrollPaneUI$MouseWheelHandler::*)($BasicScrollPaneUI*)>(&BasicScrollPaneUI$MouseWheelHandler::init$))},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollPaneUI$MouseWheelHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "MouseWheelHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicScrollPaneUI$MouseWheelHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler",
	"java.lang.Object",
	"java.awt.event.MouseWheelListener",
	_BasicScrollPaneUI$MouseWheelHandler_FieldInfo_,
	_BasicScrollPaneUI$MouseWheelHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI$MouseWheelHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI"
};

$Object* allocate$BasicScrollPaneUI$MouseWheelHandler($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI$MouseWheelHandler));
}

void BasicScrollPaneUI$MouseWheelHandler::init$($BasicScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollPaneUI$MouseWheelHandler::mouseWheelMoved($MouseWheelEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseWheelMoved(e);
}

BasicScrollPaneUI$MouseWheelHandler::BasicScrollPaneUI$MouseWheelHandler() {
}

$Class* BasicScrollPaneUI$MouseWheelHandler::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI$MouseWheelHandler, name, initialize, &_BasicScrollPaneUI$MouseWheelHandler_ClassInfo_, allocate$BasicScrollPaneUI$MouseWheelHandler);
	return class$;
}

$Class* BasicScrollPaneUI$MouseWheelHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax