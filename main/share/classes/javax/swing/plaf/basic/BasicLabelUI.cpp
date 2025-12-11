#include <javax/swing/plaf/basic/BasicLabelUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicLabelUI$Actions.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef BASIC_LABEL_UI_KEY
#undef BOTTOM
#undef CENTER
#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef FALSE
#undef MAX_VALUE
#undef OTHER
#undef PRESS
#undef RELEASE
#undef TOP
#undef WHEN_FOCUSED
#undef WHEN_IN_FOCUSED_WINDOW
#undef X_AXIS

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicLabelUI$Actions = ::javax::swing::plaf::basic::BasicLabelUI$Actions;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicLabelUI_FieldInfo_[] = {
	{"labelUI", "Ljavax/swing/plaf/basic/BasicLabelUI;", nullptr, $PROTECTED | $STATIC, $staticField(BasicLabelUI, labelUI)},
	{"BASIC_LABEL_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicLabelUI, BASIC_LABEL_UI_KEY)},
	{"paintIconR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BasicLabelUI, paintIconR)},
	{"paintTextR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BasicLabelUI, paintTextR)},
	{}
};

$MethodInfo _BasicLabelUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicLabelUI::*)()>(&BasicLabelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicLabelUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"layout", "(Ljavax/swing/JLabel;Ljava/awt/FontMetrics;II)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BasicLabelUI::*)($JLabel*,$FontMetrics*,int32_t,int32_t)>(&BasicLabelUI::layout))},
	{"layoutCL", "(Ljavax/swing/JLabel;Ljava/awt/FontMetrics;Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicLabelUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintDisabledText", "(Ljavax/swing/JLabel;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{"paintEnabledText", "(Ljavax/swing/JLabel;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicLabelUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLabelUI$Actions", "javax.swing.plaf.basic.BasicLabelUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicLabelUI",
	"javax.swing.plaf.LabelUI",
	"java.beans.PropertyChangeListener",
	_BasicLabelUI_FieldInfo_,
	_BasicLabelUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicLabelUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLabelUI$Actions"
};

$Object* allocate$BasicLabelUI($Class* clazz) {
	return $of($alloc(BasicLabelUI));
}

int32_t BasicLabelUI::hashCode() {
	 return this->$LabelUI::hashCode();
}

bool BasicLabelUI::equals(Object$* arg0) {
	 return this->$LabelUI::equals(arg0);
}

$Object* BasicLabelUI::clone() {
	 return this->$LabelUI::clone();
}

$String* BasicLabelUI::toString() {
	 return this->$LabelUI::toString();
}

void BasicLabelUI::finalize() {
	this->$LabelUI::finalize();
}

BasicLabelUI* BasicLabelUI::labelUI = nullptr;
$Object* BasicLabelUI::BASIC_LABEL_UI_KEY = nullptr;

void BasicLabelUI::init$() {
	$LabelUI::init$();
	$set(this, paintIconR, $new($Rectangle));
	$set(this, paintTextR, $new($Rectangle));
}

void BasicLabelUI::loadActionMap($LazyActionMap* map) {
	$init(BasicLabelUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicLabelUI$Actions);
	$nc(map)->put($$new($BasicLabelUI$Actions, $BasicLabelUI$Actions::PRESS));
	map->put($$new($BasicLabelUI$Actions, $BasicLabelUI$Actions::RELEASE));
}

$String* BasicLabelUI::layoutCL($JLabel* label, $FontMetrics* fontMetrics, $String* text, $Icon* icon, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, var$0, static_cast<$JComponent*>(label));
	$var($FontMetrics, var$1, fontMetrics);
	$var($String, var$2, text);
	$var($Icon, var$3, icon);
	int32_t var$4 = $nc(label)->getVerticalAlignment();
	int32_t var$5 = label->getHorizontalAlignment();
	int32_t var$6 = label->getVerticalTextPosition();
	int32_t var$7 = label->getHorizontalTextPosition();
	$var($Rectangle, var$8, viewR);
	$var($Rectangle, var$9, iconR);
	$var($Rectangle, var$10, textR);
	return $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, label->getIconTextGap());
}

void BasicLabelUI::paintEnabledText($JLabel* l, $Graphics* g, $String* s, int32_t textX, int32_t textY) {
	int32_t mnemIndex = $nc(l)->getDisplayedMnemonicIndex();
	$nc(g)->setColor($(l->getForeground()));
	$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemIndex, textX, textY);
}

void BasicLabelUI::paintDisabledText($JLabel* l, $Graphics* g, $String* s, int32_t textX, int32_t textY) {
	$useLocalCurrentObjectStackCache();
	int32_t accChar = $nc(l)->getDisplayedMnemonicIndex();
	$var($Color, background, l->getBackground());
	$nc(g)->setColor($($nc(background)->brighter()));
	$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, accChar, textX + 1, textY + 1);
	g->setColor($($nc(background)->darker()));
	$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, accChar, textX, textY);
}

void BasicLabelUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $cast($JLabel, c));
	$var($String, text, $nc(label)->getText());
	$var($Icon, icon, (label->isEnabled()) ? label->getIcon() : label->getDisabledIcon());
	if ((icon == nullptr) && (text == nullptr)) {
		return;
	}
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(label), g));
	$var($JLabel, var$0, label);
	$var($FontMetrics, var$1, fm);
	int32_t var$2 = $nc(c)->getWidth();
	$var($String, clippedText, layout(var$0, var$1, var$2, c->getHeight()));
	if (icon != nullptr) {
		icon->paintIcon(c, g, $nc(this->paintIconR)->x, $nc(this->paintIconR)->y);
	}
	if (text != nullptr) {
		$init($BasicHTML);
		$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, this->paintTextR);
		} else {
			int32_t textX = $nc(this->paintTextR)->x;
			int32_t textY = $nc(this->paintTextR)->y + $nc(fm)->getAscent();
			if (label->isEnabled()) {
				paintEnabledText(label, g, clippedText, textX, textY);
			} else {
				paintDisabledText(label, g, clippedText, textX, textY);
			}
		}
	}
}

$String* BasicLabelUI::layout($JLabel* label, $FontMetrics* fm, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc(label)->getInsets(nullptr));
	$var($String, text, label->getText());
	$var($Icon, icon, (label->isEnabled()) ? label->getIcon() : label->getDisabledIcon());
	$var($Rectangle, paintViewR, $new($Rectangle));
	paintViewR->x = $nc(insets)->left;
	paintViewR->y = insets->top;
	paintViewR->width = width - (insets->left + insets->right);
	paintViewR->height = height - (insets->top + insets->bottom);
	$nc(this->paintIconR)->x = ($nc(this->paintIconR)->y = ($nc(this->paintIconR)->width = ($nc(this->paintIconR)->height = 0)));
	$nc(this->paintTextR)->x = ($nc(this->paintTextR)->y = ($nc(this->paintTextR)->width = ($nc(this->paintTextR)->height = 0)));
	return layoutCL(label, fm, text, icon, paintViewR, this->paintIconR, this->paintTextR);
}

$Dimension* BasicLabelUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $cast($JLabel, c));
	$var($String, text, $nc(label)->getText());
	$var($Icon, icon, (label->isEnabled()) ? label->getIcon() : label->getDisabledIcon());
	$var($Insets, insets, label->getInsets(nullptr));
	$var($Font, font, label->getFont());
	int32_t dx = $nc(insets)->left + insets->right;
	int32_t dy = insets->top + insets->bottom;
	if ((icon == nullptr) && ((text == nullptr) || ((text != nullptr) && (font == nullptr)))) {
		return $new($Dimension, dx, dy);
	} else if ((text == nullptr) || ((icon != nullptr) && (font == nullptr))) {
		int32_t var$0 = icon->getIconWidth() + dx;
		return $new($Dimension, var$0, icon->getIconHeight() + dy);
	} else {
		$var($FontMetrics, fm, label->getFontMetrics(font));
		$var($Rectangle, iconR, $new($Rectangle));
		$var($Rectangle, textR, $new($Rectangle));
		$var($Rectangle, viewR, $new($Rectangle));
		iconR->x = (iconR->y = (iconR->width = (iconR->height = 0)));
		textR->x = (textR->y = (textR->width = (textR->height = 0)));
		viewR->x = dx;
		viewR->y = dy;
		viewR->width = (viewR->height = $Short::MAX_VALUE);
		layoutCL(label, fm, text, icon, viewR, iconR, textR);
		int32_t x1 = $Math::min(iconR->x, textR->x);
		int32_t x2 = $Math::max(iconR->x + iconR->width, textR->x + textR->width);
		int32_t y1 = $Math::min(iconR->y, textR->y);
		int32_t y2 = $Math::max(iconR->y + iconR->height, textR->y + textR->height);
		$var($Dimension, rv, $new($Dimension, x2 - x1, y2 - y1));
		rv->width += dx;
		rv->height += dy;
		return rv;
	}
}

$Dimension* BasicLabelUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getPreferredSpan($View::X_AXIS);
		$nc(d)->width -= var$0 - v->getMinimumSpan($View::X_AXIS);
	}
	return d;
}

$Dimension* BasicLabelUI::getMaximumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getMaximumSpan($View::X_AXIS);
		$nc(d)->width += var$0 - v->getPreferredSpan($View::X_AXIS);
	}
	return d;
}

int32_t BasicLabelUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$LabelUI::getBaseline(c, width, height);
	$var($JLabel, label, $cast($JLabel, c));
	$var($String, text, $nc(label)->getText());
	bool var$0 = text == nullptr || $nc(text)->isEmpty();
	if (var$0 || label->getFont() == nullptr) {
		return -1;
	}
	$var($FontMetrics, fm, label->getFontMetrics($(label->getFont())));
	layout(label, fm, width, height);
	return $BasicHTML::getBaseline(label, $nc(this->paintTextR)->y, $nc(fm)->getAscent(), $nc(this->paintTextR)->width, $nc(this->paintTextR)->height);
}

$Component$BaselineResizeBehavior* BasicLabelUI::getBaselineResizeBehavior($JComponent* c) {
	$LabelUI::getBaselineResizeBehavior(c);
	$init($BasicHTML);
	if ($nc(c)->getClientProperty($BasicHTML::propertyKey) != nullptr) {
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::OTHER;
	}
	switch ($nc(($cast($JLabel, c)))->getVerticalAlignment()) {
	case $JLabel::TOP:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
		}
	case $JLabel::BOTTOM:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
		}
	case $JLabel::CENTER:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CENTER_OFFSET;
		}
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

void BasicLabelUI::installUI($JComponent* c) {
	installDefaults($cast($JLabel, c));
	installComponents($cast($JLabel, c));
	installListeners($cast($JLabel, c));
	installKeyboardActions($cast($JLabel, c));
}

void BasicLabelUI::uninstallUI($JComponent* c) {
	uninstallDefaults($cast($JLabel, c));
	uninstallComponents($cast($JLabel, c));
	uninstallListeners($cast($JLabel, c));
	uninstallKeyboardActions($cast($JLabel, c));
}

void BasicLabelUI::installDefaults($JLabel* c) {
	$LookAndFeel::installColorsAndFont(c, "Label.background"_s, "Label.foreground"_s, "Label.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(c, "opaque"_s, $Boolean::FALSE);
}

void BasicLabelUI::installListeners($JLabel* c) {
	$nc(c)->addPropertyChangeListener(this);
}

void BasicLabelUI::installComponents($JLabel* c) {
	$BasicHTML::updateRenderer(c, $($nc(c)->getText()));
	$nc(c)->setInheritsPopupMenu(true);
}

void BasicLabelUI::installKeyboardActions($JLabel* l) {
	$useLocalCurrentObjectStackCache();
	int32_t dka = $nc(l)->getDisplayedMnemonic();
	$var($Component, lf, l->getLabelFor());
	if ((dka != 0) && (lf != nullptr)) {
		$LazyActionMap::installLazyActionMap(l, BasicLabelUI::class$, "Label.actionMap"_s);
		$var($InputMap, inputMap, $SwingUtilities::getUIInputMap(l, $JComponent::WHEN_IN_FOCUSED_WINDOW));
		if (inputMap == nullptr) {
			$assign(inputMap, $new($ComponentInputMapUIResource, l));
			$SwingUtilities::replaceUIInputMap(l, $JComponent::WHEN_IN_FOCUSED_WINDOW, inputMap);
		}
		$nc(inputMap)->clear();
		inputMap->put($($KeyStroke::getKeyStroke(dka, $BasicLookAndFeel::getFocusAcceleratorKeyMask(), false)), "press"_s);
		inputMap->put($($KeyStroke::getKeyStroke(dka, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()), false)), "press"_s);
	} else {
		$var($InputMap, inputMap, $SwingUtilities::getUIInputMap(l, $JComponent::WHEN_IN_FOCUSED_WINDOW));
		if (inputMap != nullptr) {
			inputMap->clear();
		}
	}
}

void BasicLabelUI::uninstallDefaults($JLabel* c) {
}

void BasicLabelUI::uninstallListeners($JLabel* c) {
	$nc(c)->removePropertyChangeListener(this);
}

void BasicLabelUI::uninstallComponents($JLabel* c) {
	$BasicHTML::updateRenderer(c, ""_s);
}

void BasicLabelUI::uninstallKeyboardActions($JLabel* c) {
	$SwingUtilities::replaceUIInputMap(c, $JComponent::WHEN_FOCUSED, nullptr);
	$SwingUtilities::replaceUIInputMap(c, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIActionMap(c, nullptr);
}

$ComponentUI* BasicLabelUI::createUI($JComponent* c) {
	$init(BasicLabelUI);
	$useLocalCurrentObjectStackCache();
	if ($System::getSecurityManager() != nullptr) {
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var(BasicLabelUI, safeBasicLabelUI, $cast(BasicLabelUI, $nc(appContext)->get(BasicLabelUI::BASIC_LABEL_UI_KEY)));
		if (safeBasicLabelUI == nullptr) {
			$assign(safeBasicLabelUI, $new(BasicLabelUI));
			appContext->put(BasicLabelUI::BASIC_LABEL_UI_KEY, safeBasicLabelUI);
		}
		return safeBasicLabelUI;
	}
	return BasicLabelUI::labelUI;
}

void BasicLabelUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	if (name == "text"_s || "font"_s == name || "foreground"_s == name || $SwingUtilities2::isScaleChanged(e)) {
		$var($JLabel, lbl, $cast($JLabel, e->getSource()));
		$var($String, text, $nc(lbl)->getText());
		$BasicHTML::updateRenderer(lbl, text);
	} else if (name == "labelFor"_s || name == "displayedMnemonic"_s) {
		installKeyboardActions($cast($JLabel, $(e->getSource())));
	}
}

void clinit$BasicLabelUI($Class* class$) {
	$assignStatic(BasicLabelUI::labelUI, $new(BasicLabelUI));
	$assignStatic(BasicLabelUI::BASIC_LABEL_UI_KEY, $new($Object));
}

BasicLabelUI::BasicLabelUI() {
}

$Class* BasicLabelUI::load$($String* name, bool initialize) {
	$loadClass(BasicLabelUI, name, initialize, &_BasicLabelUI_ClassInfo_, clinit$BasicLabelUI, allocate$BasicLabelUI);
	return class$;
}

$Class* BasicLabelUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax