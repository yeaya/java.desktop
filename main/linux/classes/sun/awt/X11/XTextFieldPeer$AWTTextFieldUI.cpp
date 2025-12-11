#include <sun/awt/X11/XTextFieldPeer$AWTTextFieldUI.h>

#include <com/sun/java/swing/plaf/motif/MotifPasswordFieldUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTCaret.h>
#include <sun/awt/X11/XTextFieldPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef WHEN_FOCUSED

using $MotifPasswordFieldUI = ::com::sun::java::swing::plaf::motif::MotifPasswordFieldUI;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $XTextAreaPeer$XAWTCaret = ::sun::awt::X11::XTextAreaPeer$XAWTCaret;
using $XTextFieldPeer = ::sun::awt::X11::XTextFieldPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextFieldPeer$AWTTextFieldUI_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextFieldPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextFieldPeer$AWTTextFieldUI, this$0)},
	{"jtf", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(XTextFieldPeer$AWTTextFieldUI, jtf)},
	{}
};

$MethodInfo _XTextFieldPeer$AWTTextFieldUI_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextFieldPeer;)V", nullptr, 0, $method(static_cast<void(XTextFieldPeer$AWTTextFieldUI::*)($XTextFieldPeer*)>(&XTextFieldPeer$AWTTextFieldUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextFieldPeer$AWTTextFieldUI_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextFieldPeer$AWTTextFieldUI", "sun.awt.X11.XTextFieldPeer", "AWTTextFieldUI", $FINAL},
	{}
};

$ClassInfo _XTextFieldPeer$AWTTextFieldUI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextFieldPeer$AWTTextFieldUI",
	"com.sun.java.swing.plaf.motif.MotifPasswordFieldUI",
	nullptr,
	_XTextFieldPeer$AWTTextFieldUI_FieldInfo_,
	_XTextFieldPeer$AWTTextFieldUI_MethodInfo_,
	nullptr,
	nullptr,
	_XTextFieldPeer$AWTTextFieldUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextFieldPeer"
};

$Object* allocate$XTextFieldPeer$AWTTextFieldUI($Class* clazz) {
	return $of($alloc(XTextFieldPeer$AWTTextFieldUI));
}

void XTextFieldPeer$AWTTextFieldUI::init$($XTextFieldPeer* this$0) {
	$set(this, this$0, this$0);
	$MotifPasswordFieldUI::init$();
}

$String* XTextFieldPeer$AWTTextFieldUI::getPropertyPrefix() {
	$var($JTextComponent, comp, getComponent());
	if ($instanceOf($JPasswordField, comp) && $nc(($cast($JPasswordField, comp)))->echoCharIsSet()) {
		return "PasswordField"_s;
	} else {
		return "TextField"_s;
	}
}

void XTextFieldPeer$AWTTextFieldUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$MotifPasswordFieldUI::installUI(c);
	$set(this, jtf, $cast($JTextField, c));
	$var($JTextField, editor, this->jtf);
	$var($UIDefaults, uidefaults, $XToolkit::getUIDefaults());
	$var($String, prefix, getPropertyPrefix());
	$var($Font, f, $nc(editor)->getFont());
	if ((f == nullptr) || ($instanceOf($UIResource, f))) {
		editor->setFont($($nc(uidefaults)->getFont($$str({prefix, ".font"_s}))));
	}
	$var($Color, bg, editor->getBackground());
	if ((bg == nullptr) || ($instanceOf($UIResource, bg))) {
		editor->setBackground($($nc(uidefaults)->getColor($$str({prefix, ".background"_s}))));
	}
	$var($Color, fg, editor->getForeground());
	if ((fg == nullptr) || ($instanceOf($UIResource, fg))) {
		editor->setForeground($($nc(uidefaults)->getColor($$str({prefix, ".foreground"_s}))));
	}
	$var($Color, color, editor->getCaretColor());
	if ((color == nullptr) || ($instanceOf($UIResource, color))) {
		editor->setCaretColor($($nc(uidefaults)->getColor($$str({prefix, ".caretForeground"_s}))));
	}
	$var($Color, s, editor->getSelectionColor());
	if ((s == nullptr) || ($instanceOf($UIResource, s))) {
		editor->setSelectionColor($($nc(uidefaults)->getColor($$str({prefix, ".selectionBackground"_s}))));
	}
	$var($Color, sfg, editor->getSelectedTextColor());
	if ((sfg == nullptr) || ($instanceOf($UIResource, sfg))) {
		editor->setSelectedTextColor($($nc(uidefaults)->getColor($$str({prefix, ".selectionForeground"_s}))));
	}
	$var($Color, dfg, editor->getDisabledTextColor());
	if ((dfg == nullptr) || ($instanceOf($UIResource, dfg))) {
		editor->setDisabledTextColor($($nc(uidefaults)->getColor($$str({prefix, ".inactiveForeground"_s}))));
	}
	$var($Border, b, editor->getBorder());
	if ((b == nullptr) || ($instanceOf($UIResource, b))) {
		editor->setBorder($($nc(uidefaults)->getBorder($$str({prefix, ".border"_s}))));
	}
	$var($Insets, margin, editor->getMargin());
	if (margin == nullptr || $instanceOf($UIResource, margin)) {
		editor->setMargin($($nc(uidefaults)->getInsets($$str({prefix, ".margin"_s}))));
	}
}

void XTextFieldPeer$AWTTextFieldUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$MotifPasswordFieldUI::installKeyboardActions();
	$var($JTextComponent, comp, getComponent());
	$var($UIDefaults, uidefaults, $XToolkit::getUIDefaults());
	$var($String, prefix, getPropertyPrefix());
	$var($InputMap, map, $cast($InputMap, $nc(uidefaults)->get($$str({prefix, ".focusInputMap"_s}))));
	if (map != nullptr) {
		$SwingUtilities::replaceUIInputMap(comp, $JComponent::WHEN_FOCUSED, map);
	}
}

$Caret* XTextFieldPeer$AWTTextFieldUI::createCaret() {
	return $new($XTextAreaPeer$XAWTCaret);
}

XTextFieldPeer$AWTTextFieldUI::XTextFieldPeer$AWTTextFieldUI() {
}

$Class* XTextFieldPeer$AWTTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(XTextFieldPeer$AWTTextFieldUI, name, initialize, &_XTextFieldPeer$AWTTextFieldUI_ClassInfo_, allocate$XTextFieldPeer$AWTTextFieldUI);
	return class$;
}

$Class* XTextFieldPeer$AWTTextFieldUI::class$ = nullptr;

		} // X11
	} // awt
} // sun