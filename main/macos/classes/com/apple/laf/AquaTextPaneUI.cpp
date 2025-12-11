#include <com/apple/laf/AquaTextPaneUI.h>

#include <com/apple/laf/AquaCaret.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <jcpp.h>

using $AquaCaret = ::com::apple::laf::AquaCaret;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaHighlighter = ::com::apple::laf::AquaHighlighter;
using $AquaKeyBindings = ::com::apple::laf::AquaKeyBindings;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $BasicTextPaneUI = ::javax::swing::plaf::basic::BasicTextPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextPaneUI_FieldInfo_[] = {
	{"handler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, 0, $field(AquaTextPaneUI, handler)},
	{"oldDragState", "Z", nullptr, 0, $field(AquaTextPaneUI, oldDragState)},
	{}
};

$MethodInfo _AquaTextPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextPaneUI::*)()>(&AquaTextPaneUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTextPaneUI::createUI))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaTextPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextPaneUI",
	"javax.swing.plaf.basic.BasicTextPaneUI",
	nullptr,
	_AquaTextPaneUI_FieldInfo_,
	_AquaTextPaneUI_MethodInfo_
};

$Object* allocate$AquaTextPaneUI($Class* clazz) {
	return $of($alloc(AquaTextPaneUI));
}

$ComponentUI* AquaTextPaneUI::createUI($JComponent* c) {
	$init(AquaTextPaneUI);
	return $new(AquaTextPaneUI);
}

void AquaTextPaneUI::init$() {
	$BasicTextPaneUI::init$();
	this->oldDragState = false;
}

void AquaTextPaneUI::installListeners() {
	$BasicTextPaneUI::installListeners();
	$var($JComponent, c, getComponent());
	$set(this, handler, $new($AquaFocusHandler));
	$nc(c)->addFocusListener(this->handler);
	c->addPropertyChangeListener(this->handler);
	$AquaUtilControlSize::addSizePropertyListener(c);
}

void AquaTextPaneUI::uninstallListeners() {
	$var($JComponent, c, getComponent());
	$AquaUtilControlSize::removeSizePropertyListener(c);
	$nc(c)->removeFocusListener(this->handler);
	c->removePropertyChangeListener(this->handler);
	$set(this, handler, nullptr);
	$BasicTextPaneUI::uninstallListeners();
}

void AquaTextPaneUI::installDefaults() {
	$var($JTextComponent, c, getComponent());
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $nc(c)->getDragEnabled();
		c->setDragEnabled(true);
	}
	$BasicTextPaneUI::installDefaults();
}

void AquaTextPaneUI::uninstallDefaults() {
	if (!$GraphicsEnvironment::isHeadless()) {
		$nc($(getComponent()))->setDragEnabled(this->oldDragState);
	}
	$BasicTextPaneUI::uninstallDefaults();
}

void AquaTextPaneUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$BasicTextPaneUI::installKeyboardActions();
	$var($AquaKeyBindings, bindings, $AquaKeyBindings::instance());
	$nc(bindings)->setDefaultAction($(getKeymapName()));
	$var($JTextComponent, c, getComponent());
	bindings->installAquaUpDownActions(c);
}

$Caret* AquaTextPaneUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaTextPaneUI::createHighlighter() {
	return $new($AquaHighlighter);
}

AquaTextPaneUI::AquaTextPaneUI() {
}

$Class* AquaTextPaneUI::load$($String* name, bool initialize) {
	$loadClass(AquaTextPaneUI, name, initialize, &_AquaTextPaneUI_ClassInfo_, allocate$AquaTextPaneUI);
	return class$;
}

$Class* AquaTextPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com