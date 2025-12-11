#include <com/apple/laf/AquaInternalFramePaneUI$Dock.h>

#include <com/apple/laf/AquaInternalFramePaneUI.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Stroke.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef CENTER
#undef DOCK_EDGE_SLACK
#undef KEY_ANTIALIASING
#undef VALUE_ANTIALIAS_ON

using $AquaInternalFramePaneUI = ::com::apple::laf::AquaInternalFramePaneUI;
using $BasicStroke = ::java::awt::BasicStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $RenderingHints = ::java::awt::RenderingHints;
using $Stroke = ::java::awt::Stroke;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFramePaneUI$Dock_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFramePaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFramePaneUI$Dock, this$0)},
	{"DOCK_EDGE_SLACK", "I", nullptr, $STATIC | $FINAL, $constField(AquaInternalFramePaneUI$Dock, DOCK_EDGE_SLACK)},
	{}
};

$MethodInfo _AquaInternalFramePaneUI$Dock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaInternalFramePaneUI;Ljavax/swing/JComponent;)V", nullptr, 0, $method(static_cast<void(AquaInternalFramePaneUI$Dock::*)($AquaInternalFramePaneUI*,$JComponent*)>(&AquaInternalFramePaneUI$Dock::init$))},
	{"add", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSize", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaInternalFramePaneUI$Dock_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFramePaneUI$Dock", "com.apple.laf.AquaInternalFramePaneUI", "Dock", 0},
	{}
};

$ClassInfo _AquaInternalFramePaneUI$Dock_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFramePaneUI$Dock",
	"javax.swing.JComponent",
	"javax.swing.border.Border",
	_AquaInternalFramePaneUI$Dock_FieldInfo_,
	_AquaInternalFramePaneUI$Dock_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFramePaneUI$Dock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFramePaneUI"
};

$Object* allocate$AquaInternalFramePaneUI$Dock($Class* clazz) {
	return $of($alloc(AquaInternalFramePaneUI$Dock));
}

$String* AquaInternalFramePaneUI$Dock::toString() {
	 return this->$JComponent::toString();
}

int32_t AquaInternalFramePaneUI$Dock::hashCode() {
	 return this->$JComponent::hashCode();
}

bool AquaInternalFramePaneUI$Dock::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* AquaInternalFramePaneUI$Dock::clone() {
	 return this->$JComponent::clone();
}

void AquaInternalFramePaneUI$Dock::finalize() {
	this->$JComponent::finalize();
}

void AquaInternalFramePaneUI$Dock::init$($AquaInternalFramePaneUI* this$0, $JComponent* parent) {
	$set(this, this$0, this$0);
	$JComponent::init$();
	setBorder(this);
	setLayout($$new($FlowLayout, $FlowLayout::CENTER, 0, 0));
	setVisible(false);
}

void AquaInternalFramePaneUI$Dock::removeNotify() {
	$set(this->this$0, fDock, nullptr);
	$JComponent::removeNotify();
}

void AquaInternalFramePaneUI$Dock::updateSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, getPreferredSize());
	int32_t var$0 = ($nc($(getParent()))->getWidth() - $nc(d)->width) / 2;
	setBounds(var$0, $nc($(getParent()))->getHeight() - d->height, d->width, d->height);
}

$Component* AquaInternalFramePaneUI$Dock::add($Component* c) {
	$JComponent::add(c);
	if (!isVisible()) {
		setVisible(true);
	}
	updateSize();
	validate();
	return c;
}

void AquaInternalFramePaneUI$Dock::remove($Component* c) {
	$JComponent::remove(c);
	if (getComponentCount() == 0) {
		setVisible(false);
	} else {
		updateSize();
		validate();
	}
}

$Insets* AquaInternalFramePaneUI$Dock::getBorderInsets($Component* c) {
	return $new($Insets, AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK / 4, AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK, 0, AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK);
}

bool AquaInternalFramePaneUI$Dock::isBorderOpaque() {
	return false;
}

void AquaInternalFramePaneUI$Dock::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	int32_t height = getHeight();
	int32_t width = getWidth();
	$init($RenderingHints);
	$var($Object, priorAA, $nc(g2d)->getRenderingHint($RenderingHints::KEY_ANTIALIASING));
	g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
	g2d->setColor($($UIManager::getColor("DesktopIcon.borderColor"_s)));
	g2d->fillRoundRect(4, 4, width - 9, height + AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK, AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK, AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK);
	g2d->setColor($($UIManager::getColor("DesktopIcon.borderRimColor"_s)));
	g2d->setStroke($$new($BasicStroke, 2.0f));
	g2d->drawRoundRect(4, 4, width - 9, height + AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK, AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK, AquaInternalFramePaneUI$Dock::DOCK_EDGE_SLACK);
	if (priorAA != nullptr) {
		g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, priorAA);
	}
}

AquaInternalFramePaneUI$Dock::AquaInternalFramePaneUI$Dock() {
}

$Class* AquaInternalFramePaneUI$Dock::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFramePaneUI$Dock, name, initialize, &_AquaInternalFramePaneUI$Dock_ClassInfo_, allocate$AquaInternalFramePaneUI$Dock);
	return class$;
}

$Class* AquaInternalFramePaneUI$Dock::class$ = nullptr;

		} // laf
	} // apple
} // com