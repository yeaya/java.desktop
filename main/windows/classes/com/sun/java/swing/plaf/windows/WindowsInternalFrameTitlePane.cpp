#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$WindowsTitlePaneLayout.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Paint.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/NumberFormatException.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTIVE
#undef INACTIVE
#undef NORMAL
#undef TEXTSHADOWCOLOR
#undef TEXTSHADOWOFFSET
#undef TEXTSHADOWTYPE
#undef WP_CAPTION
#undef WP_CLOSEBUTTON
#undef WP_MAXCAPTION
#undef WP_MINCAPTION
#undef WP_WINDOW

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsInternalFrameTitlePane$1 = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane$1;
using $WindowsInternalFrameTitlePane$2 = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane$2;
using $WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler;
using $WindowsInternalFrameTitlePane$WindowsTitlePaneLayout = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane$WindowsTitlePaneLayout;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Paint = ::java::awt::Paint;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $BorderFactory = ::javax::swing::BorderFactory;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JSeparator = ::javax::swing::JSeparator;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;
using $BasicInternalFrameTitlePane$TitlePaneLayout = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameTitlePane_FieldInfo_[] = {
	{"selectedTitleGradientColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, selectedTitleGradientColor)},
	{"notSelectedTitleGradientColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, notSelectedTitleGradientColor)},
	{"systemPopupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, systemPopupMenu)},
	{"systemLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, systemLabel)},
	{"titleFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, titleFont)},
	{"titlePaneHeight", "I", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, titlePaneHeight)},
	{"buttonWidth", "I", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, buttonWidth)},
	{"buttonHeight", "I", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, buttonHeight)},
	{"hotTrackingOn", "Z", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane, hotTrackingOn)},
	{}
};

$MethodInfo _WindowsInternalFrameTitlePane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsInternalFrameTitlePane::*)($JInternalFrame*)>(&WindowsInternalFrameTitlePane::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$100))},
	{"access$1000", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$1000))},
	{"access$1100", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$1100))},
	{"access$1200", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$1200))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$400))},
	{"access$500", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$500))},
	{"access$600", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$600))},
	{"access$700", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$700))},
	{"access$800", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$800))},
	{"access$900", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane::access$900))},
	{"addSubComponents", "()V", nullptr, $PROTECTED},
	{"addSystemMenuItems", "(Ljavax/swing/JPopupMenu;)V", nullptr, $PROTECTED},
	{"assembleSystemMenu", "()V", nullptr, $PROTECTED},
	{"createButtons", "()V", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"getButtonMnemonic", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&WindowsInternalFrameTitlePane::getButtonMnemonic))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTitleBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"setButtonIcons", "()V", nullptr, $PROTECTED},
	{"showSystemMenu", "()V", nullptr, $PROTECTED},
	{"showSystemPopupMenu", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsInternalFrameTitlePane::*)($Component*)>(&WindowsInternalFrameTitlePane::showSystemPopupMenu))},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsInternalFrameTitlePane_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$ScalableIconUIResource", "com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane", "ScalableIconUIResource", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler", "com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane", "WindowsPropertyChangeHandler", $PUBLIC},
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsTitlePaneLayout", "com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane", "WindowsTitlePaneLayout", $PUBLIC},
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsInternalFrameTitlePane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane",
	nullptr,
	_WindowsInternalFrameTitlePane_FieldInfo_,
	_WindowsInternalFrameTitlePane_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsInternalFrameTitlePane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$ScalableIconUIResource,com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler,com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsTitlePaneLayout,com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$2,com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$1"
};

$Object* allocate$WindowsInternalFrameTitlePane($Class* clazz) {
	return $of($alloc(WindowsInternalFrameTitlePane));
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$1200(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* WindowsInternalFrameTitlePane::access$1100(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->iconButton;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$1000(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* WindowsInternalFrameTitlePane::access$900(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->maxButton;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$800(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* WindowsInternalFrameTitlePane::access$700(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$600(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$500(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$400(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$300(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$200(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$100(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameTitlePane::access$000(WindowsInternalFrameTitlePane* x0) {
	$init(WindowsInternalFrameTitlePane);
	return $nc(x0)->frame;
}

void WindowsInternalFrameTitlePane::init$($JInternalFrame* f) {
	$BasicInternalFrameTitlePane::init$(f);
}

void WindowsInternalFrameTitlePane::addSubComponents() {
	add(static_cast<$Component*>(this->systemLabel));
	add(static_cast<$Component*>(this->iconButton));
	add(static_cast<$Component*>(this->maxButton));
	add(static_cast<$Component*>(this->closeButton));
}

void WindowsInternalFrameTitlePane::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$BasicInternalFrameTitlePane::installDefaults();
	this->titlePaneHeight = $UIManager::getInt("InternalFrame.titlePaneHeight"_s);
	this->buttonWidth = $UIManager::getInt("InternalFrame.titleButtonWidth"_s) - 4;
	this->buttonHeight = $UIManager::getInt("InternalFrame.titleButtonHeight"_s) - 4;
	$var($Object, obj, $UIManager::get("InternalFrame.titleButtonToolTipsOn"_s));
	this->hotTrackingOn = ($instanceOf($Boolean, obj)) ? $nc(($cast($Boolean, obj)))->booleanValue() : true;
	if ($XPStyle::getXP() != nullptr) {
		this->buttonWidth = this->buttonHeight;
		$init($TMSchema$Part);
		$init($TMSchema$State);
		$var($Dimension, d, $XPStyle::getPartSize($TMSchema$Part::WP_CLOSEBUTTON, $TMSchema$State::NORMAL));
		if (d != nullptr && d->width != 0 && d->height != 0) {
			this->buttonWidth = $cast(int32_t, ((float)this->buttonWidth * d->width / d->height));
		}
	} else {
		this->buttonWidth += 2;
		$var($Color, activeBorderColor, $UIManager::getColor("InternalFrame.activeBorderColor"_s));
		setBorder($($BorderFactory::createLineBorder(activeBorderColor, 1)));
	}
	$set(this, selectedTitleGradientColor, $UIManager::getColor("InternalFrame.activeTitleGradient"_s));
	$set(this, notSelectedTitleGradientColor, $UIManager::getColor("InternalFrame.inactiveTitleGradient"_s));
}

void WindowsInternalFrameTitlePane::uninstallListeners() {
	$BasicInternalFrameTitlePane::uninstallListeners();
}

void WindowsInternalFrameTitlePane::createButtons() {
	$BasicInternalFrameTitlePane::createButtons();
	if ($XPStyle::getXP() != nullptr) {
		$nc(this->iconButton)->setContentAreaFilled(false);
		$nc(this->maxButton)->setContentAreaFilled(false);
		$nc(this->closeButton)->setContentAreaFilled(false);
	}
}

void WindowsInternalFrameTitlePane::setButtonIcons() {
	$BasicInternalFrameTitlePane::setButtonIcons();
	if (!this->hotTrackingOn) {
		$nc(this->iconButton)->setToolTipText(nullptr);
		$nc(this->maxButton)->setToolTipText(nullptr);
		$nc(this->closeButton)->setToolTipText(nullptr);
	}
}

void WindowsInternalFrameTitlePane::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	paintTitleBackground(g);
	$var($String, title, $nc(this->frame)->getTitle());
	if (title != nullptr) {
		bool isSelected = $nc(this->frame)->isSelected();
		$var($Font, oldFont, $nc(g)->getFont());
		$var($Font, newFont, (this->titleFont != nullptr) ? this->titleFont : getFont());
		g->setFont(newFont);
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(this->frame, g, newFont));
		int32_t var$2 = getHeight();
		int32_t var$1 = var$2 + $nc(fm)->getAscent();
		int32_t var$0 = var$1 - fm->getLeading();
		int32_t baseline = (var$0 - fm->getDescent()) / 2;
		$var($Rectangle, lastIconBounds, $new($Rectangle, 0, 0, 0, 0));
		if ($nc(this->frame)->isIconifiable()) {
			$assign(lastIconBounds, $nc(this->iconButton)->getBounds());
		} else if ($nc(this->frame)->isMaximizable()) {
			$assign(lastIconBounds, $nc(this->maxButton)->getBounds());
		} else if ($nc(this->frame)->isClosable()) {
			$assign(lastIconBounds, $nc(this->closeButton)->getBounds());
		}
		int32_t titleX = 0;
		int32_t titleW = 0;
		int32_t gap = 2;
		if ($WindowsGraphicsUtils::isLeftToRight(this->frame)) {
			if (lastIconBounds->x == 0) {
				int32_t var$3 = $nc(this->frame)->getWidth();
				lastIconBounds->x = var$3 - $nc($($nc(this->frame)->getInsets()))->right;
			}
			int32_t var$4 = $nc(this->systemLabel)->getX();
			titleX = var$4 + $nc(this->systemLabel)->getWidth() + gap;
			if (xp != nullptr) {
				titleX += 2;
			}
			titleW = lastIconBounds->x - titleX - gap;
		} else {
			if (lastIconBounds->x == 0) {
				lastIconBounds->x = $nc($($nc(this->frame)->getInsets()))->left;
			}
			titleW = $SwingUtilities2::stringWidth(this->frame, fm, title);
			int32_t minTitleX = lastIconBounds->x + lastIconBounds->width + gap;
			if (xp != nullptr) {
				minTitleX += 2;
			}
			int32_t availableWidth = $nc(this->systemLabel)->getX() - gap - minTitleX;
			if (availableWidth > titleW) {
				titleX = $nc(this->systemLabel)->getX() - gap - titleW;
			} else {
				titleX = minTitleX;
				titleW = availableWidth;
			}
		}
		$assign(title, getTitle($($nc(this->frame)->getTitle()), fm, titleW));
		if (xp != nullptr) {
			$var($String, shadowType, nullptr);
			if (isSelected) {
				$init($TMSchema$Part);
				$init($TMSchema$State);
				$init($TMSchema$Prop);
				$assign(shadowType, xp->getString(this, $TMSchema$Part::WP_CAPTION, $TMSchema$State::ACTIVE, $TMSchema$Prop::TEXTSHADOWTYPE));
			}
			if ("single"_s->equalsIgnoreCase(shadowType)) {
				$init($TMSchema$Part);
				$init($TMSchema$State);
				$init($TMSchema$Prop);
				$var($Point, shadowOffset, xp->getPoint(this, $TMSchema$Part::WP_WINDOW, $TMSchema$State::ACTIVE, $TMSchema$Prop::TEXTSHADOWOFFSET));
				$var($Color, shadowColor, xp->getColor(this, $TMSchema$Part::WP_WINDOW, $TMSchema$State::ACTIVE, $TMSchema$Prop::TEXTSHADOWCOLOR, nullptr));
				if (shadowOffset != nullptr && shadowColor != nullptr) {
					g->setColor(shadowColor);
					$SwingUtilities2::drawString(static_cast<$JComponent*>(this->frame), g, title, titleX + shadowOffset->x, baseline + shadowOffset->y);
				}
			}
		}
		g->setColor(isSelected ? this->selectedTextColor : this->notSelectedTextColor);
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->frame), g, title, titleX, baseline);
		g->setFont(oldFont);
	}
}

$Dimension* WindowsInternalFrameTitlePane::getPreferredSize() {
	return getMinimumSize();
}

$Dimension* WindowsInternalFrameTitlePane::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $new($Dimension, $($BasicInternalFrameTitlePane::getMinimumSize())));
	d->height = this->titlePaneHeight + 2;
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		if ($nc(this->frame)->isMaximum()) {
			d->height -= 1;
		} else {
			d->height += 3;
		}
	}
	return d;
}

void WindowsInternalFrameTitlePane::paintTitleBackground($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$TMSchema$Part* part = $nc(this->frame)->isIcon() ? $TMSchema$Part::WP_MINCAPTION : ($nc(this->frame)->isMaximum() ? $TMSchema$Part::WP_MAXCAPTION : $TMSchema$Part::WP_CAPTION);
		$init($TMSchema$State);
		$TMSchema$State* state = $nc(this->frame)->isSelected() ? $TMSchema$State::ACTIVE : $TMSchema$State::INACTIVE;
		$var($XPStyle$Skin, skin, xp->getSkin(this, part));
		$var($Graphics, var$0, g);
		int32_t var$1 = getWidth();
		$nc(skin)->paintSkin(var$0, 0, 0, var$1, getHeight(), state);
	} else {
		$var($Boolean, gradientsOn, $cast($Boolean, $LookAndFeel::getDesktopPropertyValue("win.frame.captionGradientsOn"_s, $($Boolean::valueOf(false)))));
		if ($nc(gradientsOn)->booleanValue() && $instanceOf($Graphics2D, g)) {
			$var($Graphics2D, g2, $cast($Graphics2D, g));
			$var($Paint, savePaint, $nc(g2)->getPaint());
			bool isSelected = $nc(this->frame)->isSelected();
			int32_t w = getWidth();
			if (isSelected) {
				$var($GradientPaint, titleGradient, $new($GradientPaint, (float)0, (float)0, this->selectedTitleColor, (float)$cast(int32_t, (w * 0.75)), (float)0, this->selectedTitleGradientColor));
				g2->setPaint(titleGradient);
			} else {
				$var($GradientPaint, titleGradient, $new($GradientPaint, (float)0, (float)0, this->notSelectedTitleColor, (float)$cast(int32_t, (w * 0.75)), (float)0, this->notSelectedTitleGradientColor));
				g2->setPaint(titleGradient);
			}
			int32_t var$2 = getWidth();
			g2->fillRect(0, 0, var$2, getHeight());
			g2->setPaint(savePaint);
		} else {
			$BasicInternalFrameTitlePane::paintTitleBackground(g);
		}
	}
}

void WindowsInternalFrameTitlePane::assembleSystemMenu() {
	$useLocalCurrentObjectStackCache();
	$set(this, systemPopupMenu, $new($JPopupMenu));
	addSystemMenuItems(this->systemPopupMenu);
	enableActions();
	$var($JLabel, tmp, $new($WindowsInternalFrameTitlePane$1, this, $($nc(this->frame)->getFrameIcon())));
	$set(this, systemLabel, tmp);
	$nc(this->systemLabel)->addMouseListener($$new($WindowsInternalFrameTitlePane$2, this));
}

void WindowsInternalFrameTitlePane::addSystemMenuItems($JPopupMenu* menu) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, mi, $nc(menu)->add(this->restoreAction));
	$nc(mi)->setMnemonic(getButtonMnemonic("restore"_s));
	$assign(mi, menu->add(this->moveAction));
	mi->setMnemonic(getButtonMnemonic("move"_s));
	$assign(mi, menu->add(this->sizeAction));
	mi->setMnemonic(getButtonMnemonic("size"_s));
	$assign(mi, menu->add(this->iconifyAction));
	mi->setMnemonic(getButtonMnemonic("minimize"_s));
	$assign(mi, menu->add(this->maximizeAction));
	mi->setMnemonic(getButtonMnemonic("maximize"_s));
	menu->add(static_cast<$Component*>($$new($JSeparator)));
	$assign(mi, menu->add(this->closeAction));
	mi->setMnemonic(getButtonMnemonic("close"_s));
}

int32_t WindowsInternalFrameTitlePane::getButtonMnemonic($String* button) {
	$init(WindowsInternalFrameTitlePane);
	$useLocalCurrentObjectStackCache();
	try {
		return $Integer::parseInt($($UIManager::getString($$str({"InternalFrameTitlePane."_s, button, "Button.mnemonic"_s}))));
	} catch ($NumberFormatException& e) {
		return -1;
	}
	$shouldNotReachHere();
}

void WindowsInternalFrameTitlePane::showSystemMenu() {
	showSystemPopupMenu(this->systemLabel);
}

void WindowsInternalFrameTitlePane::showSystemPopupMenu($Component* invoker) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, dim, $new($Dimension));
	$var($Border, border, $nc(this->frame)->getBorder());
	if (border != nullptr) {
		int32_t var$0 = $nc($(border->getBorderInsets(this->frame)))->left;
		dim->width += var$0 + $nc($(border->getBorderInsets(this->frame)))->right;
		int32_t var$1 = $nc($(border->getBorderInsets(this->frame)))->bottom;
		dim->height += var$1 + $nc($(border->getBorderInsets(this->frame)))->top;
	}
	if (!$nc(this->frame)->isIcon()) {
		$var($Component, var$2, invoker);
		int32_t var$3 = getX() - dim->width;
		int32_t var$4 = getY();
		$nc(this->systemPopupMenu)->show(var$2, var$3, var$4 + getHeight() - dim->height);
	} else {
		$var($Component, var$5, invoker);
		int32_t var$6 = getX() - dim->width;
		int32_t var$7 = getY();
		$nc(this->systemPopupMenu)->show(var$5, var$6, var$7 - $nc($($nc(this->systemPopupMenu)->getPreferredSize()))->height - dim->height);
	}
}

$PropertyChangeListener* WindowsInternalFrameTitlePane::createPropertyChangeListener() {
	return $new($WindowsInternalFrameTitlePane$WindowsPropertyChangeHandler, this);
}

$LayoutManager* WindowsInternalFrameTitlePane::createLayout() {
	return $new($WindowsInternalFrameTitlePane$WindowsTitlePaneLayout, this);
}

WindowsInternalFrameTitlePane::WindowsInternalFrameTitlePane() {
}

$Class* WindowsInternalFrameTitlePane::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameTitlePane, name, initialize, &_WindowsInternalFrameTitlePane_ClassInfo_, allocate$WindowsInternalFrameTitlePane);
	return class$;
}

$Class* WindowsInternalFrameTitlePane::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com