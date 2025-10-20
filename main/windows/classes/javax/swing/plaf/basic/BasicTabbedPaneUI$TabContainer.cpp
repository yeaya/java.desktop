#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabContainer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$CroppedEdge = ::javax::swing::plaf::basic::BasicTabbedPaneUI$CroppedEdge;
using $BasicTabbedPaneUI$ScrollableTabPanel = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabPanel;
using $BasicTabbedPaneUI$ScrollableTabSupport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabSupport;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$TabContainer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$TabContainer, this$0)},
	{"notifyTabbedPane", "Z", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$TabContainer, notifyTabbedPane)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$TabContainer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$TabContainer::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$TabContainer::init$))},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeUnusedTabComponents", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI$TabContainer::*)()>(&BasicTabbedPaneUI$TabContainer::removeUnusedTabComponents))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$TabContainer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabContainer", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabContainer", $PRIVATE},
	{}
};

$ClassInfo _BasicTabbedPaneUI$TabContainer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$TabContainer",
	"javax.swing.JPanel",
	"javax.swing.plaf.UIResource",
	_BasicTabbedPaneUI$TabContainer_FieldInfo_,
	_BasicTabbedPaneUI$TabContainer_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$TabContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$TabContainer($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$TabContainer));
}

$String* BasicTabbedPaneUI$TabContainer::toString() {
	 return this->$JPanel::toString();
}

int32_t BasicTabbedPaneUI$TabContainer::hashCode() {
	 return this->$JPanel::hashCode();
}

bool BasicTabbedPaneUI$TabContainer::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* BasicTabbedPaneUI$TabContainer::clone() {
	 return this->$JPanel::clone();
}

void BasicTabbedPaneUI$TabContainer::finalize() {
	this->$JPanel::finalize();
}

void BasicTabbedPaneUI$TabContainer::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$(($LayoutManager*)nullptr);
	this->notifyTabbedPane = true;
	setOpaque(false);
}

void BasicTabbedPaneUI$TabContainer::remove($Component* comp) {
	int32_t index = $nc(this->this$0->tabPane)->indexOfTabComponent(comp);
	$JPanel::remove(comp);
	if (this->notifyTabbedPane && index != -1) {
		$nc(this->this$0->tabPane)->setTabComponentAt(index, nullptr);
	}
}

void BasicTabbedPaneUI$TabContainer::removeUnusedTabComponents() {
	$useLocalCurrentObjectStackCache();
	{
		$var($ComponentArray, arr$, getComponents());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, c, arr$->get(i$));
			{
				if (!($instanceOf($UIResource, c))) {
					int32_t index = $nc(this->this$0->tabPane)->indexOfTabComponent(c);
					if (index == -1) {
						$JPanel::remove(c);
					}
				}
			}
		}
	}
}

bool BasicTabbedPaneUI$TabContainer::isOptimizedDrawingEnabled() {
	return this->this$0->tabScroller != nullptr && !$nc($nc(this->this$0->tabScroller)->croppedEdge)->isParamsSet();
}

void BasicTabbedPaneUI$TabContainer::doLayout() {
	if (this->this$0->scrollableTabLayoutEnabled()) {
		$nc($nc(this->this$0->tabScroller)->tabPanel)->repaint();
		$nc(this->this$0->tabScroller)->updateView();
	} else {
		$nc(this->this$0->tabPane)->repaint($(getBounds()));
	}
}

BasicTabbedPaneUI$TabContainer::BasicTabbedPaneUI$TabContainer() {
}

$Class* BasicTabbedPaneUI$TabContainer::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$TabContainer, name, initialize, &_BasicTabbedPaneUI$TabContainer_ClassInfo_, allocate$BasicTabbedPaneUI$TabContainer);
	return class$;
}

$Class* BasicTabbedPaneUI$TabContainer::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax