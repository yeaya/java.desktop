#include <javax/swing/AbstractCellEditor.h>

#include <java/util/EventListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/CellEditor.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

using $CellEditorListenerArray = $Array<::javax::swing::event::CellEditorListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventObject = ::java::util::EventObject;
using $CellEditor = ::javax::swing::CellEditor;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _AbstractCellEditor_FieldInfo_[] = {
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(AbstractCellEditor, listenerList)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(AbstractCellEditor, changeEvent)},
	{}
};

$MethodInfo _AbstractCellEditor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractCellEditor::*)()>(&AbstractCellEditor::init$))},
	{"addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC},
	{"fireEditingCanceled", "()V", nullptr, $PROTECTED},
	{"fireEditingStopped", "()V", nullptr, $PROTECTED},
	{"getCellEditorListeners", "()[Ljavax/swing/event/CellEditorListener;", nullptr, $PUBLIC},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractCellEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.AbstractCellEditor",
	"java.lang.Object",
	"javax.swing.CellEditor,java.io.Serializable",
	_AbstractCellEditor_FieldInfo_,
	_AbstractCellEditor_MethodInfo_
};

$Object* allocate$AbstractCellEditor($Class* clazz) {
	return $of($alloc(AbstractCellEditor));
}

int32_t AbstractCellEditor::hashCode() {
	 return this->$CellEditor::hashCode();
}

bool AbstractCellEditor::equals(Object$* arg0) {
	 return this->$CellEditor::equals(arg0);
}

$Object* AbstractCellEditor::clone() {
	 return this->$CellEditor::clone();
}

$String* AbstractCellEditor::toString() {
	 return this->$CellEditor::toString();
}

void AbstractCellEditor::finalize() {
	this->$CellEditor::finalize();
}

void AbstractCellEditor::init$() {
	$set(this, listenerList, $new($EventListenerList));
	$set(this, changeEvent, nullptr);
}

bool AbstractCellEditor::isCellEditable($EventObject* e) {
	return true;
}

bool AbstractCellEditor::shouldSelectCell($EventObject* anEvent) {
	return true;
}

bool AbstractCellEditor::stopCellEditing() {
	fireEditingStopped();
	return true;
}

void AbstractCellEditor::cancelCellEditing() {
	fireEditingCanceled();
}

void AbstractCellEditor::addCellEditorListener($CellEditorListener* l) {
	$load($CellEditorListener);
	$nc(this->listenerList)->add($CellEditorListener::class$, l);
}

void AbstractCellEditor::removeCellEditorListener($CellEditorListener* l) {
	$load($CellEditorListener);
	$nc(this->listenerList)->remove($CellEditorListener::class$, l);
}

$CellEditorListenerArray* AbstractCellEditor::getCellEditorListeners() {
	$load($CellEditorListener);
	return $fcast($CellEditorListenerArray, $nc(this->listenerList)->getListeners($CellEditorListener::class$));
}

void AbstractCellEditor::fireEditingStopped() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($CellEditorListener);
		if ($equals(listeners->get(i), $CellEditorListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($CellEditorListener, listeners->get(i + 1))))->editingStopped(this->changeEvent);
		}
	}
}

void AbstractCellEditor::fireEditingCanceled() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($CellEditorListener);
		if ($equals(listeners->get(i), $CellEditorListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($CellEditorListener, listeners->get(i + 1))))->editingCanceled(this->changeEvent);
		}
	}
}

AbstractCellEditor::AbstractCellEditor() {
}

$Class* AbstractCellEditor::load$($String* name, bool initialize) {
	$loadClass(AbstractCellEditor, name, initialize, &_AbstractCellEditor_ClassInfo_, allocate$AbstractCellEditor);
	return class$;
}

$Class* AbstractCellEditor::class$ = nullptr;

	} // swing
} // javax