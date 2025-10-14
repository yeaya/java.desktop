#include <javax/swing/DefaultCellEditor.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Attribute.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/AbstractCellEditor.h>
#include <javax/swing/DefaultCellEditor$1.h>
#include <javax/swing/DefaultCellEditor$2.h>
#include <javax/swing/DefaultCellEditor$3.h>
#include <javax/swing/DefaultCellEditor$EditorDelegate.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JTree.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef TRUE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionListener = ::java::awt::event::ActionListener;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractCellEditor = ::javax::swing::AbstractCellEditor;
using $DefaultCellEditor$1 = ::javax::swing::DefaultCellEditor$1;
using $DefaultCellEditor$2 = ::javax::swing::DefaultCellEditor$2;
using $DefaultCellEditor$3 = ::javax::swing::DefaultCellEditor$3;
using $DefaultCellEditor$EditorDelegate = ::javax::swing::DefaultCellEditor$EditorDelegate;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JTree = ::javax::swing::JTree;
using $Border = ::javax::swing::border::Border;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;

namespace javax {
	namespace swing {

$Attribute DefaultCellEditor_Attribute_var$1[] = {
	{'s', "component"},
	{'-'}
};

$NamedAttribute DefaultCellEditor_Attribute_var$0[] = {
	{"value", '[', DefaultCellEditor_Attribute_var$1},
	{}
};

$CompoundAttribute _DefaultCellEditor_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", DefaultCellEditor_Attribute_var$0},
	{}
};

$FieldInfo _DefaultCellEditor_FieldInfo_[] = {
	{"editorComponent", "Ljavax/swing/JComponent;", nullptr, $PROTECTED, $field(DefaultCellEditor, editorComponent)},
	{"delegate", "Ljavax/swing/DefaultCellEditor$EditorDelegate;", nullptr, $PROTECTED, $field(DefaultCellEditor, delegate)},
	{"clickCountToStart", "I", nullptr, $PROTECTED, $field(DefaultCellEditor, clickCountToStart)},
	{}
};

$MethodInfo _DefaultCellEditor_MethodInfo_[] = {
	{"*addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTextField;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultCellEditor::*)($JTextField*)>(&DefaultCellEditor::init$)), nullptr, nullptr, _DefaultCellEditor_MethodAnnotations_init$0},
	{"<init>", "(Ljavax/swing/JCheckBox;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultCellEditor::*)($JCheckBox*)>(&DefaultCellEditor::init$))},
	{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<*>;)V", $PUBLIC, $method(static_cast<void(DefaultCellEditor::*)($JComboBox*)>(&DefaultCellEditor::init$))},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getClickCountToStart", "()I", nullptr, $PUBLIC},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getTreeCellEditorComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZI)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"*removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"setClickCountToStart", "(I)V", nullptr, $PUBLIC},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultCellEditor_InnerClassesInfo_[] = {
	{"javax.swing.DefaultCellEditor$EditorDelegate", "javax.swing.DefaultCellEditor", "EditorDelegate", $PROTECTED},
	{"javax.swing.DefaultCellEditor$3", nullptr, nullptr, 0},
	{"javax.swing.DefaultCellEditor$2", nullptr, nullptr, 0},
	{"javax.swing.DefaultCellEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultCellEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultCellEditor",
	"javax.swing.AbstractCellEditor",
	"javax.swing.table.TableCellEditor,javax.swing.tree.TreeCellEditor",
	_DefaultCellEditor_FieldInfo_,
	_DefaultCellEditor_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultCellEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.DefaultCellEditor$EditorDelegate,javax.swing.DefaultCellEditor$3,javax.swing.DefaultCellEditor$2,javax.swing.DefaultCellEditor$1"
};

$Object* allocate$DefaultCellEditor($Class* clazz) {
	return $of($alloc(DefaultCellEditor));
}

void DefaultCellEditor::addCellEditorListener($CellEditorListener* l) {
	this->$AbstractCellEditor::addCellEditorListener(l);
}

void DefaultCellEditor::removeCellEditorListener($CellEditorListener* l) {
	this->$AbstractCellEditor::removeCellEditorListener(l);
}

int32_t DefaultCellEditor::hashCode() {
	 return this->$AbstractCellEditor::hashCode();
}

bool DefaultCellEditor::equals(Object$* arg0) {
	 return this->$AbstractCellEditor::equals(arg0);
}

$Object* DefaultCellEditor::clone() {
	 return this->$AbstractCellEditor::clone();
}

$String* DefaultCellEditor::toString() {
	 return this->$AbstractCellEditor::toString();
}

void DefaultCellEditor::finalize() {
	this->$AbstractCellEditor::finalize();
}

void DefaultCellEditor::init$($JTextField* textField) {
	$AbstractCellEditor::init$();
	this->clickCountToStart = 1;
	$set(this, editorComponent, textField);
	this->clickCountToStart = 2;
	$set(this, delegate, $new($DefaultCellEditor$1, this, textField));
	$nc(textField)->addActionListener(this->delegate);
}

void DefaultCellEditor::init$($JCheckBox* checkBox) {
	$AbstractCellEditor::init$();
	this->clickCountToStart = 1;
	$set(this, editorComponent, checkBox);
	$set(this, delegate, $new($DefaultCellEditor$2, this, checkBox));
	$nc(checkBox)->addActionListener(this->delegate);
	checkBox->setRequestFocusEnabled(false);
}

void DefaultCellEditor::init$($JComboBox* comboBox) {
	$AbstractCellEditor::init$();
	this->clickCountToStart = 1;
	$set(this, editorComponent, comboBox);
	$init($Boolean);
	$nc(comboBox)->putClientProperty("JComboBox.isTableCellEditor"_s, $Boolean::TRUE);
	$set(this, delegate, $new($DefaultCellEditor$3, this, comboBox));
	comboBox->addActionListener(this->delegate);
}

$Component* DefaultCellEditor::getComponent() {
	return this->editorComponent;
}

void DefaultCellEditor::setClickCountToStart(int32_t count) {
	this->clickCountToStart = count;
}

int32_t DefaultCellEditor::getClickCountToStart() {
	return this->clickCountToStart;
}

$Object* DefaultCellEditor::getCellEditorValue() {
	return $of($nc(this->delegate)->getCellEditorValue());
}

bool DefaultCellEditor::isCellEditable($EventObject* anEvent) {
	return $nc(this->delegate)->isCellEditable(anEvent);
}

bool DefaultCellEditor::shouldSelectCell($EventObject* anEvent) {
	return $nc(this->delegate)->shouldSelectCell(anEvent);
}

bool DefaultCellEditor::stopCellEditing() {
	return $nc(this->delegate)->stopCellEditing();
}

void DefaultCellEditor::cancelCellEditing() {
	$nc(this->delegate)->cancelCellEditing();
}

$Component* DefaultCellEditor::getTreeCellEditorComponent($JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) {
	$var($String, stringValue, $nc(tree)->convertValueToText(value, isSelected, expanded, leaf, row, false));
	$nc(this->delegate)->setValue(stringValue);
	return this->editorComponent;
}

$Component* DefaultCellEditor::getTableCellEditorComponent($JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) {
	$nc(this->delegate)->setValue(value);
	if ($instanceOf($JCheckBox, this->editorComponent)) {
		$var($TableCellRenderer, renderer, $nc(table)->getCellRenderer(row, column));
		$var($Component, c, $nc(renderer)->getTableCellRendererComponent(table, value, isSelected, true, row, column));
		if (c != nullptr) {
			$nc(this->editorComponent)->setOpaque(true);
			$nc(this->editorComponent)->setBackground($(c->getBackground()));
			if ($instanceOf($JComponent, c)) {
				$nc(this->editorComponent)->setBorder($($nc(($cast($JComponent, c)))->getBorder()));
			}
		} else {
			$nc(this->editorComponent)->setOpaque(false);
		}
	}
	return this->editorComponent;
}

DefaultCellEditor::DefaultCellEditor() {
}

$Class* DefaultCellEditor::load$($String* name, bool initialize) {
	$loadClass(DefaultCellEditor, name, initialize, &_DefaultCellEditor_ClassInfo_, allocate$DefaultCellEditor);
	return class$;
}

$Class* DefaultCellEditor::class$ = nullptr;

	} // swing
} // javax