#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardDownRightHandler.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$KeyboardDownRightHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardDownRightHandler, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$KeyboardDownRightHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI$KeyboardDownRightHandler::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$KeyboardDownRightHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$KeyboardDownRightHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardDownRightHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardDownRightHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$KeyboardDownRightHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardDownRightHandler",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicSplitPaneUI$KeyboardDownRightHandler_FieldInfo_,
	_BasicSplitPaneUI$KeyboardDownRightHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$KeyboardDownRightHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$KeyboardDownRightHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$KeyboardDownRightHandler));
}

void BasicSplitPaneUI$KeyboardDownRightHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardDownRightHandler::actionPerformed($ActionEvent* ev) {
	if (this->this$0->dividerKeyboardResize) {
		int32_t var$0 = this->this$0->getDividerLocation(this->this$0->splitPane);
		$nc(this->this$0->splitPane)->setDividerLocation(var$0 + this->this$0->getKeyboardMoveIncrement());
	}
}

BasicSplitPaneUI$KeyboardDownRightHandler::BasicSplitPaneUI$KeyboardDownRightHandler() {
}

$Class* BasicSplitPaneUI$KeyboardDownRightHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$KeyboardDownRightHandler, name, initialize, &_BasicSplitPaneUI$KeyboardDownRightHandler_ClassInfo_, allocate$BasicSplitPaneUI$KeyboardDownRightHandler);
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardDownRightHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax