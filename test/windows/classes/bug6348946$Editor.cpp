#include <bug6348946$Editor.h>

#include <bug6348946$Editor$1.h>
#include <bug6348946.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractCellEditor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $bug6348946 = ::bug6348946;
using $bug6348946$Editor$1 = ::bug6348946$Editor$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractCellEditor = ::javax::swing::AbstractCellEditor;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $JTable = ::javax::swing::JTable;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;

$FieldInfo _bug6348946$Editor_FieldInfo_[] = {
	{"slider", "Ljavax/swing/JSlider;", nullptr, $PRIVATE, $field(bug6348946$Editor, slider)},
	{}
};

$MethodInfo _bug6348946$Editor_MethodInfo_[] = {
	{"*addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"*cancelCellEditing", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6348946$Editor::*)()>(&bug6348946$Editor::init$))},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"*isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"*shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"*stopCellEditing", "()Z", nullptr, $PUBLIC},
	{"*removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6348946$Editor_InnerClassesInfo_[] = {
	{"bug6348946$Editor", "bug6348946", "Editor", $PRIVATE | $STATIC},
	{"bug6348946$Editor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6348946$Editor_ClassInfo_ = {
	$ACC_SUPER,
	"bug6348946$Editor",
	"javax.swing.AbstractCellEditor",
	"javax.swing.table.TableCellEditor",
	_bug6348946$Editor_FieldInfo_,
	_bug6348946$Editor_MethodInfo_,
	nullptr,
	nullptr,
	_bug6348946$Editor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6348946"
};

$Object* allocate$bug6348946$Editor($Class* clazz) {
	return $of($alloc(bug6348946$Editor));
}

bool bug6348946$Editor::isCellEditable($EventObject* arg0) {
	 return this->$AbstractCellEditor::isCellEditable(arg0);
}

bool bug6348946$Editor::shouldSelectCell($EventObject* arg0) {
	 return this->$AbstractCellEditor::shouldSelectCell(arg0);
}

bool bug6348946$Editor::stopCellEditing() {
	 return this->$AbstractCellEditor::stopCellEditing();
}

void bug6348946$Editor::cancelCellEditing() {
	this->$AbstractCellEditor::cancelCellEditing();
}

void bug6348946$Editor::addCellEditorListener($CellEditorListener* arg0) {
	this->$AbstractCellEditor::addCellEditorListener(arg0);
}

void bug6348946$Editor::removeCellEditorListener($CellEditorListener* arg0) {
	this->$AbstractCellEditor::removeCellEditorListener(arg0);
}

int32_t bug6348946$Editor::hashCode() {
	 return this->$AbstractCellEditor::hashCode();
}

bool bug6348946$Editor::equals(Object$* arg0) {
	 return this->$AbstractCellEditor::equals(arg0);
}

$Object* bug6348946$Editor::clone() {
	 return this->$AbstractCellEditor::clone();
}

$String* bug6348946$Editor::toString() {
	 return this->$AbstractCellEditor::toString();
}

void bug6348946$Editor::finalize() {
	this->$AbstractCellEditor::finalize();
}

$Component* bug6348946$Editor::getTableCellEditorComponent($JTable* table, Object$* value, bool isSelected, int32_t row, int32_t col) {
	int32_t val = $nc(($cast($Integer, value)))->intValue();
	$nc(this->slider)->setValue(val);
	return this->slider;
}

void bug6348946$Editor::init$() {
	$AbstractCellEditor::init$();
	$set(this, slider, $new($JSlider, 0, 10));
	$nc(this->slider)->addChangeListener($$new($bug6348946$Editor$1, this));
}

$Object* bug6348946$Editor::getCellEditorValue() {
	return $of($Integer::valueOf($nc(this->slider)->getValue()));
}

bug6348946$Editor::bug6348946$Editor() {
}

$Class* bug6348946$Editor::load$($String* name, bool initialize) {
	$loadClass(bug6348946$Editor, name, initialize, &_bug6348946$Editor_ClassInfo_, allocate$bug6348946$Editor);
	return class$;
}

$Class* bug6348946$Editor::class$ = nullptr;