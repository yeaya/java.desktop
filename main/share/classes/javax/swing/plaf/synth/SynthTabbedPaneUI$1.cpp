#include <javax/swing/plaf/synth/SynthTabbedPaneUI$1.h>

#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $SynthTabbedPaneUI = ::javax::swing::plaf::synth::SynthTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTabbedPaneUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTabbedPaneUI$1, this$0)},
	{"val$delegate2", "Ljava/awt/event/MouseMotionListener;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTabbedPaneUI$1, val$delegate2)},
	{"val$delegate", "Ljava/awt/event/MouseListener;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTabbedPaneUI$1, val$delegate)},
	{}
};

$MethodInfo _SynthTabbedPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;Ljava/awt/event/MouseListener;Ljava/awt/event/MouseMotionListener;)V", "()V", 0, $method(static_cast<void(SynthTabbedPaneUI$1::*)($SynthTabbedPaneUI*,$MouseListener*,$MouseMotionListener*)>(&SynthTabbedPaneUI$1::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthTabbedPaneUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthTabbedPaneUI",
	"createMouseListener",
	"()Ljava/awt/event/MouseListener;"
};

$InnerClassInfo _SynthTabbedPaneUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTabbedPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthTabbedPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTabbedPaneUI$1",
	"java.lang.Object",
	"java.awt.event.MouseListener",
	_SynthTabbedPaneUI$1_FieldInfo_,
	_SynthTabbedPaneUI$1_MethodInfo_,
	nullptr,
	&_SynthTabbedPaneUI$1_EnclosingMethodInfo_,
	_SynthTabbedPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTabbedPaneUI"
};

$Object* allocate$SynthTabbedPaneUI$1($Class* clazz) {
	return $of($alloc(SynthTabbedPaneUI$1));
}

void SynthTabbedPaneUI$1::init$($SynthTabbedPaneUI* this$0, $MouseListener* val$delegate, $MouseMotionListener* val$delegate2) {
	$set(this, this$0, this$0);
	$set(this, val$delegate, val$delegate);
	$set(this, val$delegate2, val$delegate2);
}

void SynthTabbedPaneUI$1::mouseClicked($MouseEvent* e) {
	$nc(this->val$delegate)->mouseClicked(e);
}

void SynthTabbedPaneUI$1::mouseEntered($MouseEvent* e) {
	$nc(this->val$delegate)->mouseEntered(e);
}

void SynthTabbedPaneUI$1::mouseExited($MouseEvent* e) {
	$nc(this->val$delegate)->mouseExited(e);
}

void SynthTabbedPaneUI$1::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($SynthTabbedPaneUI::access$000(this->this$0)))->isEnabled()) {
		return;
	}
	$var($JTabbedPane, var$0, $SynthTabbedPaneUI::access$100(this->this$0));
	int32_t var$1 = $nc(e)->getX();
	int32_t tabIndex = this->this$0->tabForCoordinate(var$0, var$1, e->getY());
	if (tabIndex >= 0 && $nc($($SynthTabbedPaneUI::access$200(this->this$0)))->isEnabledAt(tabIndex)) {
		if (tabIndex == $nc($($SynthTabbedPaneUI::access$300(this->this$0)))->getSelectedIndex()) {
			this->this$0->selectedTabIsPressed = true;
			$nc($($SynthTabbedPaneUI::access$400(this->this$0)))->repaint();
		}
	}
	$nc(this->val$delegate)->mousePressed(e);
}

void SynthTabbedPaneUI$1::mouseReleased($MouseEvent* e) {
	if (this->this$0->selectedTabIsPressed) {
		this->this$0->selectedTabIsPressed = false;
		$nc($($SynthTabbedPaneUI::access$500(this->this$0)))->repaint();
	}
	$nc(this->val$delegate)->mouseReleased(e);
	$nc(this->val$delegate2)->mouseMoved(e);
}

SynthTabbedPaneUI$1::SynthTabbedPaneUI$1() {
}

$Class* SynthTabbedPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(SynthTabbedPaneUI$1, name, initialize, &_SynthTabbedPaneUI$1_ClassInfo_, allocate$SynthTabbedPaneUI$1);
	return class$;
}

$Class* SynthTabbedPaneUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax