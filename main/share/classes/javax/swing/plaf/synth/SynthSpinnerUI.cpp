#include <javax/swing/plaf/synth/SynthSpinnerUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthSpinnerUI$EditorFocusHandler.h>
#include <javax/swing/plaf/synth/SynthSpinnerUI$SpinnerLayout.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef NORTH
#undef SOUTH

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicSpinnerUI = ::javax::swing::plaf::basic::BasicSpinnerUI;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthSpinnerUI$EditorFocusHandler = ::javax::swing::plaf::synth::SynthSpinnerUI$EditorFocusHandler;
using $SynthSpinnerUI$SpinnerLayout = ::javax::swing::plaf::synth::SynthSpinnerUI$SpinnerLayout;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSpinnerUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSpinnerUI, style)},
	{"editorFocusHandler", "Ljavax/swing/plaf/synth/SynthSpinnerUI$EditorFocusHandler;", nullptr, $PRIVATE, $field(SynthSpinnerUI, editorFocusHandler)},
	{}
};

$MethodInfo _SynthSpinnerUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthSpinnerUI::*)()>(&SynthSpinnerUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthSpinnerUI;)Ljavax/swing/JSpinner;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSpinner*(*)(SynthSpinnerUI*)>(&SynthSpinnerUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthSpinnerUI;)Ljavax/swing/JSpinner;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSpinner*(*)(SynthSpinnerUI*)>(&SynthSpinnerUI::access$100))},
	{"createEditor", "()Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createNextButton", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createPreviousButton", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthSpinnerUI::createUI))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthSpinnerUI::*)($JComponent*,int32_t)>(&SynthSpinnerUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"replaceEditor", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateEditorAlignment", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSpinnerUI::*)($JComponent*)>(&SynthSpinnerUI::updateEditorAlignment))},
	{"updateStyle", "(Ljavax/swing/JSpinner;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSpinnerUI::*)($JSpinner*)>(&SynthSpinnerUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthSpinnerUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthSpinnerUI$EditorFocusHandler", "javax.swing.plaf.synth.SynthSpinnerUI", "EditorFocusHandler", $PRIVATE},
	{"javax.swing.plaf.synth.SynthSpinnerUI$SpinnerLayout", "javax.swing.plaf.synth.SynthSpinnerUI", "SpinnerLayout", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthSpinnerUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthSpinnerUI",
	"javax.swing.plaf.basic.BasicSpinnerUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthSpinnerUI_FieldInfo_,
	_SynthSpinnerUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthSpinnerUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthSpinnerUI$EditorFocusHandler,javax.swing.plaf.synth.SynthSpinnerUI$SpinnerLayout"
};

$Object* allocate$SynthSpinnerUI($Class* clazz) {
	return $of($alloc(SynthSpinnerUI));
}

int32_t SynthSpinnerUI::hashCode() {
	 return this->$BasicSpinnerUI::hashCode();
}

bool SynthSpinnerUI::equals(Object$* arg0) {
	 return this->$BasicSpinnerUI::equals(arg0);
}

$Object* SynthSpinnerUI::clone() {
	 return this->$BasicSpinnerUI::clone();
}

$String* SynthSpinnerUI::toString() {
	 return this->$BasicSpinnerUI::toString();
}

void SynthSpinnerUI::finalize() {
	this->$BasicSpinnerUI::finalize();
}

$JSpinner* SynthSpinnerUI::access$100(SynthSpinnerUI* x0) {
	$init(SynthSpinnerUI);
	return $nc(x0)->spinner;
}

$JSpinner* SynthSpinnerUI::access$000(SynthSpinnerUI* x0) {
	$init(SynthSpinnerUI);
	return $nc(x0)->spinner;
}

void SynthSpinnerUI::init$() {
	$BasicSpinnerUI::init$();
	$set(this, editorFocusHandler, $new($SynthSpinnerUI$EditorFocusHandler, this));
}

$ComponentUI* SynthSpinnerUI::createUI($JComponent* c) {
	$init(SynthSpinnerUI);
	return $new(SynthSpinnerUI);
}

void SynthSpinnerUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$BasicSpinnerUI::installListeners();
	$nc(this->spinner)->addPropertyChangeListener(this);
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (tf != nullptr) {
			tf->addFocusListener(this->editorFocusHandler);
		}
	}
}

void SynthSpinnerUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$BasicSpinnerUI::uninstallListeners();
	$nc(this->spinner)->removePropertyChangeListener(this);
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (tf != nullptr) {
			tf->removeFocusListener(this->editorFocusHandler);
		}
	}
}

void SynthSpinnerUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($LayoutManager, layout, $nc(this->spinner)->getLayout());
	if (layout == nullptr || $instanceOf($UIResource, layout)) {
		$nc(this->spinner)->setLayout($(createLayout()));
	}
	updateStyle(this->spinner);
}

void SynthSpinnerUI::updateStyle($JSpinner* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		if (oldStyle != nullptr) {
			installKeyboardActions();
		}
	}
}

void SynthSpinnerUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($UIResource, $($nc(this->spinner)->getLayout()))) {
		$nc(this->spinner)->setLayout(nullptr);
	}
	$var($SynthContext, context, getContext(this->spinner, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$LayoutManager* SynthSpinnerUI::createLayout() {
	return $new($SynthSpinnerUI$SpinnerLayout);
}

$Component* SynthSpinnerUI::createPreviousButton() {
	$var($JButton, b, $new($SynthArrowButton, $SwingConstants::SOUTH));
	b->setName("Spinner.previousButton"_s);
	installPreviousButtonListeners(b);
	return b;
}

$Component* SynthSpinnerUI::createNextButton() {
	$var($JButton, b, $new($SynthArrowButton, $SwingConstants::NORTH));
	b->setName("Spinner.nextButton"_s);
	installNextButtonListeners(b);
	return b;
}

$JComponent* SynthSpinnerUI::createEditor() {
	$var($JComponent, editor, $nc(this->spinner)->getEditor());
	$nc(editor)->setName("Spinner.editor"_s);
	updateEditorAlignment(editor);
	return editor;
}

void SynthSpinnerUI::replaceEditor($JComponent* oldEditor, $JComponent* newEditor) {
	$useLocalCurrentObjectStackCache();
	$nc(this->spinner)->remove(static_cast<$Component*>(oldEditor));
	$nc(this->spinner)->add(static_cast<$Component*>(newEditor), $of("Editor"_s));
	if ($instanceOf($JSpinner$DefaultEditor, oldEditor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, oldEditor)))->getTextField());
		if (tf != nullptr) {
			tf->removeFocusListener(this->editorFocusHandler);
		}
	}
	if ($instanceOf($JSpinner$DefaultEditor, newEditor)) {
		$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, newEditor)))->getTextField());
		if (tf != nullptr) {
			tf->addFocusListener(this->editorFocusHandler);
		}
	}
}

void SynthSpinnerUI::updateEditorAlignment($JComponent* editor) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$var($SynthContext, context, getContext(this->spinner));
		$var($Integer, alignment, $cast($Integer, $nc($($nc(context)->getStyle()))->get(context, "Spinner.editorAlignment"_s)));
		$var($JTextField, text, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
		if (alignment != nullptr) {
			$nc(text)->setHorizontalAlignment(alignment->intValue());
		}
		$nc(text)->putClientProperty("JComponent.sizeVariant"_s, $($nc(this->spinner)->getClientProperty("JComponent.sizeVariant"_s)));
	}
}

$SynthContext* SynthSpinnerUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthSpinnerUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthSpinnerUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintSpinnerBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthSpinnerUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthSpinnerUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthSpinnerUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintSpinnerBorder(context, g, x, y, w, h);
}

void SynthSpinnerUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JSpinner, spinner, ($cast($JSpinner, $nc(e)->getSource())));
	$var($SpinnerUI, spinnerUI, $cast($SpinnerUI, $nc(spinner)->getUI()));
	if ($instanceOf(SynthSpinnerUI, spinnerUI)) {
		$var(SynthSpinnerUI, ui, $cast(SynthSpinnerUI, spinnerUI));
		if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
			$nc(ui)->updateStyle(spinner);
		}
	}
}

SynthSpinnerUI::SynthSpinnerUI() {
}

$Class* SynthSpinnerUI::load$($String* name, bool initialize) {
	$loadClass(SynthSpinnerUI, name, initialize, &_SynthSpinnerUI_ClassInfo_, allocate$SynthSpinnerUI);
	return class$;
}

$Class* SynthSpinnerUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax