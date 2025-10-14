#include <javax/swing/undo/StateEdit.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/StateEditable.h>
#include <jcpp.h>

#undef RCSID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $StateEditable = ::javax::swing::undo::StateEditable;

namespace javax {
	namespace swing {
		namespace undo {

$FieldInfo _StateEdit_FieldInfo_[] = {
	{"RCSID", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StateEdit, RCSID)},
	{"object", "Ljavax/swing/undo/StateEditable;", nullptr, $PROTECTED, $field(StateEdit, object)},
	{"preState", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PROTECTED, $field(StateEdit, preState)},
	{"postState", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PROTECTED, $field(StateEdit, postState)},
	{"undoRedoName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(StateEdit, undoRedoName)},
	{}
};

$MethodInfo _StateEdit_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/undo/StateEditable;)V", nullptr, $PUBLIC, $method(static_cast<void(StateEdit::*)($StateEditable*)>(&StateEdit::init$))},
	{"<init>", "(Ljavax/swing/undo/StateEditable;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StateEdit::*)($StateEditable*,$String*)>(&StateEdit::init$))},
	{"end", "()V", nullptr, $PUBLIC},
	{"getPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Ljavax/swing/undo/StateEditable;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"redo", "()V", nullptr, $PUBLIC},
	{"removeRedundantState", "()V", nullptr, $PROTECTED},
	{"undo", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StateEdit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.undo.StateEdit",
	"javax.swing.undo.AbstractUndoableEdit",
	nullptr,
	_StateEdit_FieldInfo_,
	_StateEdit_MethodInfo_
};

$Object* allocate$StateEdit($Class* clazz) {
	return $of($alloc(StateEdit));
}


$String* StateEdit::RCSID = nullptr;

void StateEdit::init$($StateEditable* anObject) {
	$AbstractUndoableEdit::init$();
	init(anObject, nullptr);
}

void StateEdit::init$($StateEditable* anObject, $String* name) {
	$AbstractUndoableEdit::init$();
	init(anObject, name);
}

void StateEdit::init($StateEditable* anObject, $String* name) {
	$set(this, object, anObject);
	$set(this, preState, $new($Hashtable, 11));
	$nc(this->object)->storeState(this->preState);
	$set(this, postState, nullptr);
	$set(this, undoRedoName, name);
}

void StateEdit::end() {
	$set(this, postState, $new($Hashtable, 11));
	$nc(this->object)->storeState(this->postState);
	this->removeRedundantState();
}

void StateEdit::undo() {
	$AbstractUndoableEdit::undo();
	$nc(this->object)->restoreState(this->preState);
}

void StateEdit::redo() {
	$AbstractUndoableEdit::redo();
	$nc(this->object)->restoreState(this->postState);
}

$String* StateEdit::getPresentationName() {
	return this->undoRedoName;
}

void StateEdit::removeRedundantState() {
	$var($Vector, uselessKeys, $new($Vector));
	$var($Enumeration, myKeys, $nc(this->preState)->keys());
	while ($nc(myKeys)->hasMoreElements()) {
		$var($Object, myKey, myKeys->nextElement());
		bool var$0 = $nc(this->postState)->containsKey(myKey);
		if (var$0 && $nc($of($($nc(this->postState)->get(myKey))))->equals($($nc(this->preState)->get(myKey)))) {
			uselessKeys->addElement(myKey);
		}
	}
	for (int32_t i = uselessKeys->size() - 1; i >= 0; --i) {
		$var($Object, myKey, uselessKeys->elementAt(i));
		$nc(this->preState)->remove(myKey);
		$nc(this->postState)->remove(myKey);
	}
}

StateEdit::StateEdit() {
}

void clinit$StateEdit($Class* class$) {
	$assignStatic(StateEdit::RCSID, "$Id: StateEdit.java,v 1.6 1997/10/01 20:05:51 sandipc Exp $"_s);
}

$Class* StateEdit::load$($String* name, bool initialize) {
	$loadClass(StateEdit, name, initialize, &_StateEdit_ClassInfo_, clinit$StateEdit, allocate$StateEdit);
	return class$;
}

$Class* StateEdit::class$ = nullptr;

		} // undo
	} // swing
} // javax