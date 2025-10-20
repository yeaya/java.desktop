#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>

#include <com/sun/java/swing/plaf/motif/MotifTextUI$MotifCaret.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <jcpp.h>

#undef CTRL_MASK
#undef SHIFT_MASK
#undef VK_DELETE
#undef VK_INSERT
#undef VK_LEFT
#undef VK_RIGHT

using $JTextComponent$KeyBindingArray = $Array<::javax::swing::text::JTextComponent$KeyBinding>;
using $MotifTextUI$MotifCaret = ::com::sun::java::swing::plaf::motif::MotifTextUI$MotifCaret;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke = ::javax::swing::KeyStroke;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent$KeyBinding = ::javax::swing::text::JTextComponent$KeyBinding;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifTextUI_FieldInfo_[] = {
	{"defaultBindings", "[Ljavax/swing/text/JTextComponent$KeyBinding;", nullptr, $STATIC | $FINAL, $staticField(MotifTextUI, defaultBindings)},
	{}
};

$MethodInfo _MotifTextUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTextUI::*)()>(&MotifTextUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Caret*(*)()>(&MotifTextUI::createCaret))},
	{}
};

$InnerClassInfo _MotifTextUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifTextUI$MotifCaret", "com.sun.java.swing.plaf.motif.MotifTextUI", "MotifCaret", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifTextUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTextUI",
	"java.lang.Object",
	nullptr,
	_MotifTextUI_FieldInfo_,
	_MotifTextUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifTextUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifTextUI$MotifCaret"
};

$Object* allocate$MotifTextUI($Class* clazz) {
	return $of($alloc(MotifTextUI));
}


$JTextComponent$KeyBindingArray* MotifTextUI::defaultBindings = nullptr;

void MotifTextUI::init$() {
}

$Caret* MotifTextUI::createCaret() {
	$init(MotifTextUI);
	return $new($MotifTextUI$MotifCaret);
}

void clinit$MotifTextUI($Class* class$) {
	$useLocalCurrentObjectStackCache();
		$init($DefaultEditorKit);
	$assignStatic(MotifTextUI::defaultBindings, $new($JTextComponent$KeyBindingArray, {
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_INSERT, $InputEvent::CTRL_MASK)), $DefaultEditorKit::copyAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_INSERT, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::pasteAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_DELETE, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::cutAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_LEFT, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::selectionBackwardAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_RIGHT, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::selectionForwardAction)
	}));
}

MotifTextUI::MotifTextUI() {
}

$Class* MotifTextUI::load$($String* name, bool initialize) {
	$loadClass(MotifTextUI, name, initialize, &_MotifTextUI_ClassInfo_, clinit$MotifTextUI, allocate$MotifTextUI);
	return class$;
}

$Class* MotifTextUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com