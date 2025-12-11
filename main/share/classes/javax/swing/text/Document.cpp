#include <javax/swing/text/Document.h>

#include <java/lang/Runnable.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/Segment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _Document_FieldInfo_[] = {
	{"StreamDescriptionProperty", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Document, StreamDescriptionProperty)},
	{"TitleProperty", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Document, TitleProperty)},
	{}
};

$MethodInfo _Document_MethodInfo_[] = {
	{"addDocumentListener", "(Ljavax/swing/event/DocumentListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"createPosition", "(I)Ljavax/swing/text/Position;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"getDefaultRootElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEndPosition", "()Ljavax/swing/text/Position;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRootElements", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartPosition", "()Ljavax/swing/text/Position;", nullptr, $PUBLIC | $ABSTRACT},
	{"getText", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"getText", "(IILjavax/swing/text/Segment;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"putProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"removeDocumentListener", "(Ljavax/swing/event/DocumentListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"render", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Document_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Document",
	nullptr,
	nullptr,
	_Document_FieldInfo_,
	_Document_MethodInfo_
};

$Object* allocate$Document($Class* clazz) {
	return $of($alloc(Document));
}

$String* Document::StreamDescriptionProperty = nullptr;
$String* Document::TitleProperty = nullptr;

void clinit$Document($Class* class$) {
	$assignStatic(Document::StreamDescriptionProperty, "stream"_s);
	$assignStatic(Document::TitleProperty, "title"_s);
}

$Class* Document::load$($String* name, bool initialize) {
	$loadClass(Document, name, initialize, &_Document_ClassInfo_, clinit$Document, allocate$Document);
	return class$;
}

$Class* Document::class$ = nullptr;

		} // text
	} // swing
} // javax