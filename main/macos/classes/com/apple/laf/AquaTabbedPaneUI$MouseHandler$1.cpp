#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler$1.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <com/apple/laf/AquaTabbedPaneTabState.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneTabState = ::com::apple::laf::AquaTabbedPaneTabState;
using $AquaTabbedPaneUI$MouseHandler = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$MouseHandler$1_FieldInfo_[] = {
	{"this$1", "Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$MouseHandler$1, this$1)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$MouseHandler$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI$MouseHandler;)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneUI$MouseHandler$1::*)($AquaTabbedPaneUI$MouseHandler*)>(&AquaTabbedPaneUI$MouseHandler$1::init$))},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTabbedPaneUI$MouseHandler$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTabbedPaneUI$MouseHandler",
	"showFullPopup",
	"(Z)V"
};

$InnerClassInfo _AquaTabbedPaneUI$MouseHandler$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler", "com.apple.laf.AquaTabbedPaneUI", "MouseHandler", 0},
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTabbedPaneUI$MouseHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$MouseHandler$1",
	"java.lang.Object",
	"javax.swing.event.PopupMenuListener",
	_AquaTabbedPaneUI$MouseHandler$1_FieldInfo_,
	_AquaTabbedPaneUI$MouseHandler$1_MethodInfo_,
	nullptr,
	&_AquaTabbedPaneUI$MouseHandler$1_EnclosingMethodInfo_,
	_AquaTabbedPaneUI$MouseHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$MouseHandler$1($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$MouseHandler$1));
}

void AquaTabbedPaneUI$MouseHandler$1::init$($AquaTabbedPaneUI$MouseHandler* this$1) {
	$set(this, this$1, this$1);
}

void AquaTabbedPaneUI$MouseHandler$1::popupMenuCanceled($PopupMenuEvent* e) {
}

void AquaTabbedPaneUI$MouseHandler$1::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void AquaTabbedPaneUI$MouseHandler$1::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$1->this$0)->pressedTab = -3;
	$nc($nc(this->this$1->this$0)->tabPane)->repaint($($nc($nc(this->this$1->this$0)->visibleTabState)->getLeftScrollTabRect()));
	$nc($nc(this->this$1->this$0)->tabPane)->repaint($($nc($nc(this->this$1->this$0)->visibleTabState)->getRightScrollTabRect()));
}

AquaTabbedPaneUI$MouseHandler$1::AquaTabbedPaneUI$MouseHandler$1() {
}

$Class* AquaTabbedPaneUI$MouseHandler$1::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$MouseHandler$1, name, initialize, &_AquaTabbedPaneUI$MouseHandler$1_ClassInfo_, allocate$AquaTabbedPaneUI$MouseHandler$1);
	return class$;
}

$Class* AquaTabbedPaneUI$MouseHandler$1::class$ = nullptr;

		} // laf
	} // apple
} // com