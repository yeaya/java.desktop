#ifndef _KeyBoardNavigation$2_h_
#define _KeyBoardNavigation$2_h_
//$ class KeyBoardNavigation$2
//$ extends javax.swing.table.DefaultTableCellRenderer

#include <javax/swing/table/DefaultTableCellRenderer.h>

class KeyBoardNavigation$2 : public ::javax::swing::table::DefaultTableCellRenderer {
	$class(KeyBoardNavigation$2, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer)
public:
	KeyBoardNavigation$2();
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

#endif // _KeyBoardNavigation$2_h_