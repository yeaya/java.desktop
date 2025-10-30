#include <javax/swing/text/EditorKit.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/Action.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

using $ActionArray = $Array<::javax::swing::Action>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _EditorKit_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EditorKit::*)()>(&EditorKit::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC | $ABSTRACT},
	{"deinstall", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC | $ABSTRACT},
	{"install", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC},
	{"read", "(Ljava/io/InputStream;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"read", "(Ljava/io/Reader;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Ljava/io/OutputStream;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(Ljava/io/Writer;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{}
};

$ClassInfo _EditorKit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.EditorKit",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_EditorKit_MethodInfo_
};

$Object* allocate$EditorKit($Class* clazz) {
	return $of($alloc(EditorKit));
}

int32_t EditorKit::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool EditorKit::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$String* EditorKit::toString() {
	 return this->$Cloneable::toString();
}

void EditorKit::finalize() {
	this->$Cloneable::finalize();
}

void EditorKit::init$() {
}

$Object* EditorKit::clone() {
	$var($Object, o, nullptr);
	try {
		$assign(o, $Cloneable::clone());
	} catch ($CloneNotSupportedException& cnse) {
		$assign(o, nullptr);
	}
	return $of(o);
}

void EditorKit::install($JEditorPane* c) {
}

void EditorKit::deinstall($JEditorPane* c) {
}

EditorKit::EditorKit() {
}

$Class* EditorKit::load$($String* name, bool initialize) {
	$loadClass(EditorKit, name, initialize, &_EditorKit_ClassInfo_, allocate$EditorKit);
	return class$;
}

$Class* EditorKit::class$ = nullptr;

		} // text
	} // swing
} // javax