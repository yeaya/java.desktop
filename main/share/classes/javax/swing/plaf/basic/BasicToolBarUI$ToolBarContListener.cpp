#include <javax/swing/plaf/basic/BasicToolBarUI$ToolBarContListener.h>

#include <java/awt/event/ContainerEvent.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$Handler = ::javax::swing::plaf::basic::BasicToolBarUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$ToolBarContListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$ToolBarContListener, this$0)},
	{}
};

$MethodInfo _BasicToolBarUI$ToolBarContListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicToolBarUI$ToolBarContListener::*)($BasicToolBarUI*)>(&BasicToolBarUI$ToolBarContListener::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI$ToolBarContListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarContListener", $PROTECTED},
	{}
};

$ClassInfo _BasicToolBarUI$ToolBarContListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener",
	"java.lang.Object",
	"java.awt.event.ContainerListener",
	_BasicToolBarUI$ToolBarContListener_FieldInfo_,
	_BasicToolBarUI$ToolBarContListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$ToolBarContListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$ToolBarContListener($Class* clazz) {
	return $of($alloc(BasicToolBarUI$ToolBarContListener));
}

void BasicToolBarUI$ToolBarContListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicToolBarUI$ToolBarContListener::componentAdded($ContainerEvent* e) {
	$nc($(this->this$0->getHandler()))->componentAdded(e);
}

void BasicToolBarUI$ToolBarContListener::componentRemoved($ContainerEvent* e) {
	$nc($(this->this$0->getHandler()))->componentRemoved(e);
}

BasicToolBarUI$ToolBarContListener::BasicToolBarUI$ToolBarContListener() {
}

$Class* BasicToolBarUI$ToolBarContListener::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$ToolBarContListener, name, initialize, &_BasicToolBarUI$ToolBarContListener_ClassInfo_, allocate$BasicToolBarUI$ToolBarContListener);
	return class$;
}

$Class* BasicToolBarUI$ToolBarContListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax