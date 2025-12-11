#include <javax/swing/text/StringContent$RemoveUndo.h>

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

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StringContent$RemoveUndo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StringContent;", nullptr, $FINAL | $SYNTHETIC, $field(StringContent$RemoveUndo, this$0)},
	{"offset", "I", nullptr, $PROTECTED, $field(StringContent$RemoveUndo, offset)},
	{"length", "I", nullptr, $PROTECTED, $field(StringContent$RemoveUndo, length)},
	{"string", "Ljava/lang/String;", nullptr, $PROTECTED, $field(StringContent$RemoveUndo, string)},
	{"posRefs", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/StringContent$UndoPosRef;>;", $PROTECTED, $field(StringContent$RemoveUndo, posRefs)},
	{}
};

$MethodInfo _StringContent$RemoveUndo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StringContent;ILjava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(StringContent$RemoveUndo::*)($StringContent*,int32_t,$String*)>(&StringContent$RemoveUndo::init$))},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$InnerClassInfo _StringContent$RemoveUndo_InnerClassesInfo_[] = {
	{"javax.swing.text.StringContent$RemoveUndo", "javax.swing.text.StringContent", "RemoveUndo", 0},
	{}
};

$ClassInfo _StringContent$RemoveUndo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StringContent$RemoveUndo",
	"javax.swing.undo.AbstractUndoableEdit",
	nullptr,
	_StringContent$RemoveUndo_FieldInfo_,
	_StringContent$RemoveUndo_MethodInfo_,
	nullptr,
	nullptr,
	_StringContent$RemoveUndo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StringContent"
};

$Object* allocate$StringContent$RemoveUndo($Class* clazz) {
	return $of($alloc(StringContent$RemoveUndo));
}

void StringContent$RemoveUndo::init$($StringContent* this$0, int32_t offset, $String* string) {
	$set(this, this$0, this$0);
	$AbstractUndoableEdit::init$();
	this->offset = offset;
	$set(this, string, string);
	this->length = $nc(string)->length();
	if (this$0->marks != nullptr) {
		$set(this, posRefs, this$0->getPositionsInRange(nullptr, offset, this->length));
	}
}

void StringContent$RemoveUndo::undo() {
	$AbstractUndoableEdit::undo();
	try {
		$synchronized(this->this$0) {
			this->this$0->insertString(this->offset, this->string);
			if (this->posRefs != nullptr) {
				this->this$0->updateUndoPositions(this->posRefs);
				$set(this, posRefs, nullptr);
			}
			$set(this, string, nullptr);
		}
	} catch ($BadLocationException& bl) {
		$throwNew($CannotUndoException);
	}
}

void StringContent$RemoveUndo::redo() {
	$AbstractUndoableEdit::redo();
	try {
		$synchronized(this->this$0) {
			$set(this, string, this->this$0->getString(this->offset, this->length));
			if (this->this$0->marks != nullptr) {
				$set(this, posRefs, this->this$0->getPositionsInRange(nullptr, this->offset, this->length));
			}
			this->this$0->remove(this->offset, this->length);
		}
	} catch ($BadLocationException& bl) {
		$throwNew($CannotRedoException);
	}
}

StringContent$RemoveUndo::StringContent$RemoveUndo() {
}

$Class* StringContent$RemoveUndo::load$($String* name, bool initialize) {
	$loadClass(StringContent$RemoveUndo, name, initialize, &_StringContent$RemoveUndo_ClassInfo_, allocate$StringContent$RemoveUndo);
	return class$;
}

$Class* StringContent$RemoveUndo::class$ = nullptr;

		} // text
	} // swing
} // javax