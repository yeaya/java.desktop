#ifndef _TAB$2_h_
#define _TAB$2_h_
//$ class TAB$2
//$ extends javax.swing.table.DefaultTableCellRenderer

#include <javax/swing/table/DefaultTableCellRenderer.h>

class TAB$2 : public ::javax::swing::table::DefaultTableCellRenderer {
	$class(TAB$2, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer)
public:
	TAB$2();
	using ::javax::swing::table::DefaultTableCellRenderer::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer::contains;
	using ::javax::swing::table::DefaultTableCellRenderer::enable;
	using ::javax::swing::table::DefaultTableCellRenderer::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer::add;
	using ::javax::swing::table::DefaultTableCellRenderer::getMousePosition;
	void init$();
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	virtual void setValue(Object$* value) override;
};

#endif // _TAB$2_h_