#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI$Grid.h>
#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI$WindowsArrowButton.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

#undef CONTENTMARGINS
#undef DECREASE_HIGHLIGHT
#undef DISABLED
#undef HORIZONTAL
#undef HOT
#undef HOVER
#undef INCREASE_HIGHLIGHT
#undef NORMAL
#undef PRESSED
#undef SBP_GRIPPERHORZ
#undef SBP_GRIPPERVERT
#undef SBP_LOWERTRACKHORZ
#undef SBP_LOWERTRACKVERT
#undef SBP_THUMBBTNHORZ
#undef SBP_THUMBBTNVERT
#undef VERTICAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsScrollBarUI$1 = ::com::sun::java::swing::plaf::windows::WindowsScrollBarUI$1;
using $WindowsScrollBarUI$Grid = ::com::sun::java::swing::plaf::windows::WindowsScrollBarUI$Grid;
using $WindowsScrollBarUI$WindowsArrowButton = ::com::sun::java::swing::plaf::windows::WindowsScrollBarUI$WindowsArrowButton;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$ArrowButtonListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsScrollBarUI_FieldInfo_[] = {
	{"thumbGrid", "Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI$Grid;", nullptr, $PRIVATE, $field(WindowsScrollBarUI, thumbGrid)},
	{"highlightGrid", "Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI$Grid;", nullptr, $PRIVATE, $field(WindowsScrollBarUI, highlightGrid)},
	{"horizontalThumbSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(WindowsScrollBarUI, horizontalThumbSize)},
	{"verticalThumbSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(WindowsScrollBarUI, verticalThumbSize)},
	{}
};

$MethodInfo _WindowsScrollBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsScrollBarUI::*)()>(&WindowsScrollBarUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JScrollBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollBar*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$400))},
	{"access$500", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JScrollBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollBar*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$500))},
	{"access$600", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JScrollBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollBar*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$600))},
	{"access$700", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JScrollBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollBar*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$700))},
	{"access$800", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)Ljavax/swing/JScrollBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollBar*(*)(WindowsScrollBarUI*)>(&WindowsScrollBarUI::access$800))},
	{"configureScrollBarColors", "()V", nullptr, $PROTECTED},
	{"createArrowButtonListener", "()Ljavax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener;", nullptr, $PROTECTED},
	{"createDecreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createIncreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsScrollBarUI::createUI))},
	{"getMinimumThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getSize", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/XPStyle;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Dimension*(*)($Component*,$XPStyle*,$TMSchema$Part*)>(&WindowsScrollBarUI::getSize))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintDecreaseHighlight", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintIncreaseHighlight", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintThumb", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintTrack", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"setThumbRollover", "(Z)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsScrollBarUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$Grid", "com.sun.java.swing.plaf.windows.WindowsScrollBarUI", "Grid", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$WindowsArrowButton", "com.sun.java.swing.plaf.windows.WindowsScrollBarUI", "WindowsArrowButton", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsScrollBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI",
	"javax.swing.plaf.basic.BasicScrollBarUI",
	nullptr,
	_WindowsScrollBarUI_FieldInfo_,
	_WindowsScrollBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsScrollBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$Grid,com.sun.java.swing.plaf.windows.WindowsScrollBarUI$WindowsArrowButton,com.sun.java.swing.plaf.windows.WindowsScrollBarUI$1"
};

$Object* allocate$WindowsScrollBarUI($Class* clazz) {
	return $of($alloc(WindowsScrollBarUI));
}

$JScrollBar* WindowsScrollBarUI::access$800(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->scrollbar;
}

$JScrollBar* WindowsScrollBarUI::access$700(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->scrollbar;
}

$JScrollBar* WindowsScrollBarUI::access$600(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->scrollbar;
}

$JScrollBar* WindowsScrollBarUI::access$500(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->scrollbar;
}

$JButton* WindowsScrollBarUI::access$400(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->incrButton;
}

$JButton* WindowsScrollBarUI::access$300(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->decrButton;
}

$JButton* WindowsScrollBarUI::access$200(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->decrButton;
}

$JButton* WindowsScrollBarUI::access$100(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->incrButton;
}

$JScrollBar* WindowsScrollBarUI::access$000(WindowsScrollBarUI* x0) {
	$init(WindowsScrollBarUI);
	return $nc(x0)->scrollbar;
}

void WindowsScrollBarUI::init$() {
	$BasicScrollBarUI::init$();
}

$ComponentUI* WindowsScrollBarUI::createUI($JComponent* c) {
	$init(WindowsScrollBarUI);
	return $new(WindowsScrollBarUI);
}

void WindowsScrollBarUI::installDefaults() {
	$BasicScrollBarUI::installDefaults();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$nc(this->scrollbar)->setBorder(nullptr);
		$init($TMSchema$Part);
		$set(this, horizontalThumbSize, getSize(this->scrollbar, xp, $TMSchema$Part::SBP_THUMBBTNHORZ));
		$set(this, verticalThumbSize, getSize(this->scrollbar, xp, $TMSchema$Part::SBP_THUMBBTNVERT));
	} else {
		$set(this, horizontalThumbSize, nullptr);
		$set(this, verticalThumbSize, nullptr);
	}
}

$Dimension* WindowsScrollBarUI::getSize($Component* component, $XPStyle* xp, $TMSchema$Part* part) {
	$init(WindowsScrollBarUI);
	$var($XPStyle$Skin, skin, $nc(xp)->getSkin(component, part));
	int32_t var$0 = $nc(skin)->getWidth();
	return $new($Dimension, var$0, skin->getHeight());
}

$Dimension* WindowsScrollBarUI::getMinimumThumbSize() {
	if ((this->horizontalThumbSize == nullptr) || (this->verticalThumbSize == nullptr)) {
		return $BasicScrollBarUI::getMinimumThumbSize();
	}
	return $JScrollBar::HORIZONTAL == $nc(this->scrollbar)->getOrientation() ? this->horizontalThumbSize : this->verticalThumbSize;
}

void WindowsScrollBarUI::uninstallUI($JComponent* c) {
	$BasicScrollBarUI::uninstallUI(c);
	$set(this, thumbGrid, ($assignField(this, highlightGrid, nullptr)));
}

void WindowsScrollBarUI::configureScrollBarColors() {
	$BasicScrollBarUI::configureScrollBarColors();
	$var($Color, color, $UIManager::getColor("ScrollBar.trackForeground"_s));
	if (color != nullptr && this->trackColor != nullptr) {
		$set(this, thumbGrid, $WindowsScrollBarUI$Grid::getGrid(color, this->trackColor));
	}
	$assign(color, $UIManager::getColor("ScrollBar.trackHighlightForeground"_s));
	if (color != nullptr && this->trackHighlightColor != nullptr) {
		$set(this, highlightGrid, $WindowsScrollBarUI$Grid::getGrid(color, this->trackHighlightColor));
	}
}

$JButton* WindowsScrollBarUI::createDecreaseButton(int32_t orientation) {
	int32_t var$0 = orientation;
	$var($Color, var$1, $UIManager::getColor("ScrollBar.thumb"_s));
	$var($Color, var$2, $UIManager::getColor("ScrollBar.thumbShadow"_s));
	$var($Color, var$3, $UIManager::getColor("ScrollBar.thumbDarkShadow"_s));
	return $new($WindowsScrollBarUI$WindowsArrowButton, this, var$0, var$1, var$2, var$3, $($UIManager::getColor("ScrollBar.thumbHighlight"_s)));
}

$JButton* WindowsScrollBarUI::createIncreaseButton(int32_t orientation) {
	int32_t var$0 = orientation;
	$var($Color, var$1, $UIManager::getColor("ScrollBar.thumb"_s));
	$var($Color, var$2, $UIManager::getColor("ScrollBar.thumbShadow"_s));
	$var($Color, var$3, $UIManager::getColor("ScrollBar.thumbDarkShadow"_s));
	return $new($WindowsScrollBarUI$WindowsArrowButton, this, var$0, var$1, var$2, var$3, $($UIManager::getColor("ScrollBar.thumbHighlight"_s)));
}

$BasicScrollBarUI$ArrowButtonListener* WindowsScrollBarUI::createArrowButtonListener() {
	if ($XPStyle::isVista()) {
		return $new($WindowsScrollBarUI$1, this);
	} else {
		return $BasicScrollBarUI::createArrowButtonListener();
	}
}

void WindowsScrollBarUI::paintTrack($Graphics* g, $JComponent* c, $Rectangle* trackBounds) {
	bool v = ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL);
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$var($JScrollBar, sb, $cast($JScrollBar, c));
		$init($TMSchema$State);
		$TMSchema$State* state = $TMSchema$State::NORMAL;
		if (!$nc(sb)->isEnabled()) {
			state = $TMSchema$State::DISABLED;
		}
		$init($TMSchema$Part);
		$TMSchema$Part* part = v ? $TMSchema$Part::SBP_LOWERTRACKVERT : $TMSchema$Part::SBP_LOWERTRACKHORZ;
		$nc($(xp->getSkin(sb, part)))->paintSkin(g, trackBounds, state);
	} else if (this->thumbGrid == nullptr) {
		$BasicScrollBarUI::paintTrack(g, c, trackBounds);
	} else {
		$nc(this->thumbGrid)->paint(g, $nc(trackBounds)->x, trackBounds->y, trackBounds->width, trackBounds->height);
		if (this->trackHighlight == $BasicScrollBarUI::DECREASE_HIGHLIGHT) {
			paintDecreaseHighlight(g);
		} else if (this->trackHighlight == $BasicScrollBarUI::INCREASE_HIGHLIGHT) {
			paintIncreaseHighlight(g);
		}
	}
}

void WindowsScrollBarUI::paintThumb($Graphics* g, $JComponent* c, $Rectangle* thumbBounds) {
	bool v = ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL);
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$var($JScrollBar, sb, $cast($JScrollBar, c));
		$init($TMSchema$State);
		$TMSchema$State* state = $TMSchema$State::NORMAL;
		if (!$nc(sb)->isEnabled()) {
			state = $TMSchema$State::DISABLED;
		} else if (this->isDragging) {
			state = $TMSchema$State::PRESSED;
		} else if (isThumbRollover()) {
			state = $TMSchema$State::HOT;
		} else if ($XPStyle::isVista()) {
			bool var$0 = (this->incrButton != nullptr && $nc($($nc(this->incrButton)->getModel()))->isRollover());
			if (var$0 || (this->decrButton != nullptr && $nc($($nc(this->decrButton)->getModel()))->isRollover())) {
				state = $TMSchema$State::HOVER;
			}
		}
		$init($TMSchema$Part);
		$TMSchema$Part* thumbPart = v ? $TMSchema$Part::SBP_THUMBBTNVERT : $TMSchema$Part::SBP_THUMBBTNHORZ;
		$nc($(xp->getSkin(sb, thumbPart)))->paintSkin(g, thumbBounds, state);
		$TMSchema$Part* gripperPart = v ? $TMSchema$Part::SBP_GRIPPERVERT : $TMSchema$Part::SBP_GRIPPERHORZ;
		$var($XPStyle$Skin, skin, xp->getSkin(sb, gripperPart));
		$init($TMSchema$Prop);
		$var($Insets, gripperInsets, xp->getMargin(c, thumbPart, nullptr, $TMSchema$Prop::CONTENTMARGINS));
		bool var$1 = gripperInsets == nullptr || (v && ($nc(thumbBounds)->height - $nc(gripperInsets)->top - gripperInsets->bottom >= $nc(skin)->getHeight()));
		if (var$1 || (!v && ($nc(thumbBounds)->width - $nc(gripperInsets)->left - gripperInsets->right >= $nc(skin)->getWidth()))) {
			$var($Graphics, var$2, g);
			int32_t var$3 = thumbBounds->x + (thumbBounds->width - skin->getWidth()) / 2;
			int32_t var$4 = thumbBounds->y + (thumbBounds->height - skin->getHeight()) / 2;
			int32_t var$5 = skin->getWidth();
			skin->paintSkin(var$2, var$3, var$4, var$5, skin->getHeight(), state);
		}
	} else {
		$BasicScrollBarUI::paintThumb(g, c, thumbBounds);
	}
}

void WindowsScrollBarUI::paintDecreaseHighlight($Graphics* g) {
	if (this->highlightGrid == nullptr) {
		$BasicScrollBarUI::paintDecreaseHighlight(g);
	} else {
		$var($Insets, insets, $nc(this->scrollbar)->getInsets());
		$var($Rectangle, thumbR, getThumbBounds());
		int32_t x = 0;
		int32_t y = 0;
		int32_t w = 0;
		int32_t h = 0;
		if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
			x = $nc(insets)->left;
			int32_t var$0 = $nc(this->decrButton)->getY();
			y = var$0 + $nc(this->decrButton)->getHeight();
			w = $nc(this->scrollbar)->getWidth() - (insets->left + insets->right);
			h = $nc(thumbR)->y - y;
		} else {
			int32_t var$1 = $nc(this->decrButton)->getX();
			x = var$1 + $nc(this->decrButton)->getHeight();
			y = $nc(insets)->top;
			w = $nc(thumbR)->x - x;
			h = $nc(this->scrollbar)->getHeight() - (insets->top + insets->bottom);
		}
		$nc(this->highlightGrid)->paint(g, x, y, w, h);
	}
}

void WindowsScrollBarUI::paintIncreaseHighlight($Graphics* g) {
	if (this->highlightGrid == nullptr) {
		$BasicScrollBarUI::paintDecreaseHighlight(g);
	} else {
		$var($Insets, insets, $nc(this->scrollbar)->getInsets());
		$var($Rectangle, thumbR, getThumbBounds());
		int32_t x = 0;
		int32_t y = 0;
		int32_t w = 0;
		int32_t h = 0;
		if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
			x = $nc(insets)->left;
			y = $nc(thumbR)->y + thumbR->height;
			w = $nc(this->scrollbar)->getWidth() - (insets->left + insets->right);
			h = $nc(this->incrButton)->getY() - y;
		} else {
			x = $nc(thumbR)->x + thumbR->width;
			y = $nc(insets)->top;
			w = $nc(this->incrButton)->getX() - x;
			h = $nc(this->scrollbar)->getHeight() - (insets->top + insets->bottom);
		}
		$nc(this->highlightGrid)->paint(g, x, y, w, h);
	}
}

void WindowsScrollBarUI::setThumbRollover(bool active) {
	bool old = isThumbRollover();
	$BasicScrollBarUI::setThumbRollover(active);
	if ($XPStyle::isVista() && active != old) {
		$nc(this->scrollbar)->repaint();
	}
}

WindowsScrollBarUI::WindowsScrollBarUI() {
}

$Class* WindowsScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(WindowsScrollBarUI, name, initialize, &_WindowsScrollBarUI_ClassInfo_, allocate$WindowsScrollBarUI);
	return class$;
}

$Class* WindowsScrollBarUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com