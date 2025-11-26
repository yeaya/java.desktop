#include <javax/swing/plaf/basic/BasicSplitPaneUI$FocusHandler.h>

#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $BasicSplitPaneUI$Handler = ::javax::swing::plaf::basic::BasicSplitPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI$FocusHandler::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$FocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$FocusHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$FocusHandler",
	"java.awt.event.FocusAdapter",
	nullptr,
	_BasicSplitPaneUI$FocusHandler_FieldInfo_,
	_BasicSplitPaneUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$FocusHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$FocusHandler));
}

void BasicSplitPaneUI$FocusHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void BasicSplitPaneUI$FocusHandler::focusGained($FocusEvent* ev) {
	$nc($(this->this$0->getHandler()))->focusGained(ev);
}

void BasicSplitPaneUI$FocusHandler::focusLost($FocusEvent* ev) {
	$nc($(this->this$0->getHandler()))->focusLost(ev);
}

BasicSplitPaneUI$FocusHandler::BasicSplitPaneUI$FocusHandler() {
}

$Class* BasicSplitPaneUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$FocusHandler, name, initialize, &_BasicSplitPaneUI$FocusHandler_ClassInfo_, allocate$BasicSplitPaneUI$FocusHandler);
	return class$;
}

$Class* BasicSplitPaneUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax