#ifndef _sun_swing_FilePane$DetailsTableRowSorter$SorterModelWrapper_h_
#define _sun_swing_FilePane$DetailsTableRowSorter$SorterModelWrapper_h_
//$ class sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper
//$ extends javax.swing.DefaultRowSorter$ModelWrapper

#include <javax/swing/DefaultRowSorter$ModelWrapper.h>

namespace sun {
	namespace swing {
		class FilePane$DetailsTableRowSorter;
	}
}

namespace sun {
	namespace swing {

class FilePane$DetailsTableRowSorter$SorterModelWrapper : public ::javax::swing::DefaultRowSorter$ModelWrapper {
	$class(FilePane$DetailsTableRowSorter$SorterModelWrapper, $NO_CLASS_INIT, ::javax::swing::DefaultRowSorter$ModelWrapper)
public:
	FilePane$DetailsTableRowSorter$SorterModelWrapper();
	void init$(::sun::swing::FilePane$DetailsTableRowSorter* this$1);
	virtual int32_t getColumnCount() override;
	virtual $Object* getIdentifier(int32_t row) override;
	virtual $Object* getModel() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t column) override;
	::sun::swing::FilePane$DetailsTableRowSorter* this$1 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableRowSorter$SorterModelWrapper_h_