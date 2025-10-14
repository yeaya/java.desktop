#include <javax/swing/text/AbstractDocument$ElementEdit.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <jcpp.h>

using $ElementArray = $Array<::javax::swing::text::Element>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $Element = ::javax::swing::text::Element;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$ElementEdit_FieldInfo_[] = {
	{"e", "Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(AbstractDocument$ElementEdit, e)},
	{"index", "I", nullptr, $PRIVATE, $field(AbstractDocument$ElementEdit, index)},
	{"removed", "[Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(AbstractDocument$ElementEdit, removed)},
	{"added", "[Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(AbstractDocument$ElementEdit, added)},
	{}
};

$MethodInfo _AbstractDocument$ElementEdit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;I[Ljavax/swing/text/Element;[Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDocument$ElementEdit::*)($Element*,int32_t,$ElementArray*,$ElementArray*)>(&AbstractDocument$ElementEdit::init$))},
	{"getChildrenAdded", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getChildrenRemoved", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$InnerClassInfo _AbstractDocument$ElementEdit_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$ElementEdit", "javax.swing.text.AbstractDocument", "ElementEdit", $PUBLIC | $STATIC},
	{"javax.swing.event.DocumentEvent$ElementChange", "javax.swing.event.DocumentEvent", "ElementChange", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$ElementEdit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.AbstractDocument$ElementEdit",
	"javax.swing.undo.AbstractUndoableEdit",
	"javax.swing.event.DocumentEvent$ElementChange",
	_AbstractDocument$ElementEdit_FieldInfo_,
	_AbstractDocument$ElementEdit_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$ElementEdit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$ElementEdit($Class* clazz) {
	return $of($alloc(AbstractDocument$ElementEdit));
}

$String* AbstractDocument$ElementEdit::toString() {
	 return this->$AbstractUndoableEdit::toString();
}

int32_t AbstractDocument$ElementEdit::hashCode() {
	 return this->$AbstractUndoableEdit::hashCode();
}

bool AbstractDocument$ElementEdit::equals(Object$* arg0) {
	 return this->$AbstractUndoableEdit::equals(arg0);
}

$Object* AbstractDocument$ElementEdit::clone() {
	 return this->$AbstractUndoableEdit::clone();
}

void AbstractDocument$ElementEdit::finalize() {
	this->$AbstractUndoableEdit::finalize();
}

void AbstractDocument$ElementEdit::init$($Element* e, int32_t index, $ElementArray* removed, $ElementArray* added) {
	$AbstractUndoableEdit::init$();
	$set(this, e, e);
	this->index = index;
	$set(this, removed, removed);
	$set(this, added, added);
}

$Element* AbstractDocument$ElementEdit::getElement() {
	return this->e;
}

int32_t AbstractDocument$ElementEdit::getIndex() {
	return this->index;
}

$ElementArray* AbstractDocument$ElementEdit::getChildrenRemoved() {
	return this->removed;
}

$ElementArray* AbstractDocument$ElementEdit::getChildrenAdded() {
	return this->added;
}

void AbstractDocument$ElementEdit::redo() {
	$AbstractUndoableEdit::redo();
	$var($ElementArray, tmp, this->removed);
	$set(this, removed, this->added);
	$set(this, added, tmp);
	$nc(($cast($AbstractDocument$BranchElement, this->e)))->replace(this->index, $nc(this->removed)->length, this->added);
}

void AbstractDocument$ElementEdit::undo() {
	$AbstractUndoableEdit::undo();
	$nc(($cast($AbstractDocument$BranchElement, this->e)))->replace(this->index, $nc(this->added)->length, this->removed);
	$var($ElementArray, tmp, this->removed);
	$set(this, removed, this->added);
	$set(this, added, tmp);
}

AbstractDocument$ElementEdit::AbstractDocument$ElementEdit() {
}

$Class* AbstractDocument$ElementEdit::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$ElementEdit, name, initialize, &_AbstractDocument$ElementEdit_ClassInfo_, allocate$AbstractDocument$ElementEdit);
	return class$;
}

$Class* AbstractDocument$ElementEdit::class$ = nullptr;

		} // text
	} // swing
} // javax