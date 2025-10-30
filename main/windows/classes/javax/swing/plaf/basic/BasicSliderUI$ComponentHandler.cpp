#include <javax/swing/plaf/basic/BasicSliderUI$ComponentHandler.h>

#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$Handler = ::javax::swing::plaf::basic::BasicSliderUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$ComponentHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$ComponentHandler, this$0)},
	{}
};

$MethodInfo _BasicSliderUI$ComponentHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$ComponentHandler::*)($BasicSliderUI*)>(&BasicSliderUI$ComponentHandler::init$))},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$ComponentHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$ComponentHandler", "javax.swing.plaf.basic.BasicSliderUI", "ComponentHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSliderUI$ComponentHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$ComponentHandler",
	"java.awt.event.ComponentAdapter",
	nullptr,
	_BasicSliderUI$ComponentHandler_FieldInfo_,
	_BasicSliderUI$ComponentHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$ComponentHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$ComponentHandler($Class* clazz) {
	return $of($alloc(BasicSliderUI$ComponentHandler));
}

void BasicSliderUI$ComponentHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void BasicSliderUI$ComponentHandler::componentResized($ComponentEvent* e) {
	$nc($(this->this$0->getHandler()))->componentResized(e);
}

BasicSliderUI$ComponentHandler::BasicSliderUI$ComponentHandler() {
}

$Class* BasicSliderUI$ComponentHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$ComponentHandler, name, initialize, &_BasicSliderUI$ComponentHandler_ClassInfo_, allocate$BasicSliderUI$ComponentHandler);
	return class$;
}

$Class* BasicSliderUI$ComponentHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax