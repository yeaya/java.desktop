#include <com/apple/laf/AquaMenuPainter.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder$Default.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaIcon$InvertableIcon.h>
#include <com/apple/laf/AquaMenuPainter$Client.h>
#include <com/apple/laf/AquaMenuPainter$RecyclableBorder.h>
#include <com/apple/laf/AquaMnemonicHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef CTRL_MASK
#undef LEFT
#undef MAX_VALUE
#undef MENU_BAR
#undef MENU_ITEM
#undef MENU_TITLE
#undef META_MASK
#undef PRESSED
#undef SHIFT_MASK

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaBorder$Default = ::com::apple::laf::AquaBorder$Default;
using $AquaIcon$InvertableIcon = ::com::apple::laf::AquaIcon$InvertableIcon;
using $AquaMenuPainter$Client = ::com::apple::laf::AquaMenuPainter$Client;
using $AquaMenuPainter$RecyclableBorder = ::com::apple::laf::AquaMenuPainter$RecyclableBorder;
using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMenuPainter_FieldInfo_[] = {
	{"kShiftGlyph", "B", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kShiftGlyph)},
	{"kOptionGlyph", "B", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kOptionGlyph)},
	{"kControlGlyph", "B", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kControlGlyph)},
	{"kPencilGlyph", "B", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kPencilGlyph)},
	{"kCommandMark", "B", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kCommandMark)},
	{"kUBlackDiamond", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUBlackDiamond)},
	{"kUCheckMark", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUCheckMark)},
	{"kUControlGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUControlGlyph)},
	{"kUOptionGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUOptionGlyph)},
	{"kUEnterGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUEnterGlyph)},
	{"kUCommandGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUCommandGlyph)},
	{"kULeftDeleteGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kULeftDeleteGlyph)},
	{"kURightDeleteGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kURightDeleteGlyph)},
	{"kUShiftGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUShiftGlyph)},
	{"kUCapsLockGlyph", "C", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kUCapsLockGlyph)},
	{"ALT_GRAPH_MASK", "I", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, ALT_GRAPH_MASK)},
	{"sUnsupportedModifiersMask", "I", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, sUnsupportedModifiersMask)},
	{"sPainter", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaMenuPainter;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaMenuPainter, sPainter)},
	{"defaultMenuItemGap", "I", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, defaultMenuItemGap)},
	{"kAcceleratorArrowSpace", "I", nullptr, $STATIC | $FINAL, $constField(AquaMenuPainter, kAcceleratorArrowSpace)},
	{"menuBarPainter", "Lcom/apple/laf/AquaMenuPainter$RecyclableBorder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaMenuPainter, menuBarPainter)},
	{"selectedMenuBarItemPainter", "Lcom/apple/laf/AquaMenuPainter$RecyclableBorder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaMenuPainter, selectedMenuBarItemPainter)},
	{"selectedMenuItemPainter", "Lcom/apple/laf/AquaMenuPainter$RecyclableBorder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaMenuPainter, selectedMenuItemPainter)},
	{}
};

$MethodInfo _AquaMenuPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaMenuPainter::*)()>(&AquaMenuPainter::init$))},
	{"drawString", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/lang/String;IIIZZ)V", nullptr, $PUBLIC},
	{"getKeyModifiersText", "(IZ)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t,bool)>(&AquaMenuPainter::getKeyModifiersText))},
	{"getKeyModifiersUnicode", "(IZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t,bool)>(&AquaMenuPainter::getKeyModifiersUnicode))},
	{"getMenuBarPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaMenuPainter::getMenuBarPainter))},
	{"getPreferredMenuItemSize", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;ILjava/awt/Font;)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getSelectedMenuBarItemPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaMenuPainter::getSelectedMenuBarItemPainter))},
	{"getSelectedMenuItemPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaMenuPainter::getSelectedMenuItemPainter))},
	{"instance", "()Lcom/apple/laf/AquaMenuPainter;", nullptr, $STATIC, $method(static_cast<AquaMenuPainter*(*)()>(&AquaMenuPainter::instance))},
	{"isTopLevelMenu", "(Ljavax/swing/JMenuItem;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($JMenuItem*)>(&AquaMenuPainter::isTopLevelMenu))},
	{"layoutMenuItem", "(Ljavax/swing/JMenuItem;Ljava/awt/FontMetrics;Ljava/lang/String;Ljava/awt/FontMetrics;Ljava/lang/String;Ljava/lang/String;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljavax/swing/Icon;IIIILjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;II)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(AquaMenuPainter::*)($JMenuItem*,$FontMetrics*,$String*,$FontMetrics*,$String*,$String*,$Icon*,$Icon*,$Icon*,int32_t,int32_t,int32_t,int32_t,$Rectangle*,$Rectangle*,$Rectangle*,$Rectangle*,$Rectangle*,$Rectangle*,int32_t,int32_t)>(&AquaMenuPainter::layoutMenuItem))},
	{"paintArrow", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljavax/swing/ButtonModel;Ljavax/swing/Icon;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintCheck", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljavax/swing/Icon;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"paintMenuBarBackground", "(Ljava/awt/Graphics;IILjavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintMenuItem", "(Lcom/apple/laf/AquaMenuPainter$Client;Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;ILjava/awt/Font;)V", nullptr, $PROTECTED},
	{"paintSelectedMenuItemBackground", "(Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintSelectedMenuTitleBackground", "(Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaMenuPainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuPainter$RecyclableBorder", "com.apple.laf.AquaMenuPainter", "RecyclableBorder", $STATIC},
	{"com.apple.laf.AquaMenuPainter$Client", "com.apple.laf.AquaMenuPainter", "Client", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaMenuPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMenuPainter",
	"java.lang.Object",
	nullptr,
	_AquaMenuPainter_FieldInfo_,
	_AquaMenuPainter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMenuPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuPainter$RecyclableBorder,com.apple.laf.AquaMenuPainter$Client"
};

$Object* allocate$AquaMenuPainter($Class* clazz) {
	return $of($alloc(AquaMenuPainter));
}

$AquaUtils$RecyclableSingleton* AquaMenuPainter::sPainter = nullptr;
$AquaMenuPainter$RecyclableBorder* AquaMenuPainter::menuBarPainter = nullptr;
$AquaMenuPainter$RecyclableBorder* AquaMenuPainter::selectedMenuBarItemPainter = nullptr;
$AquaMenuPainter$RecyclableBorder* AquaMenuPainter::selectedMenuItemPainter = nullptr;

void AquaMenuPainter::init$() {
}

$String* AquaMenuPainter::getKeyModifiersText(int32_t modifiers, bool isLeftToRight) {
	$init(AquaMenuPainter);
	return getKeyModifiersUnicode(modifiers, isLeftToRight);
}

$String* AquaMenuPainter::getKeyModifiersUnicode(int32_t modifiers, bool isLeftToRight) {
	$init(AquaMenuPainter);
	$var($StringBuilder, buf, $new($StringBuilder, 2));
	if (isLeftToRight) {
		if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
			buf->append(AquaMenuPainter::kUControlGlyph);
		}
		if (((int32_t)(modifiers & (uint32_t)($InputEvent::ALT_MASK | AquaMenuPainter::ALT_GRAPH_MASK))) != 0) {
			buf->append(AquaMenuPainter::kUOptionGlyph);
		}
		if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
			buf->append(AquaMenuPainter::kUShiftGlyph);
		}
		if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
			buf->append(AquaMenuPainter::kUCommandGlyph);
		}
	} else {
		if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
			buf->append(AquaMenuPainter::kUCommandGlyph);
		}
		if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
			buf->append(AquaMenuPainter::kUShiftGlyph);
		}
		if (((int32_t)(modifiers & (uint32_t)($InputEvent::ALT_MASK | AquaMenuPainter::ALT_GRAPH_MASK))) != 0) {
			buf->append(AquaMenuPainter::kUOptionGlyph);
		}
		if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
			buf->append(AquaMenuPainter::kUControlGlyph);
		}
	}
	return buf->toString();
}

AquaMenuPainter* AquaMenuPainter::instance() {
	$init(AquaMenuPainter);
	return $cast(AquaMenuPainter, $nc(AquaMenuPainter::sPainter)->get());
}

void AquaMenuPainter::paintMenuBarBackground($Graphics* g, int32_t width, int32_t height, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$init($Color);
	$nc(g)->setColor(c == nullptr ? $Color::white : $($nc(c)->getBackground()));
	g->fillRect(0, 0, width, height);
	$nc(($cast($Border, $($nc(AquaMenuPainter::menuBarPainter)->get()))))->paintBorder(nullptr, g, 0, 0, width, height);
}

void AquaMenuPainter::paintSelectedMenuTitleBackground($Graphics* g, int32_t width, int32_t height) {
	$nc(($cast($Border, $($nc(AquaMenuPainter::selectedMenuBarItemPainter)->get()))))->paintBorder(nullptr, g, -1, 0, width + 2, height);
}

void AquaMenuPainter::paintSelectedMenuItemBackground($Graphics* g, int32_t width, int32_t height) {
	$nc(($cast($Border, $($nc(AquaMenuPainter::selectedMenuItemPainter)->get()))))->paintBorder(nullptr, g, 0, 0, width, height);
}

void AquaMenuPainter::paintMenuItem($AquaMenuPainter$Client* client, $Graphics* g, $JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, $Color* background, $Color* foreground, $Color* disabledForeground, $Color* selectionForeground, int32_t defaultTextIconGap, $Font* acceleratorFont) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, b, $cast($JMenuItem, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	int32_t menuWidth = b->getWidth();
	int32_t menuHeight = b->getHeight();
	$var($Insets, i, $nc(c)->getInsets());
	$var($Rectangle, viewRect, $new($Rectangle, 0, 0, menuWidth, menuHeight));
	viewRect->x += $nc(i)->left;
	viewRect->y += i->top;
	viewRect->width -= (i->right + viewRect->x);
	viewRect->height -= (i->bottom + viewRect->y);
	$var($Font, holdf, $nc(g)->getFont());
	$var($Color, holdc, g->getColor());
	$var($Font, f, c->getFont());
	g->setFont(f);
	$var($FontMetrics, fm, g->getFontMetrics(f));
	$var($FontMetrics, fmAccel, g->getFontMetrics(acceleratorFont));
	if (c->isOpaque()) {
		$nc(client)->paintBackground(g, c, menuWidth, menuHeight);
	}
	$var($KeyStroke, accelerator, b->getAccelerator());
	$var($String, modifiersString, ""_s);
	$var($String, keyString, ""_s);
	bool leftToRight = $AquaUtils::isLeftToRight(c);
	if (accelerator != nullptr) {
		int32_t modifiers = accelerator->getModifiers();
		if (modifiers > 0) {
			$assign(modifiersString, getKeyModifiersText(modifiers, leftToRight));
		}
		int32_t keyCode = accelerator->getKeyCode();
		if (keyCode != 0) {
			$assign(keyString, $KeyEvent::getKeyText(keyCode));
		} else {
			$plusAssign(keyString, accelerator->getKeyChar());
		}
	}
	$var($Rectangle, iconRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Rectangle, acceleratorRect, $new($Rectangle));
	$var($Rectangle, checkIconRect, $new($Rectangle));
	$var($Rectangle, arrowIconRect, $new($Rectangle));
	$var($JMenuItem, var$0, b);
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, b->getText());
	$var($FontMetrics, var$3, fmAccel);
	$var($String, var$4, keyString);
	$var($String, var$5, modifiersString);
	$var($Icon, var$6, b->getIcon());
	$var($Icon, var$7, checkIcon);
	$var($Icon, var$8, arrowIcon);
	int32_t var$9 = b->getVerticalAlignment();
	int32_t var$10 = b->getHorizontalAlignment();
	int32_t var$11 = b->getVerticalTextPosition();
	int32_t var$12 = b->getHorizontalTextPosition();
	$var($Rectangle, var$13, viewRect);
	$var($Rectangle, var$14, iconRect);
	$var($Rectangle, var$15, textRect);
	$var($Rectangle, var$16, acceleratorRect);
	$var($Rectangle, var$17, checkIconRect);
	$var($Rectangle, var$18, arrowIconRect);
	$var($String, text, layoutMenuItem(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, var$13, var$14, var$15, var$16, var$17, var$18, b->getText() == nullptr ? 0 : defaultTextIconGap, defaultTextIconGap));
	$var($Container, parent, b->getParent());
	bool parentIsMenuBar = $instanceOf($JMenuBar, parent);
	$var($Container, ancestor, parent);
	while (ancestor != nullptr && !($instanceOf($JPopupMenu, ancestor))) {
		$assign(ancestor, ancestor->getParent());
	}
	bool var$19 = $nc(model)->isEnabled();
	bool isEnabled = var$19 && (ancestor == nullptr || $nc(ancestor)->isVisible());
	bool isSelected = false;
	if (!isEnabled) {
		g->setColor(disabledForeground);
	} else {
		bool var$21 = $nc(model)->isArmed();
		if (var$21 || ($instanceOf($JMenu, c) && $nc(model)->isSelected())) {
			g->setColor(selectionForeground);
			isSelected = true;
		} else {
			g->setColor(parentIsMenuBar ? $($nc(parent)->getForeground()) : $(b->getForeground()));
		}
	}
	if (b->getIcon() != nullptr) {
		paintIcon(g, b, iconRect, isEnabled);
	}
	if (checkIcon != nullptr) {
		paintCheck(g, b, checkIcon, checkIconRect);
	}
	if (keyString != nullptr && !keyString->isEmpty()) {
		int32_t yAccel = acceleratorRect->y + $nc(fm)->getAscent();
		if (modifiersString->isEmpty()) {
			$SwingUtilities2::drawString(c, g, keyString, acceleratorRect->x, yAccel);
		} else {
			int32_t modifiers = $nc(accelerator)->getModifiers();
			int32_t underlinedChar = 0;
			if (((int32_t)(modifiers & (uint32_t)AquaMenuPainter::ALT_GRAPH_MASK)) > 0) {
				underlinedChar = AquaMenuPainter::kUOptionGlyph;
			}
			int32_t var$22 = fm->charWidth(u'M');
			int32_t emWidth = $Math::max(var$22, $SwingUtilities::computeStringWidth(fm, keyString));
			if (leftToRight) {
				g->setFont(acceleratorFont);
				drawString(g, c, modifiersString, underlinedChar, acceleratorRect->x, yAccel, isEnabled, isSelected);
				g->setFont(f);
				$SwingUtilities2::drawString(c, g, keyString, acceleratorRect->x + acceleratorRect->width - emWidth, yAccel);
			} else {
				int32_t xAccel = acceleratorRect->x + emWidth;
				g->setFont(acceleratorFont);
				drawString(g, c, modifiersString, underlinedChar, xAccel, yAccel, isEnabled, isSelected);
				g->setFont(f);
				$SwingUtilities2::drawString(c, g, keyString, xAccel - fm->stringWidth(keyString), yAccel);
			}
		}
	}
	if (text != nullptr && !text->isEmpty()) {
		$init($BasicHTML);
		$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, textRect);
		} else {
			int32_t mnemonic = ($AquaMnemonicHandler::isMnemonicHidden() ? -1 : $nc(model)->getMnemonic());
			drawString(g, c, text, mnemonic, textRect->x, textRect->y + $nc(fm)->getAscent(), isEnabled, isSelected);
		}
	}
	if (arrowIcon != nullptr) {
		paintArrow(g, b, model, arrowIcon, arrowIconRect);
	}
	g->setColor(holdc);
	g->setFont(holdf);
}

$Dimension* AquaMenuPainter::getPreferredMenuItemSize($JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, int32_t defaultTextIconGap, $Font* acceleratorFont) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, b, $cast($JMenuItem, c));
	$var($Icon, icon, $nc(b)->getIcon());
	$var($String, text, b->getText());
	$var($KeyStroke, accelerator, b->getAccelerator());
	$var($String, keyString, ""_s);
	$var($String, modifiersString, ""_s);
	if (accelerator != nullptr) {
		int32_t modifiers = accelerator->getModifiers();
		if (modifiers > 0) {
			$assign(modifiersString, getKeyModifiersText(modifiers, true));
		}
		int32_t keyCode = accelerator->getKeyCode();
		if (keyCode != 0) {
			$assign(keyString, $KeyEvent::getKeyText(keyCode));
		} else {
			$plusAssign(keyString, accelerator->getKeyChar());
		}
	}
	$var($Font, font, b->getFont());
	$var($FontMetrics, fm, b->getFontMetrics(font));
	$var($FontMetrics, fmAccel, b->getFontMetrics(acceleratorFont));
	$var($Rectangle, iconRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Rectangle, acceleratorRect, $new($Rectangle));
	$var($Rectangle, checkIconRect, $new($Rectangle));
	$var($Rectangle, arrowIconRect, $new($Rectangle));
	$var($Rectangle, viewRect, $new($Rectangle, (int32_t)$Short::MAX_VALUE, (int32_t)$Short::MAX_VALUE));
	$var($JMenuItem, var$0, b);
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, text);
	$var($FontMetrics, var$3, fmAccel);
	$var($String, var$4, keyString);
	$var($String, var$5, modifiersString);
	$var($Icon, var$6, icon);
	$var($Icon, var$7, checkIcon);
	$var($Icon, var$8, arrowIcon);
	int32_t var$9 = b->getVerticalAlignment();
	int32_t var$10 = b->getHorizontalAlignment();
	int32_t var$11 = b->getVerticalTextPosition();
	layoutMenuItem(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, b->getHorizontalTextPosition(), viewRect, iconRect, textRect, acceleratorRect, checkIconRect, arrowIconRect, text == nullptr ? 0 : defaultTextIconGap, defaultTextIconGap);
	$var($Rectangle, r, $new($Rectangle));
	r->setBounds(textRect);
	$assign(r, $SwingUtilities::computeUnion(iconRect->x, iconRect->y, iconRect->width, iconRect->height, r));
	bool acceleratorTextIsEmpty = (keyString == nullptr) || keyString->isEmpty();
	if (!acceleratorTextIsEmpty) {
		$nc(r)->width += acceleratorRect->width;
	}
	if (!isTopLevelMenu(b)) {
		$nc(r)->width += checkIconRect->width;
		r->width += defaultTextIconGap;
		r->width += defaultTextIconGap;
		r->width += arrowIconRect->width;
	}
	$var($Insets, insets, b->getInsets());
	if (insets != nullptr) {
		$nc(r)->width += insets->left + insets->right;
		r->height += insets->top + insets->bottom;
	}
	$nc(r)->width += 4 + defaultTextIconGap;
	r->height = $Math::max(r->height, 18);
	return r->getSize();
}

void AquaMenuPainter::paintCheck($Graphics* g, $JMenuItem* item, $Icon* checkIcon, $Rectangle* checkIconRect) {
	bool var$0 = isTopLevelMenu(item);
	if (var$0 || !$nc(item)->isSelected()) {
		return;
	}
	if ($nc(item)->isArmed() && $instanceOf($AquaIcon$InvertableIcon, checkIcon)) {
		$nc($($nc(($cast($AquaIcon$InvertableIcon, checkIcon)))->getInvertedIcon()))->paintIcon(item, g, $nc(checkIconRect)->x, checkIconRect->y);
	} else {
		$nc(checkIcon)->paintIcon(item, g, $nc(checkIconRect)->x, checkIconRect->y);
	}
}

void AquaMenuPainter::paintIcon($Graphics* g, $JMenuItem* c, $Rectangle* localIconRect, bool isEnabled) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, model, $nc(c)->getModel());
	$var($Icon, icon, nullptr);
	if (!isEnabled) {
		$assign(icon, c->getDisabledIcon());
	} else {
		bool var$1 = $nc(model)->isPressed();
		if (var$1 && model->isArmed()) {
			$assign(icon, c->getPressedIcon());
			if (icon == nullptr) {
				$assign(icon, c->getIcon());
			}
		} else {
			$assign(icon, c->getIcon());
		}
	}
	if (icon != nullptr) {
		icon->paintIcon(c, g, $nc(localIconRect)->x, localIconRect->y);
	}
}

void AquaMenuPainter::paintArrow($Graphics* g, $JMenuItem* c, $ButtonModel* model, $Icon* arrowIcon, $Rectangle* arrowIconRect) {
	if (isTopLevelMenu(c)) {
		return;
	}
	bool var$0 = $instanceOf($JMenu, c);
	if (var$0) {
		bool var$1 = $nc(model)->isArmed();
		var$0 = (var$1 || $nc(model)->isSelected());
	}
	if (var$0 && $instanceOf($AquaIcon$InvertableIcon, arrowIcon)) {
		$nc($($nc(($cast($AquaIcon$InvertableIcon, arrowIcon)))->getInvertedIcon()))->paintIcon(c, g, $nc(arrowIconRect)->x, arrowIconRect->y);
	} else {
		$nc(arrowIcon)->paintIcon(c, g, $nc(arrowIconRect)->x, arrowIconRect->y);
	}
}

void AquaMenuPainter::drawString($Graphics* g, $JComponent* c, $String* text, int32_t underlinedChar, int32_t x, int32_t y, bool isEnabled, bool isSelected) {
	char16_t lc = 0;
	char16_t uc = 0;
	int32_t index = -1;
	int32_t lci = 0;
	int32_t uci = 0;
	if (underlinedChar != u'\0') {
		uc = $Character::toUpperCase((char16_t)underlinedChar);
		lc = $Character::toLowerCase((char16_t)underlinedChar);
		uci = $nc(text)->indexOf((int32_t)uc);
		lci = text->indexOf((int32_t)lc);
		if (uci == -1) {
			index = lci;
		} else if (lci == -1) {
			index = uci;
		} else {
			index = (lci < uci) ? lci : uci;
		}
	}
	$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, index, x, y);
}

bool AquaMenuPainter::isTopLevelMenu($JMenuItem* menuItem) {
	$init(AquaMenuPainter);
	return ($instanceOf($JMenu, menuItem)) && ($nc(($cast($JMenu, menuItem)))->isTopLevelMenu());
}

$String* AquaMenuPainter::layoutMenuItem($JMenuItem* menuItem, $FontMetrics* fm, $String* text, $FontMetrics* fmAccel, $String* keyString$renamed, $String* modifiersString, $Icon* icon, $Icon* checkIcon, $Icon* arrowIcon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR, $Rectangle* acceleratorR, $Rectangle* checkIconR, $Rectangle* arrowIconR, int32_t textIconGap, int32_t menuItemGap) {
	$useLocalCurrentObjectStackCache();
	$var($String, keyString, keyString$renamed);
	$SwingUtilities::layoutCompoundLabel(menuItem, fm, text, icon, verticalAlignment, $SwingConstants::LEFT, verticalTextPosition, horizontalTextPosition, viewR, iconR, textR, textIconGap);
	bool acceleratorTextIsEmpty = (keyString == nullptr) || $nc(keyString)->isEmpty();
	if (acceleratorTextIsEmpty) {
		$nc(acceleratorR)->width = (acceleratorR->height = 0);
		$assign(keyString, ""_s);
	} else {
		$nc(acceleratorR)->width = $SwingUtilities::computeStringWidth(fmAccel, modifiersString);
		int32_t var$0 = $nc(fm)->charWidth(u'M');
		acceleratorR->width += $Math::max(var$0, $SwingUtilities::computeStringWidth(fm, keyString));
		acceleratorR->height = $nc(fmAccel)->getHeight();
	}
	bool isTopLevelMenu = AquaMenuPainter::isTopLevelMenu(menuItem);
	if (!isTopLevelMenu) {
		if (checkIcon != nullptr) {
			$nc(checkIconR)->width = checkIcon->getIconWidth();
			checkIconR->height = checkIcon->getIconHeight();
		} else {
			$nc(checkIconR)->width = (checkIconR->height = 16);
		}
		if (arrowIcon != nullptr) {
			$nc(arrowIconR)->width = arrowIcon->getIconWidth();
			arrowIconR->height = arrowIcon->getIconHeight();
		} else {
			$nc(arrowIconR)->width = (arrowIconR->height = 16);
		}
		$nc(textR)->x += 12;
		$nc(iconR)->x += 12;
	}
	$var($Rectangle, labelR, $nc(iconR)->union$(textR));
	$nc(acceleratorR)->x += ($nc(viewR)->width - $nc(arrowIconR)->width - acceleratorR->width);
	acceleratorR->y = viewR->y + (viewR->height / 2) - (acceleratorR->height / 2);
	if (!isTopLevelMenu) {
		arrowIconR->x = (viewR->width - arrowIconR->width) + 1;
		arrowIconR->y = viewR->y + ($nc(labelR)->height / 2) - (arrowIconR->height / 2) + 1;
		$nc(checkIconR)->y = viewR->y + (labelR->height / 2) - (checkIconR->height / 2);
		checkIconR->x = 5;
		$nc(textR)->width += 8;
	}
	if (!$AquaUtils::isLeftToRight(menuItem)) {
		int32_t w = viewR->width;
		$nc(checkIconR)->x = w - (checkIconR->x + checkIconR->width);
		iconR->x = w - (iconR->x + iconR->width);
		$nc(textR)->x = w - (textR->x + textR->width);
		acceleratorR->x = w - (acceleratorR->x + acceleratorR->width);
		arrowIconR->x = w - (arrowIconR->x + arrowIconR->width);
	}
	$nc(textR)->x += menuItemGap;
	iconR->x += menuItemGap;
	return text;
}

$Border* AquaMenuPainter::getMenuBarPainter() {
	$init(AquaMenuPainter);
	$var($AquaBorder, border, $new($AquaBorder$Default));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::MENU_BAR);
	return border;
}

$Border* AquaMenuPainter::getSelectedMenuBarItemPainter() {
	$init(AquaMenuPainter);
	$var($AquaBorder, border, $new($AquaBorder$Default));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::MENU_TITLE);
	$init($JRSUIConstants$State);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$State::PRESSED);
	return border;
}

$Border* AquaMenuPainter::getSelectedMenuItemPainter() {
	$init(AquaMenuPainter);
	$var($AquaBorder, border, $new($AquaBorder$Default));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::MENU_ITEM);
	$init($JRSUIConstants$State);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$State::PRESSED);
	return border;
}

void clinit$AquaMenuPainter($Class* class$) {
	$assignStatic(AquaMenuPainter::sPainter, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaMenuPainter::class$));
	$assignStatic(AquaMenuPainter::menuBarPainter, $new($AquaMenuPainter$RecyclableBorder, "MenuBar.backgroundPainter"_s));
	$assignStatic(AquaMenuPainter::selectedMenuBarItemPainter, $new($AquaMenuPainter$RecyclableBorder, "MenuBar.selectedBackgroundPainter"_s));
	$assignStatic(AquaMenuPainter::selectedMenuItemPainter, $new($AquaMenuPainter$RecyclableBorder, "MenuItem.selectedBackgroundPainter"_s));
}

AquaMenuPainter::AquaMenuPainter() {
}

$Class* AquaMenuPainter::load$($String* name, bool initialize) {
	$loadClass(AquaMenuPainter, name, initialize, &_AquaMenuPainter_ClassInfo_, clinit$AquaMenuPainter, allocate$AquaMenuPainter);
	return class$;
}

$Class* AquaMenuPainter::class$ = nullptr;

		} // laf
	} // apple
} // com