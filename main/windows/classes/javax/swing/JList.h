#ifndef _javax_swing_JList_h_
#define _javax_swing_JList_h_
//$ class javax.swing.JList
//$ extends javax.swing.JComponent
//$ implements javax.swing.Scrollable,javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Scrollable.h>

#pragma push_macro("HORIZONTAL_WRAP")
#undef HORIZONTAL_WRAP
#pragma push_macro("VERTICAL")
#undef VERTICAL
#pragma push_macro("VERTICAL_WRAP")
#undef VERTICAL_WRAP

namespace java {
	namespace awt {
		class Color;
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
namespace java {
	namespace util {
		class List;
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class DropMode;
		class JList$DropLocation;
		class ListCellRenderer;
		class ListModel;
		class ListSelectionModel;
		class TransferHandler$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class ListUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {

class $export JList : public ::javax::swing::JComponent, public ::javax::swing::Scrollable, public ::javax::accessibility::Accessible {
	$class(JList, 0, ::javax::swing::JComponent, ::javax::swing::Scrollable, ::javax::accessibility::Accessible)
public:
	JList();
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
	void init$(::javax::swing::ListModel* dataModel);
	void init$($ObjectArray* listData);
	void init$(::java::util::Vector* listData);
	void init$();
	virtual void addListSelectionListener(::javax::swing::event::ListSelectionListener* listener);
	virtual void addSelectionInterval(int32_t anchor, int32_t lead);
	void checkScrollableParameters(::java::awt::Rectangle* visibleRect, int32_t orientation);
	virtual void clearSelection();
	virtual ::javax::swing::ListSelectionModel* createSelectionModel();
	virtual ::javax::swing::TransferHandler$DropLocation* dropLocationForPoint(::java::awt::Point* p) override;
	virtual void ensureIndexIsVisible(int32_t index);
	virtual void fireSelectionValueChanged(int32_t firstIndex, int32_t lastIndex, bool isAdjusting);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getAnchorSelectionIndex();
	virtual ::java::awt::Rectangle* getCellBounds(int32_t index0, int32_t index1);
	virtual ::javax::swing::ListCellRenderer* getCellRenderer();
	virtual bool getDragEnabled();
	::javax::swing::JList$DropLocation* getDropLocation();
	::javax::swing::DropMode* getDropMode();
	virtual int32_t getFirstVisibleIndex();
	virtual int32_t getFixedCellHeight();
	virtual int32_t getFixedCellWidth();
	virtual int32_t getLastVisibleIndex();
	virtual int32_t getLayoutOrientation();
	virtual int32_t getLeadSelectionIndex();
	virtual $Array<::javax::swing::event::ListSelectionListener>* getListSelectionListeners();
	virtual int32_t getMaxSelectionIndex();
	virtual int32_t getMinSelectionIndex();
	virtual ::javax::swing::ListModel* getModel();
	virtual int32_t getNextMatch($String* prefix, int32_t startIndex, ::javax::swing::text::Position$Bias* bias);
	virtual ::java::awt::Dimension* getPreferredScrollableViewportSize() override;
	virtual $Object* getPrototypeCellValue();
	virtual int32_t getScrollableBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual bool getScrollableTracksViewportHeight() override;
	virtual bool getScrollableTracksViewportWidth() override;
	virtual int32_t getScrollableUnitIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual int32_t getSelectedIndex();
	virtual $ints* getSelectedIndices();
	virtual $Object* getSelectedValue();
	virtual $ObjectArray* getSelectedValues();
	virtual ::java::util::List* getSelectedValuesList();
	virtual ::java::awt::Color* getSelectionBackground();
	virtual ::java::awt::Color* getSelectionForeground();
	virtual int32_t getSelectionMode();
	virtual ::javax::swing::ListSelectionModel* getSelectionModel();
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* event) override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual bool getValueIsAdjusting();
	virtual int32_t getVisibleRowCount();
	virtual ::java::awt::Point* indexToLocation(int32_t index);
	virtual bool isSelectedIndex(int32_t index);
	virtual bool isSelectionEmpty();
	virtual int32_t locationToIndex(::java::awt::Point* location);
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void removeListSelectionListener(::javax::swing::event::ListSelectionListener* listener);
	virtual void removeSelectionInterval(int32_t index0, int32_t index1);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setCellRenderer(::javax::swing::ListCellRenderer* cellRenderer);
	virtual void setDragEnabled(bool b);
	virtual $Object* setDropLocation(::javax::swing::TransferHandler$DropLocation* location, Object$* state, bool forDrop) override;
	void setDropMode(::javax::swing::DropMode* dropMode);
	virtual void setFixedCellHeight(int32_t height);
	virtual void setFixedCellWidth(int32_t width);
	virtual void setLayoutOrientation(int32_t layoutOrientation);
	virtual void setListData($ObjectArray* listData);
	virtual void setListData(::java::util::Vector* listData);
	virtual void setModel(::javax::swing::ListModel* model);
	virtual void setPrototypeCellValue(Object$* prototypeCellValue);
	virtual void setSelectedIndex(int32_t index);
	virtual void setSelectedIndices($ints* indices);
	virtual void setSelectedValue(Object$* anObject, bool shouldScroll);
	virtual void setSelectionBackground(::java::awt::Color* selectionBackground);
	virtual void setSelectionForeground(::java::awt::Color* selectionForeground);
	virtual void setSelectionInterval(int32_t anchor, int32_t lead);
	virtual void setSelectionMode(int32_t selectionMode);
	virtual void setSelectionModel(::javax::swing::ListSelectionModel* selectionModel);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ListUI* ui);
	virtual void setValueIsAdjusting(bool b);
	virtual void setVisibleRowCount(int32_t visibleRowCount);
	virtual $String* toString() override;
	void updateFixedCellSize();
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static $String* uiClassID;
	static const int32_t VERTICAL = 0;
	static const int32_t VERTICAL_WRAP = 1;
	static const int32_t HORIZONTAL_WRAP = 2;
	int32_t fixedCellWidth = 0;
	int32_t fixedCellHeight = 0;
	int32_t horizontalScrollIncrement = 0;
	$Object* prototypeCellValue = nullptr;
	int32_t visibleRowCount = 0;
	::java::awt::Color* selectionForeground = nullptr;
	::java::awt::Color* selectionBackground = nullptr;
	bool dragEnabled = false;
	::javax::swing::ListSelectionModel* selectionModel = nullptr;
	::javax::swing::ListModel* dataModel = nullptr;
	::javax::swing::ListCellRenderer* cellRenderer = nullptr;
	::javax::swing::event::ListSelectionListener* selectionListener = nullptr;
	int32_t layoutOrientation = 0;
	::javax::swing::DropMode* dropMode = nullptr;
	::javax::swing::JList$DropLocation* dropLocation = nullptr;
	bool updateInProgress = false;
};

	} // swing
} // javax

#pragma pop_macro("HORIZONTAL_WRAP")
#pragma pop_macro("VERTICAL")
#pragma pop_macro("VERTICAL_WRAP")

#endif // _javax_swing_JList_h_