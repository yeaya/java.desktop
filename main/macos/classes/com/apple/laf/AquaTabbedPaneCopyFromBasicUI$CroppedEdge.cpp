#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$CroppedEdge.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabContainer.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$TabContainer = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabContainer;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$CroppedEdge_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, this$0)},
	{"shape", "Ljava/awt/Shape;", nullptr, $PRIVATE, $field(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, shape)},
	{"tabIndex", "I", nullptr, $PRIVATE, $field(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, tabIndex)},
	{"cropline", "I", nullptr, $PRIVATE, $field(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, cropline)},
	{"cropx", "I", nullptr, $PRIVATE, $field(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, cropx)},
	{"cropy", "I", nullptr, $PRIVATE, $field(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, cropy)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$CroppedEdge_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$CroppedEdge::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$CroppedEdge::init$))},
	{"getBgColor", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(AquaTabbedPaneCopyFromBasicUI$CroppedEdge::*)()>(&AquaTabbedPaneCopyFromBasicUI$CroppedEdge::getBgColor))},
	{"getCropline", "()I", nullptr, $PUBLIC},
	{"getCroppedSideWidth", "()I", nullptr, $PUBLIC},
	{"getTabIndex", "()I", nullptr, $PUBLIC},
	{"isParamsSet", "()Z", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"resetParams", "()V", nullptr, $PUBLIC},
	{"setParams", "(IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$CroppedEdge_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$CroppedEdge", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "CroppedEdge", $PRIVATE},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$CroppedEdge_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$CroppedEdge",
	"javax.swing.JPanel",
	"javax.swing.plaf.UIResource",
	_AquaTabbedPaneCopyFromBasicUI$CroppedEdge_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$CroppedEdge_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$CroppedEdge_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$CroppedEdge($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$CroppedEdge));
}

$String* AquaTabbedPaneCopyFromBasicUI$CroppedEdge::toString() {
	 return this->$JPanel::toString();
}

int32_t AquaTabbedPaneCopyFromBasicUI$CroppedEdge::hashCode() {
	 return this->$JPanel::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$CroppedEdge::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$CroppedEdge::clone() {
	 return this->$JPanel::clone();
}

void AquaTabbedPaneCopyFromBasicUI$CroppedEdge::finalize() {
	this->$JPanel::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$CroppedEdge::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	setOpaque(false);
}

void AquaTabbedPaneCopyFromBasicUI$CroppedEdge::setParams(int32_t tabIndex, int32_t cropline, int32_t cropx, int32_t cropy) {
	this->tabIndex = tabIndex;
	this->cropline = cropline;
	this->cropx = cropx;
	this->cropy = cropy;
	$var($Rectangle, tabRect, $nc(this->this$0->rects)->get(tabIndex));
	setBounds(tabRect);
	$set(this, shape, $AquaTabbedPaneCopyFromBasicUI::createCroppedTabShape($nc(this->this$0->tabPane)->getTabPlacement(), tabRect, cropline));
	if (getParent() == nullptr && this->this$0->tabContainer != nullptr) {
		$nc(this->this$0->tabContainer)->add(static_cast<$Component*>(this), 0);
	}
}

void AquaTabbedPaneCopyFromBasicUI$CroppedEdge::resetParams() {
	$set(this, shape, nullptr);
	if ($equals(getParent(), this->this$0->tabContainer) && this->this$0->tabContainer != nullptr) {
		$nc(this->this$0->tabContainer)->remove(static_cast<$Component*>(this));
	}
}

bool AquaTabbedPaneCopyFromBasicUI$CroppedEdge::isParamsSet() {
	return this->shape != nullptr;
}

int32_t AquaTabbedPaneCopyFromBasicUI$CroppedEdge::getTabIndex() {
	return this->tabIndex;
}

int32_t AquaTabbedPaneCopyFromBasicUI$CroppedEdge::getCropline() {
	return this->cropline;
}

int32_t AquaTabbedPaneCopyFromBasicUI$CroppedEdge::getCroppedSideWidth() {
	return 3;
}

$Color* AquaTabbedPaneCopyFromBasicUI$CroppedEdge::getBgColor() {
	$useLocalCurrentObjectStackCache();
	$var($Component, parent, $nc(this->this$0->tabPane)->getParent());
	if (parent != nullptr) {
		$var($Color, bg, parent->getBackground());
		if (bg != nullptr) {
			return bg;
		}
	}
	return $UIManager::getColor("control"_s);
}

void AquaTabbedPaneCopyFromBasicUI$CroppedEdge::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JPanel::paintComponent(g);
	if (isParamsSet() && $instanceOf($Graphics2D, g)) {
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		int32_t var$0 = getWidth();
		$nc(g2)->clipRect(0, 0, var$0, getHeight());
		g2->setColor($(getBgColor()));
		g2->translate(this->cropx, this->cropy);
		g2->fill(this->shape);
		this->this$0->paintCroppedTabEdge(g);
		g2->translate(-this->cropx, -this->cropy);
	}
}

AquaTabbedPaneCopyFromBasicUI$CroppedEdge::AquaTabbedPaneCopyFromBasicUI$CroppedEdge() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$CroppedEdge::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$CroppedEdge, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$CroppedEdge_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$CroppedEdge);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$CroppedEdge::class$ = nullptr;

		} // laf
	} // apple
} // com