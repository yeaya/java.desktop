#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardHomeHandler.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
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

$FieldInfo _BasicSplitPaneUI$KeyboardHomeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardHomeHandler, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$KeyboardHomeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI$KeyboardHomeHandler::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$KeyboardHomeHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$KeyboardHomeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardHomeHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardHomeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$KeyboardHomeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardHomeHandler",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicSplitPaneUI$KeyboardHomeHandler_FieldInfo_,
	_BasicSplitPaneUI$KeyboardHomeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$KeyboardHomeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$KeyboardHomeHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$KeyboardHomeHandler));
}

void BasicSplitPaneUI$KeyboardHomeHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardHomeHandler::actionPerformed($ActionEvent* ev) {
	if (this->this$0->dividerKeyboardResize) {
		$nc(this->this$0->splitPane)->setDividerLocation(0);
	}
}

BasicSplitPaneUI$KeyboardHomeHandler::BasicSplitPaneUI$KeyboardHomeHandler() {
}

$Class* BasicSplitPaneUI$KeyboardHomeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$KeyboardHomeHandler, name, initialize, &_BasicSplitPaneUI$KeyboardHomeHandler_ClassInfo_, allocate$BasicSplitPaneUI$KeyboardHomeHandler);
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardHomeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax