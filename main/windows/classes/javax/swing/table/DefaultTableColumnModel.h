#ifndef _javax_swing_table_DefaultTableColumnModel_h_
#define _javax_swing_table_DefaultTableColumnModel_h_
//$ class javax.swing.table.DefaultTableColumnModel
//$ extends javax.swing.table.TableColumnModel
//$ implements java.beans.PropertyChangeListener,javax.swing.event.ListSelectionListener,java.io.Serializable

#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/table/TableColumnModel.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class EventListener;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class ListSelectionModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class EventListenerList;
			class ListSelectionEvent;
			class TableColumnModelEvent;
			class TableColumnModelListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableColumn;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $export DefaultTableColumnModel : public ::javax::swing::table::TableColumnModel, public ::java::beans::PropertyChangeListener, public ::javax::swing::event::ListSelectionListener, public ::java::io::Serializable {
	$class(DefaultTableColumnModel, $NO_CLASS_INIT, ::javax::swing::table::TableColumnModel, ::java::beans::PropertyChangeListener, ::javax::swing::event::ListSelectionListener, ::java::io::Serializable)
public:
	DefaultTableColumnModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addColumn(::javax::swing::table::TableColumn* aColumn) override;
	virtual void addColumnModelListener(::javax::swing::event::TableColumnModelListener* x) override;
	virtual ::javax::swing::ListSelectionModel* createSelectionModel();
	virtual void fireColumnAdded(::javax::swing::event::TableColumnModelEvent* e);
	virtual void fireColumnMarginChanged();
	virtual void fireColumnMoved(::javax::swing::event::TableColumnModelEvent* e);
	virtual void fireColumnRemoved(::javax::swing::event::TableColumnModelEvent* e);
	virtual void fireColumnSelectionChanged(::javax::swing::event::ListSelectionEvent* e);
	virtual ::javax::swing::table::TableColumn* getColumn(int32_t columnIndex) override;
	virtual int32_t getColumnCount() override;
	virtual int32_t getColumnIndex(Object$* identifier) override;
	virtual int32_t getColumnIndexAtX(int32_t x) override;
	virtual int32_t getColumnMargin() override;
	virtual $Array<::javax::swing::event::TableColumnModelListener>* getColumnModelListeners();
	virtual bool getColumnSelectionAllowed() override;
	virtual ::java::util::Enumeration* getColumns() override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual int32_t getSelectedColumnCount() override;
	virtual $ints* getSelectedColumns() override;
	virtual ::javax::swing::ListSelectionModel* getSelectionModel() override;
	virtual int32_t getTotalColumnWidth() override;
	void invalidateWidthCache();
	virtual void moveColumn(int32_t columnIndex, int32_t newIndex) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void recalcWidthCache();
	virtual void removeColumn(::javax::swing::table::TableColumn* column) override;
	virtual void removeColumnModelListener(::javax::swing::event::TableColumnModelListener* x) override;
	virtual void setColumnMargin(int32_t newMargin) override;
	virtual void setColumnSelectionAllowed(bool flag) override;
	virtual void setSelectionModel(::javax::swing::ListSelectionModel* newModel) override;
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::java::util::Vector* tableColumns = nullptr;
	::javax::swing::ListSelectionModel* selectionModel = nullptr;
	int32_t columnMargin = 0;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	bool columnSelectionAllowed = false;
	int32_t totalColumnWidth = 0;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_DefaultTableColumnModel_h_