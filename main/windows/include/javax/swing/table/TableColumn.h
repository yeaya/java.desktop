#ifndef _javax_swing_table_TableColumn_h_
#define _javax_swing_table_TableColumn_h_
//$ class javax.swing.table.TableColumn
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CELL_RENDERER_PROPERTY")
#undef CELL_RENDERER_PROPERTY
#pragma push_macro("COLUMN_WIDTH_PROPERTY")
#undef COLUMN_WIDTH_PROPERTY
#pragma push_macro("HEADER_RENDERER_PROPERTY")
#undef HEADER_RENDERER_PROPERTY
#pragma push_macro("HEADER_VALUE_PROPERTY")
#undef HEADER_VALUE_PROPERTY

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class SwingPropertyChangeSupport;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableCellEditor;
			class TableCellRenderer;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $import TableColumn : public ::java::io::Serializable {
	$class(TableColumn, 0, ::java::io::Serializable)
public:
	TableColumn();
	void init$();
	void init$(int32_t modelIndex);
	void init$(int32_t modelIndex, int32_t width);
	void init$(int32_t modelIndex, int32_t width, ::javax::swing::table::TableCellRenderer* cellRenderer, ::javax::swing::table::TableCellEditor* cellEditor);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual ::javax::swing::table::TableCellRenderer* createDefaultHeaderRenderer();
	virtual void disableResizedPosting();
	virtual void enableResizedPosting();
	void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	void firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue);
	void firePropertyChange($String* propertyName, bool oldValue, bool newValue);
	virtual ::javax::swing::table::TableCellEditor* getCellEditor();
	virtual ::javax::swing::table::TableCellRenderer* getCellRenderer();
	virtual ::javax::swing::table::TableCellRenderer* getHeaderRenderer();
	virtual $Object* getHeaderValue();
	virtual $Object* getIdentifier();
	virtual int32_t getMaxWidth();
	virtual int32_t getMinWidth();
	virtual int32_t getModelIndex();
	virtual int32_t getPreferredWidth();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual bool getResizable();
	virtual int32_t getWidth();
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void setCellEditor(::javax::swing::table::TableCellEditor* cellEditor);
	virtual void setCellRenderer(::javax::swing::table::TableCellRenderer* cellRenderer);
	virtual void setHeaderRenderer(::javax::swing::table::TableCellRenderer* headerRenderer);
	virtual void setHeaderValue(Object$* headerValue);
	virtual void setIdentifier(Object$* identifier);
	virtual void setMaxWidth(int32_t maxWidth);
	virtual void setMinWidth(int32_t minWidth);
	virtual void setModelIndex(int32_t modelIndex);
	virtual void setPreferredWidth(int32_t preferredWidth);
	virtual void setResizable(bool isResizable);
	virtual void setWidth(int32_t width);
	virtual void sizeWidthToFit();
	static $String* COLUMN_WIDTH_PROPERTY;
	static $String* HEADER_VALUE_PROPERTY;
	static $String* HEADER_RENDERER_PROPERTY;
	static $String* CELL_RENDERER_PROPERTY;
	int32_t modelIndex = 0;
	$Object* identifier = nullptr;
	int32_t width = 0;
	int32_t minWidth = 0;
	int32_t preferredWidth = 0;
	int32_t maxWidth = 0;
	::javax::swing::table::TableCellRenderer* headerRenderer = nullptr;
	$Object* headerValue = nullptr;
	::javax::swing::table::TableCellRenderer* cellRenderer = nullptr;
	::javax::swing::table::TableCellEditor* cellEditor = nullptr;
	bool isResizable = false;
	int32_t resizedPostingDisableCount = 0;
	::javax::swing::event::SwingPropertyChangeSupport* changeSupport = nullptr;
};

		} // table
	} // swing
} // javax

#pragma pop_macro("CELL_RENDERER_PROPERTY")
#pragma pop_macro("COLUMN_WIDTH_PROPERTY")
#pragma pop_macro("HEADER_RENDERER_PROPERTY")
#pragma pop_macro("HEADER_VALUE_PROPERTY")

#endif // _javax_swing_table_TableColumn_h_