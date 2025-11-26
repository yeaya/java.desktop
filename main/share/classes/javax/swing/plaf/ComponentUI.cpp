#include <javax/swing/plaf/ComponentUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Error.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef OTHER

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Accessible = ::javax::accessibility::Accessible;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ComponentUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ComponentUI::*)()>(&ComponentUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ComponentUI*(*)($JComponent*)>(&ComponentUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ComponentUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ComponentUI",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ComponentUI_MethodInfo_
};

$Object* allocate$ComponentUI($Class* clazz) {
	return $of($alloc(ComponentUI));
}

void ComponentUI::init$() {
}

void ComponentUI::installUI($JComponent* c) {
}

void ComponentUI::uninstallUI($JComponent* c) {
}

void ComponentUI::paint($Graphics* g, $JComponent* c) {
}

void ComponentUI::update($Graphics* g, $JComponent* c) {
	if ($nc(c)->isOpaque()) {
		$nc(g)->setColor($(c->getBackground()));
		int32_t var$0 = c->getWidth();
		g->fillRect(0, 0, var$0, c->getHeight());
	}
	paint(g, c);
}

$Dimension* ComponentUI::getPreferredSize($JComponent* c) {
	return nullptr;
}

$Dimension* ComponentUI::getMinimumSize($JComponent* c) {
	return getPreferredSize(c);
}

$Dimension* ComponentUI::getMaximumSize($JComponent* c) {
	return getPreferredSize(c);
}

bool ComponentUI::contains($JComponent* c, int32_t x, int32_t y) {
	return $nc(c)->inside(x, y);
}

ComponentUI* ComponentUI::createUI($JComponent* c) {
	$throwNew($Error, "ComponentUI.createUI not implemented."_s);
	$shouldNotReachHere();
}

int32_t ComponentUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	return -1;
}

$Component$BaselineResizeBehavior* ComponentUI::getBaselineResizeBehavior($JComponent* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

int32_t ComponentUI::getAccessibleChildrenCount($JComponent* c) {
	return $SwingUtilities::getAccessibleChildrenCount(c);
}

$Accessible* ComponentUI::getAccessibleChild($JComponent* c, int32_t i) {
	return $SwingUtilities::getAccessibleChild(c, i);
}

ComponentUI::ComponentUI() {
}

$Class* ComponentUI::load$($String* name, bool initialize) {
	$loadClass(ComponentUI, name, initialize, &_ComponentUI_ClassInfo_, allocate$ComponentUI);
	return class$;
}

$Class* ComponentUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax