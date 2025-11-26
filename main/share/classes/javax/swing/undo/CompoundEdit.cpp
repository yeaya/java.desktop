#include <javax/swing/undo/CompoundEdit.h>

#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace undo {

$FieldInfo _CompoundEdit_FieldInfo_[] = {
	{"inProgress", "Z", nullptr, 0, $field(CompoundEdit, inProgress)},
	{"edits", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/undo/UndoableEdit;>;", $PROTECTED, $field(CompoundEdit, edits)},
	{}
};

$MethodInfo _CompoundEdit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompoundEdit::*)()>(&CompoundEdit::init$))},
	{"addEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC},
	{"canRedo", "()Z", nullptr, $PUBLIC},
	{"canUndo", "()Z", nullptr, $PUBLIC},
	{"die", "()V", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{"getPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUndoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isInProgress", "()Z", nullptr, $PUBLIC},
	{"isSignificant", "()Z", nullptr, $PUBLIC},
	{"lastEdit", "()Ljavax/swing/undo/UndoableEdit;", nullptr, $PROTECTED},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$ClassInfo _CompoundEdit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.undo.CompoundEdit",
	"javax.swing.undo.AbstractUndoableEdit",
	nullptr,
	_CompoundEdit_FieldInfo_,
	_CompoundEdit_MethodInfo_
};

$Object* allocate$CompoundEdit($Class* clazz) {
	return $of($alloc(CompoundEdit));
}

void CompoundEdit::init$() {
	$AbstractUndoableEdit::init$();
	this->inProgress = true;
	$set(this, edits, $new($Vector));
}

void CompoundEdit::undo() {
	$useLocalCurrentObjectStackCache();
	$AbstractUndoableEdit::undo();
	int32_t i = $nc(this->edits)->size();
	while (i-- > 0) {
		$var($UndoableEdit, e, $cast($UndoableEdit, $nc(this->edits)->elementAt(i)));
		$nc(e)->undo();
	}
}

void CompoundEdit::redo() {
	$useLocalCurrentObjectStackCache();
	$AbstractUndoableEdit::redo();
	$var($Enumeration, cursor, $nc(this->edits)->elements());
	while ($nc(cursor)->hasMoreElements()) {
		$nc(($cast($UndoableEdit, $(cursor->nextElement()))))->redo();
	}
}

$UndoableEdit* CompoundEdit::lastEdit() {
	int32_t count = $nc(this->edits)->size();
	if (count > 0) {
		return $cast($UndoableEdit, $nc(this->edits)->elementAt(count - 1));
	} else {
		return nullptr;
	}
}

void CompoundEdit::die() {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->edits)->size();
	for (int32_t i = size - 1; i >= 0; --i) {
		$var($UndoableEdit, e, $cast($UndoableEdit, $nc(this->edits)->elementAt(i)));
		$nc(e)->die();
	}
	$AbstractUndoableEdit::die();
}

bool CompoundEdit::addEdit($UndoableEdit* anEdit) {
	if (!this->inProgress) {
		return false;
	} else {
		$var($UndoableEdit, last, lastEdit());
		if (last == nullptr) {
			$nc(this->edits)->addElement(anEdit);
		} else if (!$nc(last)->addEdit(anEdit)) {
			if ($nc(anEdit)->replaceEdit(last)) {
				$nc(this->edits)->removeElementAt($nc(this->edits)->size() - 1);
			}
			$nc(this->edits)->addElement(anEdit);
		}
		return true;
	}
}

void CompoundEdit::end() {
	this->inProgress = false;
}

bool CompoundEdit::canUndo() {
	bool var$0 = !isInProgress();
	return var$0 && $AbstractUndoableEdit::canUndo();
}

bool CompoundEdit::canRedo() {
	bool var$0 = !isInProgress();
	return var$0 && $AbstractUndoableEdit::canRedo();
}

bool CompoundEdit::isInProgress() {
	return this->inProgress;
}

bool CompoundEdit::isSignificant() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, cursor, $nc(this->edits)->elements());
	while ($nc(cursor)->hasMoreElements()) {
		if ($nc(($cast($UndoableEdit, $(cursor->nextElement()))))->isSignificant()) {
			return true;
		}
	}
	return false;
}

$String* CompoundEdit::getPresentationName() {
	$var($UndoableEdit, last, lastEdit());
	if (last != nullptr) {
		return last->getPresentationName();
	} else {
		return $AbstractUndoableEdit::getPresentationName();
	}
}

$String* CompoundEdit::getUndoPresentationName() {
	$var($UndoableEdit, last, lastEdit());
	if (last != nullptr) {
		return last->getUndoPresentationName();
	} else {
		return $AbstractUndoableEdit::getUndoPresentationName();
	}
}

$String* CompoundEdit::getRedoPresentationName() {
	$var($UndoableEdit, last, lastEdit());
	if (last != nullptr) {
		return last->getRedoPresentationName();
	} else {
		return $AbstractUndoableEdit::getRedoPresentationName();
	}
}

$String* CompoundEdit::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($AbstractUndoableEdit::toString()), " inProgress: "_s, $$str(this->inProgress), " edits: "_s, this->edits});
}

CompoundEdit::CompoundEdit() {
}

$Class* CompoundEdit::load$($String* name, bool initialize) {
	$loadClass(CompoundEdit, name, initialize, &_CompoundEdit_ClassInfo_, allocate$CompoundEdit);
	return class$;
}

$Class* CompoundEdit::class$ = nullptr;

		} // undo
	} // swing
} // javax