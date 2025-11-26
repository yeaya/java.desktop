#include <javax/swing/undo/UndoableEdit.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace undo {

$MethodInfo _UndoableEdit_MethodInfo_[] = {
	{"addEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"canRedo", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"canUndo", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"die", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUndoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSignificant", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"redo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.undo.CannotRedoException"},
	{"replaceEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"undo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$ClassInfo _UndoableEdit_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.undo.UndoableEdit",
	nullptr,
	nullptr,
	nullptr,
	_UndoableEdit_MethodInfo_
};

$Object* allocate$UndoableEdit($Class* clazz) {
	return $of($alloc(UndoableEdit));
}

$Class* UndoableEdit::load$($String* name, bool initialize) {
	$loadClass(UndoableEdit, name, initialize, &_UndoableEdit_ClassInfo_, allocate$UndoableEdit);
	return class$;
}

$Class* UndoableEdit::class$ = nullptr;

		} // undo
	} // swing
} // javax