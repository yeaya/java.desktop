#include <javax/swing/plaf/basic/BasicTextUI$TextTransferHandler$TextTransferable.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringBufferInputStream.h>
#include <java/io/StringReader.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/plaf/basic/BasicTextUI$TextTransferHandler.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $StringBufferInputStream = ::java::io::StringBufferInputStream;
using $StringReader = ::java::io::StringReader;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $BasicTextUI$TextTransferHandler = ::javax::swing::plaf::basic::BasicTextUI$TextTransferHandler;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextUI$TextTransferHandler$TextTransferable_FieldInfo_[] = {
	{"p0", "Ljavax/swing/text/Position;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, p0)},
	{"p1", "Ljavax/swing/text/Position;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, p1)},
	{"mimeType", "Ljava/lang/String;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, mimeType)},
	{"richText", "Ljava/lang/String;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, richText)},
	{"c", "Ljavax/swing/text/JTextComponent;", nullptr, 0, $field(BasicTextUI$TextTransferHandler$TextTransferable, c)},
	{}
};

$MethodInfo _BasicTextUI$TextTransferHandler$TextTransferable_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent;II)V", nullptr, 0, $method(static_cast<void(BasicTextUI$TextTransferHandler$TextTransferable::*)($JTextComponent*,int32_t,int32_t)>(&BasicTextUI$TextTransferHandler$TextTransferable::init$))},
	{"getRicherData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.awt.datatransfer.UnsupportedFlavorException"},
	{"getRicherFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PROTECTED},
	{"removeText", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicTextUI$TextTransferHandler$TextTransferable_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler", "javax.swing.plaf.basic.BasicTextUI", "TextTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler$TextTransferable", "javax.swing.plaf.basic.BasicTextUI$TextTransferHandler", "TextTransferable", $STATIC},
	{}
};

$ClassInfo _BasicTextUI$TextTransferHandler$TextTransferable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler$TextTransferable",
	"javax.swing.plaf.basic.BasicTransferable",
	nullptr,
	_BasicTextUI$TextTransferHandler$TextTransferable_FieldInfo_,
	_BasicTextUI$TextTransferHandler$TextTransferable_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$TextTransferHandler$TextTransferable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$TextTransferHandler$TextTransferable($Class* clazz) {
	return $of($alloc(BasicTextUI$TextTransferHandler$TextTransferable));
}

void BasicTextUI$TextTransferHandler$TextTransferable::init$($JTextComponent* c, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$BasicTransferable::init$(nullptr, nullptr);
	$set(this, c, c);
	$var($Document, doc, $nc(c)->getDocument());
	try {
		$set(this, p0, $nc(doc)->createPosition(start));
		$set(this, p1, doc->createPosition(end));
		$set(this, plainData, c->getSelectedText());
		if ($instanceOf($JEditorPane, c)) {
			$var($JEditorPane, ep, $cast($JEditorPane, c));
			$set(this, mimeType, ep->getContentType());
			if ($nc(this->mimeType)->startsWith("text/plain"_s)) {
				return;
			}
			int32_t var$0 = $nc(this->p1)->getOffset();
			$var($StringWriter, sw, $new($StringWriter, var$0 - $nc(this->p0)->getOffset()));
			$var($Writer, var$1, static_cast<$Writer*>(sw));
			$var($Document, var$2, doc);
			int32_t var$3 = $nc(this->p0)->getOffset();
			int32_t var$4 = $nc(this->p1)->getOffset();
			$nc($(ep->getEditorKit()))->write(var$1, var$2, var$3, var$4 - $nc(this->p0)->getOffset());
			if ($nc(this->mimeType)->startsWith("text/html"_s)) {
				$set(this, htmlData, sw->toString());
			} else {
				$set(this, richText, sw->toString());
			}
		}
	} catch ($BadLocationException&) {
		$catch();
	} catch ($IOException&) {
		$catch();
	}
}

void BasicTextUI$TextTransferHandler$TextTransferable::removeText() {
	bool var$0 = (this->p0 != nullptr) && (this->p1 != nullptr);
	if (var$0) {
		int32_t var$1 = $nc(this->p0)->getOffset();
		var$0 = (var$1 != $nc(this->p1)->getOffset());
	}
	if (var$0) {
		try {
			$var($Document, doc, $nc(this->c)->getDocument());
			int32_t var$2 = $nc(this->p0)->getOffset();
			int32_t var$3 = $nc(this->p1)->getOffset();
			$nc(doc)->remove(var$2, var$3 - $nc(this->p0)->getOffset());
		} catch ($BadLocationException&) {
			$catch();
		}
	}
}

$DataFlavorArray* BasicTextUI$TextTransferHandler$TextTransferable::getRicherFlavors() {
	$useLocalCurrentObjectStackCache();
	if (this->richText == nullptr) {
		return nullptr;
	}
	try {
		$var($DataFlavorArray, flavors, $new($DataFlavorArray, 3));
		flavors->set(0, $$new($DataFlavor, $$str({this->mimeType, ";class=java.lang.String"_s})));
		flavors->set(1, $$new($DataFlavor, $$str({this->mimeType, ";class=java.io.Reader"_s})));
		flavors->set(2, $$new($DataFlavor, $$str({this->mimeType, ";class=java.io.InputStream;charset=unicode"_s})));
		return flavors;
	} catch ($ClassNotFoundException&) {
		$catch();
	}
	return nullptr;
}

$Object* BasicTextUI$TextTransferHandler$TextTransferable::getRicherData($DataFlavor* flavor) {
	if (this->richText == nullptr) {
		return $of(nullptr);
	}
	$load($String);
	if ($of($String::class$)->equals($nc(flavor)->getRepresentationClass())) {
		return $of(this->richText);
	} else {
		$load($Reader);
		if ($of($Reader::class$)->equals($nc(flavor)->getRepresentationClass())) {
			return $of($new($StringReader, this->richText));
		} else {
			$load($InputStream);
			if ($of($InputStream::class$)->equals($nc(flavor)->getRepresentationClass())) {
				return $of($new($StringBufferInputStream, this->richText));
			}
		}
	}
	$throwNew($UnsupportedFlavorException, flavor);
}

BasicTextUI$TextTransferHandler$TextTransferable::BasicTextUI$TextTransferHandler$TextTransferable() {
}

$Class* BasicTextUI$TextTransferHandler$TextTransferable::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$TextTransferHandler$TextTransferable, name, initialize, &_BasicTextUI$TextTransferHandler$TextTransferable_ClassInfo_, allocate$BasicTextUI$TextTransferHandler$TextTransferable);
	return class$;
}

$Class* BasicTextUI$TextTransferHandler$TextTransferable::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax