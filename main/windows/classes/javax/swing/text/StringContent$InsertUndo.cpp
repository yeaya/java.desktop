#include <javax/swing/text/StringContent$InsertUndo.h>

#include <java/util/Vector.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/StringContent.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/CannotRedoException.h>
#include <javax/swing/undo/CannotUndoException.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $StringContent = ::javax::swing::text::StringContent;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $CannotRedoException = ::javax::swing::undo::CannotRedoException;
using $CannotUndoException = ::javax::swing::undo::CannotUndoException;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StringContent$InsertUndo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StringContent;", nullptr, $FINAL | $SYNTHETIC, $field(StringContent$InsertUndo, this$0)},
	{"offset", "I", nullptr, $PROTECTED, $field(StringContent$InsertUndo, offset)},
	{"length", "I", nullptr, $PROTECTED, $field(StringContent$InsertUndo, length)},
	{"string", "Ljava/lang/String;", nullptr, $PROTECTED, $field(StringContent$InsertUndo, string)},
	{"posRefs", "Ljava/util/Vector;", nullptr, $PROTECTED, $field(StringContent$InsertUndo, posRefs)},
	{}
};

$MethodInfo _StringContent$InsertUndo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StringContent;II)V", nullptr, $PROTECTED, $method(static_cast<void(StringContent$InsertUndo::*)($StringContent*,int32_t,int32_t)>(&StringContent$InsertUndo::init$))},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$InnerClassInfo _StringContent$InsertUndo_InnerClassesInfo_[] = {
	{"javax.swing.text.StringContent$InsertUndo", "javax.swing.text.StringContent", "InsertUndo", 0},
	{}
};

$ClassInfo _StringContent$InsertUndo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StringContent$InsertUndo",
	"javax.swing.undo.AbstractUndoableEdit",
	nullptr,
	_StringContent$InsertUndo_FieldInfo_,
	_StringContent$InsertUndo_MethodInfo_,
	nullptr,
	nullptr,
	_StringContent$InsertUndo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StringContent"
};

$Object* allocate$StringContent$InsertUndo($Class* clazz) {
	return $of($alloc(StringContent$InsertUndo));
}

void StringContent$InsertUndo::init$($StringContent* this$0, int32_t offset, int32_t length) {
	$set(this, this$0, this$0);
	$AbstractUndoableEdit::init$();
	this->offset = offset;
	this->length = length;
}

void StringContent$InsertUndo::undo() {
	$AbstractUndoableEdit::undo();
	try {
		$synchronized(this->this$0) {
			if (this->this$0->marks != nullptr) {
				$set(this, posRefs, this->this$0->getPositionsInRange(nullptr, this->offset, this->length));
			}
			$set(this, string, this->this$0->getString(this->offset, this->length));
			this->this$0->remove(this->offset, this->length);
		}
	} catch ($BadLocationException& bl) {
		$throwNew($CannotUndoException);
	}
}

void StringContent$InsertUndo::redo() {
	$AbstractUndoableEdit::redo();
	try {
		$synchronized(this->this$0) {
			this->this$0->insertString(this->offset, this->string);
			$set(this, string, nullptr);
			if (this->posRefs != nullptr) {
				this->this$0->updateUndoPositions(this->posRefs);
				$set(this, posRefs, nullptr);
			}
		}
	} catch ($BadLocationException& bl) {
		$throwNew($CannotRedoException);
	}
}

StringContent$InsertUndo::StringContent$InsertUndo() {
}

$Class* StringContent$InsertUndo::load$($String* name, bool initialize) {
	$loadClass(StringContent$InsertUndo, name, initialize, &_StringContent$InsertUndo_ClassInfo_, allocate$StringContent$InsertUndo);
	return class$;
}

$Class* StringContent$InsertUndo::class$ = nullptr;

		} // text
	} // swing
} // javax