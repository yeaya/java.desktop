#ifndef _javax_swing_JComboBox_h_
#define _javax_swing_JComboBox_h_
//$ class javax.swing.JComboBox
//$ extends javax.swing.JComponent
//$ implements java.awt.ItemSelectable,javax.swing.event.ListDataListener,java.awt.event.ActionListener,javax.accessibility.Accessible

#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/event/ListDataListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ItemEvent;
			class ItemListener;
			class KeyEvent;
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
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
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
		class Action;
		class ComboBoxEditor;
		class ComboBoxModel;
		class JComboBox$KeySelectionManager;
		class KeyStroke;
		class ListCellRenderer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
			class PopupMenuListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComboBoxUI;
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JComboBox : public ::javax::swing::JComponent, public ::java::awt::ItemSelectable, public ::javax::swing::event::ListDataListener, public ::java::awt::event::ActionListener, public ::javax::accessibility::Accessible {
	$class(JComboBox, 0, ::javax::swing::JComponent, ::java::awt::ItemSelectable, ::javax::swing::event::ListDataListener, ::java::awt::event::ActionListener, ::javax::accessibility::Accessible)
public:
	JComboBox();
	using ::javax::swing::JComponent::contains;
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
	void init$(::javax::swing::ComboBoxModel* aModel);
	void init$($ObjectArray* items);
	void init$(::java::util::Vector* items);
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void actionPropertyChanged(::javax::swing::Action* action, $String* propertyName);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void addItem(Object$* item);
	virtual void addItemListener(::java::awt::event::ItemListener* aListener) override;
	virtual void addPopupMenuListener(::javax::swing::event::PopupMenuListener* l);
	virtual void checkMutableComboBoxModel();
	virtual void configureEditor(::javax::swing::ComboBoxEditor* anEditor, Object$* anItem);
	virtual void configurePropertiesFromAction(::javax::swing::Action* a);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual ::java::beans::PropertyChangeListener* createActionPropertyChangeListener(::javax::swing::Action* a);
	virtual ::javax::swing::JComboBox$KeySelectionManager* createDefaultKeySelectionManager();
	virtual void fireActionEvent();
	virtual void fireItemStateChanged(::java::awt::event::ItemEvent* e);
	virtual void firePopupMenuCanceled();
	virtual void firePopupMenuWillBecomeInvisible();
	virtual void firePopupMenuWillBecomeVisible();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::Action* getAction();
	virtual $String* getActionCommand();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual ::javax::swing::ComboBoxEditor* getEditor();
	virtual $Object* getItemAt(int32_t index);
	virtual int32_t getItemCount();
	virtual $Array<::java::awt::event::ItemListener>* getItemListeners();
	virtual ::javax::swing::JComboBox$KeySelectionManager* getKeySelectionManager();
	virtual int32_t getMaximumRowCount();
	virtual ::javax::swing::ComboBoxModel* getModel();
	virtual $Array<::javax::swing::event::PopupMenuListener>* getPopupMenuListeners();
	virtual $Object* getPrototypeDisplayValue();
	virtual ::javax::swing::ListCellRenderer* getRenderer();
	virtual int32_t getSelectedIndex();
	virtual $Object* getSelectedItem();
	virtual $ObjectArray* getSelectedObjects() override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual void hidePopup();
	void init();
	virtual void insertItemAt(Object$* item, int32_t index);
	virtual void installAncestorListener();
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	virtual bool isEditable();
	virtual bool isLightWeightPopupEnabled();
	bool isListener($Class* c, ::java::awt::event::ActionListener* a);
	virtual bool isPopupVisible();
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	virtual bool processKeyBinding(::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed) override;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e) override;
	using ::javax::swing::JComponent::remove;
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	virtual void removeAllItems();
	virtual void removeItem(Object$* anObject);
	virtual void removeItemAt(int32_t anIndex);
	virtual void removeItemListener(::java::awt::event::ItemListener* aListener) override;
	virtual void removePopupMenuListener(::javax::swing::event::PopupMenuListener* l);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual bool selectWithKeyChar(char16_t keyChar);
	virtual void selectedItemChanged();
	virtual void setAction(::javax::swing::Action* a);
	virtual void setActionCommand($String* aCommand);
	void setActionCommandFromAction(::javax::swing::Action* a);
	virtual void setEditable(bool aFlag);
	virtual void setEditor(::javax::swing::ComboBoxEditor* anEditor);
	virtual void setEnabled(bool b) override;
	virtual void setKeySelectionManager(::javax::swing::JComboBox$KeySelectionManager* aManager);
	virtual void setLightWeightPopupEnabled(bool aFlag);
	virtual void setMaximumRowCount(int32_t count);
	virtual void setModel(::javax::swing::ComboBoxModel* aModel);
	virtual void setPopupVisible(bool v);
	virtual void setPrototypeDisplayValue(Object$* prototypeDisplayValue);
	virtual void setRenderer(::javax::swing::ListCellRenderer* aRenderer);
	virtual void setSelectedIndex(int32_t anIndex);
	virtual void setSelectedItem(Object$* anObject);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ComboBoxUI* ui);
	virtual void showPopup();
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::ComboBoxModel* dataModel = nullptr;
	::javax::swing::ListCellRenderer* renderer = nullptr;
	::javax::swing::ComboBoxEditor* editor = nullptr;
	int32_t maximumRowCount = 0;
	bool isEditable$ = false;
	::javax::swing::JComboBox$KeySelectionManager* keySelectionManager = nullptr;
	$String* actionCommand = nullptr;
	bool lightWeightPopupEnabled = false;
	$Object* selectedItemReminder = nullptr;
	$Object* prototypeDisplayValue = nullptr;
	bool firingActionEvent = false;
	bool selectingItem = false;
	bool updateInProgress = false;
	::javax::swing::Action* action$ = nullptr;
	::java::beans::PropertyChangeListener* actionPropertyChangeListener = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox_h_