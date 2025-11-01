#ifndef _javax_swing_JRootPane_h_
#define _javax_swing_JRootPane_h_
//$ class javax.swing.JRootPane
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("COLOR_CHOOSER_DIALOG")
#undef COLOR_CHOOSER_DIALOG
#pragma push_macro("ERROR_DIALOG")
#undef ERROR_DIALOG
#pragma push_macro("FILE_CHOOSER_DIALOG")
#undef FILE_CHOOSER_DIALOG
#pragma push_macro("FRAME")
#undef FRAME
#pragma push_macro("IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING")
#undef IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING
#pragma push_macro("INFORMATION_DIALOG")
#undef INFORMATION_DIALOG
#pragma push_macro("LOG_DISABLE_TRUE_DOUBLE_BUFFERING")
#undef LOG_DISABLE_TRUE_DOUBLE_BUFFERING
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("PLAIN_DIALOG")
#undef PLAIN_DIALOG
#pragma push_macro("QUESTION_DIALOG")
#undef QUESTION_DIALOG
#pragma push_macro("WARNING_DIALOG")
#undef WARNING_DIALOG

namespace java {
	namespace awt {
		class Component;
		class Container;
		class LayoutManager;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JLayeredPane;
		class JMenuBar;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class RootPaneUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JRootPane : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JRootPane, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JRootPane();
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
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual void addNotify() override;
	virtual ::java::awt::Container* createContentPane();
	virtual ::java::awt::Component* createGlassPane();
	virtual ::javax::swing::JLayeredPane* createLayeredPane();
	virtual ::java::awt::LayoutManager* createRootLayout();
	void disableTrueDoubleBuffering();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Container* getContentPane();
	virtual ::javax::swing::JButton* getDefaultButton();
	virtual ::java::awt::Component* getGlassPane();
	virtual ::javax::swing::JMenuBar* getJMenuBar();
	virtual ::javax::swing::JLayeredPane* getLayeredPane();
	virtual ::javax::swing::JMenuBar* getMenuBar();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	bool getUseTrueDoubleBuffering();
	virtual int32_t getWindowDecorationStyle();
	virtual bool isOptimizedDrawingEnabled() override;
	virtual bool isValidateRoot() override;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void removeNotify() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setContentPane(::java::awt::Container* content);
	virtual void setDefaultButton(::javax::swing::JButton* defaultButton);
	virtual void setDoubleBuffered(bool aFlag) override;
	virtual void setGlassPane(::java::awt::Component* glass);
	virtual void setJMenuBar(::javax::swing::JMenuBar* menu);
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layered);
	virtual void setMenuBar(::javax::swing::JMenuBar* menu);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::RootPaneUI* ui);
	void setUseTrueDoubleBuffering(bool useTrueDoubleBuffering);
	virtual void setWindowDecorationStyle(int32_t windowDecorationStyle);
	virtual $String* toString() override;
	virtual void updateUI() override;
	static $String* uiClassID;
	static bool LOG_DISABLE_TRUE_DOUBLE_BUFFERING;
	static bool IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING;
	static const int32_t NONE = 0;
	static const int32_t FRAME = 1;
	static const int32_t PLAIN_DIALOG = 2;
	static const int32_t INFORMATION_DIALOG = 3;
	static const int32_t ERROR_DIALOG = 4;
	static const int32_t COLOR_CHOOSER_DIALOG = 5;
	static const int32_t FILE_CHOOSER_DIALOG = 6;
	static const int32_t QUESTION_DIALOG = 7;
	static const int32_t WARNING_DIALOG = 8;
	int32_t windowDecorationStyle = 0;
	::javax::swing::JMenuBar* menuBar = nullptr;
	::java::awt::Container* contentPane = nullptr;
	::javax::swing::JLayeredPane* layeredPane = nullptr;
	::java::awt::Component* glassPane = nullptr;
	::javax::swing::JButton* defaultButton = nullptr;
	bool useTrueDoubleBuffering = false;
};

	} // swing
} // javax

#pragma pop_macro("COLOR_CHOOSER_DIALOG")
#pragma pop_macro("ERROR_DIALOG")
#pragma pop_macro("FILE_CHOOSER_DIALOG")
#pragma pop_macro("FRAME")
#pragma pop_macro("IGNORE_DISABLE_TRUE_DOUBLE_BUFFERING")
#pragma pop_macro("INFORMATION_DIALOG")
#pragma pop_macro("LOG_DISABLE_TRUE_DOUBLE_BUFFERING")
#pragma pop_macro("NONE")
#pragma pop_macro("PLAIN_DIALOG")
#pragma pop_macro("QUESTION_DIALOG")
#pragma pop_macro("WARNING_DIALOG")

#endif // _javax_swing_JRootPane_h_