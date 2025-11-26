#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title.h>

#include <com/sun/java/swing/plaf/motif/MotifGraphicsUtils.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$FrameButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title$1.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title$2.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef CENTER
#undef NOBUTTON
#undef RAISED

using $MotifGraphicsUtils = ::com::sun::java::swing::plaf::motif::MotifGraphicsUtils;
using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameTitlePane$FrameButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton;
using $MotifInternalFrameTitlePane$Title$1 = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title$1;
using $MotifInternalFrameTitlePane$Title$2 = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title$2;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameTitlePane$Title_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$Title, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane$Title_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MotifInternalFrameTitlePane$Title::*)($MotifInternalFrameTitlePane*,$String*)>(&MotifInternalFrameTitlePane$Title::init$))},
	{"forwardEventToParent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifInternalFrameTitlePane$Title_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "Title", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "FrameButton", $PRIVATE | $ABSTRACT},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane$Title_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title",
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton",
	nullptr,
	_MotifInternalFrameTitlePane$Title_FieldInfo_,
	_MotifInternalFrameTitlePane$Title_MethodInfo_,
	nullptr,
	nullptr,
	_MotifInternalFrameTitlePane$Title_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
};

$Object* allocate$MotifInternalFrameTitlePane$Title($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane$Title));
}

void MotifInternalFrameTitlePane$Title::init$($MotifInternalFrameTitlePane* this$0, $String* title) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$MotifInternalFrameTitlePane$FrameButton::init$(this$0);
	setText(title);
	setHorizontalAlignment($SwingConstants::CENTER);
	$var($Color, var$0, $UIManager::getColor("activeCaptionBorder"_s));
	setBorder($($BorderFactory::createBevelBorder($BevelBorder::RAISED, var$0, $($UIManager::getColor("inactiveCaptionBorder"_s)))));
	addMouseMotionListener($$new($MotifInternalFrameTitlePane$Title$1, this, this$0));
	addMouseListener($$new($MotifInternalFrameTitlePane$Title$2, this, this$0));
}

void MotifInternalFrameTitlePane$Title::forwardEventToParent($MouseEvent* e) {
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

void MotifInternalFrameTitlePane$Title::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$MotifInternalFrameTitlePane$FrameButton::paintComponent(g);
	if ($nc($($MotifInternalFrameTitlePane::access$300(this->this$0)))->isSelected()) {
		$nc(g)->setColor($($UIManager::getColor("activeCaptionText"_s)));
	} else {
		$nc(g)->setColor($($UIManager::getColor("inactiveCaptionText"_s)));
	}
	$var($Dimension, d, getSize());
	$var($String, frameTitle, $nc($($MotifInternalFrameTitlePane::access$400(this->this$0)))->getTitle());
	if (frameTitle != nullptr) {
		$MotifGraphicsUtils::drawStringInRect($($MotifInternalFrameTitlePane::access$500(this->this$0)), g, frameTitle, 0, 0, $nc(d)->width, d->height, $SwingConstants::CENTER);
	}
}

MotifInternalFrameTitlePane$Title::MotifInternalFrameTitlePane$Title() {
}

$Class* MotifInternalFrameTitlePane$Title::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane$Title, name, initialize, &_MotifInternalFrameTitlePane$Title_ClassInfo_, allocate$MotifInternalFrameTitlePane$Title);
	return class$;
}

$Class* MotifInternalFrameTitlePane$Title::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com