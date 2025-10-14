#include <javax/swing/text/AbstractDocument$Content.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Position = ::javax::swing::text::Position;
using $Segment = ::javax::swing::text::Segment;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _AbstractDocument$Content_MethodInfo_[] = {
	{"createPosition", "(I)Ljavax/swing/text/Position;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"getChars", "(IILjavax/swing/text/Segment;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"getString", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"insertString", "(ILjava/lang/String;)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"length", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(II)Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _AbstractDocument$Content_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$Content", "javax.swing.text.AbstractDocument", "Content", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$Content_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AbstractDocument$Content",
	nullptr,
	nullptr,
	nullptr,
	_AbstractDocument$Content_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$Content_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$Content($Class* clazz) {
	return $of($alloc(AbstractDocument$Content));
}

$Class* AbstractDocument$Content::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$Content, name, initialize, &_AbstractDocument$Content_ClassInfo_, allocate$AbstractDocument$Content);
	return class$;
}

$Class* AbstractDocument$Content::class$ = nullptr;

		} // text
	} // swing
} // javax