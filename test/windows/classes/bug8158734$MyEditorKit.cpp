#include <bug8158734$MyEditorKit.h>

#include <bug8158734.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

using $ActionArray = $Array<::javax::swing::Action>;
using $bug8158734 = ::bug8158734;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $ViewFactory = ::javax::swing::text::ViewFactory;

$MethodInfo _bug8158734$MyEditorKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8158734$MyEditorKit::*)()>(&bug8158734$MyEditorKit::init$))},
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

$InnerClassInfo _bug8158734$MyEditorKit_InnerClassesInfo_[] = {
	{"bug8158734$MyEditorKit", "bug8158734", "MyEditorKit", $STATIC},
	{}
};

$ClassInfo _bug8158734$MyEditorKit_ClassInfo_ = {
	$ACC_SUPER,
	"bug8158734$MyEditorKit",
	"javax.swing.text.EditorKit",
	nullptr,
	nullptr,
	_bug8158734$MyEditorKit_MethodInfo_,
	nullptr,
	nullptr,
	_bug8158734$MyEditorKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8158734"
};

$Object* allocate$bug8158734$MyEditorKit($Class* clazz) {
	return $of($alloc(bug8158734$MyEditorKit));
}

void bug8158734$MyEditorKit::init$() {
	$EditorKit::init$();
}

$String* bug8158734$MyEditorKit::getContentType() {
	return nullptr;
}

$ViewFactory* bug8158734$MyEditorKit::getViewFactory() {
	return nullptr;
}

$ActionArray* bug8158734$MyEditorKit::getActions() {
	return $new($ActionArray, 0);
}

$Caret* bug8158734$MyEditorKit::createCaret() {
	return nullptr;
}

$Document* bug8158734$MyEditorKit::createDefaultDocument() {
	return nullptr;
}

void bug8158734$MyEditorKit::read($InputStream* in, $Document* doc, int32_t pos) {
}

void bug8158734$MyEditorKit::write($OutputStream* out, $Document* doc, int32_t pos, int32_t len) {
}

void bug8158734$MyEditorKit::read($Reader* in, $Document* doc, int32_t pos) {
}

void bug8158734$MyEditorKit::write($Writer* out, $Document* doc, int32_t pos, int32_t len) {
}

bug8158734$MyEditorKit::bug8158734$MyEditorKit() {
}

$Class* bug8158734$MyEditorKit::load$($String* name, bool initialize) {
	$loadClass(bug8158734$MyEditorKit, name, initialize, &_bug8158734$MyEditorKit_ClassInfo_, allocate$bug8158734$MyEditorKit);
	return class$;
}

$Class* bug8158734$MyEditorKit::class$ = nullptr;