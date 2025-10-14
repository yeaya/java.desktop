#include <javax/swing/undo/UndoManager.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/undo/CannotRedoException.h>
#include <javax/swing/undo/CannotUndoException.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoManager$Action.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <sun/swing/text/UndoableEditLockSupport.h>
#include <jcpp.h>

#undef ANY
#undef REDO
#undef UNDO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $UIManager = ::javax::swing::UIManager;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $CannotRedoException = ::javax::swing::undo::CannotRedoException;
using $CannotUndoException = ::javax::swing::undo::CannotUndoException;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoManager$Action = ::javax::swing::undo::UndoManager$Action;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;
using $UndoableEditLockSupport = ::sun::swing::text::UndoableEditLockSupport;

namespace javax {
	namespace swing {
		namespace undo {

$FieldInfo _UndoManager_FieldInfo_[] = {
	{"indexOfNextAdd", "I", nullptr, 0, $field(UndoManager, indexOfNextAdd)},
	{"limit", "I", nullptr, 0, $field(UndoManager, limit)},
	{}
};

$MethodInfo _UndoManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UndoManager::*)()>(&UndoManager::init$))},
	{"addEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"canRedo", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"canUndo", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"canUndoOrRedo", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"discardAllEdits", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"editToBeRedone", "()Ljavax/swing/undo/UndoableEdit;", nullptr, $PROTECTED},
	{"editToBeUndone", "()Ljavax/swing/undo/UndoableEdit;", nullptr, $PROTECTED},
	{"end", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getEditLockSupport", "(Ljavax/swing/undo/UndoableEdit;)Lsun/swing/text/UndoableEditLockSupport;", nullptr, $PRIVATE, $method(static_cast<$UndoableEditLockSupport*(UndoManager::*)($UndoableEdit*)>(&UndoManager::getEditLockSupport))},
	{"getLimit", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getUndoOrRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getUndoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"redoTo", "(Ljavax/swing/undo/UndoableEdit;)V", nullptr, $PROTECTED, nullptr, "javax.swing.undo.CannotRedoException"},
	{"setLimit", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trimEdits", "(II)V", nullptr, $PROTECTED},
	{"trimForLimit", "()V", nullptr, $PROTECTED},
	{"tryUndoOrRedo", "(Ljavax/swing/undo/UndoManager$Action;)V", nullptr, $PRIVATE, $method(static_cast<void(UndoManager::*)($UndoManager$Action*)>(&UndoManager::tryUndoOrRedo))},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{"undoOrRedo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException,javax.swing.undo.CannotUndoException"},
	{"undoTo", "(Ljavax/swing/undo/UndoableEdit;)V", nullptr, $PROTECTED, nullptr, "javax.swing.undo.CannotUndoException"},
	{"undoableEditHappened", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UndoManager_InnerClassesInfo_[] = {
	{"javax.swing.undo.UndoManager$Action", "javax.swing.undo.UndoManager", "Action", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UndoManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.undo.UndoManager",
	"javax.swing.undo.CompoundEdit",
	"javax.swing.event.UndoableEditListener",
	_UndoManager_FieldInfo_,
	_UndoManager_MethodInfo_,
	nullptr,
	nullptr,
	_UndoManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.undo.UndoManager$Action"
};

$Object* allocate$UndoManager($Class* clazz) {
	return $of($alloc(UndoManager));
}

int32_t UndoManager::hashCode() {
	 return this->$CompoundEdit::hashCode();
}

bool UndoManager::equals(Object$* arg0) {
	 return this->$CompoundEdit::equals(arg0);
}

$Object* UndoManager::clone() {
	 return this->$CompoundEdit::clone();
}

void UndoManager::finalize() {
	this->$CompoundEdit::finalize();
}

void UndoManager::init$() {
	$CompoundEdit::init$();
	this->indexOfNextAdd = 0;
	this->limit = 100;
	$nc(this->edits)->ensureCapacity(this->limit);
}

int32_t UndoManager::getLimit() {
	$synchronized(this) {
		return this->limit;
	}
}

void UndoManager::discardAllEdits() {
	$synchronized(this) {
		{
			$var($Iterator, i$, $nc(this->edits)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($UndoableEdit, e, $cast($UndoableEdit, i$->next()));
				{
					$nc(e)->die();
				}
			}
		}
		$set(this, edits, $new($Vector));
		this->indexOfNextAdd = 0;
	}
}

void UndoManager::trimForLimit() {
	if (this->limit >= 0) {
		int32_t size = $nc(this->edits)->size();
		if (size > this->limit) {
			int32_t halfLimit = this->limit / 2;
			int32_t keepFrom = this->indexOfNextAdd - 1 - halfLimit;
			int32_t keepTo = this->indexOfNextAdd - 1 + halfLimit;
			if (keepTo - keepFrom + 1 > this->limit) {
				++keepFrom;
			}
			if (keepFrom < 0) {
				keepTo -= keepFrom;
				keepFrom = 0;
			}
			if (keepTo >= size) {
				int32_t delta = size - keepTo - 1;
				keepTo += delta;
				keepFrom += delta;
			}
			trimEdits(keepTo + 1, size - 1);
			trimEdits(0, keepFrom - 1);
		}
	}
}

void UndoManager::trimEdits(int32_t from, int32_t to) {
	if (from <= to) {
		for (int32_t i = to; from <= i; --i) {
			$var($UndoableEdit, e, $cast($UndoableEdit, $nc(this->edits)->elementAt(i)));
			$nc(e)->die();
			$nc(this->edits)->removeElementAt(i);
		}
		if (this->indexOfNextAdd > to) {
			this->indexOfNextAdd -= to - from + 1;
		} else if (this->indexOfNextAdd >= from) {
			this->indexOfNextAdd = from;
		}
	}
}

void UndoManager::setLimit(int32_t l) {
	$synchronized(this) {
		if (!this->inProgress) {
			$throwNew($RuntimeException, "Attempt to call UndoManager.setLimit() after UndoManager.end() has been called"_s);
		}
		this->limit = l;
		trimForLimit();
	}
}

$UndoableEdit* UndoManager::editToBeUndone() {
	int32_t i = this->indexOfNextAdd;
	while (i > 0) {
		$var($UndoableEdit, edit, $cast($UndoableEdit, $nc(this->edits)->elementAt(--i)));
		if ($nc(edit)->isSignificant()) {
			return edit;
		}
	}
	return nullptr;
}

$UndoableEdit* UndoManager::editToBeRedone() {
	int32_t count = $nc(this->edits)->size();
	int32_t i = this->indexOfNextAdd;
	while (i < count) {
		$var($UndoableEdit, edit, $cast($UndoableEdit, $nc(this->edits)->elementAt(i++)));
		if ($nc(edit)->isSignificant()) {
			return edit;
		}
	}
	return nullptr;
}

void UndoManager::undoTo($UndoableEdit* edit) {
	bool done = false;
	while (!done) {
		$var($UndoableEdit, next, $cast($UndoableEdit, $nc(this->edits)->elementAt(--this->indexOfNextAdd)));
		$nc(next)->undo();
		done = next == edit;
	}
}

void UndoManager::redoTo($UndoableEdit* edit) {
	bool done = false;
	while (!done) {
		$var($UndoableEdit, next, $cast($UndoableEdit, $nc(this->edits)->elementAt(this->indexOfNextAdd++)));
		$nc(next)->redo();
		done = next == edit;
	}
}

void UndoManager::undoOrRedo() {
	$init($UndoManager$Action);
	tryUndoOrRedo($UndoManager$Action::ANY);
}

bool UndoManager::canUndoOrRedo() {
	$synchronized(this) {
		if (this->indexOfNextAdd == $nc(this->edits)->size()) {
			return canUndo();
		} else {
			return canRedo();
		}
	}
}

void UndoManager::undo() {
	$init($UndoManager$Action);
	tryUndoOrRedo($UndoManager$Action::UNDO);
}

bool UndoManager::canUndo() {
	$synchronized(this) {
		if (this->inProgress) {
			$var($UndoableEdit, edit, editToBeUndone());
			return edit != nullptr && edit->canUndo();
		} else {
			return $CompoundEdit::canUndo();
		}
	}
}

void UndoManager::redo() {
	$init($UndoManager$Action);
	tryUndoOrRedo($UndoManager$Action::REDO);
}

void UndoManager::tryUndoOrRedo($UndoManager$Action* action) {
	$var($UndoableEditLockSupport, lockSupport, nullptr);
	bool undo = false;
	$synchronized(this) {
		$init($UndoManager$Action);
		if (action == $UndoManager$Action::ANY) {
			undo = this->indexOfNextAdd == $nc(this->edits)->size();
		} else {
			undo = action == $UndoManager$Action::UNDO;
		}
		if (this->inProgress) {
			$var($UndoableEdit, edit, undo ? editToBeUndone() : editToBeRedone());
			if (edit == nullptr) {
				$throw(undo ? static_cast<$RuntimeException*>($$new($CannotUndoException)) : static_cast<$RuntimeException*>($$new($CannotRedoException)));
			}
			$assign(lockSupport, getEditLockSupport(edit));
			if (lockSupport == nullptr) {
				if (undo) {
					undoTo(edit);
				} else {
					redoTo(edit);
				}
				return;
			}
		} else {
			if (undo) {
				$CompoundEdit::undo();
			} else {
				$CompoundEdit::redo();
			}
			return;
		}
	}
	while (true) {
		$nc(lockSupport)->lockEdit();
		$var($UndoableEditLockSupport, editLockSupport, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				$synchronized(this) {
					$init($UndoManager$Action);
					if (action == $UndoManager$Action::ANY) {
						undo = this->indexOfNextAdd == $nc(this->edits)->size();
					}
					if (this->inProgress) {
						$var($UndoableEdit, edit, undo ? editToBeUndone() : editToBeRedone());
						if (edit == nullptr) {
							$throw(undo ? static_cast<$RuntimeException*>($$new($CannotUndoException)) : static_cast<$RuntimeException*>($$new($CannotRedoException)));
						}
						$assign(editLockSupport, getEditLockSupport(edit));
						if (editLockSupport == nullptr || editLockSupport == lockSupport) {
							if (undo) {
								undoTo(edit);
							} else {
								redoTo(edit);
							}
							return$1 = true;
							goto $finally;
						}
					} else {
						if (undo) {
							$CompoundEdit::undo();
						} else {
							$CompoundEdit::redo();
						}
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (lockSupport != nullptr) {
					lockSupport->unlockEdit();
				}
				$assign(lockSupport, editLockSupport);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
	}
}

$UndoableEditLockSupport* UndoManager::getEditLockSupport($UndoableEdit* anEdit) {
	return $instanceOf($UndoableEditLockSupport, anEdit) ? $cast($UndoableEditLockSupport, anEdit) : ($UndoableEditLockSupport*)nullptr;
}

bool UndoManager::canRedo() {
	$synchronized(this) {
		if (this->inProgress) {
			$var($UndoableEdit, edit, editToBeRedone());
			return edit != nullptr && edit->canRedo();
		} else {
			return $CompoundEdit::canRedo();
		}
	}
}

bool UndoManager::addEdit($UndoableEdit* anEdit) {
	$synchronized(this) {
		bool retVal = false;
		trimEdits(this->indexOfNextAdd, $nc(this->edits)->size() - 1);
		retVal = $CompoundEdit::addEdit(anEdit);
		if (this->inProgress) {
			retVal = true;
		}
		this->indexOfNextAdd = $nc(this->edits)->size();
		trimForLimit();
		return retVal;
	}
}

void UndoManager::end() {
	$synchronized(this) {
		$CompoundEdit::end();
		this->trimEdits(this->indexOfNextAdd, $nc(this->edits)->size() - 1);
	}
}

$String* UndoManager::getUndoOrRedoPresentationName() {
	$synchronized(this) {
		if (this->indexOfNextAdd == $nc(this->edits)->size()) {
			return getUndoPresentationName();
		} else {
			return getRedoPresentationName();
		}
	}
}

$String* UndoManager::getUndoPresentationName() {
	$synchronized(this) {
		if (this->inProgress) {
			if (canUndo()) {
				return $nc($(editToBeUndone()))->getUndoPresentationName();
			} else {
				return $UIManager::getString("AbstractUndoableEdit.undoText"_s);
			}
		} else {
			return $CompoundEdit::getUndoPresentationName();
		}
	}
}

$String* UndoManager::getRedoPresentationName() {
	$synchronized(this) {
		if (this->inProgress) {
			if (canRedo()) {
				return $nc($(editToBeRedone()))->getRedoPresentationName();
			} else {
				return $UIManager::getString("AbstractUndoableEdit.redoText"_s);
			}
		} else {
			return $CompoundEdit::getRedoPresentationName();
		}
	}
}

void UndoManager::undoableEditHappened($UndoableEditEvent* e) {
	addEdit($($nc(e)->getEdit()));
}

$String* UndoManager::toString() {
	return $str({$($CompoundEdit::toString()), " limit: "_s, $$str(this->limit), " indexOfNextAdd: "_s, $$str(this->indexOfNextAdd)});
}

UndoManager::UndoManager() {
}

$Class* UndoManager::load$($String* name, bool initialize) {
	$loadClass(UndoManager, name, initialize, &_UndoManager_ClassInfo_, allocate$UndoManager);
	return class$;
}

$Class* UndoManager::class$ = nullptr;

		} // undo
	} // swing
} // javax