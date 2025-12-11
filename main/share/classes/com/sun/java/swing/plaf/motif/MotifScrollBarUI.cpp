#include <com/sun/java/swing/plaf/motif/MotifScrollBarUI.h>

#include <com/sun/java/swing/plaf/motif/MotifScrollBarButton.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef VERTICAL

using $MotifScrollBarButton = ::com::sun::java::swing::plaf::motif::MotifScrollBarButton;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifScrollBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifScrollBarUI::*)()>(&MotifScrollBarUI::init$))},
	{"createDecreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createIncreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifScrollBarUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paintThumb", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"paintTrack", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifScrollBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifScrollBarUI",
	"javax.swing.plaf.basic.BasicScrollBarUI",
	nullptr,
	nullptr,
	_MotifScrollBarUI_MethodInfo_
};

$Object* allocate$MotifScrollBarUI($Class* clazz) {
	return $of($alloc(MotifScrollBarUI));
}

void MotifScrollBarUI::init$() {
	$BasicScrollBarUI::init$();
}

$ComponentUI* MotifScrollBarUI::createUI($JComponent* c) {
	$init(MotifScrollBarUI);
	return $new(MotifScrollBarUI);
}

$Dimension* MotifScrollBarUI::getPreferredSize($JComponent* c) {
	$var($Insets, insets, $nc(c)->getInsets());
	int32_t dx = $nc(insets)->left + insets->right;
	int32_t dy = insets->top + insets->bottom;
	return ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) ? $new($Dimension, dx + 11, dy + 33) : $new($Dimension, dx + 33, dy + 11);
}

$JButton* MotifScrollBarUI::createDecreaseButton(int32_t orientation) {
	return $new($MotifScrollBarButton, orientation);
}

$JButton* MotifScrollBarUI::createIncreaseButton(int32_t orientation) {
	return $new($MotifScrollBarButton, orientation);
}

void MotifScrollBarUI::paintTrack($Graphics* g, $JComponent* c, $Rectangle* trackBounds) {
	$nc(g)->setColor(this->trackColor);
	g->fillRect($nc(trackBounds)->x, trackBounds->y, trackBounds->width, trackBounds->height);
}

void MotifScrollBarUI::paintThumb($Graphics* g, $JComponent* c, $Rectangle* thumbBounds) {
	bool var$0 = $nc(thumbBounds)->isEmpty();
	if (var$0 || !$nc(this->scrollbar)->isEnabled()) {
		return;
	}
	int32_t w = $nc(thumbBounds)->width;
	int32_t h = thumbBounds->height;
	$nc(g)->translate(thumbBounds->x, thumbBounds->y);
	g->setColor(this->thumbColor);
	g->fillRect(0, 0, w - 1, h - 1);
	g->setColor(this->thumbHighlightColor);
	$SwingUtilities2::drawVLine(g, 0, 0, h - 1);
	$SwingUtilities2::drawHLine(g, 1, w - 1, 0);
	g->setColor(this->thumbLightShadowColor);
	$SwingUtilities2::drawHLine(g, 1, w - 1, h - 1);
	$SwingUtilities2::drawVLine(g, w - 1, 1, h - 2);
	g->translate(-thumbBounds->x, -thumbBounds->y);
}

MotifScrollBarUI::MotifScrollBarUI() {
}

$Class* MotifScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(MotifScrollBarUI, name, initialize, &_MotifScrollBarUI_ClassInfo_, allocate$MotifScrollBarUI);
	return class$;
}

$Class* MotifScrollBarUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com