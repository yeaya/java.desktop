#include <sun/swing/FilePane$DetailsTableRowSorter$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TableModelEvent.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $TableModelListener = ::javax::swing::event::TableModelListener;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableRowSorter$1_FieldInfo_[] = {
	{"this$1", "Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$1, this$1)},
	{"val$this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$1, val$this$0)},
	{}
};

$MethodInfo _FilePane$DetailsTableRowSorter$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane$DetailsTableRowSorter;Lsun/swing/FilePane;)V", "()V", 0, $method(static_cast<void(FilePane$DetailsTableRowSorter$1::*)($FilePane$DetailsTableRowSorter*,$FilePane*)>(&FilePane$DetailsTableRowSorter$1::init$))},
	{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$DetailsTableRowSorter$1_EnclosingMethodInfo_ = {
	"sun.swing.FilePane$DetailsTableRowSorter",
	"<init>",
	"(Lsun/swing/FilePane;)V"
};

$InnerClassInfo _FilePane$DetailsTableRowSorter$1_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableRowSorter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$DetailsTableRowSorter$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableRowSorter$1",
	"java.lang.Object",
	"javax.swing.event.TableModelListener",
	_FilePane$DetailsTableRowSorter$1_FieldInfo_,
	_FilePane$DetailsTableRowSorter$1_MethodInfo_,
	nullptr,
	&_FilePane$DetailsTableRowSorter$1_EnclosingMethodInfo_,
	_FilePane$DetailsTableRowSorter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableRowSorter$1($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableRowSorter$1));
}

void FilePane$DetailsTableRowSorter$1::init$($FilePane$DetailsTableRowSorter* this$1, $FilePane* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void FilePane$DetailsTableRowSorter$1::tableChanged($TableModelEvent* e) {
	this->this$1->modelStructureChanged();
}

FilePane$DetailsTableRowSorter$1::FilePane$DetailsTableRowSorter$1() {
}

$Class* FilePane$DetailsTableRowSorter$1::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableRowSorter$1, name, initialize, &_FilePane$DetailsTableRowSorter$1_ClassInfo_, allocate$FilePane$DetailsTableRowSorter$1);
	return class$;
}

$Class* FilePane$DetailsTableRowSorter$1::class$ = nullptr;

	} // swing
} // sun