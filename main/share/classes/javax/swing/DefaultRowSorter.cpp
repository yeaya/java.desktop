#include <javax/swing/DefaultRowSorter.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/text/Collator.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/DefaultRowSorter$FilterEntry.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/DefaultRowSorter$Row.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef UNSORTED

using $ComparatorArray = $Array<::java::util::Comparator>;
using $DefaultRowSorter$RowArray = $Array<::javax::swing::DefaultRowSorter$Row>;
using $RowSorter$SortKeyArray = $Array<::javax::swing::RowSorter$SortKey>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $DefaultRowSorter$FilterEntry = ::javax::swing::DefaultRowSorter$FilterEntry;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $DefaultRowSorter$Row = ::javax::swing::DefaultRowSorter$Row;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;
using $RowSorter = ::javax::swing::RowSorter;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SortOrder = ::javax::swing::SortOrder;

namespace javax {
	namespace swing {

$FieldInfo _DefaultRowSorter_FieldInfo_[] = {
	{"sortsOnUpdates", "Z", nullptr, $PRIVATE, $field(DefaultRowSorter, sortsOnUpdates)},
	{"viewToModel", "[Ljavax/swing/DefaultRowSorter$Row;", nullptr, $PRIVATE, $field(DefaultRowSorter, viewToModel)},
	{"modelToView", "[I", nullptr, $PRIVATE, $field(DefaultRowSorter, modelToView)},
	{"comparators", "[Ljava/util/Comparator;", "[Ljava/util/Comparator<*>;", $PRIVATE, $field(DefaultRowSorter, comparators)},
	{"isSortable", "[Z", nullptr, $PRIVATE, $field(DefaultRowSorter, isSortable$)},
	{"cachedSortKeys", "[Ljavax/swing/RowSorter$SortKey;", nullptr, $PRIVATE, $field(DefaultRowSorter, cachedSortKeys)},
	{"sortComparators", "[Ljava/util/Comparator;", "[Ljava/util/Comparator<*>;", $PRIVATE, $field(DefaultRowSorter, sortComparators)},
	{"filter", "Ljavax/swing/RowFilter;", "Ljavax/swing/RowFilter<-TM;-TI;>;", $PRIVATE, $field(DefaultRowSorter, filter)},
	{"filterEntry", "Ljavax/swing/DefaultRowSorter$FilterEntry;", "Ljavax/swing/DefaultRowSorter<TM;TI;>.FilterEntry;", $PRIVATE, $field(DefaultRowSorter, filterEntry)},
	{"sortKeys", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/RowSorter$SortKey;>;", $PRIVATE, $field(DefaultRowSorter, sortKeys)},
	{"useToString", "[Z", nullptr, $PRIVATE, $field(DefaultRowSorter, useToString$)},
	{"sorted", "Z", nullptr, $PRIVATE, $field(DefaultRowSorter, sorted)},
	{"maxSortKeys", "I", nullptr, $PRIVATE, $field(DefaultRowSorter, maxSortKeys)},
	{"modelWrapper", "Ljavax/swing/DefaultRowSorter$ModelWrapper;", "Ljavax/swing/DefaultRowSorter$ModelWrapper<TM;TI;>;", $PRIVATE, $field(DefaultRowSorter, modelWrapper)},
	{"modelRowCount", "I", nullptr, $PRIVATE, $field(DefaultRowSorter, modelRowCount)},
	{"warning8160087", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DefaultRowSorter, warning8160087)},
	{}
};

$MethodInfo _DefaultRowSorter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultRowSorter::*)()>(&DefaultRowSorter::init$))},
	{"allChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)()>(&DefaultRowSorter::allChanged))},
	{"allRowsChanged", "()V", nullptr, $PUBLIC},
	{"cacheSortKeys", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/swing/RowSorter$SortKey;>;)V", $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)($List*)>(&DefaultRowSorter::cacheSortKeys))},
	{"checkAgainstModel", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(int32_t,int32_t)>(&DefaultRowSorter::checkAgainstModel))},
	{"checkColumn", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(int32_t)>(&DefaultRowSorter::checkColumn))},
	{"compare", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultRowSorter::*)(int32_t,int32_t)>(&DefaultRowSorter::compare))},
	{"convertRowIndexToModel", "(I)I", nullptr, $PUBLIC},
	{"convertRowIndexToView", "(I)I", nullptr, $PUBLIC},
	{"convertUnsortedUnfiltered", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultRowSorter::*)(int32_t)>(&DefaultRowSorter::convertUnsortedUnfiltered))},
	{"createModelToView", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(int32_t)>(&DefaultRowSorter::createModelToView))},
	{"createViewToModel", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(int32_t)>(&DefaultRowSorter::createViewToModel))},
	{"getComparator", "(I)Ljava/util/Comparator;", "(I)Ljava/util/Comparator<*>;", $PUBLIC},
	{"getComparator0", "(I)Ljava/util/Comparator;", "(I)Ljava/util/Comparator<*>;", $PRIVATE, $method(static_cast<$Comparator*(DefaultRowSorter::*)(int32_t)>(&DefaultRowSorter::getComparator0))},
	{"getFilterEntry", "(I)Ljavax/swing/RowFilter$Entry;", "(I)Ljavax/swing/RowFilter$Entry<TM;TI;>;", $PRIVATE, $method(static_cast<$RowFilter$Entry*(DefaultRowSorter::*)(int32_t)>(&DefaultRowSorter::getFilterEntry))},
	{"getMaxSortKeys", "()I", nullptr, $PUBLIC},
	{"getModel", "()Ljava/lang/Object;", "()TM;", $PUBLIC | $FINAL},
	{"getModelRowCount", "()I", nullptr, $PUBLIC},
	{"getModelWrapper", "()Ljavax/swing/DefaultRowSorter$ModelWrapper;", "()Ljavax/swing/DefaultRowSorter$ModelWrapper<TM;TI;>;", $PROTECTED | $FINAL, $method(static_cast<$DefaultRowSorter$ModelWrapper*(DefaultRowSorter::*)()>(&DefaultRowSorter::getModelWrapper))},
	{"getRowFilter", "()Ljavax/swing/RowFilter;", "()Ljavax/swing/RowFilter<-TM;-TI;>;", $PUBLIC},
	{"getSortKeys", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/swing/RowSorter$SortKey;>;", $PUBLIC},
	{"getSortsOnUpdates", "()Z", nullptr, $PUBLIC},
	{"getViewRowCount", "()I", nullptr, $PUBLIC},
	{"getViewToModelAsInts", "([Ljavax/swing/DefaultRowSorter$Row;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(DefaultRowSorter::*)($DefaultRowSorter$RowArray*)>(&DefaultRowSorter::getViewToModelAsInts))},
	{"include", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultRowSorter::*)(int32_t)>(&DefaultRowSorter::include))},
	{"initializeFilteredMapping", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)()>(&DefaultRowSorter::initializeFilteredMapping))},
	{"insertInOrder", "(Ljava/util/List;[Ljavax/swing/DefaultRowSorter$Row;)V", "(Ljava/util/List<Ljavax/swing/DefaultRowSorter$Row;>;[Ljavax/swing/DefaultRowSorter$Row;)V", $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)($List*,$DefaultRowSorter$RowArray*)>(&DefaultRowSorter::insertInOrder))},
	{"isSortable", "(I)Z", nullptr, $PUBLIC},
	{"isTransformed", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultRowSorter::*)()>(&DefaultRowSorter::isTransformed))},
	{"isUnsorted", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultRowSorter::*)()>(&DefaultRowSorter::isUnsorted))},
	{"modelStructureChanged", "()V", nullptr, $PUBLIC},
	{"rowsDeleted", "(II)V", nullptr, $PUBLIC},
	{"rowsDeleted0", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(int32_t,int32_t)>(&DefaultRowSorter::rowsDeleted0))},
	{"rowsInserted", "(II)V", nullptr, $PUBLIC},
	{"rowsInserted0", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(int32_t,int32_t)>(&DefaultRowSorter::rowsInserted0))},
	{"rowsUpdated", "(II)V", nullptr, $PUBLIC},
	{"rowsUpdated", "(III)V", nullptr, $PUBLIC},
	{"rowsUpdated0", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(int32_t,int32_t)>(&DefaultRowSorter::rowsUpdated0))},
	{"setComparator", "(ILjava/util/Comparator;)V", "(ILjava/util/Comparator<*>;)V", $PUBLIC},
	{"setMaxSortKeys", "(I)V", nullptr, $PUBLIC},
	{"setModelToViewFromViewToModel", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)(bool)>(&DefaultRowSorter::setModelToViewFromViewToModel))},
	{"setModelWrapper", "(Ljavax/swing/DefaultRowSorter$ModelWrapper;)V", "(Ljavax/swing/DefaultRowSorter$ModelWrapper<TM;TI;>;)V", $PROTECTED | $FINAL, $method(static_cast<void(DefaultRowSorter::*)($DefaultRowSorter$ModelWrapper*)>(&DefaultRowSorter::setModelWrapper))},
	{"setRowFilter", "(Ljavax/swing/RowFilter;)V", "(Ljavax/swing/RowFilter<-TM;-TI;>;)V", $PUBLIC},
	{"setSortKeys", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/swing/RowSorter$SortKey;>;)V", $PUBLIC},
	{"setSortable", "(IZ)V", nullptr, $PUBLIC},
	{"setSortsOnUpdates", "(Z)V", nullptr, $PUBLIC},
	{"shouldOptimizeChange", "(II)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultRowSorter::*)(int32_t,int32_t)>(&DefaultRowSorter::shouldOptimizeChange))},
	{"sort", "()V", nullptr, $PUBLIC},
	{"sortExistingData", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)()>(&DefaultRowSorter::sortExistingData))},
	{"toggle", "(Ljavax/swing/RowSorter$SortKey;)Ljavax/swing/RowSorter$SortKey;", nullptr, $PRIVATE, $method(static_cast<$RowSorter$SortKey*(DefaultRowSorter::*)($RowSorter$SortKey*)>(&DefaultRowSorter::toggle))},
	{"toggleSortOrder", "(I)V", nullptr, $PUBLIC},
	{"updateUseToString", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter::*)()>(&DefaultRowSorter::updateUseToString))},
	{"useToString", "(I)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DefaultRowSorter_InnerClassesInfo_[] = {
	{"javax.swing.DefaultRowSorter$Row", "javax.swing.DefaultRowSorter", "Row", $PRIVATE | $STATIC},
	{"javax.swing.DefaultRowSorter$FilterEntry", "javax.swing.DefaultRowSorter", "FilterEntry", $PRIVATE},
	{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultRowSorter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.DefaultRowSorter",
	"javax.swing.RowSorter",
	nullptr,
	_DefaultRowSorter_FieldInfo_,
	_DefaultRowSorter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowSorter<TM;>;",
	nullptr,
	_DefaultRowSorter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.DefaultRowSorter$Row,javax.swing.DefaultRowSorter$FilterEntry,javax.swing.DefaultRowSorter$ModelWrapper"
};

$Object* allocate$DefaultRowSorter($Class* clazz) {
	return $of($alloc(DefaultRowSorter));
}

bool DefaultRowSorter::warning8160087 = false;

void DefaultRowSorter::init$() {
	$RowSorter::init$();
	$set(this, sortKeys, $Collections::emptyList());
	this->maxSortKeys = 3;
}

void DefaultRowSorter::setModelWrapper($DefaultRowSorter$ModelWrapper* modelWrapper) {
	$useLocalCurrentObjectStackCache();
	if (modelWrapper == nullptr) {
		$throwNew($IllegalArgumentException, "modelWrapper most be non-null"_s);
	}
	$var($DefaultRowSorter$ModelWrapper, last, this->modelWrapper);
	$set(this, modelWrapper, modelWrapper);
	if (last != nullptr) {
		modelStructureChanged();
	} else {
		this->modelRowCount = $nc($(getModelWrapper()))->getRowCount();
	}
}

$DefaultRowSorter$ModelWrapper* DefaultRowSorter::getModelWrapper() {
	return this->modelWrapper;
}

$Object* DefaultRowSorter::getModel() {
	return $of($nc($(getModelWrapper()))->getModel());
}

void DefaultRowSorter::setSortable(int32_t column, bool sortable) {
	checkColumn(column);
	if (this->isSortable$ == nullptr) {
		$set(this, isSortable$, $new($booleans, $nc($(getModelWrapper()))->getColumnCount()));
		for (int32_t i = $nc(this->isSortable$)->length - 1; i >= 0; --i) {
			$nc(this->isSortable$)->set(i, true);
		}
	}
	$nc(this->isSortable$)->set(column, sortable);
}

bool DefaultRowSorter::isSortable(int32_t column) {
	checkColumn(column);
	return (this->isSortable$ == nullptr) ? true : $nc(this->isSortable$)->get(column);
}

void DefaultRowSorter::setSortKeys($List* sortKeys) {
	$useLocalCurrentObjectStackCache();
	$var($List, old, this->sortKeys);
	if (sortKeys != nullptr && sortKeys->size() > 0) {
		int32_t max = $nc($(getModelWrapper()))->getColumnCount();
		{
			$var($Iterator, i$, sortKeys->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($RowSorter$SortKey, key, $cast($RowSorter$SortKey, i$->next()));
				{
					bool var$0 = key == nullptr || $nc(key)->getColumn() < 0;
					if (var$0 || $nc(key)->getColumn() >= max) {
						$throwNew($IllegalArgumentException, "Invalid SortKey"_s);
					}
				}
			}
		}
		$set(this, sortKeys, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(sortKeys))));
	} else {
		$set(this, sortKeys, $Collections::emptyList());
	}
	if (!$nc(this->sortKeys)->equals(old)) {
		fireSortOrderChanged();
		if (this->viewToModel == nullptr) {
			sort();
		} else {
			sortExistingData();
		}
	}
}

$List* DefaultRowSorter::getSortKeys() {
	return this->sortKeys;
}

void DefaultRowSorter::setMaxSortKeys(int32_t max) {
	if (max < 1) {
		$throwNew($IllegalArgumentException, "Invalid max"_s);
	}
	this->maxSortKeys = max;
}

int32_t DefaultRowSorter::getMaxSortKeys() {
	return this->maxSortKeys;
}

void DefaultRowSorter::setSortsOnUpdates(bool sortsOnUpdates) {
	this->sortsOnUpdates = sortsOnUpdates;
}

bool DefaultRowSorter::getSortsOnUpdates() {
	return this->sortsOnUpdates;
}

void DefaultRowSorter::setRowFilter($RowFilter* filter) {
	$set(this, filter, filter);
	sort();
}

$RowFilter* DefaultRowSorter::getRowFilter() {
	return this->filter;
}

void DefaultRowSorter::toggleSortOrder(int32_t column) {
	$useLocalCurrentObjectStackCache();
	checkColumn(column);
	if (isSortable(column)) {
		$var($List, keys, $new($ArrayList, $(static_cast<$Collection*>(getSortKeys()))));
		$var($RowSorter$SortKey, sortKey, nullptr);
		int32_t sortIndex = 0;
		for (sortIndex = keys->size() - 1; sortIndex >= 0; --sortIndex) {
			if ($nc(($cast($RowSorter$SortKey, $(keys->get(sortIndex)))))->getColumn() == column) {
				break;
			}
		}
		if (sortIndex == -1) {
			$init($SortOrder);
			$assign(sortKey, $new($RowSorter$SortKey, column, $SortOrder::ASCENDING));
			keys->add(0, sortKey);
		} else if (sortIndex == 0) {
			keys->set(0, $(toggle($cast($RowSorter$SortKey, $(keys->get(0))))));
		} else {
			keys->remove(sortIndex);
			$init($SortOrder);
			keys->add(0, $$new($RowSorter$SortKey, column, $SortOrder::ASCENDING));
		}
		int32_t var$0 = keys->size();
		if (var$0 > getMaxSortKeys()) {
			$assign(keys, keys->subList(0, getMaxSortKeys()));
		}
		setSortKeys(keys);
	}
}

$RowSorter$SortKey* DefaultRowSorter::toggle($RowSorter$SortKey* key) {
	$init($SortOrder);
	if ($nc(key)->getSortOrder() == $SortOrder::ASCENDING) {
		return $new($RowSorter$SortKey, key->getColumn(), $SortOrder::DESCENDING);
	}
	return $new($RowSorter$SortKey, $nc(key)->getColumn(), $SortOrder::ASCENDING);
}

int32_t DefaultRowSorter::convertRowIndexToView(int32_t index) {
	if (this->modelToView == nullptr) {
		return convertUnsortedUnfiltered(index);
	}
	return $nc(this->modelToView)->get(index);
}

int32_t DefaultRowSorter::convertRowIndexToModel(int32_t index) {
	if (this->viewToModel == nullptr) {
		return convertUnsortedUnfiltered(index);
	}
	return $nc($nc(this->viewToModel)->get(index))->modelIndex;
}

int32_t DefaultRowSorter::convertUnsortedUnfiltered(int32_t index) {
	if (index < 0 || index >= this->modelRowCount) {
		if (index >= this->modelRowCount && index < $nc($(getModelWrapper()))->getRowCount()) {
			if (DefaultRowSorter::warning8160087) {
				DefaultRowSorter::warning8160087 = false;
				$nc($System::err)->println("WARNING: row index is bigger than sorter\'s row count. Most likely this is a wrong sorter usage."_s);
			}
		} else {
			$throwNew($IndexOutOfBoundsException, "Invalid index"_s);
		}
	}
	return index;
}

bool DefaultRowSorter::isUnsorted() {
	$useLocalCurrentObjectStackCache();
	$var($List, keys, getSortKeys());
	int32_t keySize = $nc(keys)->size();
	$init($SortOrder);
	return (keySize == 0 || $nc(($cast($RowSorter$SortKey, $(keys->get(0)))))->getSortOrder() == $SortOrder::UNSORTED);
}

void DefaultRowSorter::sortExistingData() {
	$useLocalCurrentObjectStackCache();
	$var($ints, lastViewToModel, getViewToModelAsInts(this->viewToModel));
	updateUseToString();
	cacheSortKeys($(getSortKeys()));
	if (isUnsorted()) {
		if (getRowFilter() == nullptr) {
			$set(this, viewToModel, nullptr);
			$set(this, modelToView, nullptr);
		} else {
			int32_t included = 0;
			for (int32_t i = 0; i < $nc(this->modelToView)->length; ++i) {
				if ($nc(this->modelToView)->get(i) != -1) {
					$nc($nc(this->viewToModel)->get(included))->modelIndex = i;
					$nc(this->modelToView)->set(i, included++);
				}
			}
		}
	} else {
		$Arrays::sort(this->viewToModel);
		setModelToViewFromViewToModel(false);
	}
	fireRowSorterChanged(lastViewToModel);
}

void DefaultRowSorter::sort() {
	$useLocalCurrentObjectStackCache();
	this->sorted = true;
	$var($ints, lastViewToModel, getViewToModelAsInts(this->viewToModel));
	updateUseToString();
	if (isUnsorted()) {
		$set(this, cachedSortKeys, $new($RowSorter$SortKeyArray, 0));
		if (getRowFilter() == nullptr) {
			if (this->viewToModel != nullptr) {
				$set(this, viewToModel, nullptr);
				$set(this, modelToView, nullptr);
			} else {
				return;
			}
		} else {
			initializeFilteredMapping();
		}
	} else {
		cacheSortKeys($(getSortKeys()));
		if (getRowFilter() != nullptr) {
			initializeFilteredMapping();
		} else {
			createModelToView($nc($(getModelWrapper()))->getRowCount());
			createViewToModel($nc($(getModelWrapper()))->getRowCount());
		}
		$Arrays::sort(this->viewToModel);
		setModelToViewFromViewToModel(false);
	}
	fireRowSorterChanged(lastViewToModel);
}

void DefaultRowSorter::updateUseToString() {
	int32_t i = $nc($(getModelWrapper()))->getColumnCount();
	if (this->useToString$ == nullptr || $nc(this->useToString$)->length != i) {
		$set(this, useToString$, $new($booleans, i));
	}
	for (--i; i >= 0; --i) {
		$nc(this->useToString$)->set(i, useToString(i));
	}
}

void DefaultRowSorter::initializeFilteredMapping() {
	int32_t rowCount = $nc($(getModelWrapper()))->getRowCount();
	int32_t i = 0;
	int32_t j = 0;
	int32_t excludedCount = 0;
	createModelToView(rowCount);
	for (i = 0; i < rowCount; ++i) {
		if (include(i)) {
			$nc(this->modelToView)->set(i, i - excludedCount);
		} else {
			$nc(this->modelToView)->set(i, -1);
			++excludedCount;
		}
	}
	createViewToModel(rowCount - excludedCount);
	for (i = 0, j = 0; i < rowCount; ++i) {
		if ($nc(this->modelToView)->get(i) != -1) {
			$nc($nc(this->viewToModel)->get(j++))->modelIndex = i;
		}
	}
}

void DefaultRowSorter::createModelToView(int32_t rowCount) {
	if (this->modelToView == nullptr || $nc(this->modelToView)->length != rowCount) {
		$set(this, modelToView, $new($ints, rowCount));
	}
}

void DefaultRowSorter::createViewToModel(int32_t rowCount) {
	$useLocalCurrentObjectStackCache();
	int32_t recreateFrom = 0;
	if (this->viewToModel != nullptr) {
		recreateFrom = $Math::min(rowCount, $nc(this->viewToModel)->length);
		if ($nc(this->viewToModel)->length != rowCount) {
			$var($DefaultRowSorter$RowArray, oldViewToModel, this->viewToModel);
			$set(this, viewToModel, $new($DefaultRowSorter$RowArray, rowCount));
			$System::arraycopy(oldViewToModel, 0, this->viewToModel, 0, recreateFrom);
		}
	} else {
		$set(this, viewToModel, $new($DefaultRowSorter$RowArray, rowCount));
	}
	int32_t i = 0;
	for (i = 0; i < recreateFrom; ++i) {
		$nc($nc(this->viewToModel)->get(i))->modelIndex = i;
	}
	for (i = recreateFrom; i < rowCount; ++i) {
		$nc(this->viewToModel)->set(i, $$new($DefaultRowSorter$Row, this, i));
	}
}

void DefaultRowSorter::cacheSortKeys($List* keys) {
	$useLocalCurrentObjectStackCache();
	int32_t keySize = $nc(keys)->size();
	$set(this, sortComparators, $new($ComparatorArray, keySize));
	for (int32_t i = 0; i < keySize; ++i) {
		$nc(this->sortComparators)->set(i, $(getComparator0($nc(($cast($RowSorter$SortKey, $(keys->get(i)))))->getColumn())));
	}
	$set(this, cachedSortKeys, $fcast($RowSorter$SortKeyArray, keys->toArray($$new($RowSorter$SortKeyArray, keySize))));
}

bool DefaultRowSorter::useToString(int32_t column) {
	return (getComparator(column) == nullptr);
}

void DefaultRowSorter::setModelToViewFromViewToModel(bool unsetFirst) {
	int32_t i = 0;
	if (unsetFirst) {
		for (i = $nc(this->modelToView)->length - 1; i >= 0; --i) {
			$nc(this->modelToView)->set(i, -1);
		}
	}
	for (i = $nc(this->viewToModel)->length - 1; i >= 0; --i) {
		$nc(this->modelToView)->set($nc($nc(this->viewToModel)->get(i))->modelIndex, i);
	}
}

$ints* DefaultRowSorter::getViewToModelAsInts($DefaultRowSorter$RowArray* viewToModel) {
	if (viewToModel != nullptr) {
		$var($ints, viewToModelI, $new($ints, viewToModel->length));
		for (int32_t i = viewToModel->length - 1; i >= 0; --i) {
			viewToModelI->set(i, $nc(viewToModel->get(i))->modelIndex);
		}
		return viewToModelI;
	}
	return $new($ints, 0);
}

void DefaultRowSorter::setComparator(int32_t column, $Comparator* comparator) {
	checkColumn(column);
	if (this->comparators == nullptr) {
		$set(this, comparators, $new($ComparatorArray, $nc($(getModelWrapper()))->getColumnCount()));
	}
	$nc(this->comparators)->set(column, comparator);
}

$Comparator* DefaultRowSorter::getComparator(int32_t column) {
	checkColumn(column);
	if (this->comparators != nullptr) {
		return $nc(this->comparators)->get(column);
	}
	return nullptr;
}

$Comparator* DefaultRowSorter::getComparator0(int32_t column) {
	$var($Comparator, comparator, getComparator(column));
	if (comparator != nullptr) {
		return comparator;
	}
	return $Collator::getInstance();
}

$RowFilter$Entry* DefaultRowSorter::getFilterEntry(int32_t modelIndex) {
	if (this->filterEntry == nullptr) {
		$set(this, filterEntry, $new($DefaultRowSorter$FilterEntry, this));
	}
	$nc(this->filterEntry)->modelIndex = modelIndex;
	return this->filterEntry;
}

int32_t DefaultRowSorter::getViewRowCount() {
	if (this->viewToModel != nullptr) {
		return $nc(this->viewToModel)->length;
	}
	return $Math::max($nc($(getModelWrapper()))->getRowCount(), this->modelRowCount);
}

int32_t DefaultRowSorter::getModelRowCount() {
	return $nc($(getModelWrapper()))->getRowCount();
}

void DefaultRowSorter::allChanged() {
	$set(this, modelToView, nullptr);
	$set(this, viewToModel, nullptr);
	$set(this, comparators, nullptr);
	$set(this, isSortable$, nullptr);
	if (isUnsorted()) {
		sort();
	} else {
		setSortKeys(nullptr);
	}
}

void DefaultRowSorter::modelStructureChanged() {
	allChanged();
	this->modelRowCount = $nc($(getModelWrapper()))->getRowCount();
}

void DefaultRowSorter::allRowsChanged() {
	this->modelRowCount = $nc($(getModelWrapper()))->getRowCount();
	sort();
}

void DefaultRowSorter::rowsInserted(int32_t firstRow, int32_t endRow) {
	checkAgainstModel(firstRow, endRow);
	int32_t newModelRowCount = $nc($(getModelWrapper()))->getRowCount();
	if (endRow >= newModelRowCount) {
		$throwNew($IndexOutOfBoundsException, "Invalid range"_s);
	}
	this->modelRowCount = newModelRowCount;
	if (shouldOptimizeChange(firstRow, endRow)) {
		rowsInserted0(firstRow, endRow);
	}
}

void DefaultRowSorter::rowsDeleted(int32_t firstRow, int32_t endRow) {
	checkAgainstModel(firstRow, endRow);
	if (firstRow >= this->modelRowCount || endRow >= this->modelRowCount) {
		$throwNew($IndexOutOfBoundsException, "Invalid range"_s);
	}
	this->modelRowCount = $nc($(getModelWrapper()))->getRowCount();
	if (shouldOptimizeChange(firstRow, endRow)) {
		rowsDeleted0(firstRow, endRow);
	}
}

void DefaultRowSorter::rowsUpdated(int32_t firstRow, int32_t endRow) {
	checkAgainstModel(firstRow, endRow);
	if (firstRow >= this->modelRowCount || endRow >= this->modelRowCount) {
		$throwNew($IndexOutOfBoundsException, "Invalid range"_s);
	}
	if (getSortsOnUpdates()) {
		if (shouldOptimizeChange(firstRow, endRow)) {
			rowsUpdated0(firstRow, endRow);
		}
	} else {
		this->sorted = false;
	}
}

void DefaultRowSorter::rowsUpdated(int32_t firstRow, int32_t endRow, int32_t column) {
	checkColumn(column);
	rowsUpdated(firstRow, endRow);
}

void DefaultRowSorter::checkAgainstModel(int32_t firstRow, int32_t endRow) {
	if (firstRow > endRow || firstRow < 0 || endRow < 0 || firstRow > this->modelRowCount) {
		$throwNew($IndexOutOfBoundsException, "Invalid range"_s);
	}
}

bool DefaultRowSorter::include(int32_t row) {
	$useLocalCurrentObjectStackCache();
	$var($RowFilter, filter, getRowFilter());
	if (filter != nullptr) {
		return filter->include($(getFilterEntry(row)));
	}
	return true;
}

int32_t DefaultRowSorter::compare(int32_t model1, int32_t model2) {
	$useLocalCurrentObjectStackCache();
	int32_t column = 0;
	$SortOrder* sortOrder = nullptr;
	$var($Object, v1, nullptr);
	$var($Object, v2, nullptr);
	int32_t result = 0;
	for (int32_t counter = 0; counter < $nc(this->cachedSortKeys)->length; ++counter) {
		column = $nc($nc(this->cachedSortKeys)->get(counter))->getColumn();
		sortOrder = $nc($nc(this->cachedSortKeys)->get(counter))->getSortOrder();
		$init($SortOrder);
		if (sortOrder == $SortOrder::UNSORTED) {
			result = model1 - model2;
		} else {
			if ($nc(this->useToString$)->get(column)) {
				$assign(v1, $nc($(getModelWrapper()))->getStringValueAt(model1, column));
				$assign(v2, $nc($(getModelWrapper()))->getStringValueAt(model2, column));
			} else {
				$assign(v1, $nc($(getModelWrapper()))->getValueAt(model1, column));
				$assign(v2, $nc($(getModelWrapper()))->getValueAt(model2, column));
			}
			if (v1 == nullptr) {
				if (v2 == nullptr) {
					result = 0;
				} else {
					result = -1;
				}
			} else if (v2 == nullptr) {
				result = 1;
			} else {
				$var($Comparator, c, $nc(this->sortComparators)->get(counter));
				result = $nc(c)->compare(v1, v2);
			}
			if (sortOrder == $SortOrder::DESCENDING) {
				result *= -1;
			}
		}
		if (result != 0) {
			return result;
		}
	}
	return model1 - model2;
}

bool DefaultRowSorter::isTransformed() {
	return (this->viewToModel != nullptr);
}

void DefaultRowSorter::insertInOrder($List* toAdd, $DefaultRowSorter$RowArray* current) {
	$useLocalCurrentObjectStackCache();
	int32_t last = 0;
	int32_t index = 0;
	int32_t max = $nc(toAdd)->size();
	for (int32_t i = 0; i < max; ++i) {
		index = $Arrays::binarySearch(current, $(toAdd->get(i)));
		if (index < 0) {
			index = -1 - index;
		}
		$System::arraycopy(current, last, this->viewToModel, last + i, index - last);
		$nc(this->viewToModel)->set(index + i, $cast($DefaultRowSorter$Row, $(toAdd->get(i))));
		last = index;
	}
	$System::arraycopy(current, last, this->viewToModel, last + max, $nc(current)->length - last);
}

bool DefaultRowSorter::shouldOptimizeChange(int32_t firstRow, int32_t lastRow) {
	if (!isTransformed()) {
		return false;
	}
	if (!this->sorted || $nc(this->viewToModel)->length == 0 || (lastRow - firstRow) > $nc(this->viewToModel)->length / 10) {
		sort();
		return false;
	}
	return true;
}

void DefaultRowSorter::rowsInserted0(int32_t firstRow, int32_t lastRow) {
	$useLocalCurrentObjectStackCache();
	$var($ints, oldViewToModel, getViewToModelAsInts(this->viewToModel));
	int32_t i = 0;
	int32_t delta = (lastRow - firstRow) + 1;
	$var($List, added, $new($ArrayList, delta));
	for (i = firstRow; i <= lastRow; ++i) {
		if (include(i)) {
			added->add($$new($DefaultRowSorter$Row, this, i));
		}
	}
	int32_t viewIndex = 0;
	for (i = $nc(this->modelToView)->length - 1; i >= firstRow; --i) {
		viewIndex = $nc(this->modelToView)->get(i);
		if (viewIndex != -1) {
			$nc($nc(this->viewToModel)->get(viewIndex))->modelIndex += delta;
		}
	}
	if (added->size() > 0) {
		$Collections::sort(added);
		$var($DefaultRowSorter$RowArray, lastViewToModel, this->viewToModel);
		$set(this, viewToModel, $new($DefaultRowSorter$RowArray, $nc(this->viewToModel)->length + added->size()));
		insertInOrder(added, lastViewToModel);
	}
	createModelToView($nc($(getModelWrapper()))->getRowCount());
	setModelToViewFromViewToModel(true);
	fireRowSorterChanged(oldViewToModel);
}

void DefaultRowSorter::rowsDeleted0(int32_t firstRow, int32_t lastRow) {
	$useLocalCurrentObjectStackCache();
	$var($ints, oldViewToModel, getViewToModelAsInts(this->viewToModel));
	int32_t removedFromView = 0;
	int32_t i = 0;
	int32_t viewIndex = 0;
	for (i = firstRow; i <= lastRow; ++i) {
		viewIndex = $nc(this->modelToView)->get(i);
		if (viewIndex != -1) {
			++removedFromView;
			$nc(this->viewToModel)->set(viewIndex, nullptr);
		}
	}
	int32_t delta = lastRow - firstRow + 1;
	for (i = $nc(this->modelToView)->length - 1; i > lastRow; --i) {
		viewIndex = $nc(this->modelToView)->get(i);
		if (viewIndex != -1) {
			$nc($nc(this->viewToModel)->get(viewIndex))->modelIndex -= delta;
		}
	}
	if (removedFromView > 0) {
		$var($DefaultRowSorter$RowArray, newViewToModel, $new($DefaultRowSorter$RowArray, $nc(this->viewToModel)->length - removedFromView));
		int32_t newIndex = 0;
		int32_t last = 0;
		for (i = 0; i < $nc(this->viewToModel)->length; ++i) {
			if ($nc(this->viewToModel)->get(i) == nullptr) {
				$System::arraycopy(this->viewToModel, last, newViewToModel, newIndex, i - last);
				newIndex += (i - last);
				last = i + 1;
			}
		}
		$System::arraycopy(this->viewToModel, last, newViewToModel, newIndex, $nc(this->viewToModel)->length - last);
		$set(this, viewToModel, newViewToModel);
	}
	createModelToView($nc($(getModelWrapper()))->getRowCount());
	setModelToViewFromViewToModel(true);
	fireRowSorterChanged(oldViewToModel);
}

void DefaultRowSorter::rowsUpdated0(int32_t firstRow, int32_t lastRow) {
	$useLocalCurrentObjectStackCache();
	$var($ints, oldViewToModel, getViewToModelAsInts(this->viewToModel));
	int32_t i = 0;
	int32_t j = 0;
	int32_t delta = lastRow - firstRow + 1;
	int32_t modelIndex = 0;
	int32_t last = 0;
	int32_t index = 0;
	if (getRowFilter() == nullptr) {
		$var($DefaultRowSorter$RowArray, updated, $new($DefaultRowSorter$RowArray, delta));
		for (j = 0, i = firstRow; i <= lastRow; ++i, ++j) {
			updated->set(j, $nc(this->viewToModel)->get($nc(this->modelToView)->get(i)));
		}
		$Arrays::sort(updated);
		$var($DefaultRowSorter$RowArray, intermediary, $new($DefaultRowSorter$RowArray, $nc(this->viewToModel)->length - delta));
		for (i = 0, j = 0; i < $nc(this->viewToModel)->length; ++i) {
			modelIndex = $nc($nc(this->viewToModel)->get(i))->modelIndex;
			if (modelIndex < firstRow || modelIndex > lastRow) {
				intermediary->set(j++, $nc(this->viewToModel)->get(i));
			}
		}
		insertInOrder($($Arrays::asList(updated)), intermediary);
		setModelToViewFromViewToModel(false);
	} else {
		$var($List, updated, $new($ArrayList, delta));
		int32_t newlyVisible = 0;
		int32_t newlyHidden = 0;
		int32_t effected = 0;
		for (i = firstRow; i <= lastRow; ++i) {
			if ($nc(this->modelToView)->get(i) == -1) {
				if (include(i)) {
					updated->add($$new($DefaultRowSorter$Row, this, i));
					++newlyVisible;
				}
			} else {
				if (!include(i)) {
					++newlyHidden;
				} else {
					updated->add($nc(this->viewToModel)->get($nc(this->modelToView)->get(i)));
				}
				$nc(this->modelToView)->set(i, -2);
				++effected;
			}
		}
		$Collections::sort(updated);
		$var($DefaultRowSorter$RowArray, intermediary, $new($DefaultRowSorter$RowArray, $nc(this->viewToModel)->length - effected));
		for (i = 0, j = 0; i < $nc(this->viewToModel)->length; ++i) {
			modelIndex = $nc($nc(this->viewToModel)->get(i))->modelIndex;
			if ($nc(this->modelToView)->get(modelIndex) != -2) {
				intermediary->set(j++, $nc(this->viewToModel)->get(i));
			}
		}
		if (newlyVisible != newlyHidden) {
			$set(this, viewToModel, $new($DefaultRowSorter$RowArray, $nc(this->viewToModel)->length + newlyVisible - newlyHidden));
		}
		insertInOrder(updated, intermediary);
		setModelToViewFromViewToModel(true);
	}
	fireRowSorterChanged(oldViewToModel);
}

void DefaultRowSorter::checkColumn(int32_t column) {
	if (column < 0 || column >= $nc($(getModelWrapper()))->getColumnCount()) {
		$throwNew($IndexOutOfBoundsException, "column beyond range of TableModel"_s);
	}
}

void clinit$DefaultRowSorter($Class* class$) {
	DefaultRowSorter::warning8160087 = true;
}

DefaultRowSorter::DefaultRowSorter() {
}

$Class* DefaultRowSorter::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorter, name, initialize, &_DefaultRowSorter_ClassInfo_, clinit$DefaultRowSorter, allocate$DefaultRowSorter);
	return class$;
}

$Class* DefaultRowSorter::class$ = nullptr;

	} // swing
} // javax