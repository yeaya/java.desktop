#include <sun/swing/FilePane$6.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef HEADER_ROW
#undef VK_ESCAPE

using $AWTEvent = ::java::awt::AWTEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTable = ::javax::swing::JTable;
using $KeyStroke = ::javax::swing::KeyStroke;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $TableModel = ::javax::swing::table::TableModel;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$6_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$6, this$0)},
	{"val$chooser", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$6, val$chooser)},
	{}
};

$MethodInfo _FilePane$6_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/table/TableModel;Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(static_cast<void(FilePane$6::*)($FilePane*,$TableModel*,$JFileChooser*)>(&FilePane$6::init$))},
	{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED},
	{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$6_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	"createDetailsView",
	"()Ljavax/swing/JPanel;"
};

$InnerClassInfo _FilePane$6_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$6",
	"javax.swing.JTable",
	nullptr,
	_FilePane$6_FieldInfo_,
	_FilePane$6_MethodInfo_,
	nullptr,
	&_FilePane$6_EnclosingMethodInfo_,
	_FilePane$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$6($Class* clazz) {
	return $of($alloc(FilePane$6));
}

void FilePane$6::init$($FilePane* this$0, $TableModel* dm, $JFileChooser* val$chooser) {
	$set(this, this$0, this$0);
	$set(this, val$chooser, val$chooser);
	$JTable::init$(dm);
}

bool FilePane$6::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	bool var$0 = $nc(e)->getKeyCode() == $KeyEvent::VK_ESCAPE;
	if (var$0 && getCellEditor() == nullptr) {
		$nc(this->val$chooser)->dispatchEvent(e);
		return true;
	}
	return $JTable::processKeyBinding(ks, e, condition, pressed);
}

void FilePane$6::tableChanged($TableModelEvent* e) {
	$JTable::tableChanged(e);
	if ($nc(e)->getFirstRow() == $TableModelEvent::HEADER_ROW) {
		this->this$0->updateDetailsColumnModel(this);
	}
}

FilePane$6::FilePane$6() {
}

$Class* FilePane$6::load$($String* name, bool initialize) {
	$loadClass(FilePane$6, name, initialize, &_FilePane$6_ClassInfo_, allocate$FilePane$6);
	return class$;
}

$Class* FilePane$6::class$ = nullptr;

	} // swing
} // sun