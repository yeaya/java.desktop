#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel$1.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel$2.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef NOBUTTON

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconLabel$1 = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconLabel$1;
using $MotifDesktopIconUI$IconLabel$2 = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconLabel$2;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopIconUI$IconLabel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconLabel, this$0)},
	{"frame", "Ljavax/swing/JInternalFrame;", nullptr, 0, $field(MotifDesktopIconUI$IconLabel, frame)},
	{}
};

$MethodInfo _MotifDesktopIconUI$IconLabel_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;Ljavax/swing/JInternalFrame;)V", nullptr, 0, $method(static_cast<void(MotifDesktopIconUI$IconLabel::*)($MotifDesktopIconUI*,$JInternalFrame*)>(&MotifDesktopIconUI$IconLabel::init$))},
	{"forwardEventToParent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifDesktopIconUI$IconLabel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconLabel", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifDesktopIconUI$IconLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel",
	"javax.swing.JPanel",
	nullptr,
	_MotifDesktopIconUI$IconLabel_FieldInfo_,
	_MotifDesktopIconUI$IconLabel_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopIconUI$IconLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
};

$Object* allocate$MotifDesktopIconUI$IconLabel($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI$IconLabel));
}

void MotifDesktopIconUI$IconLabel::init$($MotifDesktopIconUI* this$0, $JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, frame, f);
	$init($MotifDesktopIconUI);
	setFont($MotifDesktopIconUI::defaultTitleFont);
	addMouseMotionListener($$new($MotifDesktopIconUI$IconLabel$1, this, this$0));
	addMouseListener($$new($MotifDesktopIconUI$IconLabel$2, this, this$0));
}

void MotifDesktopIconUI$IconLabel::forwardEventToParent($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, static_cast<$Component*>(getParent()));
	int32_t var$1 = $nc(e)->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getX();
	int32_t var$5 = e->getY();
	int32_t var$6 = e->getXOnScreen();
	int32_t var$7 = e->getYOnScreen();
	int32_t var$8 = e->getClickCount();
	$var($MouseEvent, newEvent, $new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, e->isPopupTrigger(), $MouseEvent::NOBUTTON));
	$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
	$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(e));
	$nc($(getParent()))->dispatchEvent(newEvent);
}

bool MotifDesktopIconUI$IconLabel::isFocusTraversable() {
	return false;
}

$Dimension* MotifDesktopIconUI$IconLabel::getMinimumSize() {
	return $new($Dimension, $nc(this->this$0->defaultIcon)->getIconWidth() + 1, 18 + 4);
}

$Dimension* MotifDesktopIconUI$IconLabel::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($String, title, $nc(this->frame)->getTitle());
	$init($MotifDesktopIconUI);
	$var($FontMetrics, fm, $nc(this->frame)->getFontMetrics($MotifDesktopIconUI::defaultTitleFont));
	int32_t w = 4;
	if (title != nullptr) {
		w += $SwingUtilities2::stringWidth(this->frame, fm, title);
	}
	return $new($Dimension, w, 18 + 4);
}

void MotifDesktopIconUI$IconLabel::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$JPanel::paint(g);
	int32_t maxX = getWidth() - 1;
	$var($Color, shadow, $nc($($nc($($UIManager::getColor("inactiveCaptionBorder"_s)))->darker()))->darker());
	$nc(g)->setColor(shadow);
	int32_t var$0 = getWidth();
	g->setClip(0, 0, var$0, getHeight());
	g->drawLine(maxX - 1, 1, maxX - 1, 1);
	g->drawLine(maxX, 0, maxX, 0);
	g->setColor($($UIManager::getColor("inactiveCaption"_s)));
	g->fillRect(2, 1, maxX - 3, 18 + 1);
	g->setClip(2, 1, maxX - 4, 18);
	int32_t y = 18 - $nc($($SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(this->frame), g)))->getDescent();
	g->setColor($($UIManager::getColor("inactiveCaptionText"_s)));
	$var($String, title, $nc(this->frame)->getTitle());
	if (title != nullptr) {
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->frame), g, title, 4, y);
	}
}

MotifDesktopIconUI$IconLabel::MotifDesktopIconUI$IconLabel() {
}

$Class* MotifDesktopIconUI$IconLabel::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI$IconLabel, name, initialize, &_MotifDesktopIconUI$IconLabel_ClassInfo_, allocate$MotifDesktopIconUI$IconLabel);
	return class$;
}

$Class* MotifDesktopIconUI$IconLabel::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com