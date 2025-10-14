#include <javax/swing/plaf/basic/BasicToolTipUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolTipUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicToolTipUI$PropertyChangeHandler.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef TRUE
#undef X_AXIS
#undef Y_AXIS

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
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolTipUI = ::javax::swing::plaf::ToolTipUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicToolTipUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicToolTipUI$PropertyChangeHandler;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolTipUI_FieldInfo_[] = {
	{"sharedInstance", "Ljavax/swing/plaf/basic/BasicToolTipUI;", nullptr, $STATIC, $staticField(BasicToolTipUI, sharedInstance)},
	{"sharedPropertyChangedListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC, $staticField(BasicToolTipUI, sharedPropertyChangedListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicToolTipUI, propertyChangeListener)},
	{}
};

$MethodInfo _BasicToolTipUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicToolTipUI::*)()>(&BasicToolTipUI::init$))},
	{"componentChanged", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicToolTipUI::*)($JComponent*)>(&BasicToolTipUI::componentChanged))},
	{"createPropertyChangeListener", "(Ljavax/swing/JComponent;)Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $method(static_cast<$PropertyChangeListener*(BasicToolTipUI::*)($JComponent*)>(&BasicToolTipUI::createPropertyChangeListener))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicToolTipUI::createUI))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicToolTipUI::*)($JComponent*)>(&BasicToolTipUI::installComponents))},
	{"installDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicToolTipUI::*)($JComponent*)>(&BasicToolTipUI::uninstallComponents))},
	{"uninstallDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolTipUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicToolTipUI", "PropertyChangeHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicToolTipUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolTipUI",
	"javax.swing.plaf.ToolTipUI",
	nullptr,
	_BasicToolTipUI_FieldInfo_,
	_BasicToolTipUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolTipUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler"
};

$Object* allocate$BasicToolTipUI($Class* clazz) {
	return $of($alloc(BasicToolTipUI));
}

BasicToolTipUI* BasicToolTipUI::sharedInstance = nullptr;

$PropertyChangeListener* BasicToolTipUI::sharedPropertyChangedListener = nullptr;

$ComponentUI* BasicToolTipUI::createUI($JComponent* c) {
	$init(BasicToolTipUI);
	return BasicToolTipUI::sharedInstance;
}

void BasicToolTipUI::init$() {
	$ToolTipUI::init$();
}

void BasicToolTipUI::installUI($JComponent* c) {
	installDefaults(c);
	installComponents(c);
	installListeners(c);
}

void BasicToolTipUI::uninstallUI($JComponent* c) {
	uninstallDefaults(c);
	uninstallComponents(c);
	uninstallListeners(c);
}

void BasicToolTipUI::installDefaults($JComponent* c) {
	$LookAndFeel::installColorsAndFont(c, "ToolTip.background"_s, "ToolTip.foreground"_s, "ToolTip.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(c, "opaque"_s, $Boolean::TRUE);
	componentChanged(c);
}

void BasicToolTipUI::uninstallDefaults($JComponent* c) {
	$LookAndFeel::uninstallBorder(c);
}

void BasicToolTipUI::installComponents($JComponent* c) {
	$BasicHTML::updateRenderer(c, $($nc(($cast($JToolTip, c)))->getTipText()));
}

void BasicToolTipUI::uninstallComponents($JComponent* c) {
	$BasicHTML::updateRenderer(c, ""_s);
}

void BasicToolTipUI::installListeners($JComponent* c) {
	$set(this, propertyChangeListener, createPropertyChangeListener(c));
	$nc(c)->addPropertyChangeListener(this->propertyChangeListener);
}

void BasicToolTipUI::uninstallListeners($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this->propertyChangeListener);
	$set(this, propertyChangeListener, nullptr);
}

$PropertyChangeListener* BasicToolTipUI::createPropertyChangeListener($JComponent* c) {
	if (BasicToolTipUI::sharedPropertyChangedListener == nullptr) {
		$assignStatic(BasicToolTipUI::sharedPropertyChangedListener, $new($BasicToolTipUI$PropertyChangeHandler));
	}
	return BasicToolTipUI::sharedPropertyChangedListener;
}

void BasicToolTipUI::paint($Graphics* g, $JComponent* c) {
	$var($Font, font, $nc(c)->getFont());
	$var($FontMetrics, metrics, $SwingUtilities2::getFontMetrics(c, g, font));
	$var($Dimension, size, c->getSize());
	$nc(g)->setColor($(c->getForeground()));
	$var($String, tipText, $nc(($cast($JToolTip, c)))->getTipText());
	if (tipText == nullptr) {
		$assign(tipText, ""_s);
	}
	$var($Insets, insets, c->getInsets());
	$var($Rectangle, paintTextR, $new($Rectangle, $nc(insets)->left + 3, insets->top, $nc(size)->width - (insets->left + insets->right) - 6, size->height - (insets->top + insets->bottom)));
	$init($BasicHTML);
	$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		v->paint(g, paintTextR);
	} else {
		g->setFont(font);
		$SwingUtilities2::drawString(c, g, tipText, paintTextR->x, paintTextR->y + $nc(metrics)->getAscent());
	}
}

$Dimension* BasicToolTipUI::getPreferredSize($JComponent* c) {
	$var($Font, font, $nc(c)->getFont());
	$var($FontMetrics, fm, c->getFontMetrics(font));
	$var($Insets, insets, c->getInsets());
	$var($Dimension, prefSize, $new($Dimension, $nc(insets)->left + insets->right, insets->top + insets->bottom));
	$var($String, text, $nc(($cast($JToolTip, c)))->getTipText());
	if (text == nullptr) {
		$assign(text, ""_s);
	} else {
		$var($View, v, (c != nullptr) ? $cast($View, c->getClientProperty("html"_s)) : ($View*)nullptr);
		if (v != nullptr) {
			prefSize->width += $cast(int32_t, v->getPreferredSpan($View::X_AXIS)) + 6;
			prefSize->height += $cast(int32_t, v->getPreferredSpan($View::Y_AXIS));
		} else {
			prefSize->width += $SwingUtilities2::stringWidth(c, fm, text) + 6;
			prefSize->height += $nc(fm)->getHeight();
		}
	}
	return prefSize;
}

$Dimension* BasicToolTipUI::getMinimumSize($JComponent* c) {
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getPreferredSpan($View::X_AXIS);
		$nc(d)->width -= var$0 - v->getMinimumSpan($View::X_AXIS);
	}
	return d;
}

$Dimension* BasicToolTipUI::getMaximumSize($JComponent* c) {
	$var($Dimension, d, getPreferredSize(c));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getMaximumSpan($View::X_AXIS);
		$nc(d)->width += var$0 - v->getPreferredSpan($View::X_AXIS);
	}
	return d;
}

void BasicToolTipUI::componentChanged($JComponent* c) {
	$var($JComponent, comp, $nc(($cast($JToolTip, c)))->getComponent());
	if (comp != nullptr && !(comp->isEnabled())) {
		if ($UIManager::getBorder("ToolTip.borderInactive"_s) != nullptr) {
			$LookAndFeel::installBorder(c, "ToolTip.borderInactive"_s);
		} else {
			$LookAndFeel::installBorder(c, "ToolTip.border"_s);
		}
		if ($UIManager::getColor("ToolTip.backgroundInactive"_s) != nullptr) {
			$LookAndFeel::installColors(c, "ToolTip.backgroundInactive"_s, "ToolTip.foregroundInactive"_s);
		} else {
			$LookAndFeel::installColors(c, "ToolTip.background"_s, "ToolTip.foreground"_s);
		}
	} else {
		$LookAndFeel::installBorder(c, "ToolTip.border"_s);
		$LookAndFeel::installColors(c, "ToolTip.background"_s, "ToolTip.foreground"_s);
	}
}

void clinit$BasicToolTipUI($Class* class$) {
	$assignStatic(BasicToolTipUI::sharedInstance, $new(BasicToolTipUI));
}

BasicToolTipUI::BasicToolTipUI() {
}

$Class* BasicToolTipUI::load$($String* name, bool initialize) {
	$loadClass(BasicToolTipUI, name, initialize, &_BasicToolTipUI_ClassInfo_, clinit$BasicToolTipUI, allocate$BasicToolTipUI);
	return class$;
}

$Class* BasicToolTipUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax