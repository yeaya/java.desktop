#include <sun/awt/X11/XTextAreaPeer$AWTTextAreaUI.h>

#include <com/sun/java/swing/plaf/motif/MotifTextAreaUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/SystemColor.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/X11/XTextAreaPeer$BevelBorder.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTCaret.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef WHEN_FOCUSED

using $MotifTextAreaUI = ::com::sun::java::swing::plaf::motif::MotifTextAreaUI;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $SystemColor = ::java::awt::SystemColor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$BevelBorder = ::sun::awt::X11::XTextAreaPeer$BevelBorder;
using $XTextAreaPeer$XAWTCaret = ::sun::awt::X11::XTextAreaPeer$XAWTCaret;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$AWTTextAreaUI_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$AWTTextAreaUI, this$0)},
	{"jta", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE, $field(XTextAreaPeer$AWTTextAreaUI, jta)},
	{}
};

$MethodInfo _XTextAreaPeer$AWTTextAreaUI_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$AWTTextAreaUI::*)($XTextAreaPeer*)>(&XTextAreaPeer$AWTTextAreaUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$AWTTextAreaUI_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$AWTTextAreaUI", "sun.awt.X11.XTextAreaPeer", "AWTTextAreaUI", $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer$AWTTextAreaUI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$AWTTextAreaUI",
	"com.sun.java.swing.plaf.motif.MotifTextAreaUI",
	nullptr,
	_XTextAreaPeer$AWTTextAreaUI_FieldInfo_,
	_XTextAreaPeer$AWTTextAreaUI_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$AWTTextAreaUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$AWTTextAreaUI($Class* clazz) {
	return $of($alloc(XTextAreaPeer$AWTTextAreaUI));
}

void XTextAreaPeer$AWTTextAreaUI::init$($XTextAreaPeer* this$0) {
	$set(this, this$0, this$0);
	$MotifTextAreaUI::init$();
}

$String* XTextAreaPeer$AWTTextAreaUI::getPropertyPrefix() {
	return "TextArea"_s;
}

void XTextAreaPeer$AWTTextAreaUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$MotifTextAreaUI::installUI(c);
	$set(this, jta, $cast($JTextArea, c));
	$var($JTextArea, editor, this->jta);
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
	$init($SystemColor);
	$var($Border, b, $new($XTextAreaPeer$BevelBorder, false, $SystemColor::controlDkShadow, $SystemColor::controlLtHighlight));
	editor->setBorder($$new($BorderUIResource$CompoundBorderUIResource, b, $$new($EmptyBorder, 2, 2, 2, 2)));
	$var($Insets, margin, editor->getMargin());
	if (margin == nullptr || $instanceOf($UIResource, margin)) {
		editor->setMargin($($nc(uidefaults)->getInsets($$str({prefix, ".margin"_s}))));
	}
}

void XTextAreaPeer$AWTTextAreaUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$MotifTextAreaUI::installKeyboardActions();
	$var($JTextComponent, comp, getComponent());
	$var($UIDefaults, uidefaults, $XToolkit::getUIDefaults());
	$var($String, prefix, getPropertyPrefix());
	$var($InputMap, map, $cast($InputMap, $nc(uidefaults)->get($$str({prefix, ".focusInputMap"_s}))));
	if (map != nullptr) {
		$SwingUtilities::replaceUIInputMap(comp, $JComponent::WHEN_FOCUSED, map);
	}
}

$Caret* XTextAreaPeer$AWTTextAreaUI::createCaret() {
	return $new($XTextAreaPeer$XAWTCaret);
}

XTextAreaPeer$AWTTextAreaUI::XTextAreaPeer$AWTTextAreaUI() {
}

$Class* XTextAreaPeer$AWTTextAreaUI::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$AWTTextAreaUI, name, initialize, &_XTextAreaPeer$AWTTextAreaUI_ClassInfo_, allocate$XTextAreaPeer$AWTTextAreaUI);
	return class$;
}

$Class* XTextAreaPeer$AWTTextAreaUI::class$ = nullptr;

		} // X11
	} // awt
} // sun