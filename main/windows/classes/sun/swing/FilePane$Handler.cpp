#include <sun/swing/FilePane$Handler.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/FilePane$FileChooserUIAccessor.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$Handler_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$Handler, this$0)},
	{"doubleClickListener", "Ljava/awt/event/MouseListener;", nullptr, $PRIVATE, $field(FilePane$Handler, doubleClickListener)},
	{}
};

$MethodInfo _FilePane$Handler_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane$Handler::*)($FilePane*)>(&FilePane$Handler::init$))},
	{"getDoubleClickListener", "()Ljava/awt/event/MouseListener;", nullptr, $PRIVATE, $method(static_cast<$MouseListener*(FilePane$Handler::*)()>(&FilePane$Handler::getDoubleClickListener))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$Handler_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$Handler", "sun.swing.FilePane", "Handler", $PRIVATE},
	{}
};

$ClassInfo _FilePane$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$Handler",
	"java.lang.Object",
	"java.awt.event.MouseListener",
	_FilePane$Handler_FieldInfo_,
	_FilePane$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$Handler($Class* clazz) {
	return $of($alloc(FilePane$Handler));
}

void FilePane$Handler::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
}

void FilePane$Handler::mouseClicked($MouseEvent* evt$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($MouseEvent, evt, evt$renamed);
	$var($JComponent, source, $cast($JComponent, $nc(evt)->getSource()));
	int32_t index = 0;
	if ($instanceOf($JList, source)) {
		index = $SwingUtilities2::loc2IndexFileList(this->this$0->list$, $(evt->getPoint()));
	} else if ($instanceOf($JTable, source)) {
		$var($JTable, table, $cast($JTable, source));
		$var($Point, p, evt->getPoint());
		index = $nc(table)->rowAtPoint(p);
		bool pointOutsidePrefSize = $SwingUtilities2::pointOutsidePrefSize(table, index, table->columnAtPoint(p), p);
		if (pointOutsidePrefSize && !this->this$0->fullRowSelection) {
			return;
		}
		if (index >= 0 && this->this$0->list$ != nullptr && $nc(this->this$0->listSelectionModel)->isSelectedIndex(index)) {
			$var($Rectangle, r, $nc(this->this$0->list$)->getCellBounds(index, index));
			$var($Component, var$0, static_cast<$Component*>(this->this$0->list$));
			int32_t var$1 = evt->getID();
			int64_t var$2 = evt->getWhen();
			int32_t var$3 = evt->getModifiers();
			int32_t var$4 = $nc(r)->x + 1;
			int32_t var$5 = r->y + r->height / 2;
			int32_t var$6 = evt->getXOnScreen();
			int32_t var$7 = evt->getYOnScreen();
			int32_t var$8 = evt->getClickCount();
			bool var$9 = evt->isPopupTrigger();
			$var($MouseEvent, newEvent, $new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, evt->getButton()));
			$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
			$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(evt));
			$assign(evt, newEvent);
		}
	} else {
		return;
	}
	if (index >= 0 && $SwingUtilities::isLeftMouseButton(evt)) {
		$var($JFileChooser, fc, this->this$0->getFileChooser());
		if (evt->getClickCount() == 1 && $instanceOf($JList, source)) {
			bool var$12 = !$nc(fc)->isMultiSelectionEnabled();
			bool var$11 = (var$12 || $nc($($nc(fc)->getSelectedFiles()))->length <= 1) && index >= 0;
			bool var$10 = var$11 && $nc(this->this$0->listSelectionModel)->isSelectedIndex(index);
			if (var$10 && this->this$0->getEditIndex() == index && this->this$0->editFile == nullptr) {
				this->this$0->editFileName(index);
			} else if (index >= 0) {
				this->this$0->setEditIndex(index);
			} else {
				this->this$0->resetEditIndex();
			}
		} else if (evt->getClickCount() == 2) {
			this->this$0->resetEditIndex();
		}
	}
	if (getDoubleClickListener() != nullptr) {
		$nc($(getDoubleClickListener()))->mouseClicked(evt);
	}
}

void FilePane$Handler::mouseEntered($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, source, $cast($JComponent, $nc(evt)->getSource()));
	if ($instanceOf($JTable, source)) {
		$var($JTable, table, $cast($JTable, evt->getSource()));
		$var($TransferHandler, th1, $nc($(this->this$0->getFileChooser()))->getTransferHandler());
		$var($TransferHandler, th2, $nc(table)->getTransferHandler());
		if (th1 != th2) {
			table->setTransferHandler(th1);
		}
		bool dragEnabled = $nc($(this->this$0->getFileChooser()))->getDragEnabled();
		if (dragEnabled != table->getDragEnabled()) {
			table->setDragEnabled(dragEnabled);
		}
	} else if ($instanceOf($JList, source)) {
		if (getDoubleClickListener() != nullptr) {
			$nc($(getDoubleClickListener()))->mouseEntered(evt);
		}
	}
}

void FilePane$Handler::mouseExited($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JList, $($nc(evt)->getSource()))) {
		if (getDoubleClickListener() != nullptr) {
			$nc($(getDoubleClickListener()))->mouseExited(evt);
		}
	}
}

void FilePane$Handler::mousePressed($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JList, $($nc(evt)->getSource()))) {
		if (getDoubleClickListener() != nullptr) {
			$nc($(getDoubleClickListener()))->mousePressed(evt);
		}
	}
}

void FilePane$Handler::mouseReleased($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JList, $($nc(evt)->getSource()))) {
		if (getDoubleClickListener() != nullptr) {
			$nc($(getDoubleClickListener()))->mouseReleased(evt);
		}
	}
}

$MouseListener* FilePane$Handler::getDoubleClickListener() {
	if (this->doubleClickListener == nullptr && this->this$0->list$ != nullptr) {
		$set(this, doubleClickListener, $nc(this->this$0->fileChooserUIAccessor)->createDoubleClickListener(this->this$0->list$));
	}
	return this->doubleClickListener;
}

FilePane$Handler::FilePane$Handler() {
}

$Class* FilePane$Handler::load$($String* name, bool initialize) {
	$loadClass(FilePane$Handler, name, initialize, &_FilePane$Handler_ClassInfo_, allocate$FilePane$Handler);
	return class$;
}

$Class* FilePane$Handler::class$ = nullptr;

	} // swing
} // sun