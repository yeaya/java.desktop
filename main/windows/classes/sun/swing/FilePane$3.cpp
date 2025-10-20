#include <sun/swing/FilePane$3.h>

#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

namespace sun {
	namespace swing {

$MethodInfo _FilePane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FilePane$3::*)()>(&FilePane$3::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"repaintListSelection", "(Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PRIVATE, $method(static_cast<void(FilePane$3::*)($JList*)>(&FilePane$3::repaintListSelection))},
	{"repaintSelection", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane$3::*)(Object$*)>(&FilePane$3::repaintSelection))},
	{"repaintTableSelection", "(Ljavax/swing/JTable;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane$3::*)($JTable*)>(&FilePane$3::repaintTableSelection))},
	{}
};

$EnclosingMethodInfo _FilePane$3_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	nullptr,
	nullptr
};

$InnerClassInfo _FilePane$3_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$3",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	nullptr,
	_FilePane$3_MethodInfo_,
	nullptr,
	&_FilePane$3_EnclosingMethodInfo_,
	_FilePane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$3($Class* clazz) {
	return $of($alloc(FilePane$3));
}

void FilePane$3::init$() {
}

void FilePane$3::focusGained($FocusEvent* fe) {
	repaintSelection($($nc(fe)->getSource()));
}

void FilePane$3::focusLost($FocusEvent* fe) {
	repaintSelection($($nc(fe)->getSource()));
}

void FilePane$3::repaintSelection(Object$* source) {
	if ($instanceOf($JList, source)) {
		repaintListSelection($cast($JList, source));
	} else if ($instanceOf($JTable, source)) {
		repaintTableSelection($cast($JTable, source));
	}
}

void FilePane$3::repaintListSelection($JList* list) {
	$useLocalCurrentObjectStackCache();
	$var($ints, indices, $nc(list)->getSelectedIndices());
	{
		$var($ints, arr$, indices);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				$var($Rectangle, bounds, list->getCellBounds(i, i));
				list->repaint(bounds);
			}
		}
	}
}

void FilePane$3::repaintTableSelection($JTable* table) {
	$useLocalCurrentObjectStackCache();
	int32_t minRow = $nc($($nc(table)->getSelectionModel()))->getMinSelectionIndex();
	int32_t maxRow = $nc($(table->getSelectionModel()))->getMaxSelectionIndex();
	if (minRow == -1 || maxRow == -1) {
		return;
	}
	int32_t col0 = table->convertColumnIndexToView(0);
	$var($Rectangle, first, table->getCellRect(minRow, col0, false));
	$var($Rectangle, last, table->getCellRect(maxRow, col0, false));
	$var($Rectangle, dirty, $nc(first)->union$(last));
	table->repaint(dirty);
}

FilePane$3::FilePane$3() {
}

$Class* FilePane$3::load$($String* name, bool initialize) {
	$loadClass(FilePane$3, name, initialize, &_FilePane$3_ClassInfo_, allocate$FilePane$3);
	return class$;
}

$Class* FilePane$3::class$ = nullptr;

	} // swing
} // sun