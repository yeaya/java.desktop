#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardResizeToggleHandler.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JComponent.h>
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

$FieldInfo _BasicSplitPaneUI$KeyboardResizeToggleHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardResizeToggleHandler, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$KeyboardResizeToggleHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI$KeyboardResizeToggleHandler::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$KeyboardResizeToggleHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$KeyboardResizeToggleHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardResizeToggleHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardResizeToggleHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$KeyboardResizeToggleHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardResizeToggleHandler",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicSplitPaneUI$KeyboardResizeToggleHandler_FieldInfo_,
	_BasicSplitPaneUI$KeyboardResizeToggleHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$KeyboardResizeToggleHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$KeyboardResizeToggleHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$KeyboardResizeToggleHandler));
}

void BasicSplitPaneUI$KeyboardResizeToggleHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardResizeToggleHandler::actionPerformed($ActionEvent* ev) {
	if (!this->this$0->dividerKeyboardResize) {
		$nc(this->this$0->splitPane)->requestFocus();
	}
}

BasicSplitPaneUI$KeyboardResizeToggleHandler::BasicSplitPaneUI$KeyboardResizeToggleHandler() {
}

$Class* BasicSplitPaneUI$KeyboardResizeToggleHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$KeyboardResizeToggleHandler, name, initialize, &_BasicSplitPaneUI$KeyboardResizeToggleHandler_ClassInfo_, allocate$BasicSplitPaneUI$KeyboardResizeToggleHandler);
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardResizeToggleHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax