#ifndef _javax_swing_JTable_h_
#define _javax_swing_JTable_h_
//$ class javax.swing.JTable
//$ extends javax.swing.JComponent
//$ implements javax.swing.event.TableModelListener,javax.swing.Scrollable,javax.swing.event.TableColumnModelListener,javax.swing.event.ListSelectionListener,javax.swing.event.CellEditorListener,javax.accessibility.Accessible,javax.swing.event.RowSorterListener

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Scrollable.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/RowSorterListener.h>
#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/event/TableModelListener.h>

#pragma push_macro("AUTO_RESIZE_ALL_COLUMNS")
#undef AUTO_RESIZE_ALL_COLUMNS
#pragma push_macro("AUTO_RESIZE_LAST_COLUMN")
#undef AUTO_RESIZE_LAST_COLUMN
#pragma push_macro("AUTO_RESIZE_NEXT_COLUMN")
#undef AUTO_RESIZE_NEXT_COLUMN
#pragma push_macro("AUTO_RESIZE_OFF")
#undef AUTO_RESIZE_OFF
#pragma push_macro("AUTO_RESIZE_SUBSEQUENT_COLUMNS")
#undef AUTO_RESIZE_SUBSEQUENT_COLUMNS

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class Printable;
			class PrinterJob;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace text {
		class MessageFormat;
	}
}
namespace java {
	namespace util {
		class EventObject;
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace print {
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		class DropMode;
		class JScrollPane;
		class JTable$DropLocation;
		class JTable$ModelChange;
		class JTable$PrintMode;
		class JTable$Resizable2;
		class JTable$Resizable3;
		class JTable$SortManager;
		class KeyStroke;
		class ListSelectionModel;
		class RowSorter;
		class SizeSequence;
		class TransferHandler$DropLocation;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ListSelectionEvent;
			class RowSorterEvent;
			class TableColumnModelEvent;
			class TableModelEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class TableUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
			class TableCellEditor;
			class TableCellRenderer;
			class TableColumn;
			class TableColumnModel;
			class TableModel;
		}
	}
}
namespace sun {
	namespace swing {
		class PrintingStatus;
	}
}

namespace javax {
	namespace swing {

class $import JTable : public ::javax::swing::JComponent, public ::javax::swing::event::TableModelListener, public ::javax::swing::Scrollable, public ::javax::swing::event::TableColumnModelListener, public ::javax::swing::event::ListSelectionListener, public ::javax::swing::event::CellEditorListener, public ::javax::accessibility::Accessible, public ::javax::swing::event::RowSorterListener {
	$class(JTable, 0, ::javax::swing::JComponent, ::javax::swing::event::TableModelListener, ::javax::swing::Scrollable, ::javax::swing::event::TableColumnModelListener, ::javax::swing::event::ListSelectionListener, ::javax::swing::event::CellEditorListener, ::javax::accessibility::Accessible, ::javax::swing::event::RowSorterListener)
public:
	JTable();
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
	using ::javax::swing::JComponent::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::swing::table::TableModel* dm);
	void init$(::javax::swing::table::TableModel* dm, ::javax::swing::table::TableColumnModel* cm);
	void init$(::javax::swing::table::TableModel* dm, ::javax::swing::table::TableColumnModel* cm, ::javax::swing::ListSelectionModel* sm);
	void init$(int32_t numRows, int32_t numColumns);
	void init$(::java::util::Vector* rowData, ::java::util::Vector* columnNames);
	void init$($Array<::java::lang::Object, 2>* rowData, $ObjectArray* columnNames);
	void accommodateDelta(int32_t resizingColumnIndex, int32_t delta);
	virtual void addColumn(::javax::swing::table::TableColumn* aColumn);
	virtual void addColumnSelectionInterval(int32_t index0, int32_t index1);
	virtual void addNotify() override;
	virtual void addRowSelectionInterval(int32_t index0, int32_t index1);
	void adjustSizes(int64_t target, ::javax::swing::JTable$Resizable3* r, bool inverse);
	void adjustSizes(int64_t target, ::javax::swing::JTable$Resizable2* r, bool limitToRange);
	int32_t boundColumn(int32_t col);
	int32_t boundRow(int32_t row);
	virtual void changeSelection(int32_t rowIndex, int32_t columnIndex, bool toggle, bool extend);
	void changeSelectionModel(::javax::swing::ListSelectionModel* sm, int32_t index, bool toggle, bool extend, bool selected, int32_t anchor, bool anchorSelected);
	void checkDragEnabled(bool b);
	static void checkDropMode(::javax::swing::DropMode* dropMode);
	virtual void clearSelection();
	void clearSelectionAndLeadAnchor();
	virtual void columnAdded(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual int32_t columnAtPoint(::java::awt::Point* point);
	virtual void columnMarginChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual void columnMoved(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual void columnRemoved(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual void columnSelectionChanged(::javax::swing::event::ListSelectionEvent* e) override;
	virtual void compWriteObjectNotify() override;
	virtual void configureEnclosingScrollPane();
	void configureEnclosingScrollPaneUI();
	virtual int32_t convertColumnIndexToModel(int32_t viewColumnIndex);
	virtual int32_t convertColumnIndexToView(int32_t modelColumnIndex);
	virtual int32_t convertRowIndexToModel(int32_t viewRowIndex);
	int32_t convertRowIndexToModel(::javax::swing::event::RowSorterEvent* e, int32_t viewIndex);
	virtual int32_t convertRowIndexToView(int32_t modelRowIndex);
	int32_t convertRowIndexToView(int32_t modelIndex, ::javax::swing::JTable$ModelChange* change);
	$ints* convertSelectionToModel(::javax::swing::event::RowSorterEvent* e);
	virtual ::javax::swing::table::TableColumnModel* createDefaultColumnModel();
	virtual void createDefaultColumnsFromModel();
	virtual ::javax::swing::table::TableModel* createDefaultDataModel();
	virtual void createDefaultEditors();
	virtual void createDefaultRenderers();
	virtual ::javax::swing::ListSelectionModel* createDefaultSelectionModel();
	virtual ::javax::swing::table::JTableHeader* createDefaultTableHeader();
	static ::javax::swing::JScrollPane* createScrollPaneForTable(::javax::swing::JTable* aTable);
	virtual void doLayout() override;
	virtual ::javax::swing::TransferHandler$DropLocation* dropLocationForPoint(::java::awt::Point* p) override;
	virtual bool editCellAt(int32_t row, int32_t column);
	virtual bool editCellAt(int32_t row, int32_t column, ::java::util::EventObject* e);
	virtual void editingCanceled(::javax::swing::event::ChangeEvent* e) override;
	virtual void editingStopped(::javax::swing::event::ChangeEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	int32_t getAdjustedIndex(int32_t index, bool row);
	virtual bool getAutoCreateColumnsFromModel();
	virtual bool getAutoCreateRowSorter();
	virtual int32_t getAutoResizeMode();
	virtual ::javax::swing::table::TableCellEditor* getCellEditor();
	virtual ::javax::swing::table::TableCellEditor* getCellEditor(int32_t row, int32_t column);
	virtual ::java::awt::Rectangle* getCellRect(int32_t row, int32_t column, bool includeSpacing);
	virtual ::javax::swing::table::TableCellRenderer* getCellRenderer(int32_t row, int32_t column);
	virtual bool getCellSelectionEnabled();
	virtual ::javax::swing::table::TableColumn* getColumn(Object$* identifier);
	virtual $Class* getColumnClass(int32_t column);
	virtual int32_t getColumnCount();
	virtual ::javax::swing::table::TableColumnModel* getColumnModel();
	virtual $String* getColumnName(int32_t column);
	virtual bool getColumnSelectionAllowed();
	virtual ::javax::swing::table::TableCellEditor* getDefaultEditor($Class* columnClass);
	virtual ::javax::swing::table::TableCellRenderer* getDefaultRenderer($Class* columnClass);
	virtual bool getDragEnabled();
	::javax::swing::JTable$DropLocation* getDropLocation();
	::javax::swing::DropMode* getDropMode();
	virtual int32_t getEditingColumn();
	virtual int32_t getEditingRow();
	virtual ::java::awt::Component* getEditorComponent();
	virtual bool getFillsViewportHeight();
	virtual ::java::awt::Color* getGridColor();
	virtual ::java::awt::Dimension* getIntercellSpacing();
	int32_t getLeadingCol(::java::awt::Rectangle* visibleRect);
	int32_t getLeadingRow(::java::awt::Rectangle* visibleRect);
	virtual ::javax::swing::table::TableModel* getModel();
	int32_t getNextBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation);
	virtual ::java::awt::Dimension* getPreferredScrollableViewportSize() override;
	int32_t getPreviousBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation);
	virtual ::java::awt::print::Printable* getPrintable(::javax::swing::JTable$PrintMode* printMode, ::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat);
	::javax::swing::table::TableColumn* getResizingColumn();
	virtual int32_t getRowCount();
	virtual int32_t getRowHeight();
	virtual int32_t getRowHeight(int32_t row);
	virtual int32_t getRowMargin();
	::javax::swing::SizeSequence* getRowModel();
	virtual bool getRowSelectionAllowed();
	virtual ::javax::swing::RowSorter* getRowSorter();
	virtual int32_t getScrollableBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual bool getScrollableTracksViewportHeight() override;
	virtual bool getScrollableTracksViewportWidth() override;
	virtual int32_t getScrollableUnitIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual int32_t getSelectedColumn();
	virtual int32_t getSelectedColumnCount();
	virtual $ints* getSelectedColumns();
	virtual int32_t getSelectedRow();
	virtual int32_t getSelectedRowCount();
	virtual $ints* getSelectedRows();
	virtual ::java::awt::Color* getSelectionBackground();
	virtual ::java::awt::Color* getSelectionForeground();
	virtual ::javax::swing::ListSelectionModel* getSelectionModel();
	virtual bool getShowHorizontalLines();
	virtual bool getShowVerticalLines();
	virtual bool getSurrendersFocusOnKeystroke();
	virtual ::javax::swing::table::JTableHeader* getTableHeader();
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* event) override;
	int32_t getTrailingCol(::java::awt::Rectangle* visibleRect);
	int32_t getTrailingRow(::java::awt::Rectangle* visibleRect);
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual bool getUpdateSelectionOnSort();
	virtual $Object* getValueAt(int32_t row, int32_t column);
	virtual void initializeLocalVars();
	virtual bool isCellEditable(int32_t row, int32_t column);
	virtual bool isCellSelected(int32_t row, int32_t column);
	virtual bool isColumnSelected(int32_t column);
	virtual bool isEditing();
	virtual bool isRowSelected(int32_t row);
	static bool isValidAutoResizeMode(int32_t mode);
	static $Object* lambda$createDefaultEditors$10(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultEditors$8(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultEditors$9(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultRenderers$0(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultRenderers$1(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultRenderers$2(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultRenderers$4(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultRenderers$5(::javax::swing::UIDefaults* t);
	static $Object* lambda$createDefaultRenderers$7(::javax::swing::UIDefaults* t);
	void lambda$print$11(::java::awt::print::PrinterJob* job, ::javax::print::attribute::PrintRequestAttributeSet* copyAttr, Object$* lock, ::sun::swing::PrintingStatus* printingStatus);
	int32_t leadingEdge(::java::awt::Rectangle* rect, int32_t orientation);
	int32_t limit(int32_t i, int32_t a, int32_t b);
	virtual void moveColumn(int32_t column, int32_t targetColumn);
	void notifySorter(::javax::swing::JTable$ModelChange* change);
	virtual $String* paramString() override;
	virtual ::java::awt::Component* prepareEditor(::javax::swing::table::TableCellEditor* editor, int32_t row, int32_t column);
	virtual ::java::awt::Component* prepareRenderer(::javax::swing::table::TableCellRenderer* renderer, int32_t row, int32_t column);
	using ::javax::swing::JComponent::print;
	virtual bool print();
	virtual bool print(::javax::swing::JTable$PrintMode* printMode);
	virtual bool print(::javax::swing::JTable$PrintMode* printMode, ::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat);
	virtual bool print(::javax::swing::JTable$PrintMode* printMode, ::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat, bool showPrintDialog, ::javax::print::attribute::PrintRequestAttributeSet* attr, bool interactive);
	virtual bool print(::javax::swing::JTable$PrintMode* printMode, ::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat, bool showPrintDialog, ::javax::print::attribute::PrintRequestAttributeSet* attr, bool interactive, ::javax::print::PrintService* service);
	virtual bool processKeyBinding(::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::remove;
	virtual void removeColumn(::javax::swing::table::TableColumn* aColumn);
	virtual void removeColumnSelectionInterval(int32_t index0, int32_t index1);
	virtual void removeEditor();
	virtual void removeNotify() override;
	virtual void removeRowSelectionInterval(int32_t index0, int32_t index1);
	using ::javax::swing::JComponent::repaint;
	void repaintSortedRows(::javax::swing::JTable$ModelChange* change);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	virtual void resizeAndRepaint();
	void restoreSortingEditingRow(int32_t editingRow);
	void restoreSortingSelection($ints* selection, int32_t lead, ::javax::swing::JTable$ModelChange* change);
	virtual int32_t rowAtPoint(::java::awt::Point* point);
	virtual void selectAll();
	virtual void setAutoCreateColumnsFromModel(bool autoCreateColumnsFromModel);
	virtual void setAutoCreateRowSorter(bool autoCreateRowSorter);
	virtual void setAutoResizeMode(int32_t mode);
	virtual void setCellEditor(::javax::swing::table::TableCellEditor* anEditor);
	virtual void setCellSelectionEnabled(bool cellSelectionEnabled);
	virtual void setColumnModel(::javax::swing::table::TableColumnModel* columnModel);
	virtual void setColumnSelectionAllowed(bool columnSelectionAllowed);
	virtual void setColumnSelectionInterval(int32_t index0, int32_t index1);
	virtual void setDefaultEditor($Class* columnClass, ::javax::swing::table::TableCellEditor* editor);
	virtual void setDefaultRenderer($Class* columnClass, ::javax::swing::table::TableCellRenderer* renderer);
	virtual void setDragEnabled(bool b);
	virtual $Object* setDropLocation(::javax::swing::TransferHandler$DropLocation* location, Object$* state, bool forDrop) override;
	void setDropMode(::javax::swing::DropMode* dropMode);
	virtual void setEditingColumn(int32_t aColumn);
	virtual void setEditingRow(int32_t aRow);
	virtual void setFillsViewportHeight(bool fillsViewportHeight);
	virtual void setGridColor(::java::awt::Color* gridColor);
	virtual void setIntercellSpacing(::java::awt::Dimension* intercellSpacing);
	virtual void setModel(::javax::swing::table::TableModel* dataModel);
	virtual void setPreferredScrollableViewportSize(::java::awt::Dimension* size);
	virtual void setRowHeight(int32_t rowHeight);
	virtual void setRowHeight(int32_t row, int32_t rowHeight);
	virtual void setRowMargin(int32_t rowMargin);
	virtual void setRowSelectionAllowed(bool rowSelectionAllowed);
	virtual void setRowSelectionInterval(int32_t index0, int32_t index1);
	virtual void setRowSorter(::javax::swing::RowSorter* sorter);
	virtual void setSelectionBackground(::java::awt::Color* selectionBackground);
	virtual void setSelectionForeground(::java::awt::Color* selectionForeground);
	virtual void setSelectionMode(int32_t selectionMode);
	virtual void setSelectionModel(::javax::swing::ListSelectionModel* selectionModel);
	virtual void setShowGrid(bool showGrid);
	virtual void setShowHorizontalLines(bool showHorizontalLines);
	virtual void setShowVerticalLines(bool showVerticalLines);
	virtual void setSurrendersFocusOnKeystroke(bool surrendersFocusOnKeystroke);
	virtual void setTableHeader(::javax::swing::table::JTableHeader* tableHeader);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::TableUI* ui);
	virtual void setUIProperty($String* propertyName, Object$* value) override;
	virtual void setUpdateSelectionOnSort(bool update);
	virtual void setValueAt(Object$* aValue, int32_t row, int32_t column);
	void setWidthsFromPreferredWidths(bool inverse);
	virtual void sizeColumnsToFit(bool lastColumnOnly);
	virtual void sizeColumnsToFit(int32_t resizingColumn);
	void sortedTableChanged(::javax::swing::event::RowSorterEvent* sortedEvent, ::javax::swing::event::TableModelEvent* e);
	virtual void sorterChanged(::javax::swing::event::RowSorterEvent* e) override;
	virtual void tableChanged(::javax::swing::event::TableModelEvent* e) override;
	void tableRowsDeleted(::javax::swing::event::TableModelEvent* e);
	void tableRowsInserted(::javax::swing::event::TableModelEvent* e);
	virtual $String* toString() override;
	int32_t trailingEdge(::java::awt::Rectangle* rect, int32_t orientation);
	virtual void unconfigureEnclosingScrollPane();
	virtual void updateUI() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	int32_t viewIndexForColumn(::javax::swing::table::TableColumn* aColumn);
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static $String* uiClassID;
	static const int32_t AUTO_RESIZE_OFF = 0;
	static const int32_t AUTO_RESIZE_NEXT_COLUMN = 1;
	static const int32_t AUTO_RESIZE_SUBSEQUENT_COLUMNS = 2;
	static const int32_t AUTO_RESIZE_LAST_COLUMN = 3;
	static const int32_t AUTO_RESIZE_ALL_COLUMNS = 4;
	::javax::swing::table::TableModel* dataModel = nullptr;
	::javax::swing::table::TableColumnModel* columnModel = nullptr;
	::javax::swing::ListSelectionModel* selectionModel = nullptr;
	::javax::swing::table::JTableHeader* tableHeader = nullptr;
	int32_t rowHeight = 0;
	int32_t rowMargin = 0;
	::java::awt::Color* gridColor = nullptr;
	bool showHorizontalLines = false;
	bool showVerticalLines = false;
	int32_t autoResizeMode = 0;
	bool autoCreateColumnsFromModel = false;
	::java::awt::Dimension* preferredViewportSize = nullptr;
	bool rowSelectionAllowed = false;
	bool cellSelectionEnabled = false;
	::java::awt::Component* editorComp = nullptr;
	::javax::swing::table::TableCellEditor* cellEditor = nullptr;
	int32_t editingColumn = 0;
	int32_t editingRow = 0;
	::java::util::Hashtable* defaultRenderersByColumnClass = nullptr;
	::java::util::Hashtable* defaultEditorsByColumnClass = nullptr;
	::java::awt::Color* selectionForeground = nullptr;
	::java::awt::Color* selectionBackground = nullptr;
	::javax::swing::SizeSequence* rowModel = nullptr;
	bool dragEnabled = false;
	bool surrendersFocusOnKeystroke = false;
	::java::beans::PropertyChangeListener* editorRemover = nullptr;
	bool columnSelectionAdjusting = false;
	bool rowSelectionAdjusting = false;
	$Throwable* printError = nullptr;
	bool isRowHeightSet = false;
	bool updateSelectionOnSort = false;
	::javax::swing::JTable$SortManager* sortManager = nullptr;
	bool ignoreSortChange = false;
	bool sorterChanged$ = false;
	bool autoCreateRowSorter = false;
	bool fillsViewportHeight = false;
	::javax::swing::DropMode* dropMode = nullptr;
	::javax::swing::JTable$DropLocation* dropLocation = nullptr;
	bool updateInProgress = false;
};

	} // swing
} // javax

#pragma pop_macro("AUTO_RESIZE_ALL_COLUMNS")
#pragma pop_macro("AUTO_RESIZE_LAST_COLUMN")
#pragma pop_macro("AUTO_RESIZE_NEXT_COLUMN")
#pragma pop_macro("AUTO_RESIZE_OFF")
#pragma pop_macro("AUTO_RESIZE_SUBSEQUENT_COLUMNS")

#endif // _javax_swing_JTable_h_