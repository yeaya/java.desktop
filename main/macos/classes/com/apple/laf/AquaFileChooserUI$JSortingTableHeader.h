#ifndef _com_apple_laf_AquaFileChooserUI$JSortingTableHeader_h_
#define _com_apple_laf_AquaFileChooserUI$JSortingTableHeader_h_
//$ class com.apple.laf.AquaFileChooserUI$JSortingTableHeader
//$ extends javax.swing.table.JTableHeader

#include <java/lang/Array.h>
#include <javax/swing/table/JTableHeader.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableCellRenderer;
			class TableColumn;
			class TableColumnModel;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$JSortingTableHeader : public ::javax::swing::table::JTableHeader {
	$class(AquaFileChooserUI$JSortingTableHeader, $NO_CLASS_INIT, ::javax::swing::table::JTableHeader)
public:
	AquaFileChooserUI$JSortingTableHeader();
	using ::javax::swing::table::JTableHeader::getToolTipText;
	using ::javax::swing::table::JTableHeader::contains;
	using ::javax::swing::table::JTableHeader::enable;
	using ::javax::swing::table::JTableHeader::getBounds;
	using ::javax::swing::table::JTableHeader::getSize;
	using ::javax::swing::table::JTableHeader::getLocation;
	using ::javax::swing::table::JTableHeader::firePropertyChange;
	using ::javax::swing::table::JTableHeader::add;
	using ::javax::swing::table::JTableHeader::getMousePosition;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0, ::javax::swing::table::TableColumnModel* cm);
	virtual ::javax::swing::table::TableCellRenderer* createDefaultRenderer() override;
	virtual ::javax::swing::table::TableColumn* getDraggedColumn() override;
	using ::javax::swing::table::JTableHeader::requestFocus;
	using ::javax::swing::table::JTableHeader::requestFocusInWindow;
	using ::javax::swing::table::JTableHeader::repaint;
	using ::javax::swing::table::JTableHeader::remove;
	using ::javax::swing::table::JTableHeader::list;
	virtual void setDraggedColumn(::javax::swing::table::TableColumn* aColumn) override;
	using ::javax::swing::table::JTableHeader::setUI;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	$booleans* fSortAscending = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$JSortingTableHeader_h_