#include <com/apple/laf/AquaInternalFrameDockIconUI$DockLabel.h>

#include <com/apple/laf/AquaFonts.h>
#include <com/apple/laf/AquaInternalFrameDockIconUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Rectangle2D.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef KEY_ANTIALIASING
#undef NUB_HEIGHT
#undef POPUP_LAYER
#undef ROUND_ADDITIONAL_HEIGHT
#undef ROUND_ADDITIONAL_WIDTH
#undef VALUE_ANTIALIAS_ON

using $AquaFonts = ::com::apple::laf::AquaFonts;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Window = ::java::awt::Window;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$CompoundAttribute _AquaInternalFrameDockIconUI$DockLabel_MethodAnnotations_hide1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _AquaInternalFrameDockIconUI$DockLabel_FieldInfo_[] = {
	{"NUB_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(AquaInternalFrameDockIconUI$DockLabel, NUB_HEIGHT)},
	{"ROUND_ADDITIONAL_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(AquaInternalFrameDockIconUI$DockLabel, ROUND_ADDITIONAL_HEIGHT)},
	{"ROUND_ADDITIONAL_WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(AquaInternalFrameDockIconUI$DockLabel, ROUND_ADDITIONAL_WIDTH)},
	{}
};

$MethodInfo _AquaInternalFrameDockIconUI$DockLabel_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameDockIconUI$DockLabel::*)($String*)>(&AquaInternalFrameDockIconUI$DockLabel::init$))},
	{"hide", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _AquaInternalFrameDockIconUI$DockLabel_MethodAnnotations_hide1},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"show", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaInternalFrameDockIconUI$DockLabel::*)($Component*)>(&AquaInternalFrameDockIconUI$DockLabel::show))},
	{}
};

$InnerClassInfo _AquaInternalFrameDockIconUI$DockLabel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameDockIconUI$DockLabel", "com.apple.laf.AquaInternalFrameDockIconUI", "DockLabel", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AquaInternalFrameDockIconUI$DockLabel_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameDockIconUI$DockLabel",
	"javax.swing.JLabel",
	nullptr,
	_AquaInternalFrameDockIconUI$DockLabel_FieldInfo_,
	_AquaInternalFrameDockIconUI$DockLabel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameDockIconUI$DockLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameDockIconUI"
};

$Object* allocate$AquaInternalFrameDockIconUI$DockLabel($Class* clazz) {
	return $of($alloc(AquaInternalFrameDockIconUI$DockLabel));
}

void AquaInternalFrameDockIconUI$DockLabel::init$($String* text) {
	$useLocalCurrentObjectStackCache();
	$JLabel::init$(text);
	setBorder(nullptr);
	setOpaque(false);
	setFont($($AquaFonts::getDockIconFont()));
	$var($FontMetrics, metrics, getFontMetrics($(getFont())));
	int32_t var$0 = $SwingUtilities::computeStringWidth(metrics, $(getText())) + AquaInternalFrameDockIconUI$DockLabel::ROUND_ADDITIONAL_WIDTH * 2;
	setSize(var$0, $nc(metrics)->getAscent() + AquaInternalFrameDockIconUI$DockLabel::NUB_HEIGHT + AquaInternalFrameDockIconUI$DockLabel::ROUND_ADDITIONAL_HEIGHT);
}

void AquaInternalFrameDockIconUI$DockLabel::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t width = getWidth();
	int32_t height = getHeight();
	$var($Font, font, getFont());
	$var($FontMetrics, metrics, getFontMetrics(font));
	$nc(g)->setFont(font);
	$var($String, text, $nc($(getText()))->trim());
	int32_t ascent = $nc(metrics)->getAscent();
	$var($Rectangle2D, stringBounds, metrics->getStringBounds(text, g));
	int32_t halfway = width / 2;
	int32_t x = (halfway - $cast(int32_t, $nc(stringBounds)->getWidth()) / 2);
	$var($Graphics2D, g2d, $instanceOf($Graphics2D, g) ? $cast($Graphics2D, g) : ($Graphics2D*)nullptr);
	if (g2d != nullptr) {
		g->setColor($($UIManager::getColor("DesktopIcon.labelBackground"_s)));
		$init($RenderingHints);
		$var($Object, origAA, g2d->getRenderingHint($RenderingHints::KEY_ANTIALIASING));
		g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
		int32_t roundHeight = height - AquaInternalFrameDockIconUI$DockLabel::ROUND_ADDITIONAL_HEIGHT + 1;
		g->fillRoundRect(0, 0, width, roundHeight, roundHeight, roundHeight);
		$var($ints, xpts, $new($ints, {
			halfway,
			halfway + AquaInternalFrameDockIconUI$DockLabel::NUB_HEIGHT,
			halfway - AquaInternalFrameDockIconUI$DockLabel::NUB_HEIGHT
		}));
		$var($ints, ypts, $new($ints, {
			height,
			height - AquaInternalFrameDockIconUI$DockLabel::NUB_HEIGHT,
			height - AquaInternalFrameDockIconUI$DockLabel::NUB_HEIGHT
		}));
		g->fillPolygon(xpts, ypts, 3);
		g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, origAA);
	}
	$init($Color);
	g->setColor($Color::black);
	$SwingUtilities2::drawString(static_cast<$JComponent*>(this), g, text, x, 2 + ascent);
	g->setColor($Color::white);
	$SwingUtilities2::drawString(static_cast<$JComponent*>(this), g, text, x, 1 + ascent);
}

void AquaInternalFrameDockIconUI$DockLabel::show($Component* invoker) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(invoker)->getWidth();
	int32_t desiredLocationX = (var$0 - getWidth()) / 2;
	int32_t desiredLocationY = -(getHeight() + 6);
	$var($Container, parent, invoker->getParent());
	{
		$var($Container, p, parent);
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			if ($instanceOf($JRootPane, p)) {
				if ($instanceOf($JInternalFrame, $(p->getParent()))) {
					continue;
				}
				$assign(parent, $nc(($cast($JRootPane, p)))->getLayeredPane());
				for ($assign(p, $nc(parent)->getParent()); p != nullptr && (!($instanceOf($Window, p))); $assign(p, $nc(p)->getParent())) {
				}
				break;
			}
		}
	}
	$var($Point, p, $SwingUtilities::convertPoint(invoker, desiredLocationX, desiredLocationY, parent));
	setLocation(p->x, p->y);
	if ($instanceOf($JLayeredPane, parent)) {
		$init($JLayeredPane);
		$nc(($cast($JLayeredPane, parent)))->add(this, $JLayeredPane::POPUP_LAYER, 0);
	}
}

void AquaInternalFrameDockIconUI$DockLabel::hide() {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, getParent());
	$var($Rectangle, r, this->getBounds());
	if (parent == nullptr) {
		return;
	}
	$nc(parent)->remove(static_cast<$Component*>(this));
	parent->repaint($nc(r)->x, r->y, r->width, r->height);
}

AquaInternalFrameDockIconUI$DockLabel::AquaInternalFrameDockIconUI$DockLabel() {
}

$Class* AquaInternalFrameDockIconUI$DockLabel::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameDockIconUI$DockLabel, name, initialize, &_AquaInternalFrameDockIconUI$DockLabel_ClassInfo_, allocate$AquaInternalFrameDockIconUI$DockLabel);
	return class$;
}

$Class* AquaInternalFrameDockIconUI$DockLabel::class$ = nullptr;

		} // laf
	} // apple
} // com