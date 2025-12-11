#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabContainer.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$CroppedEdge = ::javax::swing::plaf::basic::BasicTabbedPaneUI$CroppedEdge;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$ScrollableTabPanel_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$ScrollableTabPanel, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$ScrollableTabPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$ScrollableTabPanel::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$ScrollableTabPanel::init$))},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$ScrollableTabPanel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabPanel", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabPanel", $PRIVATE},
	{}
};

$ClassInfo _BasicTabbedPaneUI$ScrollableTabPanel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabPanel",
	"javax.swing.JPanel",
	"javax.swing.plaf.UIResource",
	_BasicTabbedPaneUI$ScrollableTabPanel_FieldInfo_,
	_BasicTabbedPaneUI$ScrollableTabPanel_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$ScrollableTabPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$ScrollableTabPanel($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$ScrollableTabPanel));
}

$String* BasicTabbedPaneUI$ScrollableTabPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t BasicTabbedPaneUI$ScrollableTabPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool BasicTabbedPaneUI$ScrollableTabPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* BasicTabbedPaneUI$ScrollableTabPanel::clone() {
	 return this->$JPanel::clone();
}

void BasicTabbedPaneUI$ScrollableTabPanel::finalize() {
	this->$JPanel::finalize();
}

void BasicTabbedPaneUI$ScrollableTabPanel::init$($BasicTabbedPaneUI* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$(($LayoutManager*)nullptr);
	setOpaque($nc(this$0->tabPane)->isOpaque());
	$var($Color, background, $nc(this$0->tabPane)->getBackground());
	$var($Color, tabAreaBackground, $UIManager::getColor("TabbedPane.tabAreaBackground"_s));
	if ($instanceOf($UIResource, background) && tabAreaBackground != nullptr) {
		setBackground(tabAreaBackground);
	} else {
		setBackground(background);
	}
}

void BasicTabbedPaneUI$ScrollableTabPanel::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JPanel::paintComponent(g);
	$var($Graphics, var$0, g);
	int32_t var$1 = $nc(this->this$0->tabPane)->getTabPlacement();
	this->this$0->paintTabArea(var$0, var$1, $nc(this->this$0->tabPane)->getSelectedIndex());
	if ($nc($nc(this->this$0->tabScroller)->croppedEdge)->isParamsSet() && this->this$0->tabContainer == nullptr) {
		$var($Rectangle, croppedRect, $nc(this->this$0->rects)->get($nc($nc(this->this$0->tabScroller)->croppedEdge)->getTabIndex()));
		$nc(g)->translate($nc(croppedRect)->x, croppedRect->y);
		$nc($nc(this->this$0->tabScroller)->croppedEdge)->paintComponent(g);
		g->translate(-$nc(croppedRect)->x, -croppedRect->y);
	}
}

void BasicTabbedPaneUI$ScrollableTabPanel::doLayout() {
	if (getComponentCount() > 0) {
		$var($Component, child, getComponent(0));
		int32_t var$0 = getWidth();
		$nc(child)->setBounds(0, 0, var$0, getHeight());
	}
}

BasicTabbedPaneUI$ScrollableTabPanel::BasicTabbedPaneUI$ScrollableTabPanel() {
}

$Class* BasicTabbedPaneUI$ScrollableTabPanel::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$ScrollableTabPanel, name, initialize, &_BasicTabbedPaneUI$ScrollableTabPanel_ClassInfo_, allocate$BasicTabbedPaneUI$ScrollableTabPanel);
	return class$;
}

$Class* BasicTabbedPaneUI$ScrollableTabPanel::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax