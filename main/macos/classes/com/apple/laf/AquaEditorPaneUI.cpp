#include <com/apple/laf/AquaEditorPaneUI.h>

#include <com/apple/laf/AquaCaret.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
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
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
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

$FieldInfo _AquaEditorPaneUI_FieldInfo_[] = {
	{"oldDragState", "Z", nullptr, 0, $field(AquaEditorPaneUI, oldDragState)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, 0, $field(AquaEditorPaneUI, focusListener)},
	{}
};

$MethodInfo _AquaEditorPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaEditorPaneUI::*)()>(&AquaEditorPaneUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaEditorPaneUI::createUI))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaEditorPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaEditorPaneUI",
	"javax.swing.plaf.basic.BasicEditorPaneUI",
	nullptr,
	_AquaEditorPaneUI_FieldInfo_,
	_AquaEditorPaneUI_MethodInfo_
};

$Object* allocate$AquaEditorPaneUI($Class* clazz) {
	return $of($alloc(AquaEditorPaneUI));
}

void AquaEditorPaneUI::init$() {
	$BasicEditorPaneUI::init$();
	this->oldDragState = false;
}

$ComponentUI* AquaEditorPaneUI::createUI($JComponent* c) {
	$init(AquaEditorPaneUI);
	return $new(AquaEditorPaneUI);
}

void AquaEditorPaneUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$BasicEditorPaneUI::installDefaults();
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $nc($(getComponent()))->getDragEnabled();
		$nc($(getComponent()))->setDragEnabled(true);
	}
}

void AquaEditorPaneUI::uninstallDefaults() {
	if (!$GraphicsEnvironment::isHeadless()) {
		$nc($(getComponent()))->setDragEnabled(this->oldDragState);
	}
	$BasicEditorPaneUI::uninstallDefaults();
}

void AquaEditorPaneUI::installListeners() {
	$BasicEditorPaneUI::installListeners();
	$set(this, focusListener, createFocusListener());
	$nc($(getComponent()))->addFocusListener(this->focusListener);
}

void AquaEditorPaneUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$BasicEditorPaneUI::installKeyboardActions();
	$var($AquaKeyBindings, bindings, $AquaKeyBindings::instance());
	$nc(bindings)->setDefaultAction($(getKeymapName()));
	$var($JTextComponent, c, getComponent());
	bindings->installAquaUpDownActions(c);
}

void AquaEditorPaneUI::uninstallListeners() {
	$nc($(getComponent()))->removeFocusListener(this->focusListener);
	$BasicEditorPaneUI::uninstallListeners();
}

$FocusListener* AquaEditorPaneUI::createFocusListener() {
	return $new($AquaFocusHandler);
}

$Caret* AquaEditorPaneUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaEditorPaneUI::createHighlighter() {
	return $new($AquaHighlighter);
}

AquaEditorPaneUI::AquaEditorPaneUI() {
}

$Class* AquaEditorPaneUI::load$($String* name, bool initialize) {
	$loadClass(AquaEditorPaneUI, name, initialize, &_AquaEditorPaneUI_ClassInfo_, allocate$AquaEditorPaneUI);
	return class$;
}

$Class* AquaEditorPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com