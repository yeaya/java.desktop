#ifndef _javax_swing_JOptionPane_h_
#define _javax_swing_JOptionPane_h_
//$ class javax.swing.JOptionPane
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("CANCEL_OPTION")
#undef CANCEL_OPTION
#pragma push_macro("CLOSED_OPTION")
#undef CLOSED_OPTION
#pragma push_macro("DEFAULT_OPTION")
#undef DEFAULT_OPTION
#pragma push_macro("ERROR_MESSAGE")
#undef ERROR_MESSAGE
#pragma push_macro("ICON_PROPERTY")
#undef ICON_PROPERTY
#pragma push_macro("INFORMATION_MESSAGE")
#undef INFORMATION_MESSAGE
#pragma push_macro("INITIAL_SELECTION_VALUE_PROPERTY")
#undef INITIAL_SELECTION_VALUE_PROPERTY
#pragma push_macro("INITIAL_VALUE_PROPERTY")
#undef INITIAL_VALUE_PROPERTY
#pragma push_macro("INPUT_VALUE_PROPERTY")
#undef INPUT_VALUE_PROPERTY
#pragma push_macro("MESSAGE_PROPERTY")
#undef MESSAGE_PROPERTY
#pragma push_macro("MESSAGE_TYPE_PROPERTY")
#undef MESSAGE_TYPE_PROPERTY
#pragma push_macro("NO_OPTION")
#undef NO_OPTION
#pragma push_macro("OK_CANCEL_OPTION")
#undef OK_CANCEL_OPTION
#pragma push_macro("OK_OPTION")
#undef OK_OPTION
#pragma push_macro("OPTIONS_PROPERTY")
#undef OPTIONS_PROPERTY
#pragma push_macro("OPTION_TYPE_PROPERTY")
#undef OPTION_TYPE_PROPERTY
#pragma push_macro("PLAIN_MESSAGE")
#undef PLAIN_MESSAGE
#pragma push_macro("QUESTION_MESSAGE")
#undef QUESTION_MESSAGE
#pragma push_macro("SELECTION_VALUES_PROPERTY")
#undef SELECTION_VALUES_PROPERTY
#pragma push_macro("UNINITIALIZED_VALUE")
#undef UNINITIALIZED_VALUE
#pragma push_macro("VALUE_PROPERTY")
#undef VALUE_PROPERTY
#pragma push_macro("WANTS_INPUT_PROPERTY")
#undef WANTS_INPUT_PROPERTY
#pragma push_macro("WARNING_MESSAGE")
#undef WARNING_MESSAGE
#pragma push_macro("YES_NO_CANCEL_OPTION")
#undef YES_NO_CANCEL_OPTION
#pragma push_macro("YES_NO_OPTION")
#undef YES_NO_OPTION
#pragma push_macro("YES_OPTION")
#undef YES_OPTION

namespace java {
	namespace awt {
		class Component;
		class Frame;
		class Window;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
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
		class Icon;
		class JDesktopPane;
		class JDialog;
		class JInternalFrame;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class OptionPaneUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JOptionPane : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JOptionPane, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JOptionPane();
	using ::javax::swing::JComponent::contains;
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
	void init$(Object$* message);
	void init$(Object$* message, int32_t messageType);
	void init$(Object$* message, int32_t messageType, int32_t optionType);
	void init$(Object$* message, int32_t messageType, int32_t optionType, ::javax::swing::Icon* icon);
	void init$(Object$* message, int32_t messageType, int32_t optionType, ::javax::swing::Icon* icon, $ObjectArray* options);
	void init$(Object$* message, int32_t messageType, int32_t optionType, ::javax::swing::Icon* icon, $ObjectArray* options, Object$* initialValue);
	static bool checkFrameForComponent(::java::awt::Component* parentComponent);
	static void checkMessageType(int32_t newType);
	static void checkOptionType(int32_t newType);
	virtual ::javax::swing::JDialog* createDialog(::java::awt::Component* parentComponent, $String* title);
	virtual ::javax::swing::JDialog* createDialog($String* title);
	::javax::swing::JDialog* createDialog(::java::awt::Component* parentComponent, $String* title, int32_t style);
	virtual ::javax::swing::JInternalFrame* createInternalFrame(::java::awt::Component* parentComponent, $String* title);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	static ::javax::swing::JDesktopPane* getDesktopPaneForComponent(::java::awt::Component* parentComponent);
	static ::java::awt::Frame* getFrameForComponent(::java::awt::Component* parentComponent);
	virtual ::javax::swing::Icon* getIcon();
	virtual $Object* getInitialSelectionValue();
	virtual $Object* getInitialValue();
	virtual $Object* getInputValue();
	virtual int32_t getMaxCharactersPerLineCount();
	virtual $Object* getMessage();
	virtual int32_t getMessageType();
	virtual int32_t getOptionType();
	virtual $ObjectArray* getOptions();
	static ::java::awt::Frame* getRootFrame();
	virtual $ObjectArray* getSelectionValues();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual $Object* getValue();
	virtual bool getWantsInput();
	static ::java::awt::Window* getWindowForComponent(::java::awt::Component* parentComponent);
	void initDialog(::javax::swing::JDialog* dialog, int32_t style, ::java::awt::Component* parentComponent);
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void selectInitialValue();
	virtual void setIcon(::javax::swing::Icon* newIcon);
	virtual void setInitialSelectionValue(Object$* newValue);
	virtual void setInitialValue(Object$* newInitialValue);
	virtual void setInputValue(Object$* newValue);
	virtual void setMessage(Object$* newMessage);
	virtual void setMessageType(int32_t newType);
	virtual void setOptionType(int32_t newType);
	virtual void setOptions($ObjectArray* newOptions);
	static void setRootFrame(::java::awt::Frame* newRootFrame);
	virtual void setSelectionValues($ObjectArray* newValues);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::OptionPaneUI* ui);
	virtual void setValue(Object$* newValue);
	virtual void setWantsInput(bool newValue);
	static int32_t showConfirmDialog(::java::awt::Component* parentComponent, Object$* message);
	static int32_t showConfirmDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType);
	static int32_t showConfirmDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType);
	static int32_t showConfirmDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, ::javax::swing::Icon* icon);
	static $String* showInputDialog(Object$* message);
	static $String* showInputDialog(Object$* message, Object$* initialSelectionValue);
	static $String* showInputDialog(::java::awt::Component* parentComponent, Object$* message);
	static $String* showInputDialog(::java::awt::Component* parentComponent, Object$* message, Object$* initialSelectionValue);
	static $String* showInputDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType);
	static $Object* showInputDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType, ::javax::swing::Icon* icon, $ObjectArray* selectionValues, Object$* initialSelectionValue);
	static int32_t showInternalConfirmDialog(::java::awt::Component* parentComponent, Object$* message);
	static int32_t showInternalConfirmDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType);
	static int32_t showInternalConfirmDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType);
	static int32_t showInternalConfirmDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, ::javax::swing::Icon* icon);
	static $String* showInternalInputDialog(::java::awt::Component* parentComponent, Object$* message);
	static $String* showInternalInputDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType);
	static $Object* showInternalInputDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType, ::javax::swing::Icon* icon, $ObjectArray* selectionValues, Object$* initialSelectionValue);
	static void showInternalMessageDialog(::java::awt::Component* parentComponent, Object$* message);
	static void showInternalMessageDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType);
	static void showInternalMessageDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType, ::javax::swing::Icon* icon);
	static int32_t showInternalOptionDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, ::javax::swing::Icon* icon, $ObjectArray* options, Object$* initialValue);
	static void showMessageDialog(::java::awt::Component* parentComponent, Object$* message);
	static void showMessageDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType);
	static void showMessageDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType, ::javax::swing::Icon* icon);
	static int32_t showOptionDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, ::javax::swing::Icon* icon, $ObjectArray* options, Object$* initialValue);
	static int32_t styleFromMessageType(int32_t messageType);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static $Object* UNINITIALIZED_VALUE;
	static const int32_t DEFAULT_OPTION = (-1);
	static const int32_t YES_NO_OPTION = 0;
	static const int32_t YES_NO_CANCEL_OPTION = 1;
	static const int32_t OK_CANCEL_OPTION = 2;
	static const int32_t YES_OPTION = 0;
	static const int32_t NO_OPTION = 1;
	static const int32_t CANCEL_OPTION = 2;
	static const int32_t OK_OPTION = 0;
	static const int32_t CLOSED_OPTION = (-1);
	static const int32_t ERROR_MESSAGE = 0;
	static const int32_t INFORMATION_MESSAGE = 1;
	static const int32_t WARNING_MESSAGE = 2;
	static const int32_t QUESTION_MESSAGE = 3;
	static const int32_t PLAIN_MESSAGE = (-1);
	static $String* ICON_PROPERTY;
	static $String* MESSAGE_PROPERTY;
	static $String* VALUE_PROPERTY;
	static $String* OPTIONS_PROPERTY;
	static $String* INITIAL_VALUE_PROPERTY;
	static $String* MESSAGE_TYPE_PROPERTY;
	static $String* OPTION_TYPE_PROPERTY;
	static $String* SELECTION_VALUES_PROPERTY;
	static $String* INITIAL_SELECTION_VALUE_PROPERTY;
	static $String* INPUT_VALUE_PROPERTY;
	static $String* WANTS_INPUT_PROPERTY;
	::javax::swing::Icon* icon = nullptr;
	$Object* message = nullptr;
	$ObjectArray* options = nullptr;
	$Object* initialValue = nullptr;
	int32_t messageType = 0;
	int32_t optionType = 0;
	$Object* value = nullptr;
	$ObjectArray* selectionValues = nullptr;
	$Object* inputValue = nullptr;
	$Object* initialSelectionValue = nullptr;
	bool wantsInput = false;
	static $Object* sharedFrameKey;
};

	} // swing
} // javax

#pragma pop_macro("CANCEL_OPTION")
#pragma pop_macro("CLOSED_OPTION")
#pragma pop_macro("DEFAULT_OPTION")
#pragma pop_macro("ERROR_MESSAGE")
#pragma pop_macro("ICON_PROPERTY")
#pragma pop_macro("INFORMATION_MESSAGE")
#pragma pop_macro("INITIAL_SELECTION_VALUE_PROPERTY")
#pragma pop_macro("INITIAL_VALUE_PROPERTY")
#pragma pop_macro("INPUT_VALUE_PROPERTY")
#pragma pop_macro("MESSAGE_PROPERTY")
#pragma pop_macro("MESSAGE_TYPE_PROPERTY")
#pragma pop_macro("NO_OPTION")
#pragma pop_macro("OK_CANCEL_OPTION")
#pragma pop_macro("OK_OPTION")
#pragma pop_macro("OPTIONS_PROPERTY")
#pragma pop_macro("OPTION_TYPE_PROPERTY")
#pragma pop_macro("PLAIN_MESSAGE")
#pragma pop_macro("QUESTION_MESSAGE")
#pragma pop_macro("SELECTION_VALUES_PROPERTY")
#pragma pop_macro("UNINITIALIZED_VALUE")
#pragma pop_macro("VALUE_PROPERTY")
#pragma pop_macro("WANTS_INPUT_PROPERTY")
#pragma pop_macro("WARNING_MESSAGE")
#pragma pop_macro("YES_NO_CANCEL_OPTION")
#pragma pop_macro("YES_NO_OPTION")
#pragma pop_macro("YES_OPTION")

#endif // _javax_swing_JOptionPane_h_