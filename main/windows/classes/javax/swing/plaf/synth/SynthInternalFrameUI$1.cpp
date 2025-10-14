#include <javax/swing/plaf/synth/SynthInternalFrameUI$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$ComponentHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar.h>
#include <javax/swing/plaf/synth/SynthInternalFrameUI.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$ComponentHandler = ::javax::swing::plaf::basic::BasicInternalFrameUI$ComponentHandler;
using $SynthDesktopPaneUI$TaskBar = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar;
using $SynthInternalFrameUI = ::javax::swing::plaf::synth::SynthInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthInternalFrameUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthInternalFrameUI$1, this$0)},
	{}
};

$MethodInfo _SynthInternalFrameUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthInternalFrameUI;)V", nullptr, 0, $method(static_cast<void(SynthInternalFrameUI$1::*)($SynthInternalFrameUI*)>(&SynthInternalFrameUI$1::init$))},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthInternalFrameUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthInternalFrameUI",
	"createComponentListener",
	"()Ljava/awt/event/ComponentListener;"
};

$InnerClassInfo _SynthInternalFrameUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthInternalFrameUI$1", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler", "javax.swing.plaf.basic.BasicInternalFrameUI", "ComponentHandler", $PROTECTED},
	{}
};

$ClassInfo _SynthInternalFrameUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthInternalFrameUI$1",
	"javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler",
	nullptr,
	_SynthInternalFrameUI$1_FieldInfo_,
	_SynthInternalFrameUI$1_MethodInfo_,
	nullptr,
	&_SynthInternalFrameUI$1_EnclosingMethodInfo_,
	_SynthInternalFrameUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthInternalFrameUI"
};

$Object* allocate$SynthInternalFrameUI$1($Class* clazz) {
	return $of($alloc(SynthInternalFrameUI$1));
}

void SynthInternalFrameUI$1::init$($SynthInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameUI$ComponentHandler::init$(this$0);
}

void SynthInternalFrameUI$1::componentResized($ComponentEvent* e) {
	bool var$0 = $SynthInternalFrameUI::access$000(this->this$0) != nullptr;
	if (var$0 && $nc($($SynthInternalFrameUI::access$100(this->this$0)))->isMaximum()) {
		$var($JDesktopPane, desktop, $cast($JDesktopPane, $nc(e)->getSource()));
		{
			$var($ComponentArray, arr$, $nc(desktop)->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					if ($instanceOf($SynthDesktopPaneUI$TaskBar, comp)) {
						int32_t var$1 = desktop->getWidth();
						int32_t var$2 = desktop->getHeight();
						$nc($($SynthInternalFrameUI::access$200(this->this$0)))->setBounds(0, 0, var$1, var$2 - $nc(comp)->getHeight());
						$nc($($SynthInternalFrameUI::access$300(this->this$0)))->revalidate();
						break;
					}
				}
			}
		}
	}
	$var($JInternalFrame, f, $SynthInternalFrameUI::access$400(this->this$0));
	$SynthInternalFrameUI::access$502(this->this$0, nullptr);
	$BasicInternalFrameUI$ComponentHandler::componentResized(e);
	$SynthInternalFrameUI::access$602(this->this$0, f);
}

SynthInternalFrameUI$1::SynthInternalFrameUI$1() {
}

$Class* SynthInternalFrameUI$1::load$($String* name, bool initialize) {
	$loadClass(SynthInternalFrameUI$1, name, initialize, &_SynthInternalFrameUI$1_ClassInfo_, allocate$SynthInternalFrameUI$1);
	return class$;
}

$Class* SynthInternalFrameUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax