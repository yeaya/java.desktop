#include <javax/swing/tree/DefaultTreeCellRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTree$DropLocation.h>
#include <javax/swing/JTree.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/tree/TreePath.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTree = ::javax::swing::JTree;
using $JTree$DropLocation = ::javax::swing::JTree$DropLocation;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $BorderUIResource$EmptyBorderUIResource = ::javax::swing::plaf::BorderUIResource$EmptyBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreePath = ::javax::swing::tree::TreePath;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultTreeCellRenderer_FieldInfo_[] = {
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, tree)},
	{"selected", "Z", nullptr, $PROTECTED, $field(DefaultTreeCellRenderer, selected)},
	{"hasFocus", "Z", nullptr, $PROTECTED, $field(DefaultTreeCellRenderer, hasFocus$)},
	{"drawsFocusBorderAroundIcon", "Z", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, drawsFocusBorderAroundIcon)},
	{"drawDashedFocusIndicator", "Z", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, drawDashedFocusIndicator)},
	{"treeBGColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, treeBGColor)},
	{"focusBGColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, focusBGColor)},
	{"closedIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellRenderer, closedIcon)},
	{"leafIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellRenderer, leafIcon)},
	{"openIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellRenderer, openIcon)},
	{"textSelectionColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(DefaultTreeCellRenderer, textSelectionColor)},
	{"textNonSelectionColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(DefaultTreeCellRenderer, textNonSelectionColor)},
	{"backgroundSelectionColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(DefaultTreeCellRenderer, backgroundSelectionColor)},
	{"backgroundNonSelectionColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(DefaultTreeCellRenderer, backgroundNonSelectionColor)},
	{"borderSelectionColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(DefaultTreeCellRenderer, borderSelectionColor)},
	{"isDropCell", "Z", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, isDropCell)},
	{"fillBackground", "Z", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, fillBackground)},
	{"inited", "Z", nullptr, $PRIVATE, $field(DefaultTreeCellRenderer, inited)},
	{}
};

$MethodInfo _DefaultTreeCellRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellRenderer::*)()>(&DefaultTreeCellRenderer::init$))},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"firePropertyChange", "(Ljava/lang/String;BB)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;CC)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;SS)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;JJ)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;DD)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC},
	{"getBackgroundNonSelectionColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBackgroundSelectionColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBorderSelectionColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getClosedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDefaultClosedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDefaultLeafIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDefaultOpenIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getLabelStart", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultTreeCellRenderer::*)()>(&DefaultTreeCellRenderer::getLabelStart))},
	{"getLeafIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getOpenIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTextNonSelectionColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getTextSelectionColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljava/awt/Graphics;IIIILjava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTreeCellRenderer::*)($Graphics*,int32_t,int32_t,int32_t,int32_t,$Color*)>(&DefaultTreeCellRenderer::paintFocus))},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"repaint", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"revalidate", "()V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBackgroundNonSelectionColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBackgroundSelectionColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBorderSelectionColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setClosedIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setLeafIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setOpenIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setTextNonSelectionColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setTextSelectionColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"validate", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultTreeCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.DefaultTreeCellRenderer",
	"javax.swing.JLabel",
	"javax.swing.tree.TreeCellRenderer",
	_DefaultTreeCellRenderer_FieldInfo_,
	_DefaultTreeCellRenderer_MethodInfo_
};

$Object* allocate$DefaultTreeCellRenderer($Class* clazz) {
	return $of($alloc(DefaultTreeCellRenderer));
}

$String* DefaultTreeCellRenderer::toString() {
	 return this->$JLabel::toString();
}

int32_t DefaultTreeCellRenderer::hashCode() {
	 return this->$JLabel::hashCode();
}

bool DefaultTreeCellRenderer::equals(Object$* arg0) {
	 return this->$JLabel::equals(arg0);
}

$Object* DefaultTreeCellRenderer::clone() {
	 return this->$JLabel::clone();
}

void DefaultTreeCellRenderer::finalize() {
	this->$JLabel::finalize();
}

void DefaultTreeCellRenderer::init$() {
	$JLabel::init$();
	this->inited = true;
}

void DefaultTreeCellRenderer::updateUI() {
	$useLocalCurrentObjectStackCache();
	$JLabel::updateUI();
	if (!this->inited || ($instanceOf($UIResource, $(getLeafIcon())))) {
		setLeafIcon($($DefaultLookup::getIcon(this, this->ui, "Tree.leafIcon"_s)));
	}
	if (!this->inited || ($instanceOf($UIResource, $(getClosedIcon())))) {
		setClosedIcon($($DefaultLookup::getIcon(this, this->ui, "Tree.closedIcon"_s)));
	}
	if (!this->inited || ($instanceOf($UIResource, $(getOpenIcon())))) {
		setOpenIcon($($DefaultLookup::getIcon(this, this->ui, "Tree.openIcon"_s)));
	}
	if (!this->inited || ($instanceOf($UIResource, $(getTextSelectionColor())))) {
		setTextSelectionColor($($DefaultLookup::getColor(this, this->ui, "Tree.selectionForeground"_s)));
	}
	if (!this->inited || ($instanceOf($UIResource, $(getTextNonSelectionColor())))) {
		setTextNonSelectionColor($($DefaultLookup::getColor(this, this->ui, "Tree.textForeground"_s)));
	}
	if (!this->inited || ($instanceOf($UIResource, $(getBackgroundSelectionColor())))) {
		setBackgroundSelectionColor($($DefaultLookup::getColor(this, this->ui, "Tree.selectionBackground"_s)));
	}
	if (!this->inited || ($instanceOf($UIResource, $(getBackgroundNonSelectionColor())))) {
		setBackgroundNonSelectionColor($($DefaultLookup::getColor(this, this->ui, "Tree.textBackground"_s)));
	}
	if (!this->inited || ($instanceOf($UIResource, $(getBorderSelectionColor())))) {
		setBorderSelectionColor($($DefaultLookup::getColor(this, this->ui, "Tree.selectionBorderColor"_s)));
	}
	this->drawsFocusBorderAroundIcon = $DefaultLookup::getBoolean(this, this->ui, "Tree.drawsFocusBorderAroundIcon"_s, false);
	this->drawDashedFocusIndicator = $DefaultLookup::getBoolean(this, this->ui, "Tree.drawDashedFocusIndicator"_s, false);
	this->fillBackground = $DefaultLookup::getBoolean(this, this->ui, "Tree.rendererFillBackground"_s, true);
	if (!this->inited || $instanceOf($UIResource, $(getBorder()))) {
		$var($Insets, margins, $DefaultLookup::getInsets(this, this->ui, "Tree.rendererMargins"_s));
		if (margins != nullptr) {
			setBorder($$new($BorderUIResource$EmptyBorderUIResource, margins));
		} else {
			setBorder($$new($BorderUIResource$EmptyBorderUIResource, 0, 0, 0, 0));
		}
	}
	setName("Tree.cellRenderer"_s);
}

$Icon* DefaultTreeCellRenderer::getDefaultOpenIcon() {
	return $DefaultLookup::getIcon(this, this->ui, "Tree.openIcon"_s);
}

$Icon* DefaultTreeCellRenderer::getDefaultClosedIcon() {
	return $DefaultLookup::getIcon(this, this->ui, "Tree.closedIcon"_s);
}

$Icon* DefaultTreeCellRenderer::getDefaultLeafIcon() {
	return $DefaultLookup::getIcon(this, this->ui, "Tree.leafIcon"_s);
}

void DefaultTreeCellRenderer::setOpenIcon($Icon* newIcon) {
	$set(this, openIcon, newIcon);
}

$Icon* DefaultTreeCellRenderer::getOpenIcon() {
	return this->openIcon;
}

void DefaultTreeCellRenderer::setClosedIcon($Icon* newIcon) {
	$set(this, closedIcon, newIcon);
}

$Icon* DefaultTreeCellRenderer::getClosedIcon() {
	return this->closedIcon;
}

void DefaultTreeCellRenderer::setLeafIcon($Icon* newIcon) {
	$set(this, leafIcon, newIcon);
}

$Icon* DefaultTreeCellRenderer::getLeafIcon() {
	return this->leafIcon;
}

void DefaultTreeCellRenderer::setTextSelectionColor($Color* newColor) {
	$set(this, textSelectionColor, newColor);
}

$Color* DefaultTreeCellRenderer::getTextSelectionColor() {
	return this->textSelectionColor;
}

void DefaultTreeCellRenderer::setTextNonSelectionColor($Color* newColor) {
	$set(this, textNonSelectionColor, newColor);
}

$Color* DefaultTreeCellRenderer::getTextNonSelectionColor() {
	return this->textNonSelectionColor;
}

void DefaultTreeCellRenderer::setBackgroundSelectionColor($Color* newColor) {
	$set(this, backgroundSelectionColor, newColor);
}

$Color* DefaultTreeCellRenderer::getBackgroundSelectionColor() {
	return this->backgroundSelectionColor;
}

void DefaultTreeCellRenderer::setBackgroundNonSelectionColor($Color* newColor) {
	$set(this, backgroundNonSelectionColor, newColor);
}

$Color* DefaultTreeCellRenderer::getBackgroundNonSelectionColor() {
	return this->backgroundNonSelectionColor;
}

void DefaultTreeCellRenderer::setBorderSelectionColor($Color* newColor) {
	$set(this, borderSelectionColor, newColor);
}

$Color* DefaultTreeCellRenderer::getBorderSelectionColor() {
	return this->borderSelectionColor;
}

void DefaultTreeCellRenderer::setFont($Font* font$renamed) {
	$var($Font, font, font$renamed);
	if ($instanceOf($FontUIResource, font)) {
		$assign(font, nullptr);
	}
	$JLabel::setFont(font);
}

$Font* DefaultTreeCellRenderer::getFont() {
	$var($Font, font, $JLabel::getFont());
	if (font == nullptr && this->tree != nullptr) {
		$assign(font, $nc(this->tree)->getFont());
	}
	return font;
}

void DefaultTreeCellRenderer::setBackground($Color* color$renamed) {
	$var($Color, color, color$renamed);
	if ($instanceOf($ColorUIResource, color)) {
		$assign(color, nullptr);
	}
	$JLabel::setBackground(color);
}

$Component* DefaultTreeCellRenderer::getTreeCellRendererComponent($JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($String, stringValue, $nc(tree)->convertValueToText(value, sel, expanded, leaf, row, hasFocus));
	$set(this, tree, tree);
	this->hasFocus$ = hasFocus;
	setText(stringValue);
	$var($Color, fg, nullptr);
	this->isDropCell = false;
	$var($JTree$DropLocation, dropLocation, tree->getDropLocation());
	bool var$0 = dropLocation != nullptr && dropLocation->getChildIndex() == -1;
	if (var$0 && tree->getRowForPath($(dropLocation->getPath())) == row) {
		$var($Color, col, $DefaultLookup::getColor(this, this->ui, "Tree.dropCellForeground"_s));
		if (col != nullptr) {
			$assign(fg, col);
		} else {
			$assign(fg, getTextSelectionColor());
		}
		this->isDropCell = true;
	} else if (sel) {
		$assign(fg, getTextSelectionColor());
	} else {
		$assign(fg, getTextNonSelectionColor());
	}
	setForeground(fg);
	$var($Icon, icon, nullptr);
	if (leaf) {
		$assign(icon, getLeafIcon());
	} else if (expanded) {
		$assign(icon, getOpenIcon());
	} else {
		$assign(icon, getClosedIcon());
	}
	if (!tree->isEnabled()) {
		setEnabled(false);
		$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
		$var($Icon, disabledIcon, $nc(laf)->getDisabledIcon(tree, icon));
		if (disabledIcon != nullptr) {
			$assign(icon, disabledIcon);
		}
		setDisabledIcon(icon);
	} else {
		setEnabled(true);
		setIcon(icon);
	}
	setComponentOrientation($(tree->getComponentOrientation()));
	this->selected = sel;
	return this;
}

void DefaultTreeCellRenderer::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Color, bColor, nullptr);
	if (this->isDropCell) {
		$assign(bColor, $DefaultLookup::getColor(this, this->ui, "Tree.dropCellBackground"_s));
		if (bColor == nullptr) {
			$assign(bColor, getBackgroundSelectionColor());
		}
	} else if (this->selected) {
		$assign(bColor, getBackgroundSelectionColor());
	} else {
		$assign(bColor, getBackgroundNonSelectionColor());
		if (bColor == nullptr) {
			$assign(bColor, getBackground());
		}
	}
	int32_t imageOffset = -1;
	if (bColor != nullptr && this->fillBackground) {
		imageOffset = getLabelStart();
		$nc(g)->setColor(bColor);
		if ($nc($(getComponentOrientation()))->isLeftToRight()) {
			int32_t var$0 = imageOffset;
			int32_t var$1 = getWidth() - imageOffset;
			g->fillRect(var$0, 0, var$1, getHeight());
		} else {
			int32_t var$2 = getWidth() - imageOffset;
			g->fillRect(0, 0, var$2, getHeight());
		}
	}
	if (this->hasFocus$) {
		if (this->drawsFocusBorderAroundIcon) {
			imageOffset = 0;
		} else if (imageOffset == -1) {
			imageOffset = getLabelStart();
		}
		if ($nc($(getComponentOrientation()))->isLeftToRight()) {
			$var($Graphics, var$3, g);
			int32_t var$4 = imageOffset;
			int32_t var$5 = getWidth() - imageOffset;
			paintFocus(var$3, var$4, 0, var$5, getHeight(), bColor);
		} else {
			$var($Graphics, var$6, g);
			int32_t var$7 = getWidth() - imageOffset;
			paintFocus(var$6, 0, 0, var$7, getHeight(), bColor);
		}
	}
	$JLabel::paint(g);
}

void DefaultTreeCellRenderer::paintFocus($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Color* notColor) {
	$var($Color, bsColor, getBorderSelectionColor());
	if (bsColor != nullptr && (this->selected || !this->drawDashedFocusIndicator)) {
		$nc(g)->setColor(bsColor);
		g->drawRect(x, y, w - 1, h - 1);
	}
	if (this->drawDashedFocusIndicator && notColor != nullptr) {
		if (this->treeBGColor != notColor) {
			$set(this, treeBGColor, notColor);
			$set(this, focusBGColor, $new($Color, ~notColor->getRGB()));
		}
		$nc(g)->setColor(this->focusBGColor);
		$BasicGraphicsUtils::drawDashedRect(g, x, y, w, h);
	}
}

int32_t DefaultTreeCellRenderer::getLabelStart() {
	$var($Icon, currentI, getIcon());
	if (currentI != nullptr && getText() != nullptr) {
		int32_t var$0 = currentI->getIconWidth();
		return var$0 + $Math::max(0, getIconTextGap() - 1);
	}
	return 0;
}

$Dimension* DefaultTreeCellRenderer::getPreferredSize() {
	$var($Dimension, retDimension, $JLabel::getPreferredSize());
	if (retDimension != nullptr) {
		$assign(retDimension, $new($Dimension, retDimension->width + 3, retDimension->height));
	}
	return retDimension;
}

void DefaultTreeCellRenderer::validate() {
}

void DefaultTreeCellRenderer::invalidate() {
}

void DefaultTreeCellRenderer::revalidate() {
}

void DefaultTreeCellRenderer::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void DefaultTreeCellRenderer::repaint($Rectangle* r) {
}

void DefaultTreeCellRenderer::repaint() {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	bool var$0 = propertyName == "text"_s;
	if (!var$0) {
		bool var$1 = ($SwingUtilities2::isScaleChanged(propertyName, oldValue, newValue) || propertyName == "font"_s || propertyName == "foreground"_s) && !$equals(oldValue, newValue);
		$init($BasicHTML);
		var$0 = (var$1 && getClientProperty($BasicHTML::propertyKey) != nullptr);
	}
	if (var$0) {
		$JLabel::firePropertyChange(propertyName, oldValue, newValue);
	}
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, int8_t oldValue, int8_t newValue) {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue) {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, int16_t oldValue, int16_t newValue) {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, int64_t oldValue, int64_t newValue) {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, float oldValue, float newValue) {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, double oldValue, double newValue) {
}

void DefaultTreeCellRenderer::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
}

DefaultTreeCellRenderer::DefaultTreeCellRenderer() {
}

$Class* DefaultTreeCellRenderer::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellRenderer, name, initialize, &_DefaultTreeCellRenderer_ClassInfo_, allocate$DefaultTreeCellRenderer);
	return class$;
}

$Class* DefaultTreeCellRenderer::class$ = nullptr;

		} // tree
	} // swing
} // javax