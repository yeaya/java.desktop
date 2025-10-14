#include <javax/swing/plaf/synth/SynthOptionPaneUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Box.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/OptionPaneUI.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef BEFORE_LINE_BEGINS
#undef CENTER
#undef ENABLED
#undef HORIZONTAL
#undef REMAINDER

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Box = ::javax::swing::Box;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JSeparator = ::javax::swing::JSeparator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $OptionPaneUI = ::javax::swing::plaf::OptionPaneUI;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthOptionPaneUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthOptionPaneUI, style)},
	{}
};

$MethodInfo _SynthOptionPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthOptionPaneUI::*)()>(&SynthOptionPaneUI::init$))},
	{"createMessageArea", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createSeparator", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthOptionPaneUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthOptionPaneUI::*)($JComponent*)>(&SynthOptionPaneUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthOptionPaneUI::*)($JComponent*,int32_t)>(&SynthOptionPaneUI::getContext))},
	{"getSizeButtonsToSameWidth", "()Z", nullptr, $PROTECTED},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthOptionPaneUI::*)($JComponent*)>(&SynthOptionPaneUI::updateStyle))},
	{}
};

$ClassInfo _SynthOptionPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthOptionPaneUI",
	"javax.swing.plaf.basic.BasicOptionPaneUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthOptionPaneUI_FieldInfo_,
	_SynthOptionPaneUI_MethodInfo_
};

$Object* allocate$SynthOptionPaneUI($Class* clazz) {
	return $of($alloc(SynthOptionPaneUI));
}

int32_t SynthOptionPaneUI::hashCode() {
	 return this->$BasicOptionPaneUI::hashCode();
}

bool SynthOptionPaneUI::equals(Object$* arg0) {
	 return this->$BasicOptionPaneUI::equals(arg0);
}

$Object* SynthOptionPaneUI::clone() {
	 return this->$BasicOptionPaneUI::clone();
}

$String* SynthOptionPaneUI::toString() {
	 return this->$BasicOptionPaneUI::toString();
}

void SynthOptionPaneUI::finalize() {
	this->$BasicOptionPaneUI::finalize();
}

void SynthOptionPaneUI::init$() {
	$BasicOptionPaneUI::init$();
}

$ComponentUI* SynthOptionPaneUI::createUI($JComponent* x) {
	$init(SynthOptionPaneUI);
	return $new(SynthOptionPaneUI);
}

void SynthOptionPaneUI::installDefaults() {
	updateStyle(this->optionPane);
}

void SynthOptionPaneUI::installListeners() {
	$BasicOptionPaneUI::installListeners();
	$nc(this->optionPane)->addPropertyChangeListener(this);
}

void SynthOptionPaneUI::updateStyle($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$set(this, minimumSize, $cast($Dimension, $nc(this->style)->get(context, "OptionPane.minimumSize"_s)));
		if (this->minimumSize == nullptr) {
			$set(this, minimumSize, $new($Dimension, 262, 90));
		}
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthOptionPaneUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->optionPane, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthOptionPaneUI::uninstallListeners() {
	$BasicOptionPaneUI::uninstallListeners();
	$nc(this->optionPane)->removePropertyChangeListener(this);
}

void SynthOptionPaneUI::installComponents() {
	$nc(this->optionPane)->add($(static_cast<$Component*>(createMessageArea())));
	$var($Container, separator, createSeparator());
	if (separator != nullptr) {
		$nc(this->optionPane)->add(static_cast<$Component*>(separator));
		$var($SynthContext, context, getContext(this->optionPane, $SynthConstants::ENABLED));
		$nc(this->optionPane)->add($($Box::createVerticalStrut($nc($($nc(context)->getStyle()))->getInt(context, "OptionPane.separatorPadding"_s, 6))));
	}
	$nc(this->optionPane)->add($(static_cast<$Component*>(createButtonArea())));
	$nc(this->optionPane)->applyComponentOrientation($($nc(this->optionPane)->getComponentOrientation()));
}

$SynthContext* SynthOptionPaneUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthOptionPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthOptionPaneUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthOptionPaneUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintOptionPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthOptionPaneUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthOptionPaneUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthOptionPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintOptionPaneBorder(context, g, x, y, w, h);
}

void SynthOptionPaneUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JOptionPane, $($nc(e)->getSource())));
	}
}

bool SynthOptionPaneUI::getSizeButtonsToSameWidth() {
	return $DefaultLookup::getBoolean(this->optionPane, this, "OptionPane.sameSizeButtons"_s, true);
}

$Container* SynthOptionPaneUI::createMessageArea() {
	$var($JPanel, top, $new($JPanel));
	top->setName("OptionPane.messageArea"_s);
	top->setLayout($$new($BorderLayout));
	$var($Container, body, $new($JPanel, static_cast<$LayoutManager*>($$new($GridBagLayout))));
	$var($Container, realBody, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	body->setName("OptionPane.body"_s);
	realBody->setName("OptionPane.realBody"_s);
	if (getIcon() != nullptr) {
		$var($JPanel, sep, $new($JPanel));
		sep->setName("OptionPane.separator"_s);
		sep->setPreferredSize($$new($Dimension, 15, 1));
		$init($BorderLayout);
		realBody->add(static_cast<$Component*>(sep), $of($BorderLayout::BEFORE_LINE_BEGINS));
	}
	$init($BorderLayout);
	realBody->add(static_cast<$Component*>(body), $of($BorderLayout::CENTER));
	$var($GridBagConstraints, cons, $new($GridBagConstraints));
	cons->gridx = (cons->gridy = 0);
	cons->gridwidth = $GridBagConstraints::REMAINDER;
	cons->gridheight = 1;
	$var($SynthContext, context, getContext(this->optionPane, $SynthConstants::ENABLED));
	cons->anchor = $nc($($nc(context)->getStyle()))->getInt(context, "OptionPane.messageAnchor"_s, $GridBagConstraints::CENTER);
	$set(cons, insets, $new($Insets, 0, 0, 3, 0));
	$var($Container, var$0, body);
	$var($GridBagConstraints, var$1, cons);
	$var($Object, var$2, getMessage());
	addMessageComponents(var$0, var$1, var$2, getMaxCharactersPerLineCount(), false);
	top->add(static_cast<$Component*>(realBody), $of($BorderLayout::CENTER));
	addIcon(top);
	return top;
}

$Container* SynthOptionPaneUI::createSeparator() {
	$var($JSeparator, separator, $new($JSeparator, $SwingConstants::HORIZONTAL));
	separator->setName("OptionPane.separator"_s);
	return separator;
}

SynthOptionPaneUI::SynthOptionPaneUI() {
}

$Class* SynthOptionPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthOptionPaneUI, name, initialize, &_SynthOptionPaneUI_ClassInfo_, allocate$SynthOptionPaneUI);
	return class$;
}

$Class* SynthOptionPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax