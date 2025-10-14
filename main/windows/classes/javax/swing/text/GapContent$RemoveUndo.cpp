#include <javax/swing/text/GapContent$RemoveUndo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/GapContent.h>
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
using $GapContent = ::javax::swing::text::GapContent;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $CannotRedoException = ::javax::swing::undo::CannotRedoException;
using $CannotUndoException = ::javax::swing::undo::CannotUndoException;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GapContent$RemoveUndo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$RemoveUndo, this$0)},
	{"offset", "I", nullptr, $PROTECTED, $field(GapContent$RemoveUndo, offset)},
	{"length", "I", nullptr, $PROTECTED, $field(GapContent$RemoveUndo, length)},
	{"string", "Ljava/lang/String;", nullptr, $PROTECTED, $field(GapContent$RemoveUndo, string)},
	{"posRefs", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/GapContent$UndoPosRef;>;", $PROTECTED, $field(GapContent$RemoveUndo, posRefs)},
	{}
};

$MethodInfo _GapContent$RemoveUndo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/GapContent;ILjava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(GapContent$RemoveUndo::*)($GapContent*,int32_t,$String*)>(&GapContent$RemoveUndo::init$))},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$InnerClassInfo _GapContent$RemoveUndo_InnerClassesInfo_[] = {
	{"javax.swing.text.GapContent$RemoveUndo", "javax.swing.text.GapContent", "RemoveUndo", 0},
	{}
};

$ClassInfo _GapContent$RemoveUndo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.GapContent$RemoveUndo",
	"javax.swing.undo.AbstractUndoableEdit",
	nullptr,
	_GapContent$RemoveUndo_FieldInfo_,
	_GapContent$RemoveUndo_MethodInfo_,
	nullptr,
	nullptr,
	_GapContent$RemoveUndo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.GapContent"
};

$Object* allocate$GapContent$RemoveUndo($Class* clazz) {
	return $of($alloc(GapContent$RemoveUndo));
}

void GapContent$RemoveUndo::init$($GapContent* this$0, int32_t offset, $String* string) {
	$set(this, this$0, this$0);
	$AbstractUndoableEdit::init$();
	this->offset = offset;
	$set(this, string, string);
	this->length = $nc(string)->length();
	$set(this, posRefs, this$0->getPositionsInRange(nullptr, offset, this->length));
}

void GapContent$RemoveUndo::undo() {
	$AbstractUndoableEdit::undo();
	try {
		this->this$0->insertString(this->offset, this->string);
		if (this->posRefs != nullptr) {
			this->this$0->updateUndoPositions(this->posRefs, this->offset, this->length);
			$set(this, posRefs, nullptr);
		}
		$set(this, string, nullptr);
	} catch ($BadLocationException&) {
		$var($BadLocationException, bl, $catch());
		$throwNew($CannotUndoException);
	}
}

void GapContent$RemoveUndo::redo() {
	$AbstractUndoableEdit::redo();
	try {
		$set(this, string, this->this$0->getString(this->offset, this->length));
		$set(this, posRefs, this->this$0->getPositionsInRange(nullptr, this->offset, this->length));
		this->this$0->remove(this->offset, this->length);
	} catch ($BadLocationException&) {
		$var($BadLocationException, bl, $catch());
		$throwNew($CannotRedoException);
	}
}

GapContent$RemoveUndo::GapContent$RemoveUndo() {
}

$Class* GapContent$RemoveUndo::load$($String* name, bool initialize) {
	$loadClass(GapContent$RemoveUndo, name, initialize, &_GapContent$RemoveUndo_ClassInfo_, allocate$GapContent$RemoveUndo);
	return class$;
}

$Class* GapContent$RemoveUndo::class$ = nullptr;

		} // text
	} // swing
} // javax