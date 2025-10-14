#include <bug6711682$2.h>

#include <bug6711682.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef TRUE

using $bug6711682 = ::bug6711682;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JToggleButton = ::javax::swing::JToggleButton;
using $UIManager = ::javax::swing::UIManager;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableModel = ::javax::swing::table::TableModel;

$FieldInfo _bug6711682$2_FieldInfo_[] = {
	{"editedRow", "I", nullptr, 0, $field(bug6711682$2, editedRow)},
	{}
};

$MethodInfo _bug6711682$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6711682$2::*)()>(&bug6711682$2::init$))},
	{"addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6711682$2_EnclosingMethodInfo_ = {
	"bug6711682",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _bug6711682$2_InnerClassesInfo_[] = {
	{"bug6711682$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6711682$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6711682$2",
	"java.lang.Object",
	"javax.swing.table.TableCellEditor",
	_bug6711682$2_FieldInfo_,
	_bug6711682$2_MethodInfo_,
	nullptr,
	&_bug6711682$2_EnclosingMethodInfo_,
	_bug6711682$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6711682"
};

$Object* allocate$bug6711682$2($Class* clazz) {
	return $of($alloc(bug6711682$2));
}

void bug6711682$2::init$() {
}

$Component* bug6711682$2::getTableCellEditorComponent($JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) {
	this->editedRow = row;
	$init($bug6711682);
	$init($Boolean);
	$nc($bug6711682::editorCb)->setSelected($nc($Boolean::TRUE)->equals(value));
	$nc($bug6711682::editorCb)->setBackground($($UIManager::getColor("Table.selectionBackground"_s)));
	return $bug6711682::editorCb;
}

void bug6711682$2::addCellEditorListener($CellEditorListener* l) {
}

void bug6711682$2::cancelCellEditing() {
}

$Object* bug6711682$2::getCellEditorValue() {
	$init($bug6711682);
	return $of($Boolean::valueOf($nc($bug6711682::editorCb)->isSelected()));
}

bool bug6711682$2::isCellEditable($EventObject* anEvent) {
	return true;
}

void bug6711682$2::removeCellEditorListener($CellEditorListener* l) {
}

bool bug6711682$2::shouldSelectCell($EventObject* anEvent) {
	return true;
}

bool bug6711682$2::stopCellEditing() {
	$init($bug6711682);
	$nc($($nc($bug6711682::table)->getModel()))->setValueAt($($Boolean::valueOf($nc($bug6711682::editorCb)->isSelected())), this->editedRow, 0);
	return true;
}

bug6711682$2::bug6711682$2() {
}

$Class* bug6711682$2::load$($String* name, bool initialize) {
	$loadClass(bug6711682$2, name, initialize, &_bug6711682$2_ClassInfo_, allocate$bug6711682$2);
	return class$;
}

$Class* bug6711682$2::class$ = nullptr;