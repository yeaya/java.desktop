#include <javax/swing/plaf/basic/BasicSplitPaneDivider$OneTouchActionHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider$OneTouchActionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$OneTouchActionHandler, this$0)},
	{"toMinimum", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneDivider$OneTouchActionHandler, toMinimum)},
	{}
};

$MethodInfo _BasicSplitPaneDivider$OneTouchActionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;Z)V", nullptr, 0, $method(static_cast<void(BasicSplitPaneDivider$OneTouchActionHandler::*)($BasicSplitPaneDivider*,bool)>(&BasicSplitPaneDivider$OneTouchActionHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneDivider$OneTouchActionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$OneTouchActionHandler", "javax.swing.plaf.basic.BasicSplitPaneDivider", "OneTouchActionHandler", $PRIVATE},
	{}
};

$ClassInfo _BasicSplitPaneDivider$OneTouchActionHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$OneTouchActionHandler",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicSplitPaneDivider$OneTouchActionHandler_FieldInfo_,
	_BasicSplitPaneDivider$OneTouchActionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneDivider$OneTouchActionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider"
};

$Object* allocate$BasicSplitPaneDivider$OneTouchActionHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider$OneTouchActionHandler));
}

void BasicSplitPaneDivider$OneTouchActionHandler::init$($BasicSplitPaneDivider* this$0, bool toMinimum) {
	$set(this, this$0, this$0);
	this->toMinimum = toMinimum;
}

void BasicSplitPaneDivider$OneTouchActionHandler::actionPerformed($ActionEvent* e) {
	$var($Insets, insets, $nc(this->this$0->splitPane)->getInsets());
	int32_t lastLoc = $nc(this->this$0->splitPane)->getLastDividerLocation();
	int32_t currentLoc = $nc(this->this$0->splitPaneUI)->getDividerLocation(this->this$0->splitPane);
	int32_t newLoc = 0;
	if (this->toMinimum) {
		if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
			int32_t var$0 = currentLoc;
			int32_t var$2 = $nc(this->this$0->splitPane)->getHeight() - $nc(insets)->bottom;
			int32_t var$1 = (var$2 - this->this$0->getHeight());
			if (var$0 >= var$1) {
				int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
				newLoc = $Math::min(lastLoc, maxLoc);
				$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
			} else {
				newLoc = insets->top;
				$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
			}
		} else {
			int32_t var$6 = currentLoc;
			int32_t var$8 = $nc(this->this$0->splitPane)->getWidth() - insets->right;
			int32_t var$7 = (var$8 - this->this$0->getWidth());
			if (var$6 >= var$7) {
				int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
				newLoc = $Math::min(lastLoc, maxLoc);
				$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
			} else {
				newLoc = insets->left;
				$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
			}
		}
	} else if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
		if (currentLoc == $nc(insets)->top) {
			int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
			newLoc = $Math::min(lastLoc, maxLoc);
			$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
		} else {
			int32_t var$9 = $nc(this->this$0->splitPane)->getHeight();
			newLoc = var$9 - this->this$0->getHeight() - insets->top;
			$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
		}
	} else if (currentLoc == insets->left) {
		int32_t maxLoc = $nc(this->this$0->splitPane)->getMaximumDividerLocation();
		newLoc = $Math::min(lastLoc, maxLoc);
		$nc(this->this$0->splitPaneUI)->setKeepHidden(false);
	} else {
		int32_t var$10 = $nc(this->this$0->splitPane)->getWidth();
		newLoc = var$10 - this->this$0->getWidth() - insets->left;
		$nc(this->this$0->splitPaneUI)->setKeepHidden(true);
	}
	if (currentLoc != newLoc) {
		$nc(this->this$0->splitPane)->setDividerLocation(newLoc);
		$nc(this->this$0->splitPane)->setLastDividerLocation(currentLoc);
	}
}

BasicSplitPaneDivider$OneTouchActionHandler::BasicSplitPaneDivider$OneTouchActionHandler() {
}

$Class* BasicSplitPaneDivider$OneTouchActionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider$OneTouchActionHandler, name, initialize, &_BasicSplitPaneDivider$OneTouchActionHandler_ClassInfo_, allocate$BasicSplitPaneDivider$OneTouchActionHandler);
	return class$;
}

$Class* BasicSplitPaneDivider$OneTouchActionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax