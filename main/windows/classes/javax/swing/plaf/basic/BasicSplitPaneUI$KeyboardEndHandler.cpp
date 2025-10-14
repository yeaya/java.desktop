#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardEndHandler.h>

#include <java/awt/Insets.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$KeyboardEndHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$KeyboardEndHandler, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$KeyboardEndHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI$KeyboardEndHandler::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$KeyboardEndHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$KeyboardEndHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardEndHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardEndHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$KeyboardEndHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardEndHandler",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicSplitPaneUI$KeyboardEndHandler_FieldInfo_,
	_BasicSplitPaneUI$KeyboardEndHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$KeyboardEndHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$KeyboardEndHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$KeyboardEndHandler));
}

void BasicSplitPaneUI$KeyboardEndHandler::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneUI$KeyboardEndHandler::actionPerformed($ActionEvent* ev) {
	if (this->this$0->dividerKeyboardResize) {
		$var($Insets, insets, $nc(this->this$0->splitPane)->getInsets());
		int32_t bottomI = (insets != nullptr) ? $nc(insets)->bottom : 0;
		int32_t rightI = (insets != nullptr) ? insets->right : 0;
		if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
			$nc(this->this$0->splitPane)->setDividerLocation($nc(this->this$0->splitPane)->getHeight() - bottomI);
		} else {
			$nc(this->this$0->splitPane)->setDividerLocation($nc(this->this$0->splitPane)->getWidth() - rightI);
		}
	}
}

BasicSplitPaneUI$KeyboardEndHandler::BasicSplitPaneUI$KeyboardEndHandler() {
}

$Class* BasicSplitPaneUI$KeyboardEndHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$KeyboardEndHandler, name, initialize, &_BasicSplitPaneUI$KeyboardEndHandler_ClassInfo_, allocate$BasicSplitPaneUI$KeyboardEndHandler);
	return class$;
}

$Class* BasicSplitPaneUI$KeyboardEndHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax