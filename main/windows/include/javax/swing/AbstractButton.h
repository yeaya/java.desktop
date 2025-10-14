#ifndef _javax_swing_AbstractButton_h_
#define _javax_swing_AbstractButton_h_
//$ class javax.swing.AbstractButton
//$ extends javax.swing.JComponent
//$ implements java.awt.ItemSelectable,javax.swing.SwingConstants

#include <java/awt/ItemSelectable.h>
#include <java/lang/Array.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>

#pragma push_macro("BORDER_PAINTED_CHANGED_PROPERTY")
#undef BORDER_PAINTED_CHANGED_PROPERTY
#pragma push_macro("CONTENT_AREA_FILLED_CHANGED_PROPERTY")
#undef CONTENT_AREA_FILLED_CHANGED_PROPERTY
#pragma push_macro("DISABLED_ICON_CHANGED_PROPERTY")
#undef DISABLED_ICON_CHANGED_PROPERTY
#pragma push_macro("DISABLED_SELECTED_ICON_CHANGED_PROPERTY")
#undef DISABLED_SELECTED_ICON_CHANGED_PROPERTY
#pragma push_macro("FOCUS_PAINTED_CHANGED_PROPERTY")
#undef FOCUS_PAINTED_CHANGED_PROPERTY
#pragma push_macro("HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY")
#undef HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY
#pragma push_macro("HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY")
#undef HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY
#pragma push_macro("ICON_CHANGED_PROPERTY")
#undef ICON_CHANGED_PROPERTY
#pragma push_macro("MARGIN_CHANGED_PROPERTY")
#undef MARGIN_CHANGED_PROPERTY
#pragma push_macro("MNEMONIC_CHANGED_PROPERTY")
#undef MNEMONIC_CHANGED_PROPERTY
#pragma push_macro("MODEL_CHANGED_PROPERTY")
#undef MODEL_CHANGED_PROPERTY
#pragma push_macro("PRESSED_ICON_CHANGED_PROPERTY")
#undef PRESSED_ICON_CHANGED_PROPERTY
#pragma push_macro("ROLLOVER_ENABLED_CHANGED_PROPERTY")
#undef ROLLOVER_ENABLED_CHANGED_PROPERTY
#pragma push_macro("ROLLOVER_ICON_CHANGED_PROPERTY")
#undef ROLLOVER_ICON_CHANGED_PROPERTY
#pragma push_macro("ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY")
#undef ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY
#pragma push_macro("SELECTED_ICON_CHANGED_PROPERTY")
#undef SELECTED_ICON_CHANGED_PROPERTY
#pragma push_macro("TEXT_CHANGED_PROPERTY")
#undef TEXT_CHANGED_PROPERTY
#pragma push_macro("VERTICAL_ALIGNMENT_CHANGED_PROPERTY")
#undef VERTICAL_ALIGNMENT_CHANGED_PROPERTY
#pragma push_macro("VERTICAL_TEXT_POSITION_CHANGED_PROPERTY")
#undef VERTICAL_TEXT_POSITION_CHANGED_PROPERTY

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Image;
		class Insets;
		class LayoutManager;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
			class ItemEvent;
			class ItemListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton$Handler;
		class Action;
		class ButtonModel;
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ButtonUI;
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import AbstractButton : public ::javax::swing::JComponent, public ::java::awt::ItemSelectable, public ::javax::swing::SwingConstants {
	$class(AbstractButton, 0, ::javax::swing::JComponent, ::java::awt::ItemSelectable, ::javax::swing::SwingConstants)
public:
	AbstractButton();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$();
	static ::javax::accessibility::AccessibleContext* access$000(::javax::swing::AbstractButton* x0);
	virtual void actionPropertyChanged(::javax::swing::Action* action, $String* propertyName);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual void addItemListener(::java::awt::event::ItemListener* l) override;
	virtual int32_t checkHorizontalKey(int32_t key, $String* exception);
	virtual int32_t checkVerticalKey(int32_t key, $String* exception);
	virtual void clientPropertyChanged(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual void configurePropertiesFromAction(::javax::swing::Action* a);
	virtual ::java::awt::event::ActionListener* createActionListener();
	virtual ::java::beans::PropertyChangeListener* createActionPropertyChangeListener(::javax::swing::Action* a);
	virtual ::java::beans::PropertyChangeListener* createActionPropertyChangeListener0(::javax::swing::Action* a);
	virtual ::javax::swing::event::ChangeListener* createChangeListener();
	virtual ::java::awt::event::ItemListener* createItemListener();
	virtual void doClick();
	virtual void doClick(int32_t pressTime);
	virtual void fireActionPerformed(::java::awt::event::ActionEvent* event);
	virtual void fireItemStateChanged(::java::awt::event::ItemEvent* event);
	virtual void fireStateChanged();
	virtual ::javax::swing::Action* getAction();
	virtual $String* getActionCommand();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual ::javax::swing::Icon* getDisabledIcon();
	virtual ::javax::swing::Icon* getDisabledSelectedIcon();
	virtual int32_t getDisplayedMnemonicIndex();
	::javax::swing::AbstractButton$Handler* getHandler();
	virtual bool getHideActionText();
	virtual int32_t getHorizontalAlignment();
	virtual int32_t getHorizontalTextPosition();
	virtual ::javax::swing::Icon* getIcon();
	virtual int32_t getIconTextGap();
	virtual $Array<::java::awt::event::ItemListener>* getItemListeners();
	virtual $String* getLabel();
	virtual ::java::awt::Insets* getMargin();
	virtual int32_t getMnemonic();
	virtual ::javax::swing::ButtonModel* getModel();
	virtual int64_t getMultiClickThreshhold();
	virtual ::javax::swing::Icon* getPressedIcon();
	virtual ::javax::swing::Icon* getRolloverIcon();
	virtual ::javax::swing::Icon* getRolloverSelectedIcon();
	virtual ::javax::swing::Icon* getSelectedIcon();
	virtual $ObjectArray* getSelectedObjects() override;
	virtual $String* getText();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual int32_t getVerticalAlignment();
	virtual int32_t getVerticalTextPosition();
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void init($String* text, ::javax::swing::Icon* icon);
	virtual bool isBorderPainted();
	virtual bool isContentAreaFilled();
	virtual bool isFocusPainted();
	bool isListener($Class* c, ::java::awt::event::ActionListener* a);
	virtual bool isRolloverEnabled();
	virtual bool isSelected();
	virtual void largeIconChanged(::javax::swing::Action* a);
	using ::javax::swing::JComponent::list;
	virtual void paintBorder(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void removeItemListener(::java::awt::event::ItemListener* l) override;
	virtual void removeNotify() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setAction(::javax::swing::Action* a);
	virtual void setActionCommand($String* actionCommand);
	void setActionCommandFromAction(::javax::swing::Action* a);
	virtual void setBorderPainted(bool b);
	virtual void setContentAreaFilled(bool b);
	virtual void setDisabledIcon(::javax::swing::Icon* disabledIcon);
	virtual void setDisabledSelectedIcon(::javax::swing::Icon* disabledSelectedIcon);
	virtual void setDisplayedMnemonicIndex(int32_t index);
	void setDisplayedMnemonicIndexFromAction(::javax::swing::Action* a, bool fromPropertyChange);
	virtual void setEnabled(bool b) override;
	virtual void setFocusPainted(bool b);
	virtual void setHideActionText(bool hideActionText);
	virtual void setHorizontalAlignment(int32_t alignment);
	virtual void setHorizontalTextPosition(int32_t textPosition);
	virtual void setIcon(::javax::swing::Icon* defaultIcon);
	virtual void setIconFromAction(::javax::swing::Action* a);
	virtual void setIconTextGap(int32_t iconTextGap);
	virtual void setLabel($String* label);
	virtual void setLayout(::java::awt::LayoutManager* mgr) override;
	virtual void setMargin(::java::awt::Insets* m);
	virtual void setMnemonic(int32_t mnemonic);
	virtual void setMnemonic(char16_t mnemonic);
	void setMnemonicFromAction(::javax::swing::Action* a);
	virtual void setModel(::javax::swing::ButtonModel* newModel);
	virtual void setMultiClickThreshhold(int64_t threshhold);
	virtual void setPressedIcon(::javax::swing::Icon* pressedIcon);
	virtual void setRolloverEnabled(bool b);
	virtual void setRolloverIcon(::javax::swing::Icon* rolloverIcon);
	virtual void setRolloverSelectedIcon(::javax::swing::Icon* rolloverSelectedIcon);
	virtual void setSelected(bool b);
	void setSelectedFromAction(::javax::swing::Action* a);
	virtual void setSelectedIcon(::javax::swing::Icon* selectedIcon);
	virtual void setText($String* text);
	void setTextFromAction(::javax::swing::Action* a, bool propertyChange);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ButtonUI* ui);
	virtual void setUIProperty($String* propertyName, Object$* value) override;
	virtual void setVerticalAlignment(int32_t alignment);
	virtual void setVerticalTextPosition(int32_t textPosition);
	virtual bool shouldUpdateSelectedStateFromAction();
	virtual void smallIconChanged(::javax::swing::Action* a);
	virtual $String* toString() override;
	void updateDisplayedMnemonicIndex($String* text, int32_t mnemonic);
	void updateMnemonicProperties();
	virtual void updateUI() override;
	static $String* MODEL_CHANGED_PROPERTY;
	static $String* TEXT_CHANGED_PROPERTY;
	static $String* MNEMONIC_CHANGED_PROPERTY;
	static $String* MARGIN_CHANGED_PROPERTY;
	static $String* VERTICAL_ALIGNMENT_CHANGED_PROPERTY;
	static $String* HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY;
	static $String* VERTICAL_TEXT_POSITION_CHANGED_PROPERTY;
	static $String* HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY;
	static $String* BORDER_PAINTED_CHANGED_PROPERTY;
	static $String* FOCUS_PAINTED_CHANGED_PROPERTY;
	static $String* ROLLOVER_ENABLED_CHANGED_PROPERTY;
	static $String* CONTENT_AREA_FILLED_CHANGED_PROPERTY;
	static $String* ICON_CHANGED_PROPERTY;
	static $String* PRESSED_ICON_CHANGED_PROPERTY;
	static $String* SELECTED_ICON_CHANGED_PROPERTY;
	static $String* ROLLOVER_ICON_CHANGED_PROPERTY;
	static $String* ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY;
	static $String* DISABLED_ICON_CHANGED_PROPERTY;
	static $String* DISABLED_SELECTED_ICON_CHANGED_PROPERTY;
	::javax::swing::ButtonModel* model = nullptr;
	$String* text = nullptr;
	::java::awt::Insets* margin = nullptr;
	::java::awt::Insets* defaultMargin = nullptr;
	::javax::swing::Icon* defaultIcon = nullptr;
	::javax::swing::Icon* pressedIcon = nullptr;
	::javax::swing::Icon* disabledIcon = nullptr;
	::javax::swing::Icon* selectedIcon = nullptr;
	::javax::swing::Icon* disabledSelectedIcon = nullptr;
	::javax::swing::Icon* rolloverIcon = nullptr;
	::javax::swing::Icon* rolloverSelectedIcon = nullptr;
	bool paintBorder$ = false;
	bool paintFocus = false;
	bool rolloverEnabled = false;
	bool contentAreaFilled = false;
	int32_t verticalAlignment = 0;
	int32_t horizontalAlignment = 0;
	int32_t verticalTextPosition = 0;
	int32_t horizontalTextPosition = 0;
	int32_t iconTextGap = 0;
	int32_t mnemonic = 0;
	int32_t mnemonicIndex = 0;
	int64_t multiClickThreshhold = 0;
	bool borderPaintedSet = false;
	bool rolloverEnabledSet = false;
	bool iconTextGapSet = false;
	bool contentAreaFilledSet = false;
	bool setLayout$ = false;
	bool defaultCapable = false;
	::javax::swing::AbstractButton$Handler* handler = nullptr;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::java::awt::event::ActionListener* actionListener = nullptr;
	::java::awt::event::ItemListener* itemListener = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	bool hideActionText = false;
	::javax::swing::Action* action$ = nullptr;
	::java::beans::PropertyChangeListener* actionPropertyChangeListener = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("BORDER_PAINTED_CHANGED_PROPERTY")
#pragma pop_macro("CONTENT_AREA_FILLED_CHANGED_PROPERTY")
#pragma pop_macro("DISABLED_ICON_CHANGED_PROPERTY")
#pragma pop_macro("DISABLED_SELECTED_ICON_CHANGED_PROPERTY")
#pragma pop_macro("FOCUS_PAINTED_CHANGED_PROPERTY")
#pragma pop_macro("HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY")
#pragma pop_macro("HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY")
#pragma pop_macro("ICON_CHANGED_PROPERTY")
#pragma pop_macro("MARGIN_CHANGED_PROPERTY")
#pragma pop_macro("MNEMONIC_CHANGED_PROPERTY")
#pragma pop_macro("MODEL_CHANGED_PROPERTY")
#pragma pop_macro("PRESSED_ICON_CHANGED_PROPERTY")
#pragma pop_macro("ROLLOVER_ENABLED_CHANGED_PROPERTY")
#pragma pop_macro("ROLLOVER_ICON_CHANGED_PROPERTY")
#pragma pop_macro("ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY")
#pragma pop_macro("SELECTED_ICON_CHANGED_PROPERTY")
#pragma pop_macro("TEXT_CHANGED_PROPERTY")
#pragma pop_macro("VERTICAL_ALIGNMENT_CHANGED_PROPERTY")
#pragma pop_macro("VERTICAL_TEXT_POSITION_CHANGED_PROPERTY")

#endif // _javax_swing_AbstractButton_h_