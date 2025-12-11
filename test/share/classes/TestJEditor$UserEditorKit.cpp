#include <TestJEditor$UserEditorKit.h>

#include <TestJEditor.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

using $ActionArray = $Array<::javax::swing::Action>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $ViewFactory = ::javax::swing::text::ViewFactory;

$MethodInfo _TestJEditor$UserEditorKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJEditor$UserEditorKit::*)()>(&TestJEditor$UserEditorKit::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC},
	{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"read", "(Ljava/io/InputStream;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"read", "(Ljava/io/Reader;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(Ljava/io/OutputStream;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(Ljava/io/Writer;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _TestJEditor$UserEditorKit_InnerClassesInfo_[] = {
	{"TestJEditor$UserEditorKit", "TestJEditor", "UserEditorKit", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestJEditor$UserEditorKit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJEditor$UserEditorKit",
	"javax.swing.text.EditorKit",
	nullptr,
	nullptr,
	_TestJEditor$UserEditorKit_MethodInfo_,
	nullptr,
	nullptr,
	_TestJEditor$UserEditorKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJEditor"
};

$Object* allocate$TestJEditor$UserEditorKit($Class* clazz) {
	return $of($alloc(TestJEditor$UserEditorKit));
}

void TestJEditor$UserEditorKit::init$() {
	$EditorKit::init$();
}

$String* TestJEditor$UserEditorKit::getContentType() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$ViewFactory* TestJEditor$UserEditorKit::getViewFactory() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$ActionArray* TestJEditor$UserEditorKit::getActions() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Caret* TestJEditor$UserEditorKit::createCaret() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Document* TestJEditor$UserEditorKit::createDefaultDocument() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

void TestJEditor$UserEditorKit::read($InputStream* in, $Document* doc, int32_t pos) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

void TestJEditor$UserEditorKit::write($OutputStream* out, $Document* doc, int32_t pos, int32_t len) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

void TestJEditor$UserEditorKit::read($Reader* in, $Document* doc, int32_t pos) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

void TestJEditor$UserEditorKit::write($Writer* out, $Document* doc, int32_t pos, int32_t len) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

TestJEditor$UserEditorKit::TestJEditor$UserEditorKit() {
}

$Class* TestJEditor$UserEditorKit::load$($String* name, bool initialize) {
	$loadClass(TestJEditor$UserEditorKit, name, initialize, &_TestJEditor$UserEditorKit_ClassInfo_, allocate$TestJEditor$UserEditorKit);
	return class$;
}

$Class* TestJEditor$UserEditorKit::class$ = nullptr;