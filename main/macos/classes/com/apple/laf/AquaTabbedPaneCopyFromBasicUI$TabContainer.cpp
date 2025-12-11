#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabContainer.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$CroppedEdge = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$CroppedEdge;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport;
using $Component = ::java::awt::Component;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$TabContainer_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$TabContainer, this$0)},
	{"notifyTabbedPane", "Z", nullptr, $PRIVATE, $field(AquaTabbedPaneCopyFromBasicUI$TabContainer, notifyTabbedPane)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$TabContainer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$TabContainer::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$TabContainer::init$))},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeUnusedTabComponents", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$TabContainer::*)()>(&AquaTabbedPaneCopyFromBasicUI$TabContainer::removeUnusedTabComponents))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$TabContainer_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabContainer", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "TabContainer", $PRIVATE},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$TabContainer_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabContainer",
	"javax.swing.JPanel",
	"javax.swing.plaf.UIResource",
	_AquaTabbedPaneCopyFromBasicUI$TabContainer_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$TabContainer_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$TabContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$TabContainer($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$TabContainer));
}

$String* AquaTabbedPaneCopyFromBasicUI$TabContainer::toString() {
	 return this->$JPanel::toString();
}

int32_t AquaTabbedPaneCopyFromBasicUI$TabContainer::hashCode() {
	 return this->$JPanel::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$TabContainer::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$TabContainer::clone() {
	 return this->$JPanel::clone();
}

void AquaTabbedPaneCopyFromBasicUI$TabContainer::finalize() {
	this->$JPanel::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$TabContainer::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$(($LayoutManager*)nullptr);
	this->notifyTabbedPane = true;
	setOpaque(false);
}

void AquaTabbedPaneCopyFromBasicUI$TabContainer::remove($Component* comp) {
	int32_t index = $nc(this->this$0->tabPane)->indexOfTabComponent(comp);
	$JPanel::remove(comp);
	if (this->notifyTabbedPane && index != -1) {
		$nc(this->this$0->tabPane)->setTabComponentAt(index, nullptr);
	}
}

void AquaTabbedPaneCopyFromBasicUI$TabContainer::removeUnusedTabComponents() {
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

bool AquaTabbedPaneCopyFromBasicUI$TabContainer::isOptimizedDrawingEnabled() {
	return this->this$0->tabScroller != nullptr && !$nc($nc(this->this$0->tabScroller)->croppedEdge)->isParamsSet();
}

void AquaTabbedPaneCopyFromBasicUI$TabContainer::doLayout() {
	if (this->this$0->scrollableTabLayoutEnabled()) {
		$nc($nc(this->this$0->tabScroller)->tabPanel)->repaint();
		$nc(this->this$0->tabScroller)->updateView();
	} else {
		$nc(this->this$0->tabPane)->repaint($(getBounds()));
	}
}

AquaTabbedPaneCopyFromBasicUI$TabContainer::AquaTabbedPaneCopyFromBasicUI$TabContainer() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabContainer::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$TabContainer, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$TabContainer_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$TabContainer);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabContainer::class$ = nullptr;

		} // laf
	} // apple
} // com