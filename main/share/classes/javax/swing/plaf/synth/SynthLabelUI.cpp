#include <javax/swing/plaf/synth/SynthLabelUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef ENABLED
#undef TEXT_FOREGROUND

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $EventObject = ::java::util::EventObject;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthLabelUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthLabelUI, style)},
	{}
};

$MethodInfo _SynthLabelUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthLabelUI::*)()>(&SynthLabelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthLabelUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthLabelUI::*)($JComponent*)>(&SynthLabelUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthLabelUI::*)($JComponent*,int32_t)>(&SynthLabelUI::getContext))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JLabel;)V", nullptr, 0},
	{}
};

$ClassInfo _SynthLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthLabelUI",
	"javax.swing.plaf.basic.BasicLabelUI",
	"javax.swing.plaf.synth.SynthUI",
	_SynthLabelUI_FieldInfo_,
	_SynthLabelUI_MethodInfo_
};

$Object* allocate$SynthLabelUI($Class* clazz) {
	return $of($alloc(SynthLabelUI));
}

int32_t SynthLabelUI::hashCode() {
	 return this->$BasicLabelUI::hashCode();
}

bool SynthLabelUI::equals(Object$* arg0) {
	 return this->$BasicLabelUI::equals(arg0);
}

$Object* SynthLabelUI::clone() {
	 return this->$BasicLabelUI::clone();
}

$String* SynthLabelUI::toString() {
	 return this->$BasicLabelUI::toString();
}

void SynthLabelUI::finalize() {
	this->$BasicLabelUI::finalize();
}

void SynthLabelUI::init$() {
	$BasicLabelUI::init$();
}

$ComponentUI* SynthLabelUI::createUI($JComponent* c) {
	$init(SynthLabelUI);
	return $new(SynthLabelUI);
}

void SynthLabelUI::installDefaults($JLabel* c) {
	updateStyle(c);
}

void SynthLabelUI::updateStyle($JLabel* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
}

void SynthLabelUI::uninstallDefaults($JLabel* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthLabelUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthLabelUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthLabelUI::getComponentState($JComponent* c) {
	int32_t state = $SynthLookAndFeel::getComponentState(c);
	if ($equals($SynthLookAndFeel::getSelectedUI(), this) && state == $SynthConstants::ENABLED) {
		state = $SynthLookAndFeel::getSelectedUIState() | $SynthConstants::ENABLED;
	}
	return state;
}

int32_t SynthLabelUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	$var($JLabel, label, $cast($JLabel, c));
	$var($String, text, $nc(label)->getText());
	if (text == nullptr || $nc(text)->isEmpty()) {
		return -1;
	}
	$var($Insets, i, label->getInsets());
	$var($Rectangle, viewRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Rectangle, iconRect, $new($Rectangle));
	viewRect->x = $nc(i)->left;
	viewRect->y = i->top;
	viewRect->width = width - (i->right + viewRect->x);
	viewRect->height = height - (i->bottom + viewRect->y);
	$var($SynthContext, context, getContext(label));
	$var($FontMetrics, fm, $nc($($nc(context)->getComponent()))->getFontMetrics($($nc($(context->getStyle()))->getFont(context))));
	$var($SynthContext, var$0, context);
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, label->getText());
	$var($Icon, var$3, label->getIcon());
	int32_t var$4 = label->getHorizontalAlignment();
	int32_t var$5 = label->getVerticalAlignment();
	int32_t var$6 = label->getHorizontalTextPosition();
	int32_t var$7 = label->getVerticalTextPosition();
	$var($Rectangle, var$8, viewRect);
	$var($Rectangle, var$9, iconRect);
	$var($Rectangle, var$10, textRect);
	$nc($($nc($(context->getStyle()))->getGraphicsUtils(context)))->layoutText(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, label->getIconTextGap());
	$init($BasicHTML);
	$var($View, view, $cast($View, label->getClientProperty($BasicHTML::propertyKey)));
	int32_t baseline = 0;
	if (view != nullptr) {
		baseline = $BasicHTML::getHTMLBaseline(view, textRect->width, textRect->height);
		if (baseline >= 0) {
			baseline += textRect->y;
		}
	} else {
		baseline = textRect->y + $nc(fm)->getAscent();
	}
	return baseline;
}

void SynthLabelUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintLabelBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthLabelUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthLabelUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $cast($JLabel, $nc(context)->getComponent()));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? $nc(label)->getIcon() : label->getDisabledIcon());
	$init($ColorType);
	$nc(g)->setColor($($nc($(context->getStyle()))->getColor(context, $ColorType::TEXT_FOREGROUND)));
	g->setFont($($nc(this->style)->getFont(context)));
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	$var($String, var$2, label->getText());
	$var($Icon, var$3, icon);
	int32_t var$4 = label->getHorizontalAlignment();
	int32_t var$5 = label->getVerticalAlignment();
	int32_t var$6 = label->getHorizontalTextPosition();
	int32_t var$7 = label->getVerticalTextPosition();
	int32_t var$8 = label->getIconTextGap();
	$nc($($nc($(context->getStyle()))->getGraphicsUtils(context)))->paintText(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, label->getDisplayedMnemonicIndex(), 0);
}

void SynthLabelUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintLabelBorder(context, g, x, y, w, h);
}

$Dimension* SynthLabelUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $cast($JLabel, c));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? $nc(label)->getIcon() : label->getDisabledIcon());
	$var($SynthContext, context, getContext(c));
	$var($SynthContext, var$0, context);
	$var($Font, var$1, $nc($(context->getStyle()))->getFont(context));
	$var($String, var$2, label->getText());
	$var($Icon, var$3, icon);
	int32_t var$4 = label->getHorizontalAlignment();
	int32_t var$5 = label->getVerticalAlignment();
	int32_t var$6 = label->getHorizontalTextPosition();
	int32_t var$7 = label->getVerticalTextPosition();
	int32_t var$8 = label->getIconTextGap();
	$var($Dimension, size, $nc($($nc($($nc(context)->getStyle()))->getGraphicsUtils(context)))->getPreferredSize(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, label->getDisplayedMnemonicIndex()));
	return size;
}

$Dimension* SynthLabelUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $cast($JLabel, c));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? $nc(label)->getIcon() : label->getDisabledIcon());
	$var($SynthContext, context, getContext(c));
	$var($SynthContext, var$0, context);
	$var($Font, var$1, $nc($(context->getStyle()))->getFont(context));
	$var($String, var$2, label->getText());
	$var($Icon, var$3, icon);
	int32_t var$4 = label->getHorizontalAlignment();
	int32_t var$5 = label->getVerticalAlignment();
	int32_t var$6 = label->getHorizontalTextPosition();
	int32_t var$7 = label->getVerticalTextPosition();
	int32_t var$8 = label->getIconTextGap();
	$var($Dimension, size, $nc($($nc($($nc(context)->getStyle()))->getGraphicsUtils(context)))->getMinimumSize(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, label->getDisplayedMnemonicIndex()));
	return size;
}

$Dimension* SynthLabelUI::getMaximumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $cast($JLabel, c));
	$var($Icon, icon, ($nc(label)->isEnabled()) ? $nc(label)->getIcon() : label->getDisabledIcon());
	$var($SynthContext, context, getContext(c));
	$var($SynthContext, var$0, context);
	$var($Font, var$1, $nc($(context->getStyle()))->getFont(context));
	$var($String, var$2, label->getText());
	$var($Icon, var$3, icon);
	int32_t var$4 = label->getHorizontalAlignment();
	int32_t var$5 = label->getVerticalAlignment();
	int32_t var$6 = label->getHorizontalTextPosition();
	int32_t var$7 = label->getVerticalTextPosition();
	int32_t var$8 = label->getIconTextGap();
	$var($Dimension, size, $nc($($nc($($nc(context)->getStyle()))->getGraphicsUtils(context)))->getMaximumSize(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, label->getDisplayedMnemonicIndex()));
	return size;
}

void SynthLabelUI::propertyChange($PropertyChangeEvent* e) {
	$BasicLabelUI::propertyChange(e);
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JLabel, $($nc(e)->getSource())));
	}
}

SynthLabelUI::SynthLabelUI() {
}

$Class* SynthLabelUI::load$($String* name, bool initialize) {
	$loadClass(SynthLabelUI, name, initialize, &_SynthLabelUI_ClassInfo_, allocate$SynthLabelUI);
	return class$;
}

$Class* SynthLabelUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax