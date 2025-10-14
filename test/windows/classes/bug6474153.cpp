#include <bug6474153.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <jcpp.h>

using $JTextComponent$KeyBindingArray = $Array<::javax::swing::text::JTextComponent$KeyBinding>;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent$KeyBinding = ::javax::swing::text::JTextComponent$KeyBinding;

$MethodInfo _bug6474153_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6474153::*)()>(&bug6474153::init$))},
	{"checkArray", "([Ljavax/swing/text/JTextComponent$KeyBinding;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JTextComponent$KeyBindingArray*)>(&bug6474153::checkArray))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug6474153::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6474153_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6474153",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6474153_MethodInfo_
};

$Object* allocate$bug6474153($Class* clazz) {
	return $of($alloc(bug6474153));
}

void bug6474153::init$() {
}

void bug6474153::main($StringArray* args) {
		$init($DefaultEditorKit);
	checkArray($($LookAndFeel::makeKeyBindings($$new($ObjectArray, {
		$of("UP"_s),
		$of($DefaultEditorKit::upAction)
	}))));
	checkArray($($LookAndFeel::makeKeyBindings($$new($ObjectArray, {
		$of("UP"_s),
		$of($DefaultEditorKit::upAction),
		$of("PAGE_UP"_s)
	}))));
}

void bug6474153::checkArray($JTextComponent$KeyBindingArray* keyActionArray) {
	if ($nc(keyActionArray)->length != 1) {
		$throwNew($RuntimeException, "Wrong array lenght!"_s);
	}
	$init($DefaultEditorKit);
	if (!$nc($DefaultEditorKit::upAction)->equals($nc($nc(keyActionArray)->get(0))->actionName)) {
		$throwNew($RuntimeException, "Wrong action name!"_s);
	}
	if (!$nc($($KeyStroke::getKeyStroke("UP"_s)))->equals($nc($nc(keyActionArray)->get(0))->key)) {
		$throwNew($RuntimeException, "Wrong keystroke!"_s);
	}
}

bug6474153::bug6474153() {
}

$Class* bug6474153::load$($String* name, bool initialize) {
	$loadClass(bug6474153, name, initialize, &_bug6474153_ClassInfo_, allocate$bug6474153);
	return class$;
}

$Class* bug6474153::class$ = nullptr;