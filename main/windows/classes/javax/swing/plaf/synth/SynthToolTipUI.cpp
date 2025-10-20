#include <javax/swing/plaf/synth/SynthToolTipUI.h>

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
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolTipUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicToolTipUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DISABLED
#undef ENABLED
#undef TEXT_FOREGROUND
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
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolTipUI = ::javax::swing::plaf::ToolTipUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicToolTipUI = ::javax::swing::plaf::basic::BasicToolTipUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthToolTipUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthToolTipUI, style)},
	{}
};

$MethodInfo _SynthToolTipUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthToolTipUI::*)()>(&SynthToolTipUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthToolTipUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthToolTipUI::*)($JComponent*)>(&SynthToolTipUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthToolTipUI::*)($JComponent*,int32_t)>(&SynthToolTipUI::getContext))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthToolTipUI::*)($JComponent*)>(&SynthToolTipUI::updateStyle))},
	{}
};

$ClassInfo _SynthToolTipUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthToolTipUI",
	"javax.swing.plaf.basic.BasicToolTipUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthToolTipUI_FieldInfo_,
	_SynthToolTipUI_MethodInfo_
};

$Object* allocate$SynthToolTipUI($Class* clazz) {
	return $of($alloc(SynthToolTipUI));
}

int32_t SynthToolTipUI::hashCode() {
	 return this->$BasicToolTipUI::hashCode();
}

bool SynthToolTipUI::equals(Object$* arg0) {
	 return this->$BasicToolTipUI::equals(arg0);
}

$Object* SynthToolTipUI::clone() {
	 return this->$BasicToolTipUI::clone();
}

$String* SynthToolTipUI::toString() {
	 return this->$BasicToolTipUI::toString();
}

void SynthToolTipUI::finalize() {
	this->$BasicToolTipUI::finalize();
}

void SynthToolTipUI::init$() {
	$BasicToolTipUI::init$();
}

$ComponentUI* SynthToolTipUI::createUI($JComponent* c) {
	$init(SynthToolTipUI);
	return $new(SynthToolTipUI);
}

void SynthToolTipUI::installDefaults($JComponent* c) {
	updateStyle(c);
}

void SynthToolTipUI::updateStyle($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
}

void SynthToolTipUI::uninstallDefaults($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthToolTipUI::installListeners($JComponent* c) {
	$nc(c)->addPropertyChangeListener(this);
}

void SynthToolTipUI::uninstallListeners($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this);
}

$SynthContext* SynthToolTipUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthToolTipUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthToolTipUI::getComponentState($JComponent* c) {
	$var($JComponent, comp, $nc(($cast($JToolTip, c)))->getComponent());
	if (comp != nullptr && !comp->isEnabled()) {
		return $SynthConstants::DISABLED;
	}
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthToolTipUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintToolTipBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthToolTipUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintToolTipBorder(context, g, x, y, w, h);
}

void SynthToolTipUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthToolTipUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JToolTip, tip, $cast($JToolTip, $nc(context)->getComponent()));
	$var($Insets, insets, $nc(tip)->getInsets());
	$init($BasicHTML);
	$var($View, v, $cast($View, tip->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		int32_t var$0 = $nc(insets)->left;
		int32_t var$1 = insets->top;
		int32_t var$2 = tip->getWidth() - (insets->left + insets->right);
		$var($Rectangle, paintTextR, $new($Rectangle, var$0, var$1, var$2, tip->getHeight() - (insets->top + insets->bottom)));
		v->paint(g, paintTextR);
	} else {
		$init($ColorType);
		$nc(g)->setColor($($nc($(context->getStyle()))->getColor(context, $ColorType::TEXT_FOREGROUND)));
		g->setFont($($nc(this->style)->getFont(context)));
		$nc($($nc($(context->getStyle()))->getGraphicsUtils(context)))->paintText(context, g, $(tip->getTipText()), $nc(insets)->left, insets->top, -1);
	}
}

$Dimension* SynthToolTipUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$var($Insets, insets, $nc(c)->getInsets());
	$var($Dimension, prefSize, $new($Dimension, $nc(insets)->left + insets->right, insets->top + insets->bottom));
	$var($String, text, $nc(($cast($JToolTip, c)))->getTipText());
	if (text != nullptr) {
		$var($View, v, (c != nullptr) ? $cast($View, c->getClientProperty("html"_s)) : ($View*)nullptr);
		if (v != nullptr) {
			prefSize->width += $cast(int32_t, v->getPreferredSpan($View::X_AXIS));
			prefSize->height += $cast(int32_t, v->getPreferredSpan($View::Y_AXIS));
		} else {
			$var($Font, font, $nc($($nc(context)->getStyle()))->getFont(context));
			$var($FontMetrics, fm, c->getFontMetrics(font));
			prefSize->width += $nc($($nc($(context->getStyle()))->getGraphicsUtils(context)))->computeStringWidth(context, font, fm, text);
			prefSize->height += $nc(fm)->getHeight();
		}
	}
	return prefSize;
}

void SynthToolTipUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JToolTip, $($nc(e)->getSource())));
	}
	$var($String, name, $nc(e)->getPropertyName());
	bool var$2 = $nc(name)->equals("tiptext"_s);
	bool var$1 = var$2 || $SwingUtilities2::isScaleChanged(e);
	bool var$0 = var$1 || "foreground"_s->equals(name);
	if (var$0 || "font"_s->equals(name)) {
		$var($JToolTip, tip, $cast($JToolTip, e->getSource()));
		$var($String, text, $nc(tip)->getTipText());
		$BasicHTML::updateRenderer(tip, text);
	}
}

SynthToolTipUI::SynthToolTipUI() {
}

$Class* SynthToolTipUI::load$($String* name, bool initialize) {
	$loadClass(SynthToolTipUI, name, initialize, &_SynthToolTipUI_ClassInfo_, allocate$SynthToolTipUI);
	return class$;
}

$Class* SynthToolTipUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax