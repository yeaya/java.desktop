#ifndef _sun_swing_FilePane$AlignableTableHeaderRenderer_h_
#define _sun_swing_FilePane$AlignableTableHeaderRenderer_h_
//$ class sun.swing.FilePane$AlignableTableHeaderRenderer
//$ extends javax.swing.table.TableCellRenderer

#include <javax/swing/table/TableCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class FilePane$AlignableTableHeaderRenderer : public ::javax::swing::table::TableCellRenderer {
	$class(FilePane$AlignableTableHeaderRenderer, $NO_CLASS_INIT, ::javax::swing::table::TableCellRenderer)
public:
	FilePane$AlignableTableHeaderRenderer();
	void init$(::sun::swing::FilePane* this$0, ::javax::swing::table::TableCellRenderer* wrappedRenderer);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::table::TableCellRenderer* wrappedRenderer = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$AlignableTableHeaderRenderer_h_