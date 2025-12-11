#include <sun/swing/FilePane$DetailsTableCellEditor.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusListener.h>
#include <java/io/File.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableCellEditor_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableCellEditor, this$0)},
	{"tf", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $FINAL, $field(FilePane$DetailsTableCellEditor, tf)},
	{}
};

$MethodInfo _FilePane$DetailsTableCellEditor_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/JTextField;)V", nullptr, $PUBLIC, $method(static_cast<void(FilePane$DetailsTableCellEditor::*)($FilePane*,$JTextField*)>(&FilePane$DetailsTableCellEditor::init$))},
	{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$DetailsTableCellEditor_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableCellEditor", "sun.swing.FilePane", "DetailsTableCellEditor", $PRIVATE},
	{}
};

$ClassInfo _FilePane$DetailsTableCellEditor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableCellEditor",
	"javax.swing.DefaultCellEditor",
	nullptr,
	_FilePane$DetailsTableCellEditor_FieldInfo_,
	_FilePane$DetailsTableCellEditor_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$DetailsTableCellEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableCellEditor($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableCellEditor));
}

void FilePane$DetailsTableCellEditor::init$($FilePane* this$0, $JTextField* tf) {
	$set(this, this$0, this$0);
	$DefaultCellEditor::init$(tf);
	$set(this, tf, tf);
	$nc(tf)->setName("Table.editor"_s);
	tf->addFocusListener(this$0->editorFocusListener);
}

$Component* FilePane$DetailsTableCellEditor::getTableCellEditorComponent($JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, $DefaultCellEditor::getTableCellEditorComponent(table, value, isSelected, row, column));
	if ($instanceOf($File, value)) {
		$nc(this->tf)->setText($($nc($(this->this$0->getFileChooser()))->getName($cast($File, value))));
		$nc(this->tf)->selectAll();
	}
	return comp;
}

FilePane$DetailsTableCellEditor::FilePane$DetailsTableCellEditor() {
}

$Class* FilePane$DetailsTableCellEditor::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableCellEditor, name, initialize, &_FilePane$DetailsTableCellEditor_ClassInfo_, allocate$FilePane$DetailsTableCellEditor);
	return class$;
}

$Class* FilePane$DetailsTableCellEditor::class$ = nullptr;

	} // swing
} // sun