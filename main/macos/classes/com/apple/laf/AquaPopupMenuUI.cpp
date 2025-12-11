#include <com/apple/laf/AquaPopupMenuUI.h>

#include <com/apple/laf/ScreenPopupFactory.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Stroke.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <jcpp.h>

#undef KEY_ANTIALIASING
#undef OVERLAP_SLACK
#undef VALUE_ANTIALIAS_ON

using $ScreenPopupFactory = ::com::apple::laf::ScreenPopupFactory;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $BasicStroke = ::java::awt::BasicStroke;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Stroke = ::java::awt::Stroke;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $PopupFactory = ::javax::swing::PopupFactory;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaPopupMenuUI_FieldInfo_[] = {
	{"OVERLAP_SLACK", "I", nullptr, $STATIC | $FINAL, $constField(AquaPopupMenuUI, OVERLAP_SLACK)},
	{}
};

$MethodInfo _AquaPopupMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaPopupMenuUI::*)()>(&AquaPopupMenuUI::init$))},
	{"clipEdges", "(Ljava/awt/Graphics2D;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaPopupMenuUI::createUI))},
	{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintRoundRect", "(Ljava/awt/Graphics2D;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaPopupMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaPopupMenuUI",
	"javax.swing.plaf.basic.BasicPopupMenuUI",
	nullptr,
	_AquaPopupMenuUI_FieldInfo_,
	_AquaPopupMenuUI_MethodInfo_
};

$Object* allocate$AquaPopupMenuUI($Class* clazz) {
	return $of($alloc(AquaPopupMenuUI));
}

void AquaPopupMenuUI::init$() {
	$BasicPopupMenuUI::init$();
}

$ComponentUI* AquaPopupMenuUI::createUI($JComponent* x) {
	$init(AquaPopupMenuUI);
	return $new(AquaPopupMenuUI);
}

bool AquaPopupMenuUI::isPopupTrigger($MouseEvent* e) {
	return $nc(e)->isPopupTrigger();
}

void AquaPopupMenuUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		$BasicPopupMenuUI::paint(g, c);
		return;
	}
	if (!($instanceOf($ScreenPopupFactory, $($PopupFactory::getSharedInstance())))) {
		$BasicPopupMenuUI::paint(g, c);
		return;
	}
	$var($Graphics2D, g2d, $cast($Graphics2D, $nc(g)->create()));
	$var($Rectangle, popupBounds, $nc(this->popupMenu)->getBounds());
	paintRoundRect(g2d, popupBounds);
	clipEdges(g2d, popupBounds);
	$nc(g2d)->dispose();
	$BasicPopupMenuUI::paint(g, c);
}

void AquaPopupMenuUI::paintRoundRect($Graphics2D* g2d, $Rectangle* popupBounds) {
	$init($RenderingHints);
	$nc(g2d)->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
	$init($AlphaComposite);
	g2d->setComposite($AlphaComposite::Clear);
	g2d->setStroke($$new($BasicStroke, 3.0f));
	g2d->drawRoundRect(-2, -2, $nc(popupBounds)->width + 3, popupBounds->height + 3, 12, 12);
}

void AquaPopupMenuUI::clipEdges($Graphics2D* g2d, $Rectangle* popupBounds) {
	$useLocalCurrentObjectStackCache();
	$var($Component, invoker, $nc(this->popupMenu)->getInvoker());
	if (!($instanceOf($JMenu, invoker))) {
		return;
	}
	$var($Rectangle, invokerBounds, $nc(invoker)->getBounds());
	$nc(invokerBounds)->setLocation($(invoker->getLocationOnScreen()));
	$nc(popupBounds)->setLocation($($nc(this->popupMenu)->getLocationOnScreen()));
	int32_t var$0 = $cast(int32_t, invokerBounds->getCenterX());
	$var($Point, invokerCenter, $new($Point, var$0, $cast(int32_t, invokerBounds->getCenterY())));
	if (popupBounds->contains(invokerCenter)) {
		return;
	}
	$init($AlphaComposite);
	$nc(g2d)->setComposite($AlphaComposite::SrcOver);
	g2d->setColor($($nc(this->popupMenu)->getBackground()));
	int32_t var$1 = $cast(int32_t, popupBounds->getCenterX());
	$var($Point, popupCenter, $new($Point, var$1, $cast(int32_t, popupBounds->getCenterY())));
	bool invokerMidpointAbovePopupMidpoint = invokerCenter->y <= popupCenter->y;
	if (invokerBounds->x + invokerBounds->width < popupBounds->x + AquaPopupMenuUI::OVERLAP_SLACK) {
		if (invokerMidpointAbovePopupMidpoint) {
			g2d->fillRect(-2, -2, 8, 8);
			return;
		}
		g2d->fillRect(-2, popupBounds->height - 6, 8, 8);
		return;
	}
	if (popupBounds->x + popupBounds->width < invokerBounds->x + AquaPopupMenuUI::OVERLAP_SLACK) {
		if (invokerMidpointAbovePopupMidpoint) {
			g2d->fillRect(popupBounds->width - 6, -2, 8, 8);
			return;
		}
		g2d->fillRect(popupBounds->width - 6, popupBounds->height - 6, 8, 8);
		return;
	}
	if (invokerBounds->y + invokerBounds->height < popupBounds->y + AquaPopupMenuUI::OVERLAP_SLACK) {
		g2d->fillRect(-2, -2, popupBounds->width + 4, 8);
		return;
	}
}

AquaPopupMenuUI::AquaPopupMenuUI() {
}

$Class* AquaPopupMenuUI::load$($String* name, bool initialize) {
	$loadClass(AquaPopupMenuUI, name, initialize, &_AquaPopupMenuUI_ClassInfo_, allocate$AquaPopupMenuUI);
	return class$;
}

$Class* AquaPopupMenuUI::class$ = nullptr;

		} // laf
	} // apple
} // com