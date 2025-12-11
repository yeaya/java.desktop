#include <javax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge.h>

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
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabContainer.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

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
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$TabContainer = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabContainer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$CroppedEdge_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$CroppedEdge, this$0)},
	{"shape", "Ljava/awt/Shape;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$CroppedEdge, shape)},
	{"tabIndex", "I", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$CroppedEdge, tabIndex)},
	{"cropline", "I", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$CroppedEdge, cropline)},
	{"cropx", "I", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$CroppedEdge, cropx)},
	{"cropy", "I", nullptr, $PRIVATE, $field(BasicTabbedPaneUI$CroppedEdge, cropy)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$CroppedEdge_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$CroppedEdge::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$CroppedEdge::init$))},
	{"getBgColor", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(BasicTabbedPaneUI$CroppedEdge::*)()>(&BasicTabbedPaneUI$CroppedEdge::getBgColor))},
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

$InnerClassInfo _BasicTabbedPaneUI$CroppedEdge_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$CroppedEdge", "javax.swing.plaf.basic.BasicTabbedPaneUI", "CroppedEdge", $PRIVATE},
	{}
};

$ClassInfo _BasicTabbedPaneUI$CroppedEdge_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$CroppedEdge",
	"javax.swing.JPanel",
	"javax.swing.plaf.UIResource",
	_BasicTabbedPaneUI$CroppedEdge_FieldInfo_,
	_BasicTabbedPaneUI$CroppedEdge_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$CroppedEdge_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$CroppedEdge($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$CroppedEdge));
}

$String* BasicTabbedPaneUI$CroppedEdge::toString() {
	 return this->$JPanel::toString();
}

int32_t BasicTabbedPaneUI$CroppedEdge::hashCode() {
	 return this->$JPanel::hashCode();
}

bool BasicTabbedPaneUI$CroppedEdge::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* BasicTabbedPaneUI$CroppedEdge::clone() {
	 return this->$JPanel::clone();
}

void BasicTabbedPaneUI$CroppedEdge::finalize() {
	this->$JPanel::finalize();
}

void BasicTabbedPaneUI$CroppedEdge::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	setOpaque(false);
}

void BasicTabbedPaneUI$CroppedEdge::setParams(int32_t tabIndex, int32_t cropline, int32_t cropx, int32_t cropy) {
	this->tabIndex = tabIndex;
	this->cropline = cropline;
	this->cropx = cropx;
	this->cropy = cropy;
	$var($Rectangle, tabRect, $nc(this->this$0->rects)->get(tabIndex));
	setBounds(tabRect);
	$set(this, shape, $BasicTabbedPaneUI::createCroppedTabShape($nc(this->this$0->tabPane)->getTabPlacement(), tabRect, cropline));
	if (getParent() == nullptr && this->this$0->tabContainer != nullptr) {
		$nc(this->this$0->tabContainer)->add(static_cast<$Component*>(this), 0);
	}
}

void BasicTabbedPaneUI$CroppedEdge::resetParams() {
	$set(this, shape, nullptr);
	if ($equals(getParent(), this->this$0->tabContainer) && this->this$0->tabContainer != nullptr) {
		$nc(this->this$0->tabContainer)->remove(static_cast<$Component*>(this));
	}
}

bool BasicTabbedPaneUI$CroppedEdge::isParamsSet() {
	return this->shape != nullptr;
}

int32_t BasicTabbedPaneUI$CroppedEdge::getTabIndex() {
	return this->tabIndex;
}

int32_t BasicTabbedPaneUI$CroppedEdge::getCropline() {
	return this->cropline;
}

int32_t BasicTabbedPaneUI$CroppedEdge::getCroppedSideWidth() {
	return 3;
}

$Color* BasicTabbedPaneUI$CroppedEdge::getBgColor() {
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

void BasicTabbedPaneUI$CroppedEdge::paintComponent($Graphics* g) {
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

BasicTabbedPaneUI$CroppedEdge::BasicTabbedPaneUI$CroppedEdge() {
}

$Class* BasicTabbedPaneUI$CroppedEdge::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$CroppedEdge, name, initialize, &_BasicTabbedPaneUI$CroppedEdge_ClassInfo_, allocate$BasicTabbedPaneUI$CroppedEdge);
	return class$;
}

$Class* BasicTabbedPaneUI$CroppedEdge::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax