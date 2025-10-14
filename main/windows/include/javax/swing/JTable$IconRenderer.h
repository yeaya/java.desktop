#ifndef _javax_swing_JTable$IconRenderer_h_
#define _javax_swing_JTable$IconRenderer_h_
//$ class javax.swing.JTable$IconRenderer
//$ extends javax.swing.table.DefaultTableCellRenderer$UIResource

#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>

namespace javax {
	namespace swing {

class $import JTable$IconRenderer : public ::javax::swing::table::DefaultTableCellRenderer$UIResource {
	$class(JTable$IconRenderer, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer$UIResource)
public:
	JTable$IconRenderer();
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::contains;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::enable;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::add;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::getMousePosition;
	void init$();
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::setUI;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::remove;
	using ::javax::swing::table::DefaultTableCellRenderer$UIResource::list;
	virtual void setValue(Object$* value) override;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$IconRenderer_h_