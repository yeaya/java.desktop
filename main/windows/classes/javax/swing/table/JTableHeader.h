#ifndef _javax_swing_table_JTableHeader_h_
#define _javax_swing_table_JTableHeader_h_
//$ class javax.swing.table.JTableHeader
//$ extends javax.swing.JComponent
//$ implements javax.swing.event.TableColumnModelListener,javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/event/TableColumnModelListener.h>

namespace java {
	namespace awt {
		class Dimension;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ListSelectionEvent;
			class TableColumnModelEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class TableHeaderUI;
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

namespace javax {
	namespace swing {
		namespace table {

class $export JTableHeader : public ::javax::swing::JComponent, public ::javax::swing::event::TableColumnModelListener, public ::javax::accessibility::Accessible {
	$class(JTableHeader, 0, ::javax::swing::JComponent, ::javax::swing::event::TableColumnModelListener, ::javax::accessibility::Accessible)
public:
	JTableHeader();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::getToolTipText;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::swing::table::TableColumnModel* cm);
	virtual void columnAdded(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual int32_t columnAtPoint(::java::awt::Point* point);
	virtual void columnMarginChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual void columnMoved(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual void columnRemoved(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual void columnSelectionChanged(::javax::swing::event::ListSelectionEvent* e) override;
	virtual ::javax::swing::table::TableColumnModel* createDefaultColumnModel();
	virtual ::javax::swing::table::TableCellRenderer* createDefaultRenderer();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::table::TableColumnModel* getColumnModel();
	virtual ::javax::swing::table::TableCellRenderer* getDefaultRenderer();
	virtual ::javax::swing::table::TableColumn* getDraggedColumn();
	virtual int32_t getDraggedDistance();
	virtual ::java::awt::Rectangle* getHeaderRect(int32_t column);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool getReorderingAllowed();
	virtual bool getResizingAllowed();
	virtual ::javax::swing::table::TableColumn* getResizingColumn();
	virtual ::javax::swing::JTable* getTable();
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* event) override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual bool getUpdateTableInRealTime();
	int32_t getWidthInRightToLeft();
	virtual void initializeLocalVars();
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void resizeAndRepaint();
	virtual void setColumnModel(::javax::swing::table::TableColumnModel* columnModel);
	virtual void setDefaultRenderer(::javax::swing::table::TableCellRenderer* defaultRenderer);
	virtual void setDraggedColumn(::javax::swing::table::TableColumn* aColumn);
	virtual void setDraggedDistance(int32_t distance);
	virtual void setReorderingAllowed(bool reorderingAllowed);
	virtual void setResizingAllowed(bool resizingAllowed);
	virtual void setResizingColumn(::javax::swing::table::TableColumn* aColumn);
	virtual void setTable(::javax::swing::JTable* table);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::TableHeaderUI* ui);
	virtual void setUpdateTableInRealTime(bool flag);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::JTable* table = nullptr;
	::javax::swing::table::TableColumnModel* columnModel = nullptr;
	bool reorderingAllowed = false;
	bool resizingAllowed = false;
	bool updateTableInRealTime = false;
	::javax::swing::table::TableColumn* resizingColumn = nullptr;
	::javax::swing::table::TableColumn* draggedColumn = nullptr;
	int32_t draggedDistance = 0;
	::javax::swing::table::TableCellRenderer* defaultRenderer = nullptr;
	bool updateInProgress = false;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_JTableHeader_h_