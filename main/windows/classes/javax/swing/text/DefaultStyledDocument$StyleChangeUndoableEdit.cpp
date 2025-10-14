#include <javax/swing/text/DefaultStyledDocument$StyleChangeUndoableEdit.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultStyledDocument$StyleChangeUndoableEdit_FieldInfo_[] = {
	{"element", "Ljavax/swing/text/AbstractDocument$AbstractElement;", nullptr, $PROTECTED, $field(DefaultStyledDocument$StyleChangeUndoableEdit, element)},
	{"newStyle", "Ljavax/swing/text/Style;", nullptr, $PROTECTED, $field(DefaultStyledDocument$StyleChangeUndoableEdit, newStyle)},
	{"oldStyle", "Ljavax/swing/text/AttributeSet;", nullptr, $PROTECTED, $field(DefaultStyledDocument$StyleChangeUndoableEdit, oldStyle)},
	{}
};

$MethodInfo _DefaultStyledDocument$StyleChangeUndoableEdit_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument$AbstractElement;Ljavax/swing/text/Style;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument$StyleChangeUndoableEdit::*)($AbstractDocument$AbstractElement*,$Style*)>(&DefaultStyledDocument$StyleChangeUndoableEdit::init$))},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$InnerClassInfo _DefaultStyledDocument$StyleChangeUndoableEdit_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$StyleChangeUndoableEdit", "javax.swing.text.DefaultStyledDocument", "StyleChangeUndoableEdit", $STATIC},
	{}
};

$ClassInfo _DefaultStyledDocument$StyleChangeUndoableEdit_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$StyleChangeUndoableEdit",
	"javax.swing.undo.AbstractUndoableEdit",
	nullptr,
	_DefaultStyledDocument$StyleChangeUndoableEdit_FieldInfo_,
	_DefaultStyledDocument$StyleChangeUndoableEdit_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$StyleChangeUndoableEdit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$StyleChangeUndoableEdit($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$StyleChangeUndoableEdit));
}

void DefaultStyledDocument$StyleChangeUndoableEdit::init$($AbstractDocument$AbstractElement* element, $Style* newStyle) {
	$AbstractUndoableEdit::init$();
	$set(this, element, element);
	$set(this, newStyle, newStyle);
	$set(this, oldStyle, $nc(element)->getResolveParent());
}

void DefaultStyledDocument$StyleChangeUndoableEdit::redo() {
	$AbstractUndoableEdit::redo();
	$nc(this->element)->setResolveParent(this->newStyle);
}

void DefaultStyledDocument$StyleChangeUndoableEdit::undo() {
	$AbstractUndoableEdit::undo();
	$nc(this->element)->setResolveParent(this->oldStyle);
}

DefaultStyledDocument$StyleChangeUndoableEdit::DefaultStyledDocument$StyleChangeUndoableEdit() {
}

$Class* DefaultStyledDocument$StyleChangeUndoableEdit::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$StyleChangeUndoableEdit, name, initialize, &_DefaultStyledDocument$StyleChangeUndoableEdit_ClassInfo_, allocate$DefaultStyledDocument$StyleChangeUndoableEdit);
	return class$;
}

$Class* DefaultStyledDocument$StyleChangeUndoableEdit::class$ = nullptr;

		} // text
	} // swing
} // javax