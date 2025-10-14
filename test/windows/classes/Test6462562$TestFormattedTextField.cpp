#include <Test6462562$TestFormattedTextField.h>

#include <Test6462562.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BACKSPACE
#undef DELETE

using $Test6462562 = ::Test6462562;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $Caret = ::javax::swing::text::Caret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _Test6462562$TestFormattedTextField_FieldInfo_[] = {
	{"this$0", "LTest6462562;", nullptr, $FINAL | $SYNTHETIC, $field(Test6462562$TestFormattedTextField, this$0)},
	{"backspace", "Ljavax/swing/Action;", nullptr, $FINAL, $field(Test6462562$TestFormattedTextField, backspace)},
	{"delete", "Ljavax/swing/Action;", nullptr, $FINAL, $field(Test6462562$TestFormattedTextField, delete$)},
	{"insert", "Ljavax/swing/Action;", nullptr, $FINAL, $field(Test6462562$TestFormattedTextField, insert)},
	{"dummyEvent", "Ljava/awt/event/ActionEvent;", nullptr, $FINAL, $field(Test6462562$TestFormattedTextField, dummyEvent)},
	{}
};

$MethodInfo _Test6462562$TestFormattedTextField_MethodInfo_[] = {
	{"<init>", "(LTest6462562;Ljavax/swing/text/InternationalFormatter;)V", nullptr, $PUBLIC, $method(static_cast<void(Test6462562$TestFormattedTextField::*)($Test6462562*,$InternationalFormatter*)>(&Test6462562$TestFormattedTextField::init$))},
	{"test", "(IILjava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Test6462562$TestFormattedTextField_InnerClassesInfo_[] = {
	{"Test6462562$TestFormattedTextField", "Test6462562", "TestFormattedTextField", 0},
	{}
};

$ClassInfo _Test6462562$TestFormattedTextField_ClassInfo_ = {
	$ACC_SUPER,
	"Test6462562$TestFormattedTextField",
	"javax.swing.JFormattedTextField",
	nullptr,
	_Test6462562$TestFormattedTextField_FieldInfo_,
	_Test6462562$TestFormattedTextField_MethodInfo_,
	nullptr,
	nullptr,
	_Test6462562$TestFormattedTextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6462562"
};

$Object* allocate$Test6462562$TestFormattedTextField($Class* clazz) {
	return $of($alloc(Test6462562$TestFormattedTextField));
}

void Test6462562$TestFormattedTextField::init$($Test6462562* this$0, $InternationalFormatter* fmt) {
	$set(this, this$0, this$0);
	$JFormattedTextField::init$(static_cast<$JFormattedTextField$AbstractFormatter*>(fmt));
	$nc(fmt)->setAllowsInvalid(false);
	fmt->setOverwriteMode(true);
	$init($DefaultEditorKit);
	$set(this, backspace, $nc($(getActionMap()))->get($DefaultEditorKit::deletePrevCharAction));
	$set(this, delete$, $nc($(getActionMap()))->get($DefaultEditorKit::deleteNextCharAction));
	$set(this, insert, $nc($(getActionMap()))->get($DefaultEditorKit::insertContentAction));
	$set(this, dummyEvent, $new($ActionEvent, this, 0, nullptr));
}

bool Test6462562$TestFormattedTextField::test(int32_t pos, int32_t selectionLength, $String* todo, Object$* expectedResult) {
	$var($Object, v0, getValue());
	$var($Caret, caret, getCaret());
	$nc(caret)->setDot(pos);
	if (selectionLength > 0) {
		caret->moveDot(pos + selectionLength);
	}
	$var($String, desc, todo);
	$init($Test6462562);
	if (todo == $Test6462562::BACKSPACE) {
		$nc(this->backspace)->actionPerformed(this->dummyEvent);
	} else {
		if (todo == $Test6462562::DELETE) {
			$nc(this->delete$)->actionPerformed(this->dummyEvent);
		} else {
			$assign(desc, $str({"insert(\'"_s, todo, "\')"_s}));
			$nc(this->insert)->actionPerformed($$new($ActionEvent, this, 0, todo));
		}
	}
	try {
		commitEdit();
	} catch ($ParseException&) {
		$var($ParseException, e, $catch());
		e->printStackTrace();
		this->this$0->failed = true;
		return false;
	}
	$var($Object, v1, getValue());
	if (!$nc($of(v1))->equals(expectedResult)) {
		$init($System);
		$nc($System::err)->printf("Failure: value=\'%s\', mark=%d, dot=%d, action=%s\n"_s, $$new($ObjectArray, {
			v0,
			$($of($Integer::valueOf(pos))),
			$($of($Integer::valueOf(pos + selectionLength))),
			$of(desc)
		}));
		$nc($System::err)->printf("   Result: \'%s\', expected: \'%s\'\n"_s, $$new($ObjectArray, {
			v1,
			expectedResult
		}));
		this->this$0->failed = true;
		return false;
	}
	return true;
}

Test6462562$TestFormattedTextField::Test6462562$TestFormattedTextField() {
}

$Class* Test6462562$TestFormattedTextField::load$($String* name, bool initialize) {
	$loadClass(Test6462562$TestFormattedTextField, name, initialize, &_Test6462562$TestFormattedTextField_ClassInfo_, allocate$Test6462562$TestFormattedTextField);
	return class$;
}

$Class* Test6462562$TestFormattedTextField::class$ = nullptr;