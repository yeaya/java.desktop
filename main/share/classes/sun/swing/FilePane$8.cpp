#include <sun/swing/FilePane$8.h>

#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/table/TableCellEditor.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef SINGLE_SELECTION

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $JViewport = ::javax::swing::JViewport;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$8_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$8, this$0)},
	{}
};

$MethodInfo _FilePane$8_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(static_cast<void(FilePane$8::*)($FilePane*)>(&FilePane$8::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$8_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	"createDetailsView",
	"()Ljavax/swing/JPanel;"
};

$InnerClassInfo _FilePane$8_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$8",
	"java.awt.event.MouseAdapter",
	nullptr,
	_FilePane$8_FieldInfo_,
	_FilePane$8_MethodInfo_,
	nullptr,
	&_FilePane$8_EnclosingMethodInfo_,
	_FilePane$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$8($Class* clazz) {
	return $of($alloc(FilePane$8));
}

void FilePane$8::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void FilePane$8::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollPane, jsp, $cast($JScrollPane, $nc(e)->getComponent()));
	$var($JTable, table, $cast($JTable, $nc($($nc(jsp)->getViewport()))->getView()));
	bool var$0 = !e->isShiftDown();
	if (var$0 || $nc($($nc(table)->getSelectionModel()))->getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) {
		this->this$0->clearSelection();
		$var($TableCellEditor, tce, table->getCellEditor());
		if (tce != nullptr) {
			tce->stopCellEditing();
		}
	}
}

FilePane$8::FilePane$8() {
}

$Class* FilePane$8::load$($String* name, bool initialize) {
	$loadClass(FilePane$8, name, initialize, &_FilePane$8_ClassInfo_, allocate$FilePane$8);
	return class$;
}

$Class* FilePane$8::class$ = nullptr;

	} // swing
} // sun