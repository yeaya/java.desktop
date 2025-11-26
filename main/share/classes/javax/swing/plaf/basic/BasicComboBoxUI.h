#ifndef _javax_swing_plaf_basic_BasicComboBoxUI_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI
//$ extends javax.swing.plaf.ComboBoxUI

#include <javax/swing/plaf/ComboBoxUI.h>

#pragma push_macro("COMBO_UI_LIST_CELL_RENDERER_KEY")
#undef COMBO_UI_LIST_CELL_RENDERER_KEY
#pragma push_macro("HIDE_POPUP_KEY")
#undef HIDE_POPUP_KEY
#pragma push_macro("IS_TABLE_CELL_EDITOR")
#undef IS_TABLE_CELL_EDITOR

namespace java {
	namespace awt {
		class Component;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
		class Insets;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
			class ItemListener;
			class KeyListener;
			class MouseListener;
			class MouseMotionListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		class CellRendererPane;
		class ComboBoxEditor;
		class InputMap;
		class JButton;
		class JComboBox;
		class JComboBox$KeySelectionManager;
		class JComponent;
		class JList;
		class ListCellRenderer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboBoxUI$Handler;
				class ComboPopup;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboBoxUI : public ::javax::swing::plaf::ComboBoxUI {
	$class(BasicComboBoxUI, 0, ::javax::swing::plaf::ComboBoxUI)
public:
	BasicComboBoxUI();
	void init$();
	virtual void addEditor();
	virtual void configureArrowButton();
	virtual void configureEditor();
	virtual ::javax::swing::JButton* createArrowButton();
	virtual ::javax::swing::ComboBoxEditor* createEditor();
	virtual ::java::awt::event::FocusListener* createFocusListener();
	virtual ::java::awt::event::ItemListener* createItemListener();
	virtual ::java::awt::event::KeyListener* createKeyListener();
	virtual ::java::awt::LayoutManager* createLayoutManager();
	virtual ::javax::swing::event::ListDataListener* createListDataListener();
	virtual ::javax::swing::plaf::basic::ComboPopup* createPopup();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::javax::swing::ListCellRenderer* createRenderer();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* c, int32_t i) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* c) override;
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	static ::javax::swing::ListCellRenderer* getDefaultListCellRenderer();
	virtual ::java::awt::Dimension* getDefaultSize();
	virtual ::java::awt::Dimension* getDisplaySize();
	::javax::swing::plaf::basic::BasicComboBoxUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Insets* getInsets();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getSizeForComponent(::java::awt::Component* comp);
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isFocusTraversable(::javax::swing::JComboBox* c) override;
	virtual bool isNavigationKey(int32_t keyCode);
	bool isNavigationKey(int32_t keyCode, int32_t modifiers);
	virtual bool isPopupVisible(::javax::swing::JComboBox* c) override;
	virtual bool isTableCellEditor();
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintCurrentValue(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus);
	virtual void paintCurrentValueBackground(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus);
	virtual ::java::awt::Rectangle* rectangleForCurrentValue();
	virtual void removeEditor();
	virtual void repaintCurrentValue();
	virtual void selectNextPossibleValue();
	virtual void selectPreviousPossibleValue();
	virtual void setPopupVisible(::javax::swing::JComboBox* c, bool v) override;
	virtual void toggleOpenClose();
	virtual void unconfigureArrowButton();
	virtual void unconfigureEditor();
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateToolTipTextForChildren();
	::javax::swing::JComboBox* comboBox = nullptr;
	bool hasFocus = false;
	bool isTableCellEditor$ = false;
	static $String* IS_TABLE_CELL_EDITOR;
	::javax::swing::JList* listBox = nullptr;
	::javax::swing::CellRendererPane* currentValuePane = nullptr;
	::javax::swing::plaf::basic::ComboPopup* popup = nullptr;
	::java::awt::Component* editor = nullptr;
	::javax::swing::JButton* arrowButton = nullptr;
	::java::awt::event::KeyListener* keyListener = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::java::awt::event::ItemListener* itemListener = nullptr;
	::java::awt::event::MouseListener* popupMouseListener = nullptr;
	::java::awt::event::MouseMotionListener* popupMouseMotionListener = nullptr;
	::java::awt::event::KeyListener* popupKeyListener = nullptr;
	::javax::swing::event::ListDataListener* listDataListener = nullptr;
	::javax::swing::plaf::basic::BasicComboBoxUI$Handler* handler = nullptr;
	int64_t timeFactor = 0;
	int64_t lastTime = 0;
	int64_t time = 0;
	::javax::swing::JComboBox$KeySelectionManager* keySelectionManager = nullptr;
	bool isMinimumSizeDirty = false;
	::java::awt::Dimension* cachedMinimumSize = nullptr;
	bool isDisplaySizeDirty = false;
	::java::awt::Dimension* cachedDisplaySize = nullptr;
	static $Object* COMBO_UI_LIST_CELL_RENDERER_KEY;
	static ::java::lang::StringBuffer* HIDE_POPUP_KEY;
	bool sameBaseline = false;
	bool squareButton = false;
	::java::awt::Insets* padding = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("COMBO_UI_LIST_CELL_RENDERER_KEY")
#pragma pop_macro("HIDE_POPUP_KEY")
#pragma pop_macro("IS_TABLE_CELL_EDITOR")

#endif // _javax_swing_plaf_basic_BasicComboBoxUI_h_