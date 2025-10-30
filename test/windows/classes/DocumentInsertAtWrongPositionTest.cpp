#include <DocumentInsertAtWrongPositionTest.h>

#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextPane = ::javax::swing::JTextPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;

$MethodInfo _DocumentInsertAtWrongPositionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DocumentInsertAtWrongPositionTest::*)()>(&DocumentInsertAtWrongPositionTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DocumentInsertAtWrongPositionTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DocumentInsertAtWrongPositionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DocumentInsertAtWrongPositionTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DocumentInsertAtWrongPositionTest_MethodInfo_
};

$Object* allocate$DocumentInsertAtWrongPositionTest($Class* clazz) {
	return $of($alloc(DocumentInsertAtWrongPositionTest));
}

void DocumentInsertAtWrongPositionTest::init$() {
}

void DocumentInsertAtWrongPositionTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JTextField, te, $new($JTextField, "1234567890"_s));
	$var($JTextPane, tp, $new($JTextPane));
	tp->setText("1234567890"_s);
	$var($JTextArea, ta, $new($JTextArea, "1234567890"_s));
	try {
		ta->insert("abc"_s, 11);
		$throwNew($RuntimeException, "failed"_s);
	} catch ($IllegalArgumentException& e) {
	}
	try {
		$nc($(te->getDocument()))->insertString(11, "abc"_s, $$new($SimpleAttributeSet));
		$throwNew($RuntimeException, "failed"_s);
	} catch ($BadLocationException& e) {
	}
	try {
		$nc($(tp->getDocument()))->insertString(11, "abc"_s, $$new($SimpleAttributeSet));
		$throwNew($RuntimeException, "failed"_s);
	} catch ($BadLocationException& e) {
	}
}

DocumentInsertAtWrongPositionTest::DocumentInsertAtWrongPositionTest() {
}

$Class* DocumentInsertAtWrongPositionTest::load$($String* name, bool initialize) {
	$loadClass(DocumentInsertAtWrongPositionTest, name, initialize, &_DocumentInsertAtWrongPositionTest_ClassInfo_, allocate$DocumentInsertAtWrongPositionTest);
	return class$;
}

$Class* DocumentInsertAtWrongPositionTest::class$ = nullptr;