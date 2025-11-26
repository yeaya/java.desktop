#ifndef _javax_swing_DefaultRowSorter_h_
#define _javax_swing_DefaultRowSorter_h_
//$ class javax.swing.DefaultRowSorter
//$ extends javax.swing.RowSorter

#include <java/lang/Array.h>
#include <javax/swing/RowSorter.h>

namespace java {
	namespace util {
		class Comparator;
		class List;
	}
}
namespace javax {
	namespace swing {
		class DefaultRowSorter$FilterEntry;
		class DefaultRowSorter$ModelWrapper;
		class DefaultRowSorter$Row;
		class RowFilter;
		class RowFilter$Entry;
		class RowSorter$SortKey;
	}
}

namespace javax {
	namespace swing {

class $export DefaultRowSorter : public ::javax::swing::RowSorter {
	$class(DefaultRowSorter, 0, ::javax::swing::RowSorter)
public:
	DefaultRowSorter();
	void init$();
	void allChanged();
	virtual void allRowsChanged() override;
	void cacheSortKeys(::java::util::List* keys);
	void checkAgainstModel(int32_t firstRow, int32_t endRow);
	void checkColumn(int32_t column);
	int32_t compare(int32_t model1, int32_t model2);
	virtual int32_t convertRowIndexToModel(int32_t index) override;
	virtual int32_t convertRowIndexToView(int32_t index) override;
	int32_t convertUnsortedUnfiltered(int32_t index);
	void createModelToView(int32_t rowCount);
	void createViewToModel(int32_t rowCount);
	virtual ::java::util::Comparator* getComparator(int32_t column);
	::java::util::Comparator* getComparator0(int32_t column);
	::javax::swing::RowFilter$Entry* getFilterEntry(int32_t modelIndex);
	virtual int32_t getMaxSortKeys();
	virtual $Object* getModel() override;
	virtual int32_t getModelRowCount() override;
	::javax::swing::DefaultRowSorter$ModelWrapper* getModelWrapper();
	virtual ::javax::swing::RowFilter* getRowFilter();
	virtual ::java::util::List* getSortKeys() override;
	virtual bool getSortsOnUpdates();
	virtual int32_t getViewRowCount() override;
	$ints* getViewToModelAsInts($Array<::javax::swing::DefaultRowSorter$Row>* viewToModel);
	bool include(int32_t row);
	void initializeFilteredMapping();
	void insertInOrder(::java::util::List* toAdd, $Array<::javax::swing::DefaultRowSorter$Row>* current);
	virtual bool isSortable(int32_t column);
	bool isTransformed();
	bool isUnsorted();
	virtual void modelStructureChanged() override;
	virtual void rowsDeleted(int32_t firstRow, int32_t endRow) override;
	void rowsDeleted0(int32_t firstRow, int32_t lastRow);
	virtual void rowsInserted(int32_t firstRow, int32_t endRow) override;
	void rowsInserted0(int32_t firstRow, int32_t lastRow);
	virtual void rowsUpdated(int32_t firstRow, int32_t endRow) override;
	virtual void rowsUpdated(int32_t firstRow, int32_t endRow, int32_t column) override;
	void rowsUpdated0(int32_t firstRow, int32_t lastRow);
	virtual void setComparator(int32_t column, ::java::util::Comparator* comparator);
	virtual void setMaxSortKeys(int32_t max);
	void setModelToViewFromViewToModel(bool unsetFirst);
	void setModelWrapper(::javax::swing::DefaultRowSorter$ModelWrapper* modelWrapper);
	virtual void setRowFilter(::javax::swing::RowFilter* filter);
	virtual void setSortKeys(::java::util::List* sortKeys) override;
	virtual void setSortable(int32_t column, bool sortable);
	virtual void setSortsOnUpdates(bool sortsOnUpdates);
	bool shouldOptimizeChange(int32_t firstRow, int32_t lastRow);
	virtual void sort();
	void sortExistingData();
	::javax::swing::RowSorter$SortKey* toggle(::javax::swing::RowSorter$SortKey* key);
	virtual void toggleSortOrder(int32_t column) override;
	void updateUseToString();
	virtual bool useToString(int32_t column);
	bool sortsOnUpdates = false;
	$Array<::javax::swing::DefaultRowSorter$Row>* viewToModel = nullptr;
	$ints* modelToView = nullptr;
	$Array<::java::util::Comparator>* comparators = nullptr;
	$booleans* isSortable$ = nullptr;
	$Array<::javax::swing::RowSorter$SortKey>* cachedSortKeys = nullptr;
	$Array<::java::util::Comparator>* sortComparators = nullptr;
	::javax::swing::RowFilter* filter = nullptr;
	::javax::swing::DefaultRowSorter$FilterEntry* filterEntry = nullptr;
	::java::util::List* sortKeys = nullptr;
	$booleans* useToString$ = nullptr;
	bool sorted = false;
	int32_t maxSortKeys = 0;
	::javax::swing::DefaultRowSorter$ModelWrapper* modelWrapper = nullptr;
	int32_t modelRowCount = 0;
	static bool warning8160087;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultRowSorter_h_