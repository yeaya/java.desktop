#include <com/apple/laf/AquaTextAreaUI.h>

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
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
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
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
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

$FieldInfo _AquaTextAreaUI_FieldInfo_[] = {
	{"handler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, 0, $field(AquaTextAreaUI, handler)},
	{"oldDragState", "Z", nullptr, 0, $field(AquaTextAreaUI, oldDragState)},
	{}
};

$MethodInfo _AquaTextAreaUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextAreaUI::*)()>(&AquaTextAreaUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTextAreaUI::createUI))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaTextAreaUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextAreaUI",
	"javax.swing.plaf.basic.BasicTextAreaUI",
	nullptr,
	_AquaTextAreaUI_FieldInfo_,
	_AquaTextAreaUI_MethodInfo_
};

$Object* allocate$AquaTextAreaUI($Class* clazz) {
	return $of($alloc(AquaTextAreaUI));
}

$ComponentUI* AquaTextAreaUI::createUI($JComponent* c) {
	$init(AquaTextAreaUI);
	return $new(AquaTextAreaUI);
}

void AquaTextAreaUI::init$() {
	$BasicTextAreaUI::init$();
	this->oldDragState = false;
}

void AquaTextAreaUI::installListeners() {
	$BasicTextAreaUI::installListeners();
	$var($JTextComponent, c, getComponent());
	$set(this, handler, $new($AquaFocusHandler));
	$nc(c)->addFocusListener(this->handler);
	c->addPropertyChangeListener(this->handler);
	$AquaUtilControlSize::addSizePropertyListener(c);
}

void AquaTextAreaUI::uninstallListeners() {
	$var($JTextComponent, c, getComponent());
	$AquaUtilControlSize::removeSizePropertyListener(c);
	$nc(c)->removeFocusListener(this->handler);
	c->removePropertyChangeListener(this->handler);
	$set(this, handler, nullptr);
	$BasicTextAreaUI::uninstallListeners();
}

void AquaTextAreaUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $nc($(getComponent()))->getDragEnabled();
		$nc($(getComponent()))->setDragEnabled(true);
	}
	$BasicTextAreaUI::installDefaults();
}

void AquaTextAreaUI::uninstallDefaults() {
	if (!$GraphicsEnvironment::isHeadless()) {
		$nc($(getComponent()))->setDragEnabled(this->oldDragState);
	}
	$BasicTextAreaUI::uninstallDefaults();
}

void AquaTextAreaUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$BasicTextAreaUI::installKeyboardActions();
	$var($AquaKeyBindings, bindings, $AquaKeyBindings::instance());
	$nc(bindings)->setDefaultAction($(getKeymapName()));
	$var($JTextComponent, c, getComponent());
	bindings->installAquaUpDownActions(c);
}

$Caret* AquaTextAreaUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaTextAreaUI::createHighlighter() {
	return $new($AquaHighlighter);
}

AquaTextAreaUI::AquaTextAreaUI() {
}

$Class* AquaTextAreaUI::load$($String* name, bool initialize) {
	$loadClass(AquaTextAreaUI, name, initialize, &_AquaTextAreaUI_ClassInfo_, allocate$AquaTextAreaUI);
	return class$;
}

$Class* AquaTextAreaUI::class$ = nullptr;

		} // laf
	} // apple
} // com