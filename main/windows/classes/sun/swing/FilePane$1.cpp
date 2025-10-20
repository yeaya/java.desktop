#include <sun/swing/FilePane$1.h>

#include <java/awt/Rectangle.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $File = ::java::io::File;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTable = ::javax::swing::JTable;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $UIManager = ::javax::swing::UIManager;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$1_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$1, this$0)},
	{"timeFactor", "J", nullptr, $PRIVATE | $FINAL, $field(FilePane$1, timeFactor)},
	{"typedString", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(FilePane$1, typedString)},
	{"lastTime", "J", nullptr, $PRIVATE, $field(FilePane$1, lastTime)},
	{}
};

$MethodInfo _FilePane$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(static_cast<void(FilePane$1::*)($FilePane*)>(&FilePane$1::init$))},
	{"getNextMatch", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FilePane$1::*)(int32_t,int32_t)>(&FilePane$1::getNextMatch))},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$1_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	nullptr,
	nullptr
};

$InnerClassInfo _FilePane$1_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$1",
	"java.awt.event.KeyAdapter",
	nullptr,
	_FilePane$1_FieldInfo_,
	_FilePane$1_MethodInfo_,
	nullptr,
	&_FilePane$1_EnclosingMethodInfo_,
	_FilePane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$1($Class* clazz) {
	return $of($alloc(FilePane$1));
}

void FilePane$1::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
	$set(this, typedString, $new($StringBuilder));
	this->lastTime = 1000;
	{
		$var($Long, l, $cast($Long, $UIManager::get("Table.timeFactor"_s)));
		this->timeFactor = (l != nullptr) ? $nc(l)->longValue() : (int64_t)1000;
	}
}

void FilePane$1::keyTyped($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($BasicDirectoryModel, model, this->this$0->getModel());
	int32_t rowCount = $nc(model)->getSize();
	bool var$1 = this->this$0->detailsTable == nullptr || rowCount == 0 || $nc(e)->isAltDown();
	bool var$0 = var$1 || $nc(e)->isControlDown();
	if (var$0 || $nc(e)->isMetaDown()) {
		return;
	}
	$var($InputMap, inputMap, $nc(this->this$0->detailsTable)->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$var($KeyStroke, key, $KeyStroke::getKeyStrokeForEvent(e));
	if (inputMap != nullptr && inputMap->get(key) != nullptr) {
		return;
	}
	int32_t startIndex = $nc($($nc(this->this$0->detailsTable)->getSelectionModel()))->getLeadSelectionIndex();
	if (startIndex < 0) {
		startIndex = 0;
	}
	if (startIndex >= rowCount) {
		startIndex = rowCount - 1;
	}
	char16_t c = $nc(e)->getKeyChar();
	int64_t time = e->getWhen();
	if (time - this->lastTime < this->timeFactor) {
		bool var$2 = $nc(this->typedString)->length() == 1;
		if (var$2 && $nc(this->typedString)->charAt(0) == c) {
			++startIndex;
		} else {
			$nc(this->typedString)->append(c);
		}
	} else {
		++startIndex;
		$nc(this->typedString)->setLength(0);
		$nc(this->typedString)->append(c);
	}
	this->lastTime = time;
	if (startIndex >= rowCount) {
		startIndex = 0;
	}
	int32_t index = getNextMatch(startIndex, rowCount - 1);
	if (index < 0 && startIndex > 0) {
		index = getNextMatch(0, startIndex - 1);
	}
	if (index >= 0) {
		$nc($($nc(this->this$0->detailsTable)->getSelectionModel()))->setSelectionInterval(index, index);
		$var($Rectangle, cellRect, $nc(this->this$0->detailsTable)->getCellRect(index, $nc(this->this$0->detailsTable)->convertColumnIndexToView(0), false));
		$nc(this->this$0->detailsTable)->scrollRectToVisible(cellRect);
	}
}

int32_t FilePane$1::getNextMatch(int32_t startIndex, int32_t finishIndex) {
	$useLocalCurrentObjectStackCache();
	$var($BasicDirectoryModel, model, this->this$0->getModel());
	$var($JFileChooser, fileChooser, this->this$0->getFileChooser());
	$var($FilePane$DetailsTableRowSorter, rowSorter, this->this$0->getRowSorter());
	$var($String, prefix, $nc($($nc(this->typedString)->toString()))->toLowerCase());
	for (int32_t index = startIndex; index <= finishIndex; ++index) {
		$var($File, file, $cast($File, $nc(model)->getElementAt($nc(rowSorter)->convertRowIndexToModel(index))));
		$var($String, fileName, $nc($($nc(fileChooser)->getName(file)))->toLowerCase());
		if (fileName->startsWith(prefix)) {
			return index;
		}
	}
	return -1;
}

FilePane$1::FilePane$1() {
}

$Class* FilePane$1::load$($String* name, bool initialize) {
	$loadClass(FilePane$1, name, initialize, &_FilePane$1_ClassInfo_, allocate$FilePane$1);
	return class$;
}

$Class* FilePane$1::class$ = nullptr;

	} // swing
} // sun