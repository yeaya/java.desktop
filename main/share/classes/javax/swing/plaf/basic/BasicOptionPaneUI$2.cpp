#include <javax/swing/plaf/basic/BasicOptionPaneUI$2.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/HierarchyEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef PARENT_CHANGED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$2, this$0)},
	{}
};

$MethodInfo _BasicOptionPaneUI$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;)V", nullptr, 0, $method(static_cast<void(BasicOptionPaneUI$2::*)($BasicOptionPaneUI*)>(&BasicOptionPaneUI$2::init$))},
	{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicOptionPaneUI$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicOptionPaneUI",
	"addButtonComponents",
	"(Ljava/awt/Container;[Ljava/lang/Object;I)V"
};

$InnerClassInfo _BasicOptionPaneUI$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicOptionPaneUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$2",
	"java.lang.Object",
	"java.awt.event.HierarchyListener",
	_BasicOptionPaneUI$2_FieldInfo_,
	_BasicOptionPaneUI$2_MethodInfo_,
	nullptr,
	&_BasicOptionPaneUI$2_EnclosingMethodInfo_,
	_BasicOptionPaneUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$2($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$2));
}

void BasicOptionPaneUI$2::init$($BasicOptionPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicOptionPaneUI$2::hierarchyChanged($HierarchyEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc(e)->getChangeFlags() & (uint64_t)(int64_t)$HierarchyEvent::PARENT_CHANGED)) != 0) {
		$var($JButton, defaultButton, $cast($JButton, e->getComponent()));
		$var($JRootPane, root, $SwingUtilities::getRootPane(defaultButton));
		if (root != nullptr) {
			root->setDefaultButton(defaultButton);
		}
	}
}

BasicOptionPaneUI$2::BasicOptionPaneUI$2() {
}

$Class* BasicOptionPaneUI$2::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$2, name, initialize, &_BasicOptionPaneUI$2_ClassInfo_, allocate$BasicOptionPaneUI$2);
	return class$;
}

$Class* BasicOptionPaneUI$2::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax