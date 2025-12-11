#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabContainer.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
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
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$CroppedEdge = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$CroppedEdge;
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

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::init$))},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "ScrollableTabPanel", $PRIVATE},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel",
	"javax.swing.JPanel",
	"javax.swing.plaf.UIResource",
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel));
}

$String* AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::clone() {
	 return this->$JPanel::clone();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::finalize() {
	this->$JPanel::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$(($LayoutManager*)nullptr);
	setOpaque($nc(this$0->tabPane)->isOpaque());
	$var($Color, bgColor, $UIManager::getColor("TabbedPane.tabAreaBackground"_s));
	if (bgColor == nullptr) {
		$assign(bgColor, $nc(this$0->tabPane)->getBackground());
	}
	setBackground(bgColor);
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::paintComponent($Graphics* g) {
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

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::doLayout() {
	if (getComponentCount() > 0) {
		$var($Component, child, getComponent(0));
		int32_t var$0 = getWidth();
		$nc(child)->setBounds(0, 0, var$0, getHeight());
	}
}

AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabPanel::class$ = nullptr;

		} // laf
	} // apple
} // com