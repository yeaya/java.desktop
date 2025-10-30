#include <javax/swing/JTable$SortManager.h>

#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/JTable$ModelChange.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SizeSequence.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <javax/swing/event/RowSorterListener.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/table/TableModel.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DELETE
#undef INSERT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $JTable = ::javax::swing::JTable;
using $JTable$ModelChange = ::javax::swing::JTable$ModelChange;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $RowSorter = ::javax::swing::RowSorter;
using $SizeSequence = ::javax::swing::SizeSequence;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $RowSorterEvent = ::javax::swing::event::RowSorterEvent;
using $RowSorterListener = ::javax::swing::event::RowSorterListener;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $TableModel = ::javax::swing::table::TableModel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _JTable$SortManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$SortManager, this$0)},
	{"sorter", "Ljavax/swing/RowSorter;", "Ljavax/swing/RowSorter<+Ljavax/swing/table/TableModel;>;", 0, $field(JTable$SortManager, sorter)},
	{"modelSelection", "Ljavax/swing/ListSelectionModel;", nullptr, $PRIVATE, $field(JTable$SortManager, modelSelection)},
	{"modelLeadIndex", "I", nullptr, $PRIVATE, $field(JTable$SortManager, modelLeadIndex)},
	{"syncingSelection", "Z", nullptr, $PRIVATE, $field(JTable$SortManager, syncingSelection)},
	{"lastModelSelection", "[I", nullptr, $PRIVATE, $field(JTable$SortManager, lastModelSelection)},
	{"modelRowSizes", "Ljavax/swing/SizeSequence;", nullptr, $PRIVATE, $field(JTable$SortManager, modelRowSizes)},
	{}
};

$MethodInfo _JTable$SortManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/RowSorter;)V", "(Ljavax/swing/RowSorter<+Ljavax/swing/table/TableModel;>;)V", 0, $method(static_cast<void(JTable$SortManager::*)($JTable*,$RowSorter*)>(&JTable$SortManager::init$))},
	{"allChanged", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$SortManager::*)()>(&JTable$SortManager::allChanged))},
	{"cacheModelSelection", "(Ljavax/swing/event/RowSorterEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(JTable$SortManager::*)($RowSorterEvent*)>(&JTable$SortManager::cacheModelSelection))},
	{"cacheSelection", "(Ljavax/swing/event/RowSorterEvent;Ljavax/swing/JTable$ModelChange;)V", nullptr, $PRIVATE, $method(static_cast<void(JTable$SortManager::*)($RowSorterEvent*,$JTable$ModelChange*)>(&JTable$SortManager::cacheSelection))},
	{"dispose", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$SortManager::*)()>(&JTable$SortManager::dispose))},
	{"prepareForChange", "(Ljavax/swing/event/RowSorterEvent;Ljavax/swing/JTable$ModelChange;)V", nullptr, $PUBLIC, $method(static_cast<void(JTable$SortManager::*)($RowSorterEvent*,$JTable$ModelChange*)>(&JTable$SortManager::prepareForChange))},
	{"processChange", "(Ljavax/swing/event/RowSorterEvent;Ljavax/swing/JTable$ModelChange;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JTable$SortManager::*)($RowSorterEvent*,$JTable$ModelChange*,bool)>(&JTable$SortManager::processChange))},
	{"restoreSelection", "(Ljavax/swing/JTable$ModelChange;)V", nullptr, $PRIVATE, $method(static_cast<void(JTable$SortManager::*)($JTable$ModelChange*)>(&JTable$SortManager::restoreSelection))},
	{"setViewRowHeight", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JTable$SortManager::*)(int32_t,int32_t)>(&JTable$SortManager::setViewRowHeight))},
	{"setViewRowHeightsFromModel", "()V", nullptr, $PRIVATE, $method(static_cast<void(JTable$SortManager::*)()>(&JTable$SortManager::setViewRowHeightsFromModel))},
	{"viewSelectionChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(JTable$SortManager::*)($ListSelectionEvent*)>(&JTable$SortManager::viewSelectionChanged))},
	{}
};

$InnerClassInfo _JTable$SortManager_InnerClassesInfo_[] = {
	{"javax.swing.JTable$SortManager", "javax.swing.JTable", "SortManager", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _JTable$SortManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.JTable$SortManager",
	"java.lang.Object",
	nullptr,
	_JTable$SortManager_FieldInfo_,
	_JTable$SortManager_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$SortManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$SortManager($Class* clazz) {
	return $of($alloc(JTable$SortManager));
}

void JTable$SortManager::init$($JTable* this$0, $RowSorter* sorter) {
	$set(this, this$0, this$0);
	$set(this, sorter, sorter);
	$nc(sorter)->addRowSorterListener(this$0);
}

void JTable$SortManager::dispose() {
	if (this->sorter != nullptr) {
		$nc(this->sorter)->removeRowSorterListener(this->this$0);
	}
}

void JTable$SortManager::setViewRowHeight(int32_t viewIndex, int32_t rowHeight) {
	if (this->modelRowSizes == nullptr) {
		int32_t var$0 = $nc($(this->this$0->getModel()))->getRowCount();
		$set(this, modelRowSizes, $new($SizeSequence, var$0, this->this$0->getRowHeight()));
	}
	$nc(this->modelRowSizes)->setSize(this->this$0->convertRowIndexToModel(viewIndex), rowHeight);
}

void JTable$SortManager::allChanged() {
	this->modelLeadIndex = -1;
	$set(this, modelSelection, nullptr);
	$set(this, modelRowSizes, nullptr);
}

void JTable$SortManager::viewSelectionChanged($ListSelectionEvent* e) {
	if (!this->syncingSelection && this->modelSelection != nullptr) {
		$set(this, modelSelection, nullptr);
	}
}

void JTable$SortManager::prepareForChange($RowSorterEvent* sortEvent, $JTable$ModelChange* change) {
	if (this->this$0->getUpdateSelectionOnSort()) {
		cacheSelection(sortEvent, change);
	}
}

void JTable$SortManager::cacheSelection($RowSorterEvent* sortEvent, $JTable$ModelChange* change) {
	$useLocalCurrentObjectStackCache();
	if (sortEvent != nullptr) {
		bool var$0 = this->modelSelection == nullptr;
		if (var$0) {
			int32_t var$1 = $nc(this->sorter)->getViewRowCount();
			var$0 = var$1 != $nc($(this->this$0->getModel()))->getRowCount();
		}
		if (var$0) {
			$set(this, modelSelection, $new($DefaultListSelectionModel));
			$var($ListSelectionModel, viewSelection, this->this$0->getSelectionModel());
			int32_t min = $nc(viewSelection)->getMinSelectionIndex();
			int32_t max = viewSelection->getMaxSelectionIndex();
			int32_t modelIndex = 0;
			for (int32_t viewIndex = min; viewIndex <= max; ++viewIndex) {
				if (viewSelection->isSelectedIndex(viewIndex)) {
					modelIndex = this->this$0->convertRowIndexToModel(sortEvent, viewIndex);
					if (modelIndex != -1) {
						$nc(this->modelSelection)->addSelectionInterval(modelIndex, modelIndex);
					}
				}
			}
			modelIndex = this->this$0->convertRowIndexToModel(sortEvent, viewSelection->getLeadSelectionIndex());
			$SwingUtilities2::setLeadAnchorWithoutSelection(this->modelSelection, modelIndex, modelIndex);
		} else if (this->modelSelection == nullptr) {
			cacheModelSelection(sortEvent);
		}
	} else if ($nc(change)->allRowsChanged) {
		$set(this, modelSelection, nullptr);
	} else if (this->modelSelection != nullptr) {
		switch (change->type) {
		case $TableModelEvent::DELETE:
			{
				$nc(this->modelSelection)->removeIndexInterval(change->startModelIndex, change->endModelIndex);
				break;
			}
		case $TableModelEvent::INSERT:
			{
				$nc(this->modelSelection)->insertIndexInterval(change->startModelIndex, change->length, true);
				break;
			}
		default:
			{
				break;
			}
		}
	} else {
		cacheModelSelection(nullptr);
	}
}

void JTable$SortManager::cacheModelSelection($RowSorterEvent* sortEvent) {
	$set(this, lastModelSelection, this->this$0->convertSelectionToModel(sortEvent));
	this->modelLeadIndex = this->this$0->convertRowIndexToModel(sortEvent, $nc(this->this$0->selectionModel)->getLeadSelectionIndex());
}

void JTable$SortManager::processChange($RowSorterEvent* sortEvent, $JTable$ModelChange* change, bool sorterChanged) {
	if (change != nullptr) {
		if (change->allRowsChanged) {
			$set(this, modelRowSizes, nullptr);
			$set(this->this$0, rowModel, nullptr);
		} else if (this->modelRowSizes != nullptr) {
			if (change->type == $TableModelEvent::INSERT) {
				$nc(this->modelRowSizes)->insertEntries(change->startModelIndex, change->endModelIndex - change->startModelIndex + 1, this->this$0->getRowHeight());
			} else if (change->type == $TableModelEvent::DELETE) {
				$nc(this->modelRowSizes)->removeEntries(change->startModelIndex, change->endModelIndex - change->startModelIndex + 1);
			}
		}
	}
	if (sorterChanged) {
		setViewRowHeightsFromModel();
		restoreSelection(change);
	}
}

void JTable$SortManager::setViewRowHeightsFromModel() {
	if (this->modelRowSizes != nullptr) {
		int32_t var$0 = this->this$0->getRowCount();
		$nc(this->this$0->rowModel)->setSizes(var$0, this->this$0->getRowHeight());
		for (int32_t viewIndex = this->this$0->getRowCount() - 1; viewIndex >= 0; --viewIndex) {
			int32_t modelIndex = this->this$0->convertRowIndexToModel(viewIndex);
			$nc(this->this$0->rowModel)->setSize(viewIndex, $nc(this->modelRowSizes)->getSize(modelIndex));
		}
	}
}

void JTable$SortManager::restoreSelection($JTable$ModelChange* change) {
	this->syncingSelection = true;
	if (this->lastModelSelection != nullptr) {
		this->this$0->restoreSortingSelection(this->lastModelSelection, this->modelLeadIndex, change);
		$set(this, lastModelSelection, nullptr);
	} else if (this->modelSelection != nullptr) {
		$var($ListSelectionModel, viewSelection, this->this$0->getSelectionModel());
		$nc(viewSelection)->setValueIsAdjusting(true);
		viewSelection->clearSelection();
		int32_t min = $nc(this->modelSelection)->getMinSelectionIndex();
		int32_t max = $nc(this->modelSelection)->getMaxSelectionIndex();
		int32_t viewIndex = 0;
		for (int32_t modelIndex = min; modelIndex <= max; ++modelIndex) {
			if ($nc(this->modelSelection)->isSelectedIndex(modelIndex)) {
				viewIndex = this->this$0->convertRowIndexToView(modelIndex);
				if (viewIndex != -1) {
					viewSelection->addSelectionInterval(viewIndex, viewIndex);
				}
			}
		}
		int32_t viewLeadIndex = $nc(this->modelSelection)->getLeadSelectionIndex();
		if (viewLeadIndex != -1 && !$nc(this->modelSelection)->isSelectionEmpty()) {
			viewLeadIndex = this->this$0->convertRowIndexToView(viewLeadIndex);
		}
		$SwingUtilities2::setLeadAnchorWithoutSelection(viewSelection, viewLeadIndex, viewLeadIndex);
		viewSelection->setValueIsAdjusting(false);
	}
	this->syncingSelection = false;
}

JTable$SortManager::JTable$SortManager() {
}

$Class* JTable$SortManager::load$($String* name, bool initialize) {
	$loadClass(JTable$SortManager, name, initialize, &_JTable$SortManager_ClassInfo_, allocate$JTable$SortManager);
	return class$;
}

$Class* JTable$SortManager::class$ = nullptr;

	} // swing
} // javax